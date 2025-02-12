#pragma once
#ifndef SYNCROOTMANAGER_H
#define SYNCROOTMANAGER_H

// header file for SyncRootManager class

#include <vector>
#include <string>
#include <wtypes.h>
#include <stdexcept>
#include "ApiStatus.h"

/// <summary>
///  Class to enumerate subkeys of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\SyncRootManager
/// </summary>
class SyncRootReader
{
private:
	HKEY m_hKey;
	static constexpr const TCHAR* m_keyName = L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SyncRootManager";
public:
	/// <summary>
	///  Constructor
	/// </summary>
	SyncRootReader();

	/// <summary>
	///  Enumerate the subkeys of the SyncRootManager key for the given SID string
	/// </summary>
	/// <param name="sidStr">The SID string of the current user</param>
	/// <returns>A vector of SyncRootId strings</returns>
	std::vector<std::wstring> EnumerateSubKeys(const std::wstring& sidStr);

	/// <summary>
	///  Get the folder path from the sync root id
	/// </summary>
	/// <param name="syncRootId">The sync root id</param>
	/// <returns>The folder path</returns>
	/// <exception cref="std::runtime_error">Thrown if the sync root id is not found</exception>
	static std::wstring GetFolderFromSyncRootId(const std::wstring& syncRootId);

	/// <summary>
	///  Destructor
	/// </summary>
	~SyncRootReader();
};

#endif // !SYNCROOTMANAGER_H