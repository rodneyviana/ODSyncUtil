

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for C:\Users\jselbie\AppData\Local\Temp\StorageProviderStatusUI.idl-67a0f020:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __StorageProviderStatusUI_h_p_h__
#define __StorageProviderStatusUI_h_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable;

#endif 	/* ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FWD_DEFINED__ */


#ifndef ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
#define ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#endif 	/* ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
#define ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#endif 	/* ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#endif 	/* ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__ */


#ifndef ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
#define ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#endif 	/* ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand;

#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0000 */
/* [local] */ 

















typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState;

typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus;


















extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2381 */




extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2381_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2381_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable
#define DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0001_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2beff916-ed7d-5a2f-8343-73fe169e31d2")
    __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource *sender,
            /* [in] */ IInspectable *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This);
        
        DECLSPEC_XFGVIRT(__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource *sender,
            /* [in] */ IInspectable *e);
        
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


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0002 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable */
/* [v1_enum] */ 
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState
    {
        StorageProviderUICommandState_Enabled	= 0,
        StorageProviderUICommandState_Disabled	= 1,
        StorageProviderUICommandState_Hidden	= 2
    } ;


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EF38E591-A7CB-5E7D-9B5E-22749842697C")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Message( 
            /* [out][retval] */ HSTRING *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Message( 
            /* [in] */ HSTRING value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Command( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Command( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, get_Message)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [out][retval] */ HSTRING *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, put_Message)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Message )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [in] */ HSTRING value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, get_Command)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Command )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, put_Command)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Command )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_get_Message(This,value)	\
    ( (This)->lpVtbl -> get_Message(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_put_Message(This,value)	\
    ( (This)->lpVtbl -> put_Message(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_get_Command(This,value)	\
    ( (This)->lpVtbl -> get_Command(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_put_Command(This,value)	\
    ( (This)->lpVtbl -> put_Command(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA6295C3-312E-544F-9FD5-1F81B21F3649")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuotaTotalInBytes( 
            /* [out][retval] */ UINT64 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_QuotaTotalInBytes( 
            /* [in] */ UINT64 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuotaUsedInBytes( 
            /* [out][retval] */ UINT64 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_QuotaUsedInBytes( 
            /* [in] */ UINT64 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuotaUsedLabel( 
            /* [out][retval] */ HSTRING *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_QuotaUsedLabel( 
            /* [in] */ HSTRING value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuotaUsedColor( 
            /* [out][retval] */ __FIReference_1_Windows__CUI__CColor **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_QuotaUsedColor( 
            /* [in] */ __FIReference_1_Windows__CUI__CColor *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, get_QuotaTotalInBytes)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuotaTotalInBytes )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out][retval] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, put_QuotaTotalInBytes)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuotaTotalInBytes )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [in] */ UINT64 value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, get_QuotaUsedInBytes)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedInBytes )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out][retval] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, put_QuotaUsedInBytes)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedInBytes )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [in] */ UINT64 value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, get_QuotaUsedLabel)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedLabel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out][retval] */ HSTRING *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, put_QuotaUsedLabel)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedLabel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [in] */ HSTRING value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, get_QuotaUsedColor)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuotaUsedColor )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [out][retval] */ __FIReference_1_Windows__CUI__CColor **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, put_QuotaUsedColor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuotaUsedColor )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI * This,
            /* [in] */ __FIReference_1_Windows__CUI__CColor *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaTotalInBytes(This,value)	\
    ( (This)->lpVtbl -> get_QuotaTotalInBytes(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaTotalInBytes(This,value)	\
    ( (This)->lpVtbl -> put_QuotaTotalInBytes(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedInBytes(This,value)	\
    ( (This)->lpVtbl -> get_QuotaUsedInBytes(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedInBytes(This,value)	\
    ( (This)->lpVtbl -> put_QuotaUsedInBytes(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedLabel(This,value)	\
    ( (This)->lpVtbl -> get_QuotaUsedLabel(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedLabel(This,value)	\
    ( (This)->lpVtbl -> put_QuotaUsedLabel(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_get_QuotaUsedColor(This,value)	\
    ( (This)->lpVtbl -> get_QuotaUsedColor(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_put_QuotaUsedColor(This,value)	\
    ( (This)->lpVtbl -> put_QuotaUsedColor(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2382 */




extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2382_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2382_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#define DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0005_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9623990b-1b26-5f45-9f95-43d43b1cfd4c")
    __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, get_Current)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **current);
        
        DECLSPEC_XFGVIRT(__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, get_HasCurrent)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        DECLSPEC_XFGVIRT(__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        DECLSPEC_XFGVIRT(__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetMany)
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2383 */




extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2383_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2383_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI_0000_0007 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#define DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0007_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2042aa99-0a84-5d22-b6ae-f7fd19b4e236")
    __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, First)
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **first);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0008 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2384 */




extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2384_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2384_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI_0000_0009 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#define DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0009_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42e170a8-d66a-55b1-bab5-9e4c650d7ffb")
    __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetAt)
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **item);
        
        DECLSPEC_XFGVIRT(__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, get_Size)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ unsigned int *size);
        
        DECLSPEC_XFGVIRT(__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, IndexOf)
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        DECLSPEC_XFGVIRT(__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetMany)
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2385 */




extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2385_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2385_v0_0_s_ifspec;

/* interface __MIDL_itf_StorageProviderStatusUI_0000_0011 */
/* [local] */ 

#ifndef DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#define DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0011_v0_0_s_ifspec;

#ifndef ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__
#define ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__

/* interface __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12974ca5-6ab5-5f80-a379-6638f9734f3a")
    __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [retval][out] */ __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **view) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceAll( 
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetAt)
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **item);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, get_Size)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ unsigned int *size);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetView)
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [retval][out] */ __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **view);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, IndexOf)
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, SetAt)
        HRESULT ( STDMETHODCALLTYPE *SetAt )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, InsertAt)
        HRESULT ( STDMETHODCALLTYPE *InsertAt )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, RemoveAt)
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int index);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, Append)
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *item);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, RemoveAtEnd)
        HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, Clear)
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, GetMany)
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **items,
            /* [retval][out] */ unsigned int *actual);
        
        DECLSPEC_XFGVIRT(__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ReplaceAll)
        HRESULT ( STDMETHODCALLTYPE *ReplaceAll )( 
            __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand * This,
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_StorageProviderStatusUI_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand */


extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_StorageProviderStatusUI_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6B6A758-198D-5B80-977F-5FF73DA33118")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderState( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProviderState( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderStateLabel( 
            /* [out][retval] */ HSTRING *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProviderStateLabel( 
            /* [in] */ HSTRING value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderStateIcon( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProviderStateIcon( 
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SyncStatusCommand( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SyncStatusCommand( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuotaUI( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_QuotaUI( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MoreInfoUI( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MoreInfoUI( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPrimaryCommand( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPrimaryCommand( 
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProviderSecondaryCommands( 
            /* [out][retval] */ __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProviderSecondaryCommands( 
            /* [in] */ __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_ProviderState)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderState )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_ProviderState)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderState )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderState value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_ProviderStateLabel)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderStateLabel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ HSTRING *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_ProviderStateLabel)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderStateLabel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ HSTRING value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_ProviderStateIcon)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderStateIcon )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_ProviderStateIcon)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderStateIcon )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_SyncStatusCommand)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncStatusCommand )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_SyncStatusCommand)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncStatusCommand )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_QuotaUI)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuotaUI )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_QuotaUI)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuotaUI )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_MoreInfoUI)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MoreInfoUI )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_MoreInfoUI)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MoreInfoUI )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_ProviderPrimaryCommand)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPrimaryCommand )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_ProviderPrimaryCommand)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPrimaryCommand )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, get_ProviderSecondaryCommands)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderSecondaryCommands )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [out][retval] */ __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, put_ProviderSecondaryCommands)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderSecondaryCommands )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI * This,
            /* [in] */ __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderState(This,value)	\
    ( (This)->lpVtbl -> get_ProviderState(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderState(This,value)	\
    ( (This)->lpVtbl -> put_ProviderState(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderStateLabel(This,value)	\
    ( (This)->lpVtbl -> get_ProviderStateLabel(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderStateLabel(This,value)	\
    ( (This)->lpVtbl -> put_ProviderStateLabel(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderStateIcon(This,value)	\
    ( (This)->lpVtbl -> get_ProviderStateIcon(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderStateIcon(This,value)	\
    ( (This)->lpVtbl -> put_ProviderStateIcon(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_SyncStatusCommand(This,value)	\
    ( (This)->lpVtbl -> get_SyncStatusCommand(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_SyncStatusCommand(This,value)	\
    ( (This)->lpVtbl -> put_SyncStatusCommand(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_QuotaUI(This,value)	\
    ( (This)->lpVtbl -> get_QuotaUI(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_QuotaUI(This,value)	\
    ( (This)->lpVtbl -> put_QuotaUI(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_MoreInfoUI(This,value)	\
    ( (This)->lpVtbl -> get_MoreInfoUI(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_MoreInfoUI(This,value)	\
    ( (This)->lpVtbl -> put_MoreInfoUI(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderPrimaryCommand(This,value)	\
    ( (This)->lpVtbl -> get_ProviderPrimaryCommand(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderPrimaryCommand(This,value)	\
    ( (This)->lpVtbl -> put_ProviderPrimaryCommand(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_get_ProviderSecondaryCommands(This,value)	\
    ( (This)->lpVtbl -> get_ProviderSecondaryCommands(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_put_ProviderSecondaryCommands(This,value)	\
    ( (This)->lpVtbl -> put_ProviderSecondaryCommands(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A306C249-3D66-5E70-9007-E43DF96051FF")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatusUI( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_StatusUIChanged( 
            /* [in] */ __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_StatusUIChanged( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource, GetStatusUI)
        HRESULT ( STDMETHODCALLTYPE *GetStatusUI )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI **result);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource, add_StatusUIChanged)
        HRESULT ( STDMETHODCALLTYPE *add_StatusUIChanged )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [in] */ __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource, remove_StatusUIChanged)
        HRESULT ( STDMETHODCALLTYPE *remove_StatusUIChanged )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_GetStatusUI(This,result)	\
    ( (This)->lpVtbl -> GetStatusUI(This,result) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_add_StatusUIChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_StatusUIChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_remove_StatusUIChanged(This,token)	\
    ( (This)->lpVtbl -> remove_StatusUIChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12E46B74-4E5A-58D1-A62F-0376E8EE7DD8")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatusUISource( 
            /* [in] */ HSTRING syncRootId,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory, GetStatusUISource)
        HRESULT ( STDMETHODCALLTYPE *GetStatusUISource )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory * This,
            /* [in] */ HSTRING syncRootId,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_GetStatusUISource(This,syncRootId,result)	\
    ( (This)->lpVtbl -> GetStatusUISource(This,syncRootId,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C3E0760-D846-568F-9484-105CC57B502B")
    __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [out][retval] */ HSTRING *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [out][retval] */ HSTRING *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Icon( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This);
        
        DECLSPEC_XFGVIRT(IInspectable, GetIids)
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        DECLSPEC_XFGVIRT(IInspectable, GetRuntimeClassName)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out] */ HSTRING *className);
        
        DECLSPEC_XFGVIRT(IInspectable, GetTrustLevel)
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out] */ TrustLevel *trustLevel);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, get_Label)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out][retval] */ HSTRING *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, get_Description)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out][retval] */ HSTRING *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, get_Icon)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Icon )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, get_State)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This,
            /* [out][retval] */ __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState *value);
        
        DECLSPEC_XFGVIRT(__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand * This);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl;

    interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Label(This,value)	\
    ( (This)->lpVtbl -> get_Label(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Description(This,value)	\
    ( (This)->lpVtbl -> get_Description(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_Icon(This,value)	\
    ( (This)->lpVtbl -> get_Icon(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_get_State(This,value)	\
    ( (This)->lpVtbl -> get_State(This,value) ) 

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Invoke(This)	\
    ( (This)->lpVtbl -> Invoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


