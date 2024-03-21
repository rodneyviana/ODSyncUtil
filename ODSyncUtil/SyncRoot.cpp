#pragma once
#include "SyncRoot.hpp"
#include "ApiStatus.h"
#include "Debug.hpp"



// Class to enumerate subkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager

SyncRootReader::SyncRootReader()
{
	
	// Open the key
	if (ERROR_SUCCESS != RegOpenKeyEx(HKEY_LOCAL_MACHINE, SyncRootReader::m_keyName, 0, KEY_READ, &(this->m_hKey)))
	{
		Debug.Write(L"Fatal Error: Failed to open SyncRootManager key\n");
		throw std::runtime_error("Failed to open SyncRootManager key");
	}
}

std::wstring SyncRootReader::GetFolderFromSyncRootId(const std::wstring& syncRootId)
{
	std::wstring subKeyName = SyncRootReader::m_keyName;
	subKeyName.append(L"\\" + syncRootId + L"\\UserSyncRoots");
	HKEY hKey;
	if (ERROR_SUCCESS != RegOpenKeyEx(HKEY_LOCAL_MACHINE, subKeyName.c_str(), 0, KEY_READ, &hKey))
	{
		Debug.Write(L"Failed to open UserSyncRoots key\n");
		return L"";
	}
	const std::wstring sidFromSyncRootId = extractSid(syncRootId);
	// Folder is in the string value with the name of the sid
	WCHAR szFolderPath[MAX_PATH] = { 0 };
	DWORD cchFolderPath = ARRAYSIZE(szFolderPath);
	if (ERROR_SUCCESS != RegQueryValueEx(hKey, sidFromSyncRootId.c_str(), NULL, NULL, (LPBYTE)szFolderPath, &cchFolderPath))
	{
		Debug.Write(L"Failed to read folder path\n");
		return L"";
	}
	RegCloseKey(hKey);
	return std::wstring(szFolderPath);
}

SyncRootReader::~SyncRootReader()
{
	RegCloseKey(m_hKey);
}

std::vector<std::wstring> SyncRootReader::EnumerateSubKeys()
{
	std::vector<std::wstring> subKeys;

	DWORD dwIndex = 0;
	WCHAR szSubKeyName[256];
	DWORD cchSubKeyName = ARRAYSIZE(szSubKeyName);
	while (ERROR_SUCCESS == RegEnumKeyEx(m_hKey, dwIndex, szSubKeyName, &cchSubKeyName, NULL, NULL, NULL, NULL))
	{
		subKeys.push_back(szSubKeyName);
		cchSubKeyName = ARRAYSIZE(szSubKeyName);
		dwIndex++;
	}

	return subKeys;
}
