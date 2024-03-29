#pragma once
#ifndef ONE_DRIVE_STATUS_H
#define ONE_DRIVE_STATUS_H

#include <windows.h>
#include <atlbase.h>
#include <atlcom.h>
#include <string>
#include <vector>
#include <hstring.h>
#include <shellapi.h>
#include <wrl.h>
#include <wrl/async.h>
#include "rapidjson/prettywriter.h" // for stringify JSON
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

const size_t MAX_STATE_LABEL =1024;
const size_t MAX_ICON_URI = 1024;
const size_t MAX_QUOTA_LABEL = 1024;
const size_t MAX_SID = 256;
const size_t MAX_USER_NAME = 2048;
const size_t MAX_SERVICE_NAME = 1024;
const size_t MAX_SYNC_ROOT_ID = 1024;
const size_t MAX_PATH_STATUS = 1024;
const size_t MAX_STATUS_STRING = 30;

struct OneDriveState {
    int CurrentState;
    TCHAR CurrentStateString[MAX_STATUS_STRING];
    TCHAR SyncRootId[MAX_SYNC_ROOT_ID];
    TCHAR Sid[MAX_SID];
    TCHAR UserName[MAX_USER_NAME];
    TCHAR Label[MAX_STATE_LABEL];
    TCHAR ServiceName[MAX_SERVICE_NAME];
    TCHAR FolderPath[MAX_PATH_STATUS];
    TCHAR IconUri[MAX_ICON_URI];
    BOOL isQuotaAvailable;
    uint64_t TotalQuota;
    uint64_t UsedQuota;
    TCHAR QuotaLabel[MAX_QUOTA_LABEL];
    BYTE IconColorA;
    BYTE IconColorR;
    BYTE IconColorG;
    BYTE IconColorB;
};

/// <summary>
///     Serialize the state vector to a JSON string
/// </summary>
/// <param name="states">The state vector</param>
/// <returns>JSON string</returns>
std::wstring serializeStateVector(std::vector<OneDriveState> states);

/// <summary>
///   Get the status of the sync root
/// </summary>
/// <param name="syncrootId">The sync root id</param>
/// <param name="currentState">The state structure</param>
/// <returns>HRESULT</returns>
HRESULT getInstanceStatus(const std::wstring& syncrootId, OneDriveState& currentState);

/// <summary>
///     Copy raw pointer string from source to destination
/// </summary>
/// <param name="dest"></param>
/// <param name="dest_size"></param>
/// <param name="source"></param>
/// <param name="source_size"></param>
void safeStringCopy(void* dest, size_t dest_size, void* source, size_t source_size);


std::wstring extractSid(const std::wstring& str);

#endif // !ONE_DRIVE_STATUS_H