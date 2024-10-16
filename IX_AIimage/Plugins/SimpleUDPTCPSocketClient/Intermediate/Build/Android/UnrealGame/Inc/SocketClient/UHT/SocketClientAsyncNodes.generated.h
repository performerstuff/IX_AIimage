// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketClientAsyncNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTCPConnectAsyncNode;
class UUDPInitAsyncNode;
enum class EReceiveFilterClient : uint8;
enum class ESocketClientIPType : uint8;
enum class ESocketClientTCPSeparator : uint8;
#ifdef SOCKETCLIENT_SocketClientAsyncNodes_generated_h
#error "SocketClientAsyncNodes.generated.h already included, missing '#pragma once' in SocketClientAsyncNodes.h"
#endif
#define SOCKETCLIENT_SocketClientAsyncNodes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_26_DELEGATE \
struct TCPConnectAsyncNode_eventTCPConnectDelegate_Parms \
{ \
	FString connenctionInfo; \
	FString clientConnectionID; \
	FString messageFromServer; \
	TArray<uint8> byteArrayFromServer; \
}; \
static inline void FTCPConnectDelegate_DelegateWrapper(const FMulticastScriptDelegate& TCPConnectDelegate, const FString& connenctionInfo, const FString& clientConnectionID, const FString& messageFromServer, TArray<uint8> const& byteArrayFromServer) \
{ \
	TCPConnectAsyncNode_eventTCPConnectDelegate_Parms Parms; \
	Parms.connenctionInfo=connenctionInfo; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.messageFromServer=messageFromServer; \
	Parms.byteArrayFromServer=byteArrayFromServer; \
	TCPConnectDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsocketClientTCPConnectionAsyncNode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsocketClientTCPConnectionAsyncNode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTCPConnectAsyncNode(); \
	friend struct Z_Construct_UClass_UTCPConnectAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UTCPConnectAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UTCPConnectAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTCPConnectAsyncNode(); \
	friend struct Z_Construct_UClass_UTCPConnectAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UTCPConnectAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UTCPConnectAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPConnectAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPConnectAsyncNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPConnectAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPConnectAsyncNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPConnectAsyncNode(UTCPConnectAsyncNode&&); \
	NO_API UTCPConnectAsyncNode(const UTCPConnectAsyncNode&); \
public: \
	NO_API virtual ~UTCPConnectAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTCPConnectAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTCPConnectAsyncNode(UTCPConnectAsyncNode&&); \
	NO_API UTCPConnectAsyncNode(const UTCPConnectAsyncNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTCPConnectAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTCPConnectAsyncNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTCPConnectAsyncNode) \
	NO_API virtual ~UTCPConnectAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class UTCPConnectAsyncNode>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_84_DELEGATE \
struct UDPInitAsyncNode_eventUDPInitDelegate_Parms \
{ \
	FString initializationInfo; \
	FString clientConnectionID; \
	FString peerIP; \
	int32 peerPort; \
	FString messageFromServer; \
	TArray<uint8> byteArrayFromServer; \
}; \
static inline void FUDPInitDelegate_DelegateWrapper(const FMulticastScriptDelegate& UDPInitDelegate, const FString& initializationInfo, const FString& clientConnectionID, const FString& peerIP, const int32 peerPort, const FString& messageFromServer, TArray<uint8> const& byteArrayFromServer) \
{ \
	UDPInitAsyncNode_eventUDPInitDelegate_Parms Parms; \
	Parms.initializationInfo=initializationInfo; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.peerIP=peerIP; \
	Parms.peerPort=peerPort; \
	Parms.messageFromServer=messageFromServer; \
	Parms.byteArrayFromServer=byteArrayFromServer; \
	UDPInitDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsocketClientInitUDPReceiverAsyncNode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsocketClientInitUDPReceiverAsyncNode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUDPInitAsyncNode(); \
	friend struct Z_Construct_UClass_UUDPInitAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UUDPInitAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UUDPInitAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUUDPInitAsyncNode(); \
	friend struct Z_Construct_UClass_UUDPInitAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UUDPInitAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(UUDPInitAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPInitAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPInitAsyncNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPInitAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPInitAsyncNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPInitAsyncNode(UUDPInitAsyncNode&&); \
	NO_API UUDPInitAsyncNode(const UUDPInitAsyncNode&); \
public: \
	NO_API virtual ~UUDPInitAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPInitAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPInitAsyncNode(UUDPInitAsyncNode&&); \
	NO_API UUDPInitAsyncNode(const UUDPInitAsyncNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPInitAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPInitAsyncNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPInitAsyncNode) \
	NO_API virtual ~UUDPInitAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_75_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class UUDPInitAsyncNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
