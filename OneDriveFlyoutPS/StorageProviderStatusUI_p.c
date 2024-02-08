

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "StorageProviderStatusUI_h_p.h"

#define TYPE_FORMAT_STRING_SIZE   457                               
#define PROC_FORMAT_STRING_SIZE   2225                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _StorageProviderStatusUI_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } StorageProviderStatusUI_MIDL_TYPE_FORMAT_STRING;

typedef struct _StorageProviderStatusUI_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } StorageProviderStatusUI_MIDL_PROC_FORMAT_STRING;

typedef struct _StorageProviderStatusUI_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } StorageProviderStatusUI_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
static unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
static unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#endif



extern const StorageProviderStatusUI_MIDL_TYPE_FORMAT_STRING StorageProviderStatusUI__MIDL_TypeFormatString;
extern const StorageProviderStatusUI_MIDL_PROC_FORMAT_STRING StorageProviderStatusUI__MIDL_ProcFormatString;
extern const StorageProviderStatusUI_MIDL_EXPR_FORMAT_STRING StorageProviderStatusUI__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const StorageProviderStatusUI_MIDL_PROC_FORMAT_STRING StorageProviderStatusUI__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 26 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter e */

/* 32 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Label */


	/* Procedure get_Message */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x6 ),	/* 6 */
/* 52 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 60 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */


	/* Parameter value */

/* 70 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */


	/* Return value */

/* 76 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Message */

/* 82 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 84 */	NdrFcLong( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x7 ),	/* 7 */
/* 90 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 98 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Command */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 146 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 150 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Command */

/* 158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x9 ),	/* 9 */
/* 166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 174 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 184 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 186 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 188 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_QuotaTotalInBytes */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x6 ),	/* 6 */
/* 204 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x2c ),	/* 44 */
/* 210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 226 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_QuotaTotalInBytes */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x7 ),	/* 7 */
/* 242 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 250 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 264 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_QuotaUsedInBytes */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x2c ),	/* 44 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 302 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_QuotaUsedInBytes */

/* 310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x9 ),	/* 9 */
/* 318 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 320 */	NdrFcShort( 0x10 ),	/* 16 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 326 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 340 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_QuotaUsedLabel */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xa ),	/* 10 */
/* 356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 374 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 378 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_QuotaUsedLabel */

/* 386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0xb ),	/* 11 */
/* 394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 402 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 412 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 416 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_QuotaUsedColor */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0xc ),	/* 12 */
/* 432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_QuotaUsedColor */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0xd ),	/* 13 */
/* 470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 492 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Current */

/* 500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x6 ),	/* 6 */
/* 508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 516 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter current */

/* 526 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 530 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasCurrent */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x7 ),	/* 7 */
/* 546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x21 ),	/* 33 */
/* 552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 554 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hasCurrent */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 568 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveNext */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x21 ),	/* 33 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hasCurrent */

/* 602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 604 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 606 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 610 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x9 ),	/* 9 */
/* 622 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	NdrFcShort( 0x24 ),	/* 36 */
/* 628 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 630 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter capacity */

/* 640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 646 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 648 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 650 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Parameter actual */

/* 652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure First */

/* 664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x6 ),	/* 6 */
/* 672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 678 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter first */

/* 690 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 694 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAt */


	/* Procedure GetAt */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x6 ),	/* 6 */
/* 710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 718 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */


	/* Parameter index */

/* 728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */


	/* Parameter item */

/* 734 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 738 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */


	/* Return value */

/* 740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */


	/* Procedure get_Size */

/* 746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x7 ),	/* 7 */
/* 754 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 762 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter size */


	/* Parameter size */

/* 772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x3d ),	/* 61 */
/* 798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 800 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 810 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Parameter index */

/* 816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 826 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x9 ),	/* 9 */
/* 842 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 850 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 872 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 874 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 876 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter actual */

/* 878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 886 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetView */

/* 890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 906 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter view */

/* 916 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 920 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Return value */

/* 922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IndexOf */

/* 928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x9 ),	/* 9 */
/* 936 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x3d ),	/* 61 */
/* 942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 944 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 956 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 958 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Parameter index */

/* 960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter found */

/* 966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 970 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAt */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0xa ),	/* 10 */
/* 986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 1010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1014 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 1016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertAt */

/* 1022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0xb ),	/* 11 */
/* 1030 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1038 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter item */

/* 1054 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1058 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 1060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAt */

/* 1066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0xc ),	/* 12 */
/* 1074 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1080 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1082 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1094 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Append */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0xd ),	/* 13 */
/* 1112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1120 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 1130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1134 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 1136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAtEnd */

/* 1142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0xe ),	/* 14 */
/* 1150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1158 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */

/* 1174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0xf ),	/* 15 */
/* 1182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMany */

/* 1206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1214 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1216 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1218 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1222 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 1232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter capacity */

/* 1238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter items */

/* 1244 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1248 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter actual */

/* 1250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1252 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1258 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceAll */

/* 1262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1270 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1278 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 1288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1298 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Return value */

/* 1300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProviderState */

/* 1306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1320 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1322 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1336 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProviderState */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1352 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1374 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1378 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProviderStateLabel */

/* 1382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1390 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1396 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1398 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1408 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1412 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProviderStateLabel */

/* 1420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1436 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1446 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1448 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1450 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProviderStateIcon */

/* 1458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0xa ),	/* 10 */
/* 1466 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1474 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1484 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1486 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1488 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */

	/* Return value */

/* 1490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProviderStateIcon */

/* 1496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0xb ),	/* 11 */
/* 1504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1512 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1522 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1526 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SyncStatusCommand */

/* 1534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0xc ),	/* 12 */
/* 1542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1550 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1560 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1564 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1568 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SyncStatusCommand */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0xd ),	/* 13 */
/* 1580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1588 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1602 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Return value */

/* 1604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_QuotaUI */

/* 1610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0xe ),	/* 14 */
/* 1618 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1626 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1638 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1640 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Return value */

/* 1642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1644 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_QuotaUI */

/* 1648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0xf ),	/* 15 */
/* 1656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1664 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1676 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1678 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MoreInfoUI */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1694 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1700 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1702 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1712 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1716 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */

	/* Return value */

/* 1718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1720 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MoreInfoUI */

/* 1724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1732 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1740 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1754 */	NdrFcShort( 0x158 ),	/* Type Offset=344 */

	/* Return value */

/* 1756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProviderPrimaryCommand */

/* 1762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1770 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1776 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1778 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1788 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1790 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1792 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProviderPrimaryCommand */

/* 1800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1808 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1814 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1816 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1826 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1828 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1830 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Return value */

/* 1832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1834 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProviderSecondaryCommands */

/* 1838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1846 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1864 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1868 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Return value */

/* 1870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProviderSecondaryCommands */

/* 1876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1884 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1892 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1906 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1910 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStatusUI */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1922 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1930 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */

/* 1940 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1944 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */

	/* Return value */

/* 1946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_StatusUIChanged */

/* 1952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1960 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1968 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1978 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1982 */	NdrFcShort( 0x196 ),	/* Type Offset=406 */

	/* Parameter token */

/* 1984 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1988 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 1990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_StatusUIChanged */

/* 1996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2006 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2012 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 2022 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStatusUISource */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2042 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2050 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter syncRootId */

/* 2060 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2064 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter result */

/* 2066 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2070 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */

	/* Return value */

/* 2072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2074 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Description */

/* 2078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2086 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2092 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2094 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2104 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2106 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2108 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 2110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2112 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Icon */

/* 2116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2124 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2130 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2132 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2146 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */

	/* Return value */

/* 2148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_State */

/* 2154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2162 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2184 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 2192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0xa ),	/* 10 */
/* 2200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2208 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const StorageProviderStatusUI_MIDL_TYPE_FORMAT_STRING StorageProviderStatusUI__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0xa306c249 ),	/* -1559838135 */
/*  8 */	NdrFcShort( 0x3d66 ),	/* 15718 */
/* 10 */	NdrFcShort( 0x5e70 ),	/* 24176 */
/* 12 */	0x90,		/* 144 */
			0x7,		/* 7 */
/* 14 */	0xe4,		/* 228 */
			0x3d,		/* 61 */
/* 16 */	0xf9,		/* 249 */
			0x60,		/* 96 */
/* 18 */	0x51,		/* 81 */
			0xff,		/* 255 */
/* 20 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 22 */	NdrFcLong( 0xaf86e2e0 ),	/* -1350114592 */
/* 26 */	NdrFcShort( 0xb12d ),	/* -20179 */
/* 28 */	NdrFcShort( 0x4c6a ),	/* 19562 */
/* 30 */	0x9c,		/* 156 */
			0x5a,		/* 90 */
/* 32 */	0xd7,		/* 215 */
			0xaa,		/* 170 */
/* 34 */	0x65,		/* 101 */
			0x10,		/* 16 */
/* 36 */	0x1e,		/* 30 */
			0x90,		/* 144 */
/* 38 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 40 */	NdrFcShort( 0x1c ),	/* Offset= 28 (68) */
/* 42 */	
			0x13, 0x0,	/* FC_OP */
/* 44 */	NdrFcShort( 0xe ),	/* Offset= 14 (58) */
/* 46 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 48 */	NdrFcShort( 0x2 ),	/* 2 */
/* 50 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 52 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 54 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 56 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 58 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (46) */
/* 64 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0xffde ),	/* Offset= -34 (42) */
/* 78 */	
			0x12, 0x0,	/* FC_UP */
/* 80 */	NdrFcShort( 0xffea ),	/* Offset= -22 (58) */
/* 82 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (78) */
/* 92 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 94 */	NdrFcShort( 0x2 ),	/* Offset= 2 (96) */
/* 96 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 98 */	NdrFcLong( 0xc3e0760 ),	/* 205391712 */
/* 102 */	NdrFcShort( 0xd846 ),	/* -10170 */
/* 104 */	NdrFcShort( 0x568f ),	/* 22159 */
/* 106 */	0x94,		/* 148 */
			0x84,		/* 132 */
/* 108 */	0x10,		/* 16 */
			0x5c,		/* 92 */
/* 110 */	0xc5,		/* 197 */
			0x7b,		/* 123 */
/* 112 */	0x50,		/* 80 */
			0x2b,		/* 43 */
/* 114 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 116 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 118 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 124 */	NdrFcLong( 0xab8e5d11 ),	/* -1416733423 */
/* 128 */	NdrFcShort( 0xb0c1 ),	/* -20287 */
/* 130 */	NdrFcShort( 0x5a21 ),	/* 23073 */
/* 132 */	0x95,		/* 149 */
			0xae,		/* 174 */
/* 134 */	0xf1,		/* 241 */
			0x6b,		/* 107 */
/* 136 */	0xf3,		/* 243 */
			0xa3,		/* 163 */
/* 138 */	0x76,		/* 118 */
			0x24,		/* 36 */
/* 140 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 142 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x11, 0x0,	/* FC_RP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 158 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 162 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 164 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 166 */	NdrFcShort( 0xffba ),	/* Offset= -70 (96) */
/* 168 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 170 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 172 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (178) */
/* 178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 180 */	NdrFcLong( 0x9623990b ),	/* -1776051957 */
/* 184 */	NdrFcShort( 0x1b26 ),	/* 6950 */
/* 186 */	NdrFcShort( 0x5f45 ),	/* 24389 */
/* 188 */	0x9f,		/* 159 */
			0x95,		/* 149 */
/* 190 */	0x43,		/* 67 */
			0xd4,		/* 212 */
/* 192 */	0x3b,		/* 59 */
			0x1c,		/* 28 */
/* 194 */	0xfd,		/* 253 */
			0x4c,		/* 76 */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (200) */
/* 200 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 208 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 210 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 214 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (96) */
/* 220 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 222 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 228 */	NdrFcLong( 0x42e170a8 ),	/* 1122070696 */
/* 232 */	NdrFcShort( 0xd66a ),	/* -10646 */
/* 234 */	NdrFcShort( 0x55b1 ),	/* 21937 */
/* 236 */	0xba,		/* 186 */
			0xb5,		/* 181 */
/* 238 */	0x9e,		/* 158 */
			0x4c,		/* 76 */
/* 240 */	0x65,		/* 101 */
			0xd,		/* 13 */
/* 242 */	0x7f,		/* 127 */
			0xfb,		/* 251 */
/* 244 */	
			0x11, 0x0,	/* FC_RP */
/* 246 */	NdrFcShort( 0x2 ),	/* Offset= 2 (248) */
/* 248 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 258 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 262 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 264 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (96) */
/* 268 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 270 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 272 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (278) */
/* 278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 280 */	NdrFcLong( 0x9e365e57 ),	/* -1640604073 */
/* 284 */	NdrFcShort( 0x48b2 ),	/* 18610 */
/* 286 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 288 */	0x95,		/* 149 */
			0x6f,		/* 111 */
/* 290 */	0xc7,		/* 199 */
			0x38,		/* 56 */
/* 292 */	0x51,		/* 81 */
			0x20,		/* 32 */
/* 294 */	0xbb,		/* 187 */
			0xfc,		/* 252 */
/* 296 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (300) */
/* 300 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 302 */	NdrFcLong( 0xc3e0760 ),	/* 205391712 */
/* 306 */	NdrFcShort( 0xd846 ),	/* -10170 */
/* 308 */	NdrFcShort( 0x568f ),	/* 22159 */
/* 310 */	0x94,		/* 148 */
			0x84,		/* 132 */
/* 312 */	0x10,		/* 16 */
			0x5c,		/* 92 */
/* 314 */	0xc5,		/* 197 */
			0x7b,		/* 123 */
/* 316 */	0x50,		/* 80 */
			0x2b,		/* 43 */
/* 318 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 324 */	NdrFcLong( 0xba6295c3 ),	/* -1167944253 */
/* 328 */	NdrFcShort( 0x312e ),	/* 12590 */
/* 330 */	NdrFcShort( 0x544f ),	/* 21583 */
/* 332 */	0x9f,		/* 159 */
			0xd5,		/* 213 */
/* 334 */	0x1f,		/* 31 */
			0x81,		/* 129 */
/* 336 */	0xb2,		/* 178 */
			0x1f,		/* 31 */
/* 338 */	0x36,		/* 54 */
			0x49,		/* 73 */
/* 340 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 342 */	NdrFcShort( 0x2 ),	/* Offset= 2 (344) */
/* 344 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 346 */	NdrFcLong( 0xef38e591 ),	/* -281483887 */
/* 350 */	NdrFcShort( 0xa7cb ),	/* -22581 */
/* 352 */	NdrFcShort( 0x5e7d ),	/* 24189 */
/* 354 */	0x9b,		/* 155 */
			0x5e,		/* 94 */
/* 356 */	0x22,		/* 34 */
			0x74,		/* 116 */
/* 358 */	0x98,		/* 152 */
			0x42,		/* 66 */
/* 360 */	0x69,		/* 105 */
			0x7c,		/* 124 */
/* 362 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 364 */	NdrFcShort( 0x2 ),	/* Offset= 2 (366) */
/* 366 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 368 */	NdrFcLong( 0x12974ca5 ),	/* 311905445 */
/* 372 */	NdrFcShort( 0x6ab5 ),	/* 27317 */
/* 374 */	NdrFcShort( 0x5f80 ),	/* 24448 */
/* 376 */	0xa3,		/* 163 */
			0x79,		/* 121 */
/* 378 */	0x66,		/* 102 */
			0x38,		/* 56 */
/* 380 */	0xf9,		/* 249 */
			0x73,		/* 115 */
/* 382 */	0x4f,		/* 79 */
			0x3a,		/* 58 */
/* 384 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (388) */
/* 388 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 390 */	NdrFcLong( 0xd6b6a758 ),	/* -692672680 */
/* 394 */	NdrFcShort( 0x198d ),	/* 6541 */
/* 396 */	NdrFcShort( 0x5b80 ),	/* 23424 */
/* 398 */	0x97,		/* 151 */
			0x7f,		/* 127 */
/* 400 */	0x5f,		/* 95 */
			0xf7,		/* 247 */
/* 402 */	0x3d,		/* 61 */
			0xa3,		/* 163 */
/* 404 */	0x31,		/* 49 */
			0x18,		/* 24 */
/* 406 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 408 */	NdrFcLong( 0x2beff916 ),	/* 737147158 */
/* 412 */	NdrFcShort( 0xed7d ),	/* -4739 */
/* 414 */	NdrFcShort( 0x5a2f ),	/* 23087 */
/* 416 */	0x83,		/* 131 */
			0x43,		/* 67 */
/* 418 */	0x73,		/* 115 */
			0xfe,		/* 254 */
/* 420 */	0x16,		/* 22 */
			0x9e,		/* 158 */
/* 422 */	0x31,		/* 49 */
			0xd2,		/* 210 */
/* 424 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 434 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 436 */	NdrFcShort( 0x2 ),	/* Offset= 2 (438) */
/* 438 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 440 */	NdrFcLong( 0xa306c249 ),	/* -1559838135 */
/* 444 */	NdrFcShort( 0x3d66 ),	/* 15718 */
/* 446 */	NdrFcShort( 0x5e70 ),	/* 24176 */
/* 448 */	0x90,		/* 144 */
			0x7,		/* 7 */
/* 450 */	0xe4,		/* 228 */
			0x3d,		/* 61 */
/* 452 */	0xf9,		/* 249 */
			0x60,		/* 96 */
/* 454 */	0x51,		/* 81 */
			0xff,		/* 255 */

			0x0
        }
    };

XFG_TRAMPOLINES(HSTRING)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            XFG_TRAMPOLINE_FPTR(HSTRING_UserSize)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserMarshal)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserUnmarshal)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2381, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable, ver. 0.0,
   GUID={0x2beff916,0xed7d,0x5a2f,{0x83,0x43,0x73,0xfe,0x16,0x9e,0x31,0xd2}} */

#pragma code_seg(".orpc")
static const unsigned short __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FormatStringOffsetTable[] =
    {
    0
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, ver. 0.0,
   GUID={0xEF38E591,0xA7CB,0x5E7D,{0x9B,0x5E,0x22,0x74,0x98,0x42,0x69,0x7C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    44,
    82,
    120,
    158
    };



/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, ver. 0.0,
   GUID={0xBA6295C3,0x312E,0x544F,{0x9F,0xD5,0x1F,0x81,0xB2,0x1F,0x36,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    196,
    234,
    272,
    310,
    348,
    386,
    424,
    462
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2382, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x9623990b,0x1b26,0x5f45,{0x9f,0x95,0x43,0xd4,0x3b,0x1c,0xfd,0x4c}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    500,
    538,
    576,
    614
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2383, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x2042aa99,0x0a84,0x5d22,{0xb6,0xae,0xf7,0xfd,0x19,0xb4,0xe2,0x36}} */

#pragma code_seg(".orpc")
static const unsigned short __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    664
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2384, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x42e170a8,0xd66a,0x55b1,{0xba,0xb5,0x9e,0x4c,0x65,0x0d,0x7f,0xfb}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    702,
    746,
    784,
    834
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2385, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x12974ca5,0x6ab5,0x5f80,{0xa3,0x79,0x66,0x38,0xf9,0x73,0x4f,0x3a}} */

#pragma code_seg(".orpc")
static const unsigned short __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    702,
    746,
    890,
    928,
    978,
    1022,
    1066,
    1104,
    1142,
    1174,
    1206,
    1262
    };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, ver. 0.0,
   GUID={0xD6B6A758,0x198D,0x5B80,{0x97,0x7F,0x5F,0xF7,0x3D,0xA3,0x31,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1306,
    1344,
    1382,
    1420,
    1458,
    1496,
    1534,
    1572,
    1610,
    1648,
    1686,
    1724,
    1762,
    1800,
    1838,
    1876
    };



/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource, ver. 0.0,
   GUID={0xA306C249,0x3D66,0x5E70,{0x90,0x07,0xE4,0x3D,0xF9,0x60,0x51,0xFF}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1914,
    1952,
    1996
    };



/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory, ver. 0.0,
   GUID={0x12E46B74,0x4E5A,0x58D1,{0xA6,0x2F,0x03,0x76,0xE8,0xEE,0x7D,0xD8}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2034
    };



/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, ver. 0.0,
   GUID={0x0C3E0760,0xD846,0x568F,{0x94,0x84,0x10,0x5C,0xC5,0x7B,0x50,0x2B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    44,
    2078,
    2116,
    2154,
    2192
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)



extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag296_t;
extern const __midl_frag296_t __midl_frag296;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag292_t;
extern const __midl_frag292_t __midl_frag292;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag291_t;
extern const __midl_frag291_t __midl_frag291;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag289_t;
extern const __midl_frag289_t __midl_frag289;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag288_t;
extern const __midl_frag288_t __midl_frag288;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag287_t;
extern const __midl_frag287_t __midl_frag287;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag286_t;
extern const __midl_frag286_t __midl_frag286;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag284_t;
extern const __midl_frag284_t __midl_frag284;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag283_t;
extern const __midl_frag283_t __midl_frag283;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag274_t;
extern const __midl_frag274_t __midl_frag274;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag273_t;
extern const __midl_frag273_t __midl_frag273;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag272_t;
extern const __midl_frag272_t __midl_frag272;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag271_t;
extern const __midl_frag271_t __midl_frag271;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag269_t;
extern const __midl_frag269_t __midl_frag269;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag264_t;
extern const __midl_frag264_t __midl_frag264;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag262_t;
extern const __midl_frag262_t __midl_frag262;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag261_t;
extern const __midl_frag261_t __midl_frag261;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag259_t;
extern const __midl_frag259_t __midl_frag259;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag258_t;
extern const __midl_frag258_t __midl_frag258;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag257_t;
extern const __midl_frag257_t __midl_frag257;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag252_t;
extern const __midl_frag252_t __midl_frag252;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag248_t;
extern const __midl_frag248_t __midl_frag248;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag247_t;
extern const __midl_frag247_t __midl_frag247;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag245_t;
extern const __midl_frag245_t __midl_frag245;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag239_t;
extern const __midl_frag239_t __midl_frag239;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag238_t;
extern const __midl_frag238_t __midl_frag238;

typedef 
NDR64_FORMAT_CHAR
__midl_frag237_t;
extern const __midl_frag237_t __midl_frag237;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag236_t;
extern const __midl_frag236_t __midl_frag236;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag226_t;
extern const __midl_frag226_t __midl_frag226;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag172_t;
extern const __midl_frag172_t __midl_frag172;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag171_t;
extern const __midl_frag171_t __midl_frag171;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
}
__midl_frag169_t;
extern const __midl_frag169_t __midl_frag169;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag168_t;
extern const __midl_frag168_t __midl_frag168;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag165_t;
extern const __midl_frag165_t __midl_frag165;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
NDR64_FORMAT_CHAR
__midl_frag142_t;
extern const __midl_frag142_t __midl_frag142;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
NDR64_FORMAT_CHAR
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
NDR64_FORMAT_CHAR
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag118_t;
extern const __midl_frag118_t __midl_frag118;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag114_t;
extern const __midl_frag114_t __midl_frag114;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag112_t;
extern const __midl_frag112_t __midl_frag112;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
NDR64_FORMAT_CHAR
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
NDR64_FORMAT_CHAR
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
NDR64_FORMAT_CHAR
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
NDR64_FORMAT_CHAR
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
NDR64_FORMAT_CHAR
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
NDR64_FORMAT_CHAR
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
NDR64_FORMAT_CHAR
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
NDR64_FORMAT_CHAR
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
NDR64_FORMAT_CHAR
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
NDR64_FORMAT_CHAR
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
NDR64_FORMAT_CHAR
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag46_t;
extern const __midl_frag46_t __midl_frag46;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
NDR64_FORMAT_CHAR
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
NDR64_FORMAT_CHAR
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag296_t __midl_frag296 =
0x5    /* FC64_INT32 */;

static const __midl_frag295_t __midl_frag295 =
{ 
/* Invoke */
    { 
    /* Invoke */      /* procedure Invoke */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag292_t __midl_frag292 =
{ 
/* *__x_ABI_CWindows_CStorage_CProvider_CStorageProviderUICommandState */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag296
};

static const __midl_frag291_t __midl_frag291 =
{ 
/* get_State */
    { 
    /* get_State */      /* procedure get_State */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag296,
        { 
        /* value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag289_t __midl_frag289 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x9e365e57,
        0x48b2,
        0x4160,
        {0x95, 0x6f, 0xc7, 0x38, 0x51, 0x20, 0xbb, 0xfc}
    }
};

static const __midl_frag288_t __midl_frag288 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag289
};

static const __midl_frag287_t __midl_frag287 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag288
};

static const __midl_frag286_t __midl_frag286 =
{ 
/* get_Icon */
    { 
    /* get_Icon */      /* procedure get_Icon */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag287,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag284_t __midl_frag284 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag283_t __midl_frag283 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag284
};

static const __midl_frag282_t __midl_frag282 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag283
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* get_Description */
    { 
    /* get_Description */      /* procedure get_Description */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag283,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag274_t __midl_frag274 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xa306c249,
        0x3d66,
        0x5e70,
        {0x90, 0x07, 0xe4, 0x3d, 0xf9, 0x60, 0x51, 0xff}
    }
};

static const __midl_frag273_t __midl_frag273 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag274
};

static const __midl_frag272_t __midl_frag272 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag273
};

static const __midl_frag271_t __midl_frag271 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag270_t __midl_frag270 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag271
};

static const __midl_frag269_t __midl_frag269 =
{ 
/* GetStatusUISource */
    { 
    /* GetStatusUISource */      /* procedure GetStatusUISource */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* syncRootId */      /* parameter syncRootId */
        &__midl_frag270,
        { 
        /* syncRootId */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag272,
        { 
        /* result */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* remove_StatusUIChanged */
    { 
    /* remove_StatusUIChanged */      /* procedure remove_StatusUIChanged */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag265,
        { 
        /* token */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag265_t __midl_frag265 =
{ 
/* EventRegistrationToken */
    { 
    /* EventRegistrationToken */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* EventRegistrationToken */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag264_t __midl_frag264 =
{ 
/* *EventRegistrationToken */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag265
};

static const __midl_frag263_t __midl_frag263 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x2beff916,
        0xed7d,
        0x5a2f,
        {0x83, 0x43, 0x73, 0xfe, 0x16, 0x9e, 0x31, 0xd2}
    }
};

static const __midl_frag262_t __midl_frag262 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag263
};

static const __midl_frag261_t __midl_frag261 =
{ 
/* add_StatusUIChanged */
    { 
    /* add_StatusUIChanged */      /* procedure add_StatusUIChanged */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handler */      /* parameter handler */
        &__midl_frag262,
        { 
        /* handler */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag265,
        { 
        /* token */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag259_t __midl_frag259 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xd6b6a758,
        0x198d,
        0x5b80,
        {0x97, 0x7f, 0x5f, 0xf7, 0x3d, 0xa3, 0x31, 0x18}
    }
};

static const __midl_frag258_t __midl_frag258 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag259
};

static const __midl_frag257_t __midl_frag257 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag258
};

static const __midl_frag256_t __midl_frag256 =
{ 
/* GetStatusUI */
    { 
    /* GetStatusUI */      /* procedure GetStatusUI */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag257,
        { 
        /* result */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag254_t __midl_frag254 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x12974ca5,
        0x6ab5,
        0x5f80,
        {0xa3, 0x79, 0x66, 0x38, 0xf9, 0x73, 0x4f, 0x3a}
    }
};

static const __midl_frag253_t __midl_frag253 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag254
};

static const __midl_frag252_t __midl_frag252 =
{ 
/* put_ProviderSecondaryCommands */
    { 
    /* put_ProviderSecondaryCommands */      /* procedure put_ProviderSecondaryCommands */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag253,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag248_t __midl_frag248 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag253
};

static const __midl_frag247_t __midl_frag247 =
{ 
/* get_ProviderSecondaryCommands */
    { 
    /* get_ProviderSecondaryCommands */      /* procedure get_ProviderSecondaryCommands */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag248,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag245_t __midl_frag245 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag244_t __midl_frag244 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag245
};

static const __midl_frag243_t __midl_frag243 =
{ 
/* put_ProviderPrimaryCommand */
    { 
    /* put_ProviderPrimaryCommand */      /* procedure put_ProviderPrimaryCommand */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag244,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag239_t __midl_frag239 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag244
};

static const __midl_frag238_t __midl_frag238 =
{ 
/* get_ProviderPrimaryCommand */
    { 
    /* get_ProviderPrimaryCommand */      /* procedure get_ProviderPrimaryCommand */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag239,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag237_t __midl_frag237 =
0x5    /* FC64_INT32 */;

static const __midl_frag236_t __midl_frag236 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xef38e591,
        0xa7cb,
        0x5e7d,
        {0x9b, 0x5e, 0x22, 0x74, 0x98, 0x42, 0x69, 0x7c}
    }
};

static const __midl_frag235_t __midl_frag235 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag236
};

static const __midl_frag234_t __midl_frag234 =
{ 
/* put_MoreInfoUI */
    { 
    /* put_MoreInfoUI */      /* procedure put_MoreInfoUI */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag235,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag237,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag235
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* get_MoreInfoUI */
    { 
    /* get_MoreInfoUI */      /* procedure get_MoreInfoUI */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag230,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag227_t __midl_frag227 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xba6295c3,
        0x312e,
        0x544f,
        {0x9f, 0xd5, 0x1f, 0x81, 0xb2, 0x1f, 0x36, 0x49}
    }
};

static const __midl_frag226_t __midl_frag226 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag227
};

static const __midl_frag225_t __midl_frag225 =
{ 
/* put_QuotaUI */
    { 
    /* put_QuotaUI */      /* procedure put_QuotaUI */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag226,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag226
};

static const __midl_frag220_t __midl_frag220 =
{ 
/* get_QuotaUI */
    { 
    /* get_QuotaUI */      /* procedure get_QuotaUI */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag221,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag218_t __midl_frag218 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag218
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* put_SyncStatusCommand */
    { 
    /* put_SyncStatusCommand */      /* procedure put_SyncStatusCommand */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag217,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag212_t __midl_frag212 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag217
};

static const __midl_frag211_t __midl_frag211 =
{ 
/* get_SyncStatusCommand */
    { 
    /* get_SyncStatusCommand */      /* procedure get_SyncStatusCommand */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag212,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* put_ProviderStateIcon */
    { 
    /* put_ProviderStateIcon */      /* procedure put_ProviderStateIcon */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag288,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag198_t __midl_frag198 =
{ 
/* put_ProviderStateLabel */
    { 
    /* put_ProviderStateLabel */      /* procedure put_ProviderStateLabel */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag270,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* put_ProviderState */
    { 
    /* put_ProviderState */      /* procedure put_ProviderState */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag296,
        { 
        /* value */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag181_t __midl_frag181 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag180_t __midl_frag180 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag181
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag218
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag217
    }
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* ReplaceAll */
    { 
    /* ReplaceAll */      /* procedure ReplaceAll */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* count */      /* parameter count */
        &__midl_frag296,
        { 
        /* count */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag180,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag172_t __midl_frag172 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag171_t __midl_frag171 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag170_t __midl_frag170 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag169_t __midl_frag169 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag170,
        &__midl_frag171
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag218
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag168_t __midl_frag168 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag169
};

static const __midl_frag165_t __midl_frag165 =
{ 
/* GetMany */
    { 
    /* GetMany */      /* procedure GetMany */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* startIndex */      /* parameter startIndex */
        &__midl_frag296,
        { 
        /* startIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* capacity */      /* parameter capacity */
        &__midl_frag296,
        { 
        /* capacity */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* items */      /* parameter items */
        &__midl_frag169,
        { 
        /* items */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* actual */      /* parameter actual */
        &__midl_frag296,
        { 
        /* actual */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* InsertAt */
    { 
    /* InsertAt */      /* procedure InsertAt */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag296,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag217,
        { 
        /* item */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag142_t __midl_frag142 =
0x2    /* FC64_INT8 */;

static const __midl_frag141_t __midl_frag141 =
{ 
/* *boolean */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag142
};

static const __midl_frag136_t __midl_frag136 =
{ 
/* IndexOf */
    { 
    /* IndexOf */      /* procedure IndexOf */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 69 /* 0x45 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag217,
        { 
        /* item */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag296,
        { 
        /* index */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* found */      /* parameter found */
        &__midl_frag142,
        { 
        /* found */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag134_t __midl_frag134 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x42e170a8,
        0xd66a,
        0x55b1,
        {0xba, 0xb5, 0x9e, 0x4c, 0x65, 0x0d, 0x7f, 0xfb}
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag134
};

static const __midl_frag132_t __midl_frag132 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag133
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* GetView */
    { 
    /* GetView */      /* procedure GetView */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* view */      /* parameter view */
        &__midl_frag132,
        { 
        /* view */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag296,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag130_t __midl_frag130 =
0x5    /* FC64_INT32 */;

static const __midl_frag128_t __midl_frag128 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag130
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* get_Size */
    { 
    /* get_Size */      /* procedure get_Size */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* size */      /* parameter size */
        &__midl_frag130,
        { 
        /* size */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag130,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag126_t __midl_frag126 =
0x5    /* FC64_INT32 */;

static const __midl_frag125_t __midl_frag125 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag125
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag124
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* GetAt */
    { 
    /* GetAt */      /* procedure GetAt */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag126,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag123,
        { 
        /* item */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag126,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag118_t __midl_frag118 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag126
};

static const __midl_frag116_t __midl_frag116 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag115_t __midl_frag115 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag114_t __midl_frag114 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag114,
        &__midl_frag115
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag125
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag112_t __midl_frag112 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* GetMany */
    { 
    /* GetMany */      /* procedure GetMany */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* startIndex */      /* parameter startIndex */
        &__midl_frag126,
        { 
        /* startIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* capacity */      /* parameter capacity */
        &__midl_frag126,
        { 
        /* capacity */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* items */      /* parameter items */
        &__midl_frag113,
        { 
        /* items */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* actual */      /* parameter actual */
        &__midl_frag126,
        { 
        /* actual */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag126,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag107_t __midl_frag107 =
0x2    /* FC64_INT8 */;

static const __midl_frag106_t __midl_frag106 =
{ 
/* *boolean */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag107
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* IndexOf */
    { 
    /* IndexOf */      /* procedure IndexOf */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 69 /* 0x45 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag124,
        { 
        /* item */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag126,
        { 
        /* index */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* found */      /* parameter found */
        &__midl_frag107,
        { 
        /* found */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag126,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag100_t __midl_frag100 =
0x5    /* FC64_INT32 */;

static const __midl_frag98_t __midl_frag98 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag100
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* get_Size */
    { 
    /* get_Size */      /* procedure get_Size */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* size */      /* parameter size */
        &__midl_frag100,
        { 
        /* size */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag100,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag96_t __midl_frag96 =
0x5    /* FC64_INT32 */;

static const __midl_frag95_t __midl_frag95 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag94_t __midl_frag94 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag95
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag94
};

static const __midl_frag91_t __midl_frag91 =
{ 
/* GetAt */
    { 
    /* GetAt */      /* procedure GetAt */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag96,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag93,
        { 
        /* item */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag96,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x9623990b,
        0x1b26,
        0x5f45,
        {0x9f, 0x95, 0x43, 0xd4, 0x3b, 0x1c, 0xfd, 0x4c}
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag89
};

static const __midl_frag87_t __midl_frag87 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag88
};

static const __midl_frag86_t __midl_frag86 =
{ 
/* First */
    { 
    /* First */      /* procedure First */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* first */      /* parameter first */
        &__midl_frag87,
        { 
        /* first */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag96,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag85_t __midl_frag85 =
0x5    /* FC64_INT32 */;

static const __midl_frag83_t __midl_frag83 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag85
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag80_t __midl_frag80 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag79,
        &__midl_frag80
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag82
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag78
};

static const __midl_frag75_t __midl_frag75 =
{ 
/* GetMany */
    { 
    /* GetMany */      /* procedure GetMany */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* capacity */      /* parameter capacity */
        &__midl_frag85,
        { 
        /* capacity */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* items */      /* parameter items */
        &__midl_frag78,
        { 
        /* items */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* actual */      /* parameter actual */
        &__midl_frag85,
        { 
        /* actual */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag85,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag73_t __midl_frag73 =
0x2    /* FC64_INT8 */;

static const __midl_frag72_t __midl_frag72 =
{ 
/* *boolean */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag73
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* MoveNext */
    { 
    /* MoveNext */      /* procedure MoveNext */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 37 /* 0x25 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hasCurrent */      /* parameter hasCurrent */
        &__midl_frag73,
        { 
        /* hasCurrent */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag85,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag70_t __midl_frag70 =
0x5    /* FC64_INT32 */;

static const __midl_frag69_t __midl_frag69 =
0x2    /* FC64_INT8 */;

static const __midl_frag68_t __midl_frag68 =
{ 
/* *boolean */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag69
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* get_HasCurrent */
    { 
    /* get_HasCurrent */      /* procedure get_HasCurrent */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 37 /* 0x25 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hasCurrent */      /* parameter hasCurrent */
        &__midl_frag69,
        { 
        /* hasCurrent */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag70,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag66_t __midl_frag66 =
0x5    /* FC64_INT32 */;

static const __midl_frag65_t __midl_frag65 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag65
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* get_Current */
    { 
    /* get_Current */      /* procedure get_Current */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* current */      /* parameter current */
        &__midl_frag63,
        { 
        /* current */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag66,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag61_t __midl_frag61 =
0x5    /* FC64_INT32 */;

static const __midl_frag60_t __midl_frag60 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xab8e5d11,
        0xb0c1,
        0x5a21,
        {0x95, 0xae, 0xf1, 0x6b, 0xf3, 0xa3, 0x76, 0x24}
    }
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag60
};

static const __midl_frag58_t __midl_frag58 =
{ 
/* put_QuotaUsedColor */
    { 
    /* put_QuotaUsedColor */      /* procedure put_QuotaUsedColor */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag59,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag61,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag57_t __midl_frag57 =
0x5    /* FC64_INT32 */;

static const __midl_frag56_t __midl_frag56 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xab8e5d11,
        0xb0c1,
        0x5a21,
        {0x95, 0xae, 0xf1, 0x6b, 0xf3, 0xa3, 0x76, 0x24}
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag56
};

static const __midl_frag54_t __midl_frag54 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag55
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* get_QuotaUsedColor */
    { 
    /* get_QuotaUsedColor */      /* procedure get_QuotaUsedColor */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag54,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag57,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag52_t __midl_frag52 =
0x5    /* FC64_INT32 */;

static const __midl_frag51_t __midl_frag51 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag50_t __midl_frag50 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag51
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* put_QuotaUsedLabel */
    { 
    /* put_QuotaUsedLabel */      /* procedure put_QuotaUsedLabel */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag50,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag46_t __midl_frag46 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag47
};

static const __midl_frag45_t __midl_frag45 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag46
};

static const __midl_frag44_t __midl_frag44 =
{ 
/* get_QuotaUsedLabel */
    { 
    /* get_QuotaUsedLabel */      /* procedure get_QuotaUsedLabel */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag46,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag42_t __midl_frag42 =
0x7    /* FC64_INT64 */;

static const __midl_frag41_t __midl_frag41 =
{ 
/* put_QuotaUsedInBytes */
    { 
    /* put_QuotaUsedInBytes */      /* procedure put_QuotaUsedInBytes */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag42,
        { 
        /* value */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* *UINT64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag42
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* get_QuotaUsedInBytes */
    { 
    /* get_QuotaUsedInBytes */      /* procedure get_QuotaUsedInBytes */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag42,
        { 
        /* value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0c3e0760,
        0xd846,
        0x568f,
        {0x94, 0x84, 0x10, 0x5c, 0xc5, 0x7b, 0x50, 0x2b}
    }
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag28
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* put_Command */
    { 
    /* put_Command */      /* procedure put_Command */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag27,
        { 
        /* value */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag27
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* get_Command */
    { 
    /* get_Command */      /* procedure get_Command */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag22,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag15_t __midl_frag15 =
0x4    /* FC64_INT16 */;

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag14
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag15
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* FLAGGED_WORD_BLOB */
    { 
    /* FLAGGED_WORD_BLOB */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FLAGGED_WORD_BLOB */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag13
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* get_Message */
    { 
    /* get_Message */      /* procedure get_Message */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag46,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xaf86e2e0,
        0xb12d,
        0x4c6a,
        {0x9c, 0x5a, 0xd7, 0xaa, 0x65, 0x10, 0x1e, 0x90}
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xa306c249,
        0x3d66,
        0x5e70,
        {0x90, 0x07, 0xe4, 0x3d, 0xf9, 0x60, 0x51, 0xff}
    }
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Invoke */
    { 
    /* Invoke */      /* procedure Invoke */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* sender */      /* parameter sender */
        &__midl_frag3,
        { 
        /* sender */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* e */      /* parameter e */
        &__midl_frag5,
        { 
        /* e */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag52,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


XFG_TRAMPOLINES64(HSTRING)

static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            XFG_TRAMPOLINE_FPTR(HSTRING_UserSize64)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserMarshal64)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserUnmarshal64)
            ,XFG_TRAMPOLINE_FPTR(HSTRING_UserFree64)
            
            }
            

        };



/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2381, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable, ver. 0.0,
   GUID={0x2beff916,0xed7d,0x5a2f,{0x83,0x43,0x73,0xfe,0x16,0x9e,0x31,0xd2}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_Ndr64ProcTable[] =
    {
    &__midl_frag2
    };


static const MIDL_SYNTAX_INFO __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(4) ___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableProxyVtbl = 
{
    &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ProxyInfo,
    &IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable::Invoke */
};

const CInterfaceStubVtbl ___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableStubVtbl =
{
    &IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable,
    &__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI, ver. 0.0,
   GUID={0xEF38E591,0xA7CB,0x5E7D,{0x9B,0x5E,0x22,0x74,0x98,0x42,0x69,0x7C}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag8,
    &__midl_frag49,
    &__midl_frag21,
    &__midl_frag26
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI::get_Message */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI::put_Message */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI::get_Command */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI::put_Command */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_ServerInfo,
    10,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI, ver. 0.0,
   GUID={0xBA6295C3,0x312E,0x544F,{0x9F,0xD5,0x1F,0x81,0xB2,0x1F,0x36,0x49}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag37,
    &__midl_frag41,
    &__midl_frag37,
    &__midl_frag41,
    &__midl_frag44,
    &__midl_frag49,
    &__midl_frag53,
    &__midl_frag58
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::get_QuotaTotalInBytes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::put_QuotaTotalInBytes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::get_QuotaUsedInBytes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::put_QuotaUsedInBytes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::get_QuotaUsedLabel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::put_QuotaUsedLabel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::get_QuotaUsedColor */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI::put_QuotaUsedColor */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_ServerInfo,
    14,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2382, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x9623990b,0x1b26,0x5f45,{0x9f,0x95,0x43,0xd4,0x3b,0x1c,0xfd,0x4c}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag62,
    &__midl_frag67,
    &__midl_frag71,
    &__midl_frag75
    };


static const MIDL_SYNTAX_INFO __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) ___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl = 
{
    &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo,
    &IID___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::get_Current */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::get_HasCurrent */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::MoveNext */ ,
    (void *) (INT_PTR) -1 /* __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetMany */
};


static const PRPC_STUB_FUNCTION __FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl =
{
    &IID___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo,
    10,
    &__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2383, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x2042aa99,0x0a84,0x5d22,{0xb6,0xae,0xf7,0xfd,0x19,0xb4,0xe2,0x36}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag86
    };


static const MIDL_SYNTAX_INFO __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) ___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl = 
{
    &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo,
    &IID___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::First */
};


static const PRPC_STUB_FUNCTION __FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3
};

CInterfaceStubVtbl ___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl =
{
    &IID___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo,
    7,
    &__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2384, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x42e170a8,0xd66a,0x55b1,{0xba,0xb5,0x9e,0x4c,0x65,0x0d,0x7f,0xfb}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag91,
    &__midl_frag97,
    &__midl_frag101,
    &__midl_frag109
    };


static const MIDL_SYNTAX_INFO __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) ___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl = 
{
    &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo,
    &IID___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetMany */
};


static const PRPC_STUB_FUNCTION __FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl =
{
    &IID___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo,
    10,
    &__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI2Eidl_0000_2385, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand, ver. 0.0,
   GUID={0x12974ca5,0x6ab5,0x5f80,{0xa3,0x79,0x66,0x38,0xf9,0x73,0x4f,0x3a}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag121,
    &__midl_frag127,
    &__midl_frag131,
    &__midl_frag136,
    &__midl_frag149,
    &__midl_frag149,
    &__midl_frag190,
    &__midl_frag216,
    &__midl_frag295,
    &__midl_frag295,
    &__midl_frag165,
    &__midl_frag177
    };


static const MIDL_SYNTAX_INFO __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(18) ___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl = 
{
    &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ProxyInfo,
    &IID___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::get_Size */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetView */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::IndexOf */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::SetAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::InsertAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::RemoveAt */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::Append */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::RemoveAtEnd */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::Clear */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::GetMany */ ,
    (void *) (INT_PTR) -1 /* __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand::ReplaceAll */
};


static const PRPC_STUB_FUNCTION __FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl =
{
    &IID___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand,
    &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_ServerInfo,
    18,
    &__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_StorageProviderStatusUI_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI, ver. 0.0,
   GUID={0xD6B6A758,0x198D,0x5B80,{0x97,0x7F,0x5F,0xF7,0x3D,0xA3,0x31,0x18}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag291,
    &__midl_frag190,
    &__midl_frag281,
    &__midl_frag198,
    &__midl_frag286,
    &__midl_frag207,
    &__midl_frag211,
    &__midl_frag216,
    &__midl_frag220,
    &__midl_frag225,
    &__midl_frag229,
    &__midl_frag234,
    &__midl_frag238,
    &__midl_frag243,
    &__midl_frag247,
    &__midl_frag252
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(22) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_ProviderState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_ProviderState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_ProviderStateLabel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_ProviderStateLabel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_ProviderStateIcon */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_ProviderStateIcon */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_SyncStatusCommand */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_SyncStatusCommand */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_QuotaUI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_QuotaUI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_MoreInfoUI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_MoreInfoUI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_ProviderPrimaryCommand */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_ProviderPrimaryCommand */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::get_ProviderSecondaryCommands */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI::put_ProviderSecondaryCommands */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_ServerInfo,
    22,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource, ver. 0.0,
   GUID={0xA306C249,0x3D66,0x5E70,{0x90,0x07,0xE4,0x3D,0xF9,0x60,0x51,0xFF}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag256,
    &__midl_frag261,
    &__midl_frag267
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource::GetStatusUI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource::add_StatusUIChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource::remove_StatusUIChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_ServerInfo,
    9,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory, ver. 0.0,
   GUID={0x12E46B74,0x4E5A,0x58D1,{0xA6,0x2F,0x03,0x76,0xE8,0xEE,0x7D,0xD8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag269
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory::GetStatusUISource */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_ServerInfo,
    7,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand, ver. 0.0,
   GUID={0x0C3E0760,0xD846,0x568F,{0x94,0x84,0x10,0x5C,0xC5,0x7B,0x50,0x2B}} */

#pragma code_seg(".orpc")
static const FormatInfoRef __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag281,
    &__midl_frag281,
    &__midl_frag286,
    &__midl_frag291,
    &__midl_frag295
    };


static const MIDL_SYNTAX_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ProxyInfo =
    {
    &Object_StubDesc,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    StorageProviderStatusUI__MIDL_ProcFormatString.Format,
    (unsigned short *) &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandProxyVtbl = 
{
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ProxyInfo,
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand::get_Label */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand::get_Description */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand::get_Icon */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand::get_State */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand::Invoke */
};


static const PRPC_STUB_FUNCTION __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl ___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandStubVtbl =
{
    &IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_ServerInfo,
    11,
    &__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    StorageProviderStatusUI__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010272, /* MIDL Version 8.1.626 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _StorageProviderStatusUI_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _StorageProviderStatusUI_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl,
    ( CInterfaceStubVtbl *) &___FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectableStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUIStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommandStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUIStubVtbl,
    ( CInterfaceStubVtbl *) &___FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl,
    ( CInterfaceStubVtbl *) &___FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommandStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUIStubVtbl,
    0
};

PCInterfaceName const _StorageProviderStatusUI_InterfaceNamesList[] = 
{
    "__FIIterator_1_Windows__CStorage__CProvider__CIStorageProviderUICommand",
    "__FITypedEventHandler_2_Windows__CStorage__CProvider__CIStorageProviderStatusUISource_IInspectable",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISource",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUI",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUICommand",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderStatusUISourceFactory",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderMoreInfoUI",
    "__FIIterable_1_Windows__CStorage__CProvider__CIStorageProviderUICommand",
    "__FIVector_1_Windows__CStorage__CProvider__CIStorageProviderUICommand",
    "__FIVectorView_1_Windows__CStorage__CProvider__CIStorageProviderUICommand",
    "__x_ABI_CWindows_CStorage_CProvider_CIStorageProviderQuotaUI",
    0
};

const IID *  const _StorageProviderStatusUI_BaseIIDList[] = 
{
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _StorageProviderStatusUI_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _StorageProviderStatusUI, pIID, n)

int __stdcall _StorageProviderStatusUI_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _StorageProviderStatusUI, 11, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _StorageProviderStatusUI, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _StorageProviderStatusUI, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _StorageProviderStatusUI, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _StorageProviderStatusUI, 11, *pIndex )
    
}

const ExtendedProxyFileInfo StorageProviderStatusUI_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _StorageProviderStatusUI_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _StorageProviderStatusUI_StubVtblList,
    (const PCInterfaceName * ) & _StorageProviderStatusUI_InterfaceNamesList,
    (const IID ** ) & _StorageProviderStatusUI_BaseIIDList,
    & _StorageProviderStatusUI_IID_Lookup, 
    11,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

