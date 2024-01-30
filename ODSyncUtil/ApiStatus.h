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

const int MAX_STATE_LABEL = 256;
const int MAX_ICON_URI = 1024;
const int MAX_QUOTA_LABEL = 256;
const int MAX_SID = 256;
const int MAX_USER_NAME = 2048;
const int MAX_SERVICE_NAME = 1024;
const int MAX_SYNC_ROOT_ID = 1024;

struct  OneDriveState {
    int CurrentState;
    TCHAR SyncRootId[MAX_SYNC_ROOT_ID];
    TCHAR Sid[MAX_SID];
    TCHAR UserName[MAX_USER_NAME];
    TCHAR Label[MAX_STATE_LABEL];
    TCHAR ServiceName[MAX_SERVICE_NAME];
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

std::wstring serializeStateVector(std::vector<OneDriveState> states);
HRESULT getInstanceStatus(const std::wstring& syncrootId, OneDriveState& currentState);

#endif // !ONE_DRIVE_STATUS_H