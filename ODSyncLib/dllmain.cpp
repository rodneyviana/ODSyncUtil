// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "ApiStatus.h"
#include "Debug.hpp"
#include "SyncRoot.hpp"
#include "SyncRoot.hpp"
#include <vector>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

HRESULT APIENTRY GetODSyncStatus(BOOL IgnoreQuota, WCHAR* Result, size_t MaxSize, size_t* Size)
{
    Debug.isToStdOutput = false;
    Debug.ignoreQuota = IgnoreQuota;
    Debug.Write(L"Ignore quota: %d\n", IgnoreQuota);

    auto hr = ::CoInitialize(NULL);
    if (FAILED(hr))
    {
        Debug.Write(L"CoInitialize failed with error 0x%08x\n", hr);
    }
    else {
        Debug.Write(L"CoInitialize succeeded\n");
    }

    auto syncRootManager = new SyncRootReader();
    Debug.Write(L"SyncRootReader created\n");
    std::vector<std::wstring> subKeys = syncRootManager->EnumerateSubKeys();
    Debug.Write(L"EnumerateSubKeys returned %d keys\n", subKeys.size());
    std::vector<OneDriveState> states;
    for (std::vector<std::wstring>::iterator it = subKeys.begin(); it != subKeys.end(); ++it) {
        OneDriveState state;
        Debug.Write(L"Getting status for %s\n", it->c_str());
        HRESULT hr = getInstanceStatus(*it, state);
        Debug.Write(L"getInstanceStatus returned 0x%08x\n", hr);
        if (SUCCEEDED(hr)) {
            states.push_back(state);
        }
    }
    delete syncRootManager;
    Debug.Write(L"SyncRootReader deleted\n");
    std::wstring result = serializeStateVector(states);
    Debug.Write(L"serializeStateVector returned %d characters\n", result.size());
    if (result.size() > MaxSize)
    {
		Debug.Write(L"Buffer is too small\n");
		*Size = result.size();
		return ERROR_INSUFFICIENT_BUFFER;
	}
	else
	{
		safeStringCopy(Result, MaxSize, (void*)result.c_str(), result.size());
        *Size = result.size();
	}

    return S_OK;
}
