// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketClientTCP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCKETCLIENT_SocketClientTCP_generated_h
#error "SocketClientTCP.generated.h already included, missing '#pragma once' in SocketClientTCP.h"
#endif
#define SOCKETCLIENT_SocketClientTCP_generated_h

#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_20_DELEGATE \
struct SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms \
{ \
	bool success; \
	FString message; \
	FString clientConnectionID; \
}; \
static inline void FsocketClientTCPConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& socketClientTCPConnectionEventDelegate, bool success, const FString& message, const FString& clientConnectionID) \
{ \
	SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms Parms; \
	Parms.success=success ? true : false; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	socketClientTCPConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_21_DELEGATE \
struct SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms \
{ \
	FString message; \
	TArray<uint8> byteArray; \
	FString clientConnectionID; \
}; \
static inline void FreceiveTCPMessageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& receiveTCPMessageEventDelegate, const FString& message, TArray<uint8> const& byteArray, const FString& clientConnectionID) \
{ \
	SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.byteArray=byteArray; \
	Parms.clientConnectionID=clientConnectionID; \
	receiveTCPMessageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_22_DELEGATE \
struct SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms \
{ \
	FString clientConnectionID; \
	FString filePath; \
	float percent; \
	float mbit; \
	int64 bytesTransferred; \
	int64 fileSize; \
}; \
static inline void FtransferFileOverTCPProgressEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& transferFileOverTCPProgressEventDelegate, const FString& clientConnectionID, const FString& filePath, float percent, float mbit, int64 bytesTransferred, int64 fileSize) \
{ \
	SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms Parms; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.filePath=filePath; \
	Parms.percent=percent; \
	Parms.mbit=mbit; \
	Parms.bytesTransferred=bytesTransferred; \
	Parms.fileSize=fileSize; \
	transferFileOverTCPProgressEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_23_DELEGATE \
struct SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms \
{ \
	FString message; \
	FString clientConnectionID; \
	FString filePath; \
	bool success; \
}; \
static inline void FfileTransferOverTCPInfoEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& fileTransferOverTCPInfoEventDelegate, const FString& message, const FString& clientConnectionID, const FString& filePath, bool success) \
{ \
	SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.filePath=filePath; \
	Parms.success=success ? true : false; \
	fileTransferOverTCPInfoEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_SPARSE_DATA
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execconnectionEvent); \
	DECLARE_FUNCTION(execfileTransferOverTCPInfoEventDelegate); \
	DECLARE_FUNCTION(exectransferFileOverTCPProgressEventDelegate); \
	DECLARE_FUNCTION(execreceiveTCPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientTCPConnectionEventDelegate);


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execconnectionEvent); \
	DECLARE_FUNCTION(execfileTransferOverTCPInfoEventDelegate); \
	DECLARE_FUNCTION(exectransferFileOverTCPProgressEventDelegate); \
	DECLARE_FUNCTION(execreceiveTCPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientTCPConnectionEventDelegate);


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_ACCESSORS
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketClientTCPClient(); \
	friend struct Z_Construct_UClass_USocketClientTCPClient_Statics; \
public: \
	DECLARE_CLASS(USocketClientTCPClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientTCPClient)


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSocketClientTCPClient(); \
	friend struct Z_Construct_UClass_USocketClientTCPClient_Statics; \
public: \
	DECLARE_CLASS(USocketClientTCPClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientTCPClient)


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientTCPClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientTCPClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientTCPClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientTCPClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientTCPClient(USocketClientTCPClient&&); \
	NO_API USocketClientTCPClient(const USocketClientTCPClient&); \
public: \
	NO_API virtual ~USocketClientTCPClient();


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientTCPClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientTCPClient(USocketClientTCPClient&&); \
	NO_API USocketClientTCPClient(const USocketClientTCPClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientTCPClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientTCPClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientTCPClient) \
	NO_API virtual ~USocketClientTCPClient();


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_12_PROLOG
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_SPARSE_DATA \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_RPC_WRAPPERS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_ACCESSORS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_INCLASS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_SPARSE_DATA \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_ACCESSORS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_INCLASS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SocketClientTCPClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class USocketClientTCPClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientTCP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
