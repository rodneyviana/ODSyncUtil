# OneDrive Sync Status for Windows 11 and newer Windows 10
# ODSyncUtil — OneDrive Synchronization Status Utility

`ODSyncUtil` is an open-source Windows utility that reports the **real-time sync status of the OneDrive client** (Personal, Business, and SharePoint sync roots). It uses the modern `IStorageProviderStatusUISource` COM API available in Windows 11 (and recent builds of Windows 10) to obtain the same status information Windows Explorer shows in the OneDrive flyout.

The output is emitted as **JSON**, making it easy to consume from scripts, monitoring tools, or the included PowerShell wrappers.

- Project home: <https://github.com/rodneyviana/ODSyncUtil>
- License: MIT
- Author: Rodney Viana

> Looking for how the code is organized? See [`ARCHITECTURE.md`](ARCHITECTURE.md) for a module-by-module breakdown and the runtime data flow.

## Table of Contents

- [Features](#features)
- [How It Works](#how-it-works)
- [Requirements](#requirements)
- [Building from Source](#building-from-source)
- [Quick Start](#quick-start)
- [Command-line Options](#command-line-options)
- [Status Values](#status-values)
- [Repository Layout](#repository-layout)
- [Detailed Examples and Troubleshooting](#detailed-examples-and-troubleshooting)

## Features

- Retrieves OneDrive sync status via the official Windows `StorageProviderStatusUI` API.
- Reports per–sync-root information: current state, folder path, user, service name, label, icon, and quota.
- Emits structured **JSON** for easy automation.
- Ships as both a **standalone executable** (`ODSyncUtil.exe`) and a **DLL** (`ODSyncLib.dll`) for embedding in other applications.
- Includes **PowerShell** helper scripts for both the EXE and the DLL.
- Optional flags to ignore quota lookups (avoids rare crashes) and to enumerate all sync roots.

## How It Works

1. Windows registers each OneDrive sync root under the registry key
   `HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager`.
2. `ODSyncUtil` enumerates the sync-root subkeys, filtering (by default) to the **current user's SID**.
3. For each sync root it instantiates the OneDrive `IStorageProviderStatusUISource` COM object and queries the status UI, quota UI, icon, and labels.
4. The collected data is serialized to JSON and written to standard output (and optionally to a file).

## Requirements

- **Windows 11**, or a recent **Windows 10** build that includes the `StorageProviderStatusUI` API
  (Windows 10 requires the additional proxy/stub configuration described below).
- The **OneDrive** client installed and running.
- To build: **Visual Studio 2022** with the *Desktop development with C++* workload (C++14 toolset)
  and the [RapidJSON](https://rapidjson.org/) NuGet package (restored via `packages.config`).

## Building from Source

1. Open `ODSyncUtil.sln` in Visual Studio 2022.
2. Restore NuGet packages (RapidJSON). If the RapidJSON headers are missing, run
   `Update-Package -reinstall` from *Tools > NuGet Package Manager > Package Manager Console*.
3. Select the desired configuration/platform (for example `Release | x64`) and build.

Build outputs:

- `ODSyncUtil.exe` — standalone command-line tool.
- `ODSyncLib.dll` — reusable library exporting `GetODSyncStatus`.

## Quick Start

## Go to the Windows 10 Additional Config if it applies to you

How to use it:
- Download the latest release (32 or 64 bits)
- Make sure ODSyncUtil.exe and Get-ODStatus are in the same folder (otherwise you need inform the path with parameter -ExePath)
- Run ./Get-ODStatus.ps1
- Examples 1:

```
.\Get-ODStatus.ps1

SyncRootId         : OneDrive!S-1-12-1-11700000-12300000-1832875930-630280000!Business1|10935082bea94993a9037f7a6709947e
CurrentState       : 0
CurrentStateString : Synced
Sid                : S-1-12-1-11700000-12300000-1832875930-630280000
UserName           : CONTOSO\rviana
ServiceName        : Business1
FolderPath         : C:\Users\rviana.CONTOSO\OneDrive - Contoso
Label              : OneDrive
IconUri            : file:///C:/Users/rviana/AppData/Local/Microsoft/OneDrive/24.017.0123.0001/images/lightTheme/CloudIconSynced.svg
isQuotaAvailable   : True
TotalQuota         : 5497558138880
UsedQuota          : 74059110815
QuotaLabel         : 69.0 GB used of 5 TB (1%)
IconColorA         : 255
IconColorR         : 0
IconColorG         : 95
IconColorB         : 184
				   
SyncRootId         : OneDrive!S-1-12-1-11700000-12300000-1832875930-630280000!Personal|B7C3EE2A336CFE2E!125
CurrentState       : 0
CurrentStateString : Synced
Sid                : S-1-12-1-11700000-12300000-1832875930-630280000
UserName           : CONTOSO\rviana
ServiceName        : Personal
FolderPath         : C:\Users\rviana.CONTOSO\OneDrive
Label              : OneDrive
IconUri            : file:///C:/Users/rviana/AppData/Local/Microsoft/OneDrive/24.017.0123.0001/images/lightTheme/CloudIconSynced.svg
isQuotaAvailable   : True
TotalQuota         : 1166083620864
UsedQuota          : 293453640500
QuotaLabel         : 273.3 GB used of 1 TB (25%)
IconColorA         : 255
IconColorR         : 0
IconColorG         : 95
IconColorB         : 184
```

- Example 2 (.exe in another folder):
```
.\Get-ODStatus.ps1 -ExePath d:\tools

SyncRootId       : OneDrive!S-1-12-1-11700000-12300000-1832875930-630280000!Business1|10935082bea94993a9037f7a6709947e
CurrentState     : 0
Sid              : S-1-12-1-11700000-12300000-1832875930-630280000
UserName         : CONTOSO\rviana
ServiceName      : Business1
Label            : OneDrive
IconUri          : file:///C:/Users/rviana/AppData/Local/Microsoft/OneDrive/24.017.0123.0001/images/lightTheme/CloudIconSynced.svg
isQuotaAvailable : True
TotalQuota       : 5497558138880
UsedQuota        : 74059110815
QuotaLabel       : 69.0 GB used of 5 TB (1%)
IconColorA       : 255
IconColorR       : 0
IconColorG       : 95
IconColorB       : 184

SyncRootId       : OneDrive!S-1-12-1-11700000-12300000-1832875930-630280000!Personal|B7C3EE2A336CFE2E!125
CurrentState     : 0
Sid              : S-1-12-1-11700000-12300000-1832875930-630280000
UserName         : CONTOSO\rviana
ServiceName      : Personal
Label            : OneDrive
IconUri          : file:///C:/Users/rviana/AppData/Local/Microsoft/OneDrive/24.017.0123.0001/images/lightTheme/CloudIconSynced.svg
isQuotaAvailable : True
TotalQuota       : 1166083620864
UsedQuota        : 293453640500
QuotaLabel       : 273.3 GB used of 1 TB (25%)
IconColorA       : 255
IconColorR       : 0
IconColorG       : 95
IconColorB       : 184
```
## Command-line Options

| Option           | Description                                                             |
| ---------------- | --------------------------------------------------------------------- |
| `-h`             | Show the help message.                                                 |
| `-s <filename>`  | Save the JSON output to a file (UTF-8, based on the locale code page). |
| `-d`             | Enable debug tracing to standard output.                              |
| `-q`             | Ignore quota information (useful to avoid rare crash situations).     |
| `-a`             | Check **all** sync roots, not just the current user's.                 |

## Status Values

The numeric `CurrentState` maps to the following `CurrentStateString` values:

| Value | String   |
| ----- | -------- |
| 0     | Synced   |
| 1     | Syncing  |
| 2     | Paused   |
| 3     | Error    |
| 4     | Offline  |

Any value outside this range is reported as `Unknown (n)`, where `n` is the invalid status value.

## Repository Layout

| Path                | Description                                                          |
| ------------------- | ------------------------------------------------------------------- |
| `ODSyncUtil.sln`    | Visual Studio solution.                                             |
| `ODSyncUtil/`       | Standalone command-line executable project.                        |
| `ODSyncLib/`        | DLL project exporting `GetODSyncStatus` (shares core sources).     |
| `OneDriveFlyoutPS/` | Proxy/stub project for the `StorageProviderStatusUI` COM interfaces.|
| `packages/`         | NuGet packages (RapidJSON).                                        |

For a detailed description of each source file and the runtime data flow, see [`ARCHITECTURE.md`](ARCHITECTURE.md).

## Detailed Examples and Troubleshooting

## Update

- As requested by user @aakash-shah, I have added the status string to the output. The status string is the human-readable version of the status.
- In this same request, I added the local path to the output. This is useful when you have multiple OneDrive accounts and you want to know which one is being reported.
- There is now a DLL version that is usefull if you want to use it in your own application. The DLL is located in the Binaries folder.
- There is a PowerShell version that is a wrapper around the DLL. The DLL is located in the Binaries folder.
- Prefer to use the PowerShell version that call the .EXE (Get-ODStatus.ps1)
- You don't need the DLL and .EXE at the same time. You can choose one or another with its appropriate PowerShell script.

## Troubleshooting

```ODSyncUtil.exe``` can be called directly and it accepts parameters that can help troubleshoot the application.

```
Usage: ODSyncUtil [options]
  -h                Show this help message
  -s <filename>     Save the output to file (unicode little-endian by default)
  -d                Debug the application
  -q                Ignore quota information (avoid crash situations)
```

Example: save the output to a file and show debugging steps:

```
ODSyncUtil.exe -s output.txt -d
```

If you want to open an issue, please copy and paste the output of ```ODSyncUtil.exe -d``` - feel free to obfuscate SIDs

### Issue 1: IStorageProvider is not available 0x80004002

**Symptom:**

You see the information below when running ```ODSyncUtil``` -d:
```
CoCreateInstance Storage Provider for OneDrive: 0x80004002
```
**Cause:**

Your Windows version does not include IStorageProviderStatusUISourceFactory registration

**Solution:**

1. Upgrade Windows 11 to the newest version (preferred)
2. If not possible to update follow steps in *"Windows 10 Additional Configuration (Don't come here if you are using it on Windows 11)"* even if you are running Windows 11


## Windows 10 Additional Configuration (Don't come here if you are using it on Windows 11)

- Windows 10 version only works on Windows 10 64-bit (no 32-bit version for now)
- Windows 10 requires the installation of a Proxy / Stub for the StorageProvider for OneDrive

### Steps

1. Download [OneDriveFlyoutPS.dll](https://github.com/rodneyviana/ODSyncService/blob/master/Binaries/Beta/OneDriveFlyoutPS.dll)
2. Unblock the DLL ( Right Click | Properties... | Unblock )
3. Register the DLL using: regsvr32 and take note of the download folder. It is necessary to run this in the **command prompt as ADMINISTRATOR** or you will get access denied. The command below is using c:\temp as the folder where ``OneDriveFlyoutPS.dll`` is locatedPlease adjust it accordingly
```batch
regsvr32 /i c:\temp\OneDriveFlyoutPS.dll
```
4. You will see a pop-up saying that it could not find the registration code, you can ignore it, as the proxy has no code only the COM proxy/stub (**don't install it on Windows 11** as the COM is registered there)
5. Now you can run the 64-bit version of the util
6. If you want to uninstall the proxy/stub, run this in Administrator mode:
```batch
regsvr32 /u c:\temp\OneDriveFlyoutPS.dll
```

