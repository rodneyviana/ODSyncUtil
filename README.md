**OneDrive Sync Status for Windows 11 and newer Windows 10**

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

