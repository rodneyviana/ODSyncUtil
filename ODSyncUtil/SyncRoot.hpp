#pragma once
#ifndef SYNCROOTMANAGER_H
#define SYNCROOTMANAGER_H

// header file for SyncRootManager class

#include <vector>
#include <string>
#include <wtypes.h>
#include <stdexcept>

// Class to enumerate sunkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager
class SyncRootReader
{
private:
	HKEY m_hKey;
public:
	SyncRootReader();
	// Enumerate the subkeys
	std::vector<std::wstring> EnumerateSubKeys();
	~SyncRootReader();
};

#endif // !SYNCROOTMANAGER_H