// ODSyncUtil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//  This is a open source project to get the status of OneDrive sync client.
//  The project is hosted at https://github.com/rodneyviana/ODSyncUtil/tree/master/ODSyncUtil
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
