# ODSyncUtil — Architecture

This document explains **how the ODSyncUtil codebase is organized** and **how data flows at runtime**. It is intended for contributors and anyone who wants to understand or extend the project.

For usage instructions, see [`README.md`](README.md).

---

## Overview

`ODSyncUtil` obtains the OneDrive sync status by:

1. Reading the Windows registry to discover the registered OneDrive **sync roots**.
2. Using the OneDrive **`IStorageProviderStatusUISource`** COM API to query each sync root's status, quota, icon, and labels.
3. Serializing the collected data to **JSON**.

The same core logic is compiled into two deliverables:

- **`ODSyncUtil.exe`** — a standalone command-line tool.
- **`ODSyncLib.dll`** — a DLL exporting `GetODSyncStatus`, for embedding in other applications.

Both share the core source files (`ApiStatus`, `SyncRoot`, `Debug`).

## Solution Structure

The Visual Studio solution `ODSyncUtil.sln` contains the following projects:

| Project                            | Output              | Purpose                                                                 |
| ---------------------------------- | ------------------- | ---------------------------------------------------------------------- |
| `ODSyncUtil/ODSyncUtil.vcxproj`    | `ODSyncUtil.exe`    | Command-line front end. Parses arguments, drives the core, prints JSON. |
| `ODSyncLib/ODSyncLib.vcxproj`      | `ODSyncLib.dll`     | Library front end. Exposes `GetODSyncStatus` for external callers.      |
| `OneDriveFlyoutPS/OneDriveFlyoutPS.vcxproj` | `OneDriveFlyoutPS.dll` | COM proxy/stub for the `StorageProviderStatusUI` interfaces (needed on Windows 10). |

## Directory and File Map

### `ODSyncUtil/` — Executable project (core sources)

| File                    | Responsibility                                                                                          |
| ----------------------- | ------------------------------------------------------------------------------------------------------ |
| `ODSyncUtil.cpp`        | `main` entry point. Parses command-line args, initializes COM, enumerates sync roots, serializes JSON, and writes to stdout/file. Also resolves the executable's file version for the help banner. |
| `ApiStatus.h` / `ApiStatus.cpp` | **Core logic.** Defines the `OneDriveState` struct and the functions that query the OneDrive COM API, resolve SIDs/user names, build the status structures, and serialize them to JSON. |
| `SyncRoot.hpp` / `SyncRoot.cpp` | `SyncRootReader` class. Reads the `SyncRootManager` registry key: enumerates sync-root subkeys and resolves each sync root's local folder path. |
| `Debug.hpp` / `Debug.cpp` | `DebugClass` singleton (accessed via the `Debug` macro). Provides formatted trace output controlled by the `-d`, `-q`, and enumerate-all flags. |
| `Get-ODStatus.ps1`      | PowerShell wrapper that runs `ODSyncUtil.exe` and returns parsed JSON objects.                          |
| `ODSyncUtil.rc`, `resource.h`, `packages.config`, `.gitignore` | Resources, RapidJSON package reference, and project metadata. |

### `ODSyncLib/` — DLL project

| File                       | Responsibility                                                                                     |
| -------------------------- | -------------------------------------------------------------------------------------------------- |
| `dllmain.cpp`              | `DllMain` and the exported `GetODSyncStatus(BOOL IgnoreQuota, WCHAR* Result, size_t MaxSize, size_t* Size)` entry point. Runs the same enumerate-and-serialize flow as the EXE and copies the JSON into the caller's buffer. |
| `ODSyncLib.def`            | Module-definition file exporting `DllMain` and `GetODSyncStatus`.                                   |
| `Get-ODStatusFromDLL.ps1`  | PowerShell wrapper that P/Invokes `GetODSyncStatus` from the DLL.                                   |
| `pch.h` / `pch.cpp`, `framework.h`, `ODSyncLib.rc`, `resource.h`, `packages.config` | Precompiled headers, resources, and package references. |

> The DLL project references the shared core sources (`ApiStatus`, `SyncRoot`, `Debug`) from the `ODSyncUtil` project, so the status logic is not duplicated.

### `OneDriveFlyoutPS/` — COM proxy/stub

| File                                    | Responsibility                                                                 |
| --------------------------------------- | ----------------------------------------------------------------------------- |
| `StorageProviderStatusUI_*.{h,c}`       | MIDL-generated proxy/stub code for the `StorageProviderStatusUI` COM interfaces. |
| `dlldata.c`, `Source.def`               | Proxy/stub registration glue and exports.                                     |
| `README.txt`                            | Notes about registering the proxy/stub on Windows 10.                          |

This DLL is only required on **Windows 10**, where the `IStorageProviderStatusUISourceFactory` COM proxy is not registered by default. It is registered with `regsvr32 /i`.

### `packages/`

Contains the restored **RapidJSON** NuGet package used for JSON serialization.

## Key Types and Functions

### `OneDriveState` (`ApiStatus.h`)

A fixed-size struct that holds all reported information for a single sync root: `CurrentState`, `CurrentStateString`, `SyncRootId`, `Sid`, `UserName`, `Label`, `ServiceName`, `FolderPath`, `IconUri`, quota fields (`isQuotaAvailable`, `TotalQuota`, `UsedQuota`, `QuotaLabel`), and icon color components.

### Core functions (`ApiStatus.cpp`)

| Function                     | Role                                                                                       |
| ---------------------------- | ------------------------------------------------------------------------------------------ |
| `getInstanceStatus`          | Orchestrates status retrieval for one sync root: resolves SID/user/type/folder, verifies the sync root belongs to the current user, creates the COM factory, and calls `printStatusUI`. |
| `printStatusUI`              | Queries the `IStorageProviderStatusUI` for provider state, label, icon, and quota, filling an `OneDriveState`. |
| `getStringFromStatus`        | Maps a numeric state to its display string; returns `Unknown (n)` for out-of-range values. |
| `serializeStateVector`       | Serializes a `vector<OneDriveState>` to a JSON string using RapidJSON (UTF-16 writer).      |
| `extractSid` / `extactType`  | Parse the SID and service type out of a sync-root id string.                                |
| `GetUserFromSid` / `getCurrentUserSid` | Resolve `DOMAIN\User` from a SID and get the current process user's SID.          |
| `safeStringCopy`             | Bounded copy helper used to fill the fixed-size `OneDriveState` string fields.              |
| `HResultToString`            | Formats an `HRESULT` into a human-readable message for debug output.                         |

### `SyncRootReader` (`SyncRoot.hpp` / `SyncRoot.cpp`)

Wraps access to the `SyncRootManager` registry key:

- `EnumerateSubKeys` — lists sync-root subkeys, optionally filtered to the current user's SID.
- `GetFolderFromSyncRootId` — reads the local folder path for a given sync-root id from the `UserSyncRoots` value.

### `DebugClass` (`Debug.hpp` / `Debug.cpp`)

A singleton (used via the `Debug` macro) providing `Write(format, ...)` trace output, plus flags:

- `isToStdOutput` — enabled by `-d`.
- `ignoreQuota` — enabled by `-q`.
- `enumarateAllSyncRoots` — enables enumerating all users' sync roots (`-a` in the EXE).

## Runtime Data Flow

```text
                 +---------------------------+          +---------------------------+
 ODSyncUtil.exe  |  main() (ODSyncUtil.cpp)  |          |  GetODSyncStatus()        |  ODSyncLib.dll
   entry point ? |  parse args, CoInitialize |          |  (dllmain.cpp)            | ? entry point
                 +-------------+-------------+          +-------------+-------------+
                               \                                     /
                                \                                   /
                                 v                                 v
                        +-----------------------------------------------+
                        |  SyncRootReader::EnumerateSubKeys()           |
                        |  (reads HKLM ...\Explorer\SyncRootManager)    |
                        +-----------------------+-----------------------+
                                                |  list of sync-root ids
                                                v
                        +-----------------------------------------------+
                        |  for each sync root: getInstanceStatus()      |
                        |    - extractSid / GetUserFromSid              |
                        |    - GetFolderFromSyncRootId                  |
                        |    - CoCreateInstance(StatusUISourceFactory)  |
                        |    - printStatusUI() ? fills OneDriveState    |
                        +-----------------------+-----------------------+
                                                |  vector<OneDriveState>
                                                v
                        +-----------------------------------------------+
                        |  serializeStateVector() ? JSON (RapidJSON)    |
                        +-----------------------+-----------------------+
                                                |
                       +------------------------+------------------------+
                       |                                                 |
                       v                                                 v
              stdout / -s file (EXE)                          caller buffer (DLL)
```

## External Dependencies

- **Windows Runtime / COM** — `IStorageProviderStatusUISource`, `IStorageProviderStatusUI`, `IStorageProviderQuotaUI` (via WRL/ABI headers).
- **Windows APIs** — registry (`RegOpenKeyEx`, `RegEnumKeyEx`, `RegQueryValueEx`), security (`ConvertStringSidToSidW`, `LookupAccountSidW`), and version info (`GetFileVersionInfo`).
- **RapidJSON** — JSON serialization (restored via NuGet).

## Platform Notes

- On **Windows 11** the required COM object is registered out of the box.
- On **Windows 10 (64-bit)** the `OneDriveFlyoutPS.dll` proxy/stub must be registered with `regsvr32 /i` for the COM calls to succeed. See the troubleshooting section in [`README.md`](README.md).
