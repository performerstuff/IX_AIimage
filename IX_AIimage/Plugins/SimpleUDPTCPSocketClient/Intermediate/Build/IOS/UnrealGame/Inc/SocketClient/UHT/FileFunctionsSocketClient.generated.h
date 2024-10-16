// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileFunctionsSocketClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFileFunctionsSocketClient;
enum class EFileFunctionsSocketClientDirectoryType : uint8;
enum class EFileFunctionsSocketClientEncodingOptions : uint8;
struct FDateTime;
struct FFileFunctionsSocketClientOpenFile;
#ifdef SOCKETCLIENT_FileFunctionsSocketClient_generated_h
#error "FileFunctionsSocketClient.generated.h already included, missing '#pragma once' in FileFunctionsSocketClient.h"
#endif
#define SOCKETCLIENT_FileFunctionsSocketClient_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcancelReadBytesFromFileInParts); \
	DECLARE_FUNCTION(execreadBytesFromFileInPartsAsync); \
	DECLARE_FUNCTION(execcloseFile); \
	DECLARE_FUNCTION(execaddBytesToFile); \
	DECLARE_FUNCTION(execopenFile); \
	DECLARE_FUNCTION(execint64ToString); \
	DECLARE_FUNCTION(execdecryptMessageWithAES); \
	DECLARE_FUNCTION(execencryptMessageWithAES); \
	DECLARE_FUNCTION(execdecryptFileWithAES); \
	DECLARE_FUNCTION(execencryptFileWithAES); \
	DECLARE_FUNCTION(execgetAllFilesFromDirectory); \
	DECLARE_FUNCTION(execcreateDirectory); \
	DECLARE_FUNCTION(execgetFilenameOnDisk); \
	DECLARE_FUNCTION(execgetAccessTimeStamp); \
	DECLARE_FUNCTION(execsetTimeStamp); \
	DECLARE_FUNCTION(execgetTimeStamp); \
	DECLARE_FUNCTION(execsetReadOnly); \
	DECLARE_FUNCTION(execmoveFile); \
	DECLARE_FUNCTION(execisReadOnly); \
	DECLARE_FUNCTION(execdeleteDirectory); \
	DECLARE_FUNCTION(execdeleteFileAbsolutePath); \
	DECLARE_FUNCTION(execdeleteFile); \
	DECLARE_FUNCTION(execfileSizeAbsolutePath); \
	DECLARE_FUNCTION(execfileSize); \
	DECLARE_FUNCTION(execdirectoryExists); \
	DECLARE_FUNCTION(execfileExistsAbsolutePath); \
	DECLARE_FUNCTION(execfileExists); \
	DECLARE_FUNCTION(execfileToBase64String); \
	DECLARE_FUNCTION(execbase64StringToBytes); \
	DECLARE_FUNCTION(execbytesToBase64String); \
	DECLARE_FUNCTION(execbase64StringToString); \
	DECLARE_FUNCTION(execstringToBase64String); \
	DECLARE_FUNCTION(execgetMD5FromFileAbsolutePath); \
	DECLARE_FUNCTION(execgetMD5FromFile); \
	DECLARE_FUNCTION(execwriteStringToFile); \
	DECLARE_FUNCTION(execreadStringFromFile); \
	DECLARE_FUNCTION(execreadBytesFromFile); \
	DECLARE_FUNCTION(execaddBytesToFileAndCloseIt); \
	DECLARE_FUNCTION(execwriteBytesToFile); \
	DECLARE_FUNCTION(execgetFileFunctionsSocketClientTarget);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcancelReadBytesFromFileInParts); \
	DECLARE_FUNCTION(execreadBytesFromFileInPartsAsync); \
	DECLARE_FUNCTION(execcloseFile); \
	DECLARE_FUNCTION(execaddBytesToFile); \
	DECLARE_FUNCTION(execopenFile); \
	DECLARE_FUNCTION(execint64ToString); \
	DECLARE_FUNCTION(execdecryptMessageWithAES); \
	DECLARE_FUNCTION(execencryptMessageWithAES); \
	DECLARE_FUNCTION(execdecryptFileWithAES); \
	DECLARE_FUNCTION(execencryptFileWithAES); \
	DECLARE_FUNCTION(execgetAllFilesFromDirectory); \
	DECLARE_FUNCTION(execcreateDirectory); \
	DECLARE_FUNCTION(execgetFilenameOnDisk); \
	DECLARE_FUNCTION(execgetAccessTimeStamp); \
	DECLARE_FUNCTION(execsetTimeStamp); \
	DECLARE_FUNCTION(execgetTimeStamp); \
	DECLARE_FUNCTION(execsetReadOnly); \
	DECLARE_FUNCTION(execmoveFile); \
	DECLARE_FUNCTION(execisReadOnly); \
	DECLARE_FUNCTION(execdeleteDirectory); \
	DECLARE_FUNCTION(execdeleteFileAbsolutePath); \
	DECLARE_FUNCTION(execdeleteFile); \
	DECLARE_FUNCTION(execfileSizeAbsolutePath); \
	DECLARE_FUNCTION(execfileSize); \
	DECLARE_FUNCTION(execdirectoryExists); \
	DECLARE_FUNCTION(execfileExistsAbsolutePath); \
	DECLARE_FUNCTION(execfileExists); \
	DECLARE_FUNCTION(execfileToBase64String); \
	DECLARE_FUNCTION(execbase64StringToBytes); \
	DECLARE_FUNCTION(execbytesToBase64String); \
	DECLARE_FUNCTION(execbase64StringToString); \
	DECLARE_FUNCTION(execstringToBase64String); \
	DECLARE_FUNCTION(execgetMD5FromFileAbsolutePath); \
	DECLARE_FUNCTION(execgetMD5FromFile); \
	DECLARE_FUNCTION(execwriteStringToFile); \
	DECLARE_FUNCTION(execreadStringFromFile); \
	DECLARE_FUNCTION(execreadBytesFromFile); \
	DECLARE_FUNCTION(execaddBytesToFileAndCloseIt); \
	DECLARE_FUNCTION(execwriteBytesToFile); \
	DECLARE_FUNCTION(execgetFileFunctionsSocketClientTarget);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileFunctionsSocketClient(); \
	friend struct Z_Construct_UClass_UFileFunctionsSocketClient_Statics; \
public: \
	DECLARE_CLASS(UFileFunctionsSocketClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UFileFunctionsSocketClient)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFileFunctionsSocketClient(); \
	friend struct Z_Construct_UClass_UFileFunctionsSocketClient_Statics; \
public: \
	DECLARE_CLASS(UFileFunctionsSocketClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UFileFunctionsSocketClient)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileFunctionsSocketClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileFunctionsSocketClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileFunctionsSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileFunctionsSocketClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileFunctionsSocketClient(UFileFunctionsSocketClient&&); \
	NO_API UFileFunctionsSocketClient(const UFileFunctionsSocketClient&); \
public: \
	NO_API virtual ~UFileFunctionsSocketClient();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileFunctionsSocketClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileFunctionsSocketClient(UFileFunctionsSocketClient&&); \
	NO_API UFileFunctionsSocketClient(const UFileFunctionsSocketClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileFunctionsSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileFunctionsSocketClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileFunctionsSocketClient) \
	NO_API virtual ~UFileFunctionsSocketClient();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileFunctionsSocketClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class UFileFunctionsSocketClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_FileFunctionsSocketClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
