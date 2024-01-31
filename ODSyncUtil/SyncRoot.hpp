#pragma once
#ifndef SYNCROOTMANAGER_H
#define SYNCROOTMANAGER_H

// header file for SyncRootManager class

#include <vector>
#include <string>
#include <wtypes.h>
#include <stdexcept>


/// <summary>
///  Class to enumerate sunkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager
/// </summary>
class SyncRootReader
{
private:
	HKEY m_hKey;
public:
	/// <summary>
	///  Class to enumerate sunkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager
	/// </summary>
	/// <returns></returns>
	SyncRootReader();

	/// <summary>
	///  Enumerate the subkeys of the SyncRootManager key
	/// </summary>
	/// <returns>A vector of SyncRootId strings</returns>
	std::vector<std::wstring> EnumerateSubKeys();
	~SyncRootReader();
};

#endif // !SYNCROOTMANAGER_H