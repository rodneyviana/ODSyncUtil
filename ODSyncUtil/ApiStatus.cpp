
#include "ApiStatus.h"

std::wstring serializeStateVector(std::vector<OneDriveState> states) {
    rapidjson::GenericStringBuffer<rapidjson::UTF16<>> buffer;
    rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<>>, rapidjson::UTF16<>> writer(buffer);
    writer.StartArray();
    for (std::vector<OneDriveState>::iterator it = states.begin(); it != states.end(); ++it) {
        writer.StartObject();
        writer.Key(L"SyncRootId");
        writer.String(it->SyncRootId);
        writer.Key(L"CurrentState");
        writer.Int(it->CurrentState);
        writer.Key(L"Sid");
        writer.String(it->Sid);
        writer.Key(L"UserName");
        writer.String(it->UserName);
        writer.Key(L"ServiceName");
        writer.String(it->ServiceName);
        writer.Key(L"Label");
        writer.String(it->Label);
        writer.Key(L"IconUri");
        writer.String(it->IconUri);
        writer.Key(L"isQuotaAvailable");
        writer.Bool(it->isQuotaAvailable);
        writer.Key(L"TotalQuota");
        writer.Uint64(it->TotalQuota);
        writer.Key(L"UsedQuota");
        writer.Uint64(it->UsedQuota);
        writer.Key(L"QuotaLabel");
        writer.String(it->QuotaLabel);
        writer.Key(L"IconColorA");
        writer.Uint(it->IconColorA);
        writer.Key(L"IconColorR");
        writer.Uint(it->IconColorR);
        writer.Key(L"IconColorG");
        writer.Uint(it->IconColorG);
        writer.Key(L"IconColorB");
        writer.Uint(it->IconColorB);
        writer.EndObject();
    }
    writer.EndArray();
    return std::wstring(buffer.GetString());
}

GUID CLSID_FileCoAuth_StorageProviderStatusUISourceFactory = { /* 0827D883-485C-4D62-BA2C-A332DBF3D4B0 */  0x0827D883, 0x485C,  0x4D62, {0xBA, 0x2C, 0xA3, 0x32, 0xDB, 0xF3, 0xD4, 0xB0} };

void safeStringCopy(void* dest, int dest_size, void* source, int source_size) {
    int realSize = (min(source_size, dest_size)) * (sizeof TCHAR);
    ZeroMemory(dest, dest_size * (sizeof TCHAR));
    if (nullptr != source)
    {
        std::memcpy(dest, source, realSize);
    }
}

#include <windows.h>
#include <sddl.h>
#include <string>

std::wstring extactType(const std::wstring& str) {
	std::size_t first = str.find('!');
    std::size_t second = str.find('!', first + 1);
    std::size_t third = str.find('|', second + 1);
    if (first != std::wstring::npos && second != std::wstring::npos && third != std::wstring::npos) {
		return str.substr(second + 1, third - second - 1);
	}
	return L"";
}

std::wstring extractSid(const std::wstring& str) {
    std::size_t first = str.find('!');
    std::size_t second = str.find('!', first + 1);
    if (first != std::wstring::npos && second != std::wstring::npos) {
        return str.substr(first + 1, second - first - 1);
    }
    return L"";
}

std::wstring GetUserFromSid(std::wstring sidString) {
    PSID pSid;
    WCHAR name[256];
    DWORD cchName = 256;
    WCHAR referencedDomainName[256];
    DWORD cchReferencedDomainName = 256;
    SID_NAME_USE eUse;

    if (ConvertStringSidToSidW(sidString.c_str(), &pSid)) {
        if (LookupAccountSidW(NULL, pSid, name, &cchName, referencedDomainName, &cchReferencedDomainName, &eUse)) {
            std::wstring domain(referencedDomainName);
            std::wstring user(name);
            return domain + L"\\" + user;
        }
    }
    return L"";
}

HRESULT printStatusUI(ABI::Windows::Storage::Provider::IStorageProviderStatusUISource* pSource, OneDriveState& currentState)
{
    HRESULT getHR = S_OK;
    ABI::Windows::Storage::Provider::IStorageProviderStatusUI* status = nullptr;
    HRESULT hr = pSource->GetStatusUI(&status);
    if (SUCCEEDED(hr))
    {
        ABI::Windows::Storage::Provider::StorageProviderState state = {};
        getHR = status->get_ProviderState(&state);

        currentState.CurrentState = state;
        // Test ProviderStateLabel
        HSTRING stateLable = nullptr;
        getHR = status->get_ProviderStateLabel(&stateLable);
        UINT32 stateLableLength = 0;
        auto rawLabel = WindowsGetStringRawBuffer(stateLable, &stateLableLength);
        safeStringCopy(&(currentState.Label), MAX_STATE_LABEL, (void*)rawLabel, stateLableLength);


        // Test ProviderStateIcon
        ABI::Windows::Foundation::IUriRuntimeClass* uri = nullptr;
        getHR = status->get_ProviderStateIcon(&uri);

        if (SUCCEEDED(getHR))
        {
            HSTRING stateIcon = nullptr;
            UINT32 stateIconLength = 0;
            getHR = uri->get_AbsoluteUri(&stateIcon);
            auto rawIcon = WindowsGetStringRawBuffer(stateIcon, &stateIconLength);
            safeStringCopy(&(currentState.IconUri), MAX_ICON_URI, (void*)rawIcon, stateIconLength);
            //std::wstring stateIconString = WindowsGetStringRawBuffer(stateIcon, &stateIconLength);
            //std::wcout << L"Current ProviderStateIcon is: " << stateIconString << " . HRESULT from get_AbsoluteUri is: " << std::hex << getHR << std::endl;
        }
        else
        {
            return getHR;
        }

        // Test StorageProviderQuotaUI
        ABI::Windows::Storage::Provider::IStorageProviderQuotaUI* quotaUI = nullptr;
        getHR = status->get_QuotaUI(&quotaUI);

        if (SUCCEEDED(getHR))
        {
            HSTRING quotaUsedLabel = nullptr;
            UINT32 labelLength = 0;
            HRESULT getQuotaHR = quotaUI->get_QuotaUsedLabel(&quotaUsedLabel);
            if (!SUCCEEDED(getQuotaHR))
            {
                currentState.isQuotaAvailable = FALSE;
                return getHR; // quota may not be available, but it is ok
            }
            else {
                currentState.isQuotaAvailable = TRUE;
            }
            auto rawQuotaUsed = WindowsGetStringRawBuffer(quotaUsedLabel, &labelLength);
            safeStringCopy(&(currentState.QuotaLabel), MAX_QUOTA_LABEL, (void*)rawQuotaUsed, labelLength);
            //std::wstring quotaUsedLabelString = WindowsGetStringRawBuffer(quotaUsedLabel, &labelLength);
            //std::wcout << L"Current QuotaUsedLabel is: " << quotaUsedLabelString << " . HRESULT from get_QuotaUsedLabel is: " << std::hex << getHR << std::endl;

            uint64_t bytesUsed = 0;
            uint64_t bytesTotal = 0;
            HRESULT getUsedQuota = quotaUI->get_QuotaUsedInBytes(&bytesUsed);
            HRESULT getTotalQuota = quotaUI->get_QuotaTotalInBytes(&bytesTotal);
            currentState.UsedQuota = bytesUsed;
            currentState.TotalQuota = bytesTotal;
            //std::cout << "Current total Quota in bytes is: " << std::dec << bytesTotal << " . HRESULT from get_QuotaTotalInBytes is: " << std::hex << getTotalQuota << std::endl;
            //std::cout << "Current used Quota in bytes is: " << std::dec << bytesUsed << " . HRESULT from get_QuotaUsedInBytes is: " << std::hex << getUsedQuota << std::endl;

            ABI::Windows::Foundation::IReference<struct ABI::Windows::UI::Color>* pColorStruct = nullptr;
            HRESULT getColorHR = quotaUI->get_QuotaUsedColor(&pColorStruct);

            if (SUCCEEDED(getColorHR))
            {
                ABI::Windows::UI::Color quotaColor;
                getColorHR = pColorStruct->get_Value(&quotaColor);
                currentState.IconColorA = quotaColor.A;
                currentState.IconColorB = quotaColor.B;
                currentState.IconColorG = quotaColor.G;
                currentState.IconColorR = quotaColor.R;
                //std::wcout << L"Current used Quota color is: A:" << quotaColor.A << " R:" << quotaColor.R << " G:" << quotaColor.G << " B:" << quotaColor.B << " . HRESULT from quotaUsedColor struct is: " << std::hex << getUsedQuota << std::endl;
            }
        }
    }
    else
    {
        return hr;
    }
    return getHR;

}

/// <summary>
///   Get Current User SID ID  
/// </summary>
/// <returns>SID string</returns>

std::wstring getCurrentUserSid() {
	HANDLE hToken;
	DWORD dwLength;
	PTOKEN_USER pTokenUser;
	std::wstring sidString;
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
		GetTokenInformation(hToken, TokenUser, NULL, 0, &dwLength);
		pTokenUser = (PTOKEN_USER)HeapAlloc(GetProcessHeap(), 0, dwLength);
        LPWSTR rawSidString = NULL;
        if (pTokenUser != NULL) {
            if (GetTokenInformation(hToken, TokenUser, pTokenUser, dwLength, &dwLength)) {
				ConvertSidToStringSidW(pTokenUser->User.Sid, &rawSidString);
                sidString = rawSidString;
                LocalFree(rawSidString);
			}
			HeapFree(GetProcessHeap(), 0, pTokenUser);
		}
		CloseHandle(hToken);
	}
	return sidString;
}


HRESULT getInstanceStatus(const std::wstring& syncrootId, OneDriveState& currentState)
{
    const auto sid = extractSid(syncrootId);
    const auto user = GetUserFromSid(sid);
    const auto type = extactType(syncrootId);
    ZeroMemory(&currentState, sizeof(OneDriveState));

    safeStringCopy(&(currentState.SyncRootId), MAX_SYNC_ROOT_ID, (void*)syncrootId.c_str(), syncrootId.size());
    safeStringCopy(&(currentState.Sid), MAX_SID, (void*)sid.c_str(), sid.size());
    safeStringCopy(&(currentState.UserName), MAX_USER_NAME, (void*)user.c_str(), user.size());
    safeStringCopy(&(currentState.ServiceName), MAX_SERVICE_NAME, (void*)type.c_str(), type.size());

    auto userSid = getCurrentUserSid();
    if (sid != userSid) {
		return ERROR_INVALID_SID;
    }

    ABI::Windows::Storage::Provider::IStorageProviderStatusUISourceFactory* pFactory = nullptr;
    IUnknown* pUnk = nullptr;
    ABI::Windows::Storage::Provider::IStorageProviderStatusUISource* pSource = nullptr;

    HRESULT hr = CoCreateInstance(CLSID_FileCoAuth_StorageProviderStatusUISourceFactory, NULL, CLSCTX_LOCAL_SERVER, __uuidof(IUnknown), (void**)&pUnk);

    //std::cout << "CoCreateInstance: " << std::hex << hr << std::endl;

    if (SUCCEEDED(hr))
    {
        GUID guidIID = __uuidof(ABI::Windows::Storage::Provider::IStorageProviderStatusUISourceFactory);
        hr = pUnk->QueryInterface(guidIID, (void**)&pFactory);
        //std::cout << "QueryInterface: " << std::hex << hr << std::endl;
        if (SUCCEEDED(hr))
        {
            HSTRING hstrProviderId = nullptr;
            WindowsCreateString(syncrootId.c_str(), static_cast<UINT>(syncrootId.size()), &hstrProviderId);

            hr = pFactory->GetStatusUISource(hstrProviderId, &pSource);
            //std::cout << "Result of invoking GetStatusUISource: " << std::hex << hr << std::endl;
        }
    }

    ABI::Windows::Storage::Provider::IStorageProviderStatusUI* status = nullptr;

    if (SUCCEEDED(hr))
    {
        hr = pSource->GetStatusUI(&status);

        //std::cout << "Result from GetStatusUI: " << std::hex << hr << std::endl;
    }

    if (SUCCEEDED(hr))
    {
        // Print default StatusUI
        printStatusUI(pSource, currentState);
    }

    return hr;

}