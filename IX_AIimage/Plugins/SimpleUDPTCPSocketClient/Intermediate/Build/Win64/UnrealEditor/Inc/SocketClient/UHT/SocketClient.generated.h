// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCKETCLIENT_SocketClient_generated_h
#error "SocketClient.generated.h already included, missing '#pragma once' in SocketClient.h"
#endif
#define SOCKETCLIENT_SocketClient_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics; \
	SOCKETCLIENT_API static class UScriptStruct* StaticStruct();


template<> SOCKETCLIENT_API UScriptStruct* StaticStruct<struct FFileFunctionsSocketClientOpenFile>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics; \
	SOCKETCLIENT_API static class UScriptStruct* StaticStruct();


template<> SOCKETCLIENT_API UScriptStruct* StaticStruct<struct FSocketClientPluginSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h


#define FOREACH_ENUM_EFILEFUNCTIONSSOCKETCLIENTDIRECTORYTYPE(op) \
	op(EFileFunctionsSocketClientDirectoryType::E_gd) \
	op(EFileFunctionsSocketClientDirectoryType::E_ad) 

enum class EFileFunctionsSocketClientDirectoryType : uint8;
template<> struct TIsUEnumClass<EFileFunctionsSocketClientDirectoryType> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<EFileFunctionsSocketClientDirectoryType>();

#define FOREACH_ENUM_EFILEFUNCTIONSSOCKETCLIENTENCODINGOPTIONS(op) \
	op(EFileFunctionsSocketClientEncodingOptions::E_AutoDetect) \
	op(EFileFunctionsSocketClientEncodingOptions::E_ForceAnsi) \
	op(EFileFunctionsSocketClientEncodingOptions::E_ForceUnicode) \
	op(EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8) \
	op(EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8WithoutBOM) 

enum class EFileFunctionsSocketClientEncodingOptions : uint8;
template<> struct TIsUEnumClass<EFileFunctionsSocketClientEncodingOptions> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<EFileFunctionsSocketClientEncodingOptions>();

#define FOREACH_ENUM_ERECEIVEFILTERCLIENT(op) \
	op(EReceiveFilterClient::E_SAB) \
	op(EReceiveFilterClient::E_S) \
	op(EReceiveFilterClient::E_B) 

enum class EReceiveFilterClient : uint8;
template<> struct TIsUEnumClass<EReceiveFilterClient> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<EReceiveFilterClient>();

#define FOREACH_ENUM_ESOCKETPLATFORMCLIENT(op) \
	op(ESocketPlatformClient::E_SSC_SYSTEM) \
	op(ESocketPlatformClient::E_SSC_DEFAULT) \
	op(ESocketPlatformClient::E_SSC_WINDOWS) \
	op(ESocketPlatformClient::E_SSC_MAC) \
	op(ESocketPlatformClient::E_SSC_IOS) \
	op(ESocketPlatformClient::E_SSC_UNIX) \
	op(ESocketPlatformClient::E_SSC_ANDROID) \
	op(ESocketPlatformClient::E_SSC_PS4) \
	op(ESocketPlatformClient::E_SSC_XBOXONE) \
	op(ESocketPlatformClient::E_SSC_HTML5) \
	op(ESocketPlatformClient::E_SSC_SWITCH) 

enum class ESocketPlatformClient : uint8;
template<> struct TIsUEnumClass<ESocketPlatformClient> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketPlatformClient>();

#define FOREACH_ENUM_ESOCKETCLIENTIPTYPE(op) \
	op(ESocketClientIPType::E_ipv4) \
	op(ESocketClientIPType::E_ipv6) 

enum class ESocketClientIPType : uint8;
template<> struct TIsUEnumClass<ESocketClientIPType> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientIPType>();

#define FOREACH_ENUM_ESOCKETCLIENTTCPSEPARATOR(op) \
	op(ESocketClientTCPSeparator::E_None) \
	op(ESocketClientTCPSeparator::E_ByteSeparator) \
	op(ESocketClientTCPSeparator::E_StringSeparator) \
	op(ESocketClientTCPSeparator::E_LengthSeparator) 

enum class ESocketClientTCPSeparator : uint8;
template<> struct TIsUEnumClass<ESocketClientTCPSeparator> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientTCPSeparator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
