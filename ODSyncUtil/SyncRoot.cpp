#pragma once
#include "SyncRoot.hpp"
#include "ApiStatus.h"
#include "Debug.hpp"



// Class to enumerate subkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager

SyncRootReader::SyncRootReader()
{
	m_hKey = nullptr;
	// Open the key
	long result;
	if ((result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, SyncRootReader::m_keyName, 0, KEY_READ, &(this->m_hKey))) != ERROR_SUCCESS)
	{
		Debug.Write(L"Fatal Error: Failed to open SyncRootManager key (0x%08x)\n", result);
		auto readableError = HResultToString(result);
		Debug.Write(L"Readable Error: %s\n", readableError.c_str());
		throw std::runtime_error("Failed to open SyncRootManager key");
	}
}

std::wstring SyncRootReader::GetFolderFromSyncRootId(const std::wstring& syncRootId)
{
	std::wstring subKeyName = SyncRootReader::m_keyName;
	subKeyName.append(L"\\" + syncRootId + L"\\UserSyncRoots");
	HKEY hKey;
	long result;
	if ((result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, subKeyName.c_str(), 0, KEY_READ, &hKey)) != ERROR_SUCCESS)
	{
		Debug.Write(L"Failed to open UserSyncRoots key (0x%08x)\n", result);
		auto readableError = HResultToString(result);
		Debug.Write(L"Readable Error: %s\n", readableError.c_str());
		return L"";
	}
	const std::wstring sidFromSyncRootId = extractSid(syncRootId);
	// Folder is in the string value with the name of the sid
	WCHAR szFolderPath[MAX_PATH] = { 0 };
	DWORD cchFolderPath = ARRAYSIZE(szFolderPath);
	
	if ((result = RegQueryValueEx(hKey, sidFromSyncRootId.c_str(), NULL, NULL, (LPBYTE)szFolderPath, &cchFolderPath)) != ERROR_SUCCESS)
	{
		Debug.Write(L"Failed to read folder path (0x%08x)\n", result);
		auto readableError = HResultToString(result);
		Debug.Write(L"Readable Error: %s\n", readableError.c_str());
		return L"";
	}
	RegCloseKey(hKey);
	return std::wstring(szFolderPath);
}

SyncRootReader::~SyncRootReader()
{
	// Close the key
	if (m_hKey != nullptr)
	{
		Debug.Write(L"Closing SyncRootManager key\n");
		RegCloseKey(m_hKey);
		m_hKey = nullptr;
	}
	else {
		Debug.Write(L"SyncRootManager key already closed\n");
	}
}

std::vector<std::wstring> SyncRootReader::EnumerateSubKeys(const std::wstring& sidStr)
{
    std::vector<std::wstring> subKeys;

    DWORD dwIndex = 0;
    WCHAR szSubKeyName[256];
    DWORD cchSubKeyName = ARRAYSIZE(szSubKeyName);
    LONG result;
	bool enumAllSyncRoots = Debug.enumarateAllSyncRoots;
    while ((result = RegEnumKeyEx(m_hKey, dwIndex, szSubKeyName, &cchSubKeyName, NULL, NULL, NULL, NULL)) == ERROR_SUCCESS)
    {
        // Check if the subkey is for the current user
        auto extractedSid = extractSid(szSubKeyName);
        if (extractedSid != sidStr && !enumAllSyncRoots)
        {
			Debug.Write(L"Skipping subkey %s as it does not match user SID\n", szSubKeyName);
            cchSubKeyName = ARRAYSIZE(szSubKeyName);
            dwIndex++;
            continue;
        }
        subKeys.push_back(szSubKeyName);
        cchSubKeyName = ARRAYSIZE(szSubKeyName);
        dwIndex++;
    }

    if (result != ERROR_NO_MORE_ITEMS)
    {
        Debug.Write(L"FATAL ERROR: Error enumerating subkeys (0x%p)\n", result);
		auto readableError = HResultToString(result);
		Debug.Write(L"Readable Error: %s\n", readableError.c_str());
        throw std::runtime_error("Error enumerating subkeys");
    }

    return subKeys;
}
