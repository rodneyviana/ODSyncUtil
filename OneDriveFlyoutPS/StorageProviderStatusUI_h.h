/* Header file automatically generated from StorageProviderStatusUI.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0231 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __StorageProviderStatusUI_h_h__
#define __StorageProviderStatusUI_h_h__
#ifndef __StorageProviderStatusUI_h_p_h__
#define __StorageProviderStatusUI_h_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xe0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderMoreInfoUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI ABI::Windows::Storage::Provider::IStorageProviderMoreInfoUI

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderQuotaUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI ABI::Windows::Storage::Provider::IStorageProviderQuotaUI

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderStatusUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI ABI::Windows::Storage::Provider::IStorageProviderStatusUI

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderStatusUISource;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource ABI::Windows::Storage::Provider::IStorageProviderStatusUISource

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderStatusUISourceFactory;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory ABI::Windows::Storage::Provider::IStorageProviderStatusUISourceFactory

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderUICommand;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand ABI::Windows::Storage::Provider::IStorageProviderUICommand

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2beff916-ed7d-5a2f-8343-73fe169e31d2"))
ITypedEventHandler<ABI::Windows::Storage::Provider::IStorageProviderStatusUISource*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Storage::Provider::IStorageProviderStatusUISource*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Provider.IStorageProviderStatusUISource, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Provider::IStorageProviderStatusUISource*,IInspectable*> __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::IStorageProviderStatusUISource*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::IStorageProviderStatusUISource*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

namespace ABI {
    namespace Windows {
        namespace UI {
            struct Color;
            
        } /* UI */
    } /* Windows */
} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CColor_USE
#define DEF___FIReference_1_Windows__CUI__CColor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab8e5d11-b0c1-5a21-95ae-f16bf3a37624"))
IReference<struct ABI::Windows::UI::Color> : IReference_impl<struct ABI::Windows::UI::Color> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.Color>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::UI::Color> __FIReference_1_Windows__CUI__CColor_t;
#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CColor_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
//#define __FIReference_1_Windows__CUI__CColor_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CColor_USE */




#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#define DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9623990b-1b26-5f45-9f95-43d43b1cfd4c"))
IIterator<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> : IIterator_impl<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Provider.IStorageProviderUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t;
#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
//#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#define DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2042aa99-0a84-5d22-b6ae-f7fd19b4e236"))
IIterable<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> : IIterable_impl<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Provider.IStorageProviderUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t;
#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
//#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#define DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("42e170a8-d66a-55b1-bab5-9e4c650d7ffb"))
IVectorView<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> : IVectorView_impl<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Provider.IStorageProviderUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t;
#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
//#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#define DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("12974ca5-6ab5-5f80-a379-6638f9734f3a"))
IVector<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> : IVector_impl<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Provider.IStorageProviderUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Storage::Provider::IStorageProviderUICommand*> __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t;
#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
//#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Provider::IStorageProviderUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000



namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHardlinkPolicy : unsigned int StorageProviderHardlinkPolicy;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHydrationPolicy : int StorageProviderHydrationPolicy;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHydrationPolicyModifier : unsigned int StorageProviderHydrationPolicyModifier;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderInSyncPolicy : unsigned int StorageProviderInSyncPolicy;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderPopulationPolicy : int StorageProviderPopulationPolicy;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderProtectionMode : int StorageProviderProtectionMode;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderState : int StorageProviderState;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderUICommandState : int StorageProviderUICommandState;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderUriSourceStatus : int StorageProviderUriSourceStatus;
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderFileTypeInfo;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo ABI::Windows::Storage::Provider::IStorageProviderFileTypeInfo

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderFileTypeInfoFactory;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory ABI::Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderGetContentInfoForPathResult;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult ABI::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderGetPathForContentUriResult;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult ABI::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderItemPropertyDefinition;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootInfo;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootInfo2;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo2

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootInfo3;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3 ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo3

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootManagerStatics;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics ABI::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootManagerStatics2;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2 ABI::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderUriSource;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource ABI::Windows::Storage::Provider::IStorageProviderUriSource

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderFileTypeInfo;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderGetContentInfoForPathResult;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderGetPathForContentUriResult;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderItemPropertyDefinition;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderMoreInfoUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderQuotaUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderStatusUI;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderSyncRootInfo;
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */











/*
 *
 * Struct Windows.Storage.Provider.StorageProviderUICommandState
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum StorageProviderUICommandState : int
                {
                    StorageProviderUICommandState_Enabled = 0,
                    StorageProviderUICommandState_Disabled = 1,
                    StorageProviderUICommandState_Hidden = 2,
                };
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderMoreInfoUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderMoreInfoUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderMoreInfoUI[] = L"Windows.Storage.Provider.IStorageProviderMoreInfoUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("EF38E591-A7CB-5E7D-9B5E-22749842697C"), exclusiveto, contract] */
                MIDL_INTERFACE("EF38E591-A7CB-5E7D-9B5E-22749842697C")
                IStorageProviderMoreInfoUI : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Message(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Command(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Command(
                        /* [in] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * value
                        ) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderMoreInfoUI=_uuidof(IStorageProviderMoreInfoUI);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderQuotaUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderQuotaUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderQuotaUI[] = L"Windows.Storage.Provider.IStorageProviderQuotaUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("BA6295C3-312E-544F-9FD5-1F81B21F3649"), exclusiveto, contract] */
                MIDL_INTERFACE("BA6295C3-312E-544F-9FD5-1F81B21F3649")
                IStorageProviderQuotaUI : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuotaTotalInBytes(
                        /* [retval, out] */UINT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuotaTotalInBytes(
                        /* [in] */UINT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuotaUsedInBytes(
                        /* [retval, out] */UINT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuotaUsedInBytes(
                        /* [in] */UINT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuotaUsedLabel(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuotaUsedLabel(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuotaUsedColor(
                        /* [retval, out] */__FIReference_1_Windows__CUI__CColor * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuotaUsedColor(
                        /* [in] */__FIReference_1_Windows__CUI__CColor * value
                        ) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderQuotaUI=_uuidof(IStorageProviderQuotaUI);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderStatusUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUI[] = L"Windows.Storage.Provider.IStorageProviderStatusUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("D6B6A758-198D-5B80-977F-5FF73DA33118"), exclusiveto, contract] */
                MIDL_INTERFACE("D6B6A758-198D-5B80-977F-5FF73DA33118")
                IStorageProviderStatusUI : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderState(
                        /* [retval, out] */ABI::Windows::Storage::Provider::StorageProviderState * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderState(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderState value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderStateLabel(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderStateLabel(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderStateIcon(
                        /* [retval, out] */ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderStateIcon(
                        /* [in] */ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SyncStatusCommand(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SyncStatusCommand(
                        /* [in] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuotaUI(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderQuotaUI * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuotaUI(
                        /* [in] */ABI::Windows::Storage::Provider::IStorageProviderQuotaUI * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MoreInfoUI(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderMoreInfoUI * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MoreInfoUI(
                        /* [in] */ABI::Windows::Storage::Provider::IStorageProviderMoreInfoUI * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderPrimaryCommand(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderPrimaryCommand(
                        /* [in] */ABI::Windows::Storage::Provider::IStorageProviderUICommand * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderSecondaryCommands(
                        /* [retval, out] */__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderSecondaryCommands(
                        /* [in] */__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * value
                        ) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderStatusUI=_uuidof(IStorageProviderStatusUI);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUISource
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUISource[] = L"Windows.Storage.Provider.IStorageProviderStatusUISource";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("A306C249-3D66-5E70-9007-E43DF96051FF"), contract] */
                MIDL_INTERFACE("A306C249-3D66-5E70-9007-E43DF96051FF")
                IStorageProviderStatusUISource : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetStatusUI(
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderStatusUI * * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusUIChanged(
                        /* [in] */__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * handler,
                        /* [retval, out] */EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusUIChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderStatusUISource=_uuidof(IStorageProviderStatusUISource);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUISourceFactory
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUISourceFactory[] = L"Windows.Storage.Provider.IStorageProviderStatusUISourceFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("12E46B74-4E5A-58D1-A62F-0376E8EE7DD8"), contract] */
                MIDL_INTERFACE("12E46B74-4E5A-58D1-A62F-0376E8EE7DD8")
                IStorageProviderStatusUISourceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetStatusUISource(
                        /* [in] */HSTRING syncRootId,
                        /* [retval, out] */ABI::Windows::Storage::Provider::IStorageProviderStatusUISource * * result
                        ) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderStatusUISourceFactory=_uuidof(IStorageProviderStatusUISourceFactory);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderUICommand
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderUICommand[] = L"Windows.Storage.Provider.IStorageProviderUICommand";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("0C3E0760-D846-568F-9484-105CC57B502B"), contract] */
                MIDL_INTERFACE("0C3E0760-D846-568F-9484-105CC57B502B")
                IStorageProviderUICommand : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Icon(
                        /* [retval, out] */ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */ABI::Windows::Storage::Provider::StorageProviderUICommandState * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Invoke(void) = 0;
                    
                };

                MIDL_CONST_ID IID & IID_IStorageProviderUICommand=_uuidof(IStorageProviderUICommand);
                
            } /* Provider */
        } /* Storage */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderMoreInfoUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderMoreInfoUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderMoreInfoUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderMoreInfoUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderMoreInfoUI[] = L"Windows.Storage.Provider.StorageProviderMoreInfoUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderQuotaUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderQuotaUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderQuotaUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderQuotaUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderQuotaUI[] = L"Windows.Storage.Provider.StorageProviderQuotaUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderStatusUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderStatusUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderStatusUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderStatusUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderStatusUI[] = L"Windows.Storage.Provider.StorageProviderStatusUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

struct __x_ABI_CWindows_CUI_CColor;

#if !defined(____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;

typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;

interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CColor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CColor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CColor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CColor_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__



#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

typedef struct __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl;

interface __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

typedef  struct __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl;

interface __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl;

interface __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

typedef struct __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl;

interface __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000



typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus;

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfo_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderFileTypeInfoFactory_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3 __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo3_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2 __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics2_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource_FWD_DEFINED__



















/*
 *
 * Struct Windows.Storage.Provider.StorageProviderUICommandState
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState
{
    StorageProviderUICommandState_Enabled = 0,
    StorageProviderUICommandState_Disabled = 1,
    StorageProviderUICommandState_Hidden = 2,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderMoreInfoUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderMoreInfoUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderMoreInfoUI[] = L"Windows.Storage.Provider.IStorageProviderMoreInfoUI";
/* [object, uuid("EF38E591-A7CB-5E7D-9B5E-22749842697C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Command )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Command )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_put_Message(This,value) \
    ( (This)->lpVtbl->put_Message(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_get_Command(This,value) \
    ( (This)->lpVtbl->get_Command(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_put_Command(This,value) \
    ( (This)->lpVtbl->put_Command(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderQuotaUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderQuotaUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderQuotaUI[] = L"Windows.Storage.Provider.IStorageProviderQuotaUI";
/* [object, uuid("BA6295C3-312E-544F-9FD5-1F81B21F3649"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuotaTotalInBytes )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuotaTotalInBytes )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [in] */UINT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedInBytes )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedInBytes )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [in] */UINT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedLabel )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedLabel )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedColor )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [retval, out] */__FIReference_1_Windows__CUI__CColor * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedColor )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
        /* [in] */__FIReference_1_Windows__CUI__CColor * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaTotalInBytes(This,value) \
    ( (This)->lpVtbl->get_QuotaTotalInBytes(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaTotalInBytes(This,value) \
    ( (This)->lpVtbl->put_QuotaTotalInBytes(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedInBytes(This,value) \
    ( (This)->lpVtbl->get_QuotaUsedInBytes(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedInBytes(This,value) \
    ( (This)->lpVtbl->put_QuotaUsedInBytes(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedLabel(This,value) \
    ( (This)->lpVtbl->get_QuotaUsedLabel(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedLabel(This,value) \
    ( (This)->lpVtbl->put_QuotaUsedLabel(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedColor(This,value) \
    ( (This)->lpVtbl->get_QuotaUsedColor(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedColor(This,value) \
    ( (This)->lpVtbl->put_QuotaUsedColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderStatusUI
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUI[] = L"Windows.Storage.Provider.IStorageProviderStatusUI";
/* [object, uuid("D6B6A758-198D-5B80-977F-5FF73DA33118"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderState )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderState * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderState )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderState value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderStateLabel )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderStateLabel )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderStateIcon )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderStateIcon )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SyncStatusCommand )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SyncStatusCommand )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuotaUI )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuotaUI )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUI )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MoreInfoUI )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderPrimaryCommand )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderPrimaryCommand )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderSecondaryCommands )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [retval, out] */__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderSecondaryCommands )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
        /* [in] */__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderState(This,value) \
    ( (This)->lpVtbl->get_ProviderState(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderState(This,value) \
    ( (This)->lpVtbl->put_ProviderState(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderStateLabel(This,value) \
    ( (This)->lpVtbl->get_ProviderStateLabel(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderStateLabel(This,value) \
    ( (This)->lpVtbl->put_ProviderStateLabel(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderStateIcon(This,value) \
    ( (This)->lpVtbl->get_ProviderStateIcon(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderStateIcon(This,value) \
    ( (This)->lpVtbl->put_ProviderStateIcon(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_SyncStatusCommand(This,value) \
    ( (This)->lpVtbl->get_SyncStatusCommand(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_SyncStatusCommand(This,value) \
    ( (This)->lpVtbl->put_SyncStatusCommand(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_QuotaUI(This,value) \
    ( (This)->lpVtbl->get_QuotaUI(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_QuotaUI(This,value) \
    ( (This)->lpVtbl->put_QuotaUI(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_MoreInfoUI(This,value) \
    ( (This)->lpVtbl->get_MoreInfoUI(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_MoreInfoUI(This,value) \
    ( (This)->lpVtbl->put_MoreInfoUI(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderPrimaryCommand(This,value) \
    ( (This)->lpVtbl->get_ProviderPrimaryCommand(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderPrimaryCommand(This,value) \
    ( (This)->lpVtbl->put_ProviderPrimaryCommand(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderSecondaryCommands(This,value) \
    ( (This)->lpVtbl->get_ProviderSecondaryCommands(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderSecondaryCommands(This,value) \
    ( (This)->lpVtbl->put_ProviderSecondaryCommands(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUISource
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUISource[] = L"Windows.Storage.Provider.IStorageProviderStatusUISource";
/* [object, uuid("A306C249-3D66-5E70-9007-E43DF96051FF"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatusUI )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusUIChanged )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
        /* [in] */__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusUIChanged )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetStatusUI(This,result) \
    ( (This)->lpVtbl->GetStatusUI(This,result) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_add_StatusUIChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StatusUIChanged(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_remove_StatusUIChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusUIChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderStatusUISourceFactory
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderStatusUISourceFactory[] = L"Windows.Storage.Provider.IStorageProviderStatusUISourceFactory";
/* [object, uuid("12E46B74-4E5A-58D1-A62F-0376E8EE7DD8"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatusUISource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
        /* [in] */HSTRING syncRootId,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetStatusUISource(This,syncRootId,result) \
    ( (This)->lpVtbl->GetStatusUISource(This,syncRootId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderUICommand
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderUICommand[] = L"Windows.Storage.Provider.IStorageProviderUICommand";
/* [object, uuid("0C3E0760-D846-568F-9484-105CC57B502B"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Icon(This,value) \
    ( (This)->lpVtbl->get_Icon(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Invoke(This) \
    ( (This)->lpVtbl->Invoke(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderMoreInfoUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderMoreInfoUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderMoreInfoUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderMoreInfoUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderMoreInfoUI[] = L"Windows.Storage.Provider.StorageProviderMoreInfoUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderQuotaUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderQuotaUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderQuotaUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderQuotaUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderQuotaUI[] = L"Windows.Storage.Provider.StorageProviderQuotaUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderStatusUI
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 6.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 6.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderStatusUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderStatusUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderStatusUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderStatusUI[] = L"Windows.Storage.Provider.StorageProviderStatusUI";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x60000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __StorageProviderStatusUI_h_p_h__

#endif // __StorageProviderStatusUI_h_h__
