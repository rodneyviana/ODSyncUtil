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
	static constexpr const TCHAR* m_keyName = L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SyncRootManager";
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