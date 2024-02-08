

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable,0x2beff916,0xed7d,0x5a2f,0x83,0x43,0x73,0xfe,0x16,0x9e,0x31,0xd2);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI,0xEF38E591,0xA7CB,0x5E7D,0x9B,0x5E,0x22,0x74,0x98,0x42,0x69,0x7C);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI,0xBA6295C3,0x312E,0x544F,0x9F,0xD5,0x1F,0x81,0xB2,0x1F,0x36,0x49);


MIDL_DEFINE_GUID(IID, IID___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,0x9623990b,0x1b26,0x5f45,0x9f,0x95,0x43,0xd4,0x3b,0x1c,0xfd,0x4c);


MIDL_DEFINE_GUID(IID, IID___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,0x2042aa99,0x0a84,0x5d22,0xb6,0xae,0xf7,0xfd,0x19,0xb4,0xe2,0x36);


MIDL_DEFINE_GUID(IID, IID___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,0x42e170a8,0xd66a,0x55b1,0xba,0xb5,0x9e,0x4c,0x65,0x0d,0x7f,0xfb);


MIDL_DEFINE_GUID(IID, IID___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,0x12974ca5,0x6ab5,0x5f80,0xa3,0x79,0x66,0x38,0xf9,0x73,0x4f,0x3a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI,0xD6B6A758,0x198D,0x5B80,0x97,0x7F,0x5F,0xF7,0x3D,0xA3,0x31,0x18);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource,0xA306C249,0x3D66,0x5E70,0x90,0x07,0xE4,0x3D,0xF9,0x60,0x51,0xFF);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory,0x12E46B74,0x4E5A,0x58D1,0xA6,0x2F,0x03,0x76,0xE8,0xEE,0x7D,0xD8);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand,0x0C3E0760,0xD846,0x568F,0x94,0x84,0x10,0x5C,0xC5,0x7B,0x50,0x2B);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



