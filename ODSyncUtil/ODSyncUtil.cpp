// ODSyncUtil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//  This is a open source project to get the status of OneDrive sync client.
//  The project is hosted at https://github.com/rodneyviana/ODSyncUtil
//  The project is licensed under the MIT license.
//  The project was written by Rodney Viana.
//
//
#include <iostream>
#include "SyncRoot.hpp"
#include "ApiStatus.h"

int main()
{
	::CoInitialize(NULL);
	auto syncRootManager = new SyncRootReader();
	std::vector<std::wstring> subKeys = syncRootManager->EnumerateSubKeys();
	std::vector<OneDriveState> states;
	for (std::vector<std::wstring>::iterator it = subKeys.begin(); it != subKeys.end(); ++it) {
		OneDriveState state;
		HRESULT hr = getInstanceStatus(*it, state);
		if (SUCCEEDED(hr)) {
			states.push_back(state);
		}
	}
	delete syncRootManager;
	std::wstring result = serializeStateVector(states);
	std::wcout << result << std::endl;
	return 0;

}
