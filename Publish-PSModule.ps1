<#
.SYNOPSIS
    Creates a PowerShell module and uploads the module to the PowerShell Gallery. Need to build the DLL first.
#>
[CmdletBinding()]
param (
    # Pass this in or create an environment variable in the build definition
    [ValidateNotNullOrEmpty()]
    [string]$NuGetApiKey = $env:NuGetApiKey,

    [ValidateNotNullOrEmpty()]
    [string]$ModuleName = "ODSyncUtil"
)
$Script:ErrorActionPreference = 'Stop'
$Script:PSDefaultParameterValues = @{
    "Select-Object:First" = 1
}

$DLL = Get-ChildItem -File -Path $PSScriptRoot -Filter "$ModuleName.dll" -Recurse | Select-Object -ExpandProperty FullName
if (-not $DLL) { Write-Error "Build the $DLLName DLL first" }

$ModuleFolderPath = "$env:TEMP\$ModuleName"
if (-not (Test-Path $ModuleFolderPath))
{
    New-Item -Path $ModuleFolderPath -ItemType Directory
}

$DLL = $DLL | Copy-Item -Destination $ModuleFolderPath -PassThru | Select-Object -ExpandProperty FullName
$DLL | Unblock-File
$DLLFileProperties = Get-ItemProperty $DLL
$ModuleProperties = Get-Module OneDriveLib

$Splat = @{
    Path = "$ModuleFolderPath\OneDriveLib.psd1"
    NestedModules = @()
    Guid = $ModuleProperties.Guid | Select-Object
    Author = $ModuleProperties.Author | Select-Object
    CompanyName = $ModuleProperties.CompanyName | Select-Object
    Copyright = $ModuleProperties.Copyright | Select-Object
    ModuleVersion = $ModuleProperties.Version | Select-Object
    Description = $ModuleProperties.Definition | Select-Object
    Tags = if ($ModuleProperties.Tags) { $ModuleProperties.Tags | Select-Object } else { "OneDrive" }
    CmdletsToExport = @($ModuleProperties.ExportedCmdlets.Keys)
    FunctionsToExport = @($ModuleProperties.ExportedFunctions.Keys)
    VariablesToExport = @($ModuleProperties.ExportedVariables.Keys)
    AliasesToExport = @($ModuleProperties.ExportedAliases.Keys)
    LicenseUri = $ModuleProperties.LicenseUri | Select-Object
    ProjectUri = $ModuleProperties.ProjectUri | Select-Object
    RootModule = $DLLFileProperties.Name
}
New-ModuleManifest @Splat

Split-Path $ModuleFolderPath | Where-Object { $_ -notin ($env:PSModulePath -split ",") } | ForEach-Object {
    $env:PSModulePath += ";$_"
}

Publish-Module -Name $ModuleProperties.Name -Repository PSGallery -NuGetApiKey $NuGetApiKey -Verbose
