This project builds a proxy/stub DLL for Windows 11 RTM and Windows 10 for testing and developing against
the new set of API contracts defined by Windows for Sun Valley 2.

Sun Valley 2 builds will have the typelib (or proxy/stub) built-in, so this project is only needed for testing
on downlevel operating systems.

How to build the proxy/stub DLL for the OneDrive Flyout APIs:

    Important! Copy this entire directory to another folder outside of your OneDrive Root before attempting to
    open with Visual Studio

    Open in Visual Studio and build the Release/x64 project configuration

    From an Elevated Command line, run "regsvr32 OneDriveFlyoutPS.dll"


How to generate the source files:

   Edit client/onedrive/product/common/cppwinrt/lib/CppWinrtSDK.vcxproj with your favorite text editor

   Edit this line:

       <AdditionalOptions>/ns_prefix /nomidl %(AdditionalOptions)</AdditionalOptions>

   To be this (remove the /nomidl parameter):

       <AdditionalOptions>/ns_prefix %(AdditionalOptions)</AdditionalOptions>

   Then change the working directory to client/onedrive/product/common/cppwinrt:

       cd <root>\client\onedrive\product\common\cppwinrt

   Start clean:

       git clean -d -f -x .

   Then build:

       b

   The resulting .h and .c files will be in lib/objd/amd64

Notes about the project:

   Start with an empty DLL project.
   Add the .c and .h files to the project
   Additional dependencies: RuntimeObject.lib and RpcRT4.lib
   Additional defines: REGISTER_PROXY_DLL
   Set release/retail configuration to use static linking to the CRT

   Add a sources.def file as follows:

       LIBRARY OneDriveFlyoutPS

       DESCRIPTION 'Proxy/Stub DLL'

       EXPORTS
           DllGetClassObject  PRIVATE
           DllCanUnloadNow  PRIVATE
           GetProxyDllInfo  PRIVATE
           DllRegisterServer  PRIVATE
           DllUnregisterServer  PRIVATE

