#pragma once
#include "SyncRoot.hpp"



// Class to enumerate sunkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager

SyncRootReader::SyncRootReader()
{
	// Open the key
	if (ERROR_SUCCESS != RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SyncRootManager", 0, KEY_READ, &(this->m_hKey)))
	{
		throw std::runtime_error("Failed to open SyncRootManager key");
	}
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
