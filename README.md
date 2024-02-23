# OneDrive Sync Status for Windows 11 and newer Windows 10
## Go to the Windows 10 Additional Config if it applies to you

How to use it:
- Download the latest release (32 or 64 bits)
- Make sure ODSyncUtil.exe and Get-ODStatus are in the same folder (otherwise you need inform the path with parameter -ExePath)
- Run ./Get-ODStatus.ps1
- Examples 1:

```
.\Get-ODStatus.ps1

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
- Notice that CurrentState is a number. To have a better idea of what each number means check the iConUri file name (example: 0 = "CloudIconSynced")
- All the state icon files:
```
CloudIconError.svg        ---> Error
CloudIconOffline.svg      ---> Offline
CloudIconPaused.svg       ---> Paused
CloudIconSynced.svg       ---> Synced
CloudIconSyncing.svg      ---> Syncing
CloudIconWarning.svg      ---> Warning
```

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

