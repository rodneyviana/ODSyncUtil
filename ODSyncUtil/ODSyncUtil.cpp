// ODSyncUtil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//  This is a open source project to get the status of OneDrive sync client.
//  The project is hosted at https://github.com/rodneyviana/ODSyncUtil
//  The project is licensed under the MIT license.
//  The project was written by Rodney Viana.
//
//
#include <iostream>
#include <fstream>
#include "SyncRoot.hpp"
#include "ApiStatus.h"
#include "Debug.hpp"
#include <locale>
#include <codecvt>
#include <string>
#include <map>

struct CommandLineArgs
{
    std::string saveFileName;
    bool isDebug;
};

std::wstring GetFileVersion(const std::string& filePath) {
    DWORD handle;
    DWORD versionSize = GetFileVersionInfoSizeA(filePath.c_str(), &handle);

    if (versionSize == 0) {
        return L"";
    }

    std::vector<BYTE> versionData(versionSize);
    if (!GetFileVersionInfoA(filePath.c_str(), handle, versionSize, &versionData[0])) {
        return L"";
    }

    VS_FIXEDFILEINFO* fileInfo = nullptr;
    UINT len = 0;
    if (!VerQueryValueW(&versionData[0], L"\\", (void**)&fileInfo, &len)) {
        return L"";
    }

    DWORD fileVersionMS = fileInfo->dwFileVersionMS;
    DWORD fileVersionLS = fileInfo->dwFileVersionLS;

    DWORD major = HIWORD(fileVersionMS);
    DWORD minor = LOWORD(fileVersionMS);
    DWORD build = HIWORD(fileVersionLS);
    DWORD revision = LOWORD(fileVersionLS);

    wchar_t versionString[100];
    swprintf(versionString, 100, L"%d.%d.%d.%d", major, minor, build, revision);

    return versionString;
}


void PrintUsage(std::wstring FileVersion)
{
    std::wcout << L"ODSyncUtil - OneDrive Synchronization Utility Version " << FileVersion <<  L"\n";
    std::cout << "Copyright (c) 2024 Rodney Viana (https://github.com/rodneyviana/ODSyncUtil)" << "\n";
    std::cout << "MIT License" << "\n\n";
    std::cout << "Usage: ODSyncUtil [options]" << "\n";
    std::cout << "  -h                Show this help message\n";
    std::cout << "  -s <filename>     Save the output to file (UTF-8 unicode based on locale code page)\n";
    std::cout << "  -d                Debug the application (cannot be used with any other switch)\n";
}

CommandLineArgs ParseCommandLineArgs(int argc, char* argv[])
{
    CommandLineArgs args;
    args.isDebug = false;

    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];
        if (arg == "-h")
        {
            auto fileVersion = GetFileVersion(argv[0]);
            PrintUsage(fileVersion);
            exit(0);
        }
        else if (arg == "-s" && i + 1 < argc)
        {
            args.saveFileName = argv[++i];
        }
        else if (arg == "-d")
        {
            args.isDebug = true;
        }
        else
        {
            std::cerr << "Unknown argument: " << arg << "\n";
            exit(1);
        }
    }

    return args;
}



int main(int argc, char** argv)
{
    auto args = ParseCommandLineArgs(argc, argv);
    std::locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);
    std::locale::global(loc);
    std::wcout.imbue(loc);
    Debug.isToStdOutput = args.isDebug;
    Debug.Write(L"Command line arguments parsed\n");
    Debug.Write(L"Save file name: %s\n", args.saveFileName.c_str());
    Debug.Write(L"Is debug: %d\n", args.isDebug);
	auto hr = ::CoInitialize(NULL);
    if (FAILED(hr))
    {
		Debug.Write(L"CoInitialize failed with error 0x%08x\n", hr);
		return 1;
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
    if (!args.saveFileName.empty()) {
        // Save to file
        std::wofstream file(args.saveFileName, std::ios::out, std::ios::binary);
        file.imbue(loc);
        file << result;
    }
	std::wcout << result << std::endl;
	return 0;

}
