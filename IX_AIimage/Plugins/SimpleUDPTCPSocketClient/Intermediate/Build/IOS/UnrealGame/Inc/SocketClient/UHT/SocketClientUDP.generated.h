// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketClientUDP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCKETCLIENT_SocketClientUDP_generated_h
#error "SocketClientUDP.generated.h already included, missing '#pragma once' in SocketClientUDP.h"
#endif
#define SOCKETCLIENT_SocketClientUDP_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_20_DELEGATE \
struct SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms \
{ \
	bool success; \
	FString message; \
	FString clientConnectionID; \
}; \
static inline void FsocketClientUDPConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& socketClientUDPConnectionEventDelegate, bool success, const FString& message, const FString& clientConnectionID) \
{ \
	SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms Parms; \
	Parms.success=success ? true : false; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	socketClientUDPConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_21_DELEGATE \
struct SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms \
{ \
	FString message; \
	TArray<uint8> byteArray; \
	FString IP_FromSender; \
	int32 portFromSender; \
	FString clientConnectionID; \
}; \
static inline void FreceiveUDPMessageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& receiveUDPMessageEventDelegate, const FString& message, TArray<uint8> const& byteArray, const FString& IP_FromSender, int32 portFromSender, const FString& clientConnectionID) \
{ \
	SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.byteArray=byteArray; \
	Parms.IP_FromSender=IP_FromSender; \
	Parms.portFromSender=portFromSender; \
	Parms.clientConnectionID=clientConnectionID; \
	receiveUDPMessageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execreceiveUDPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientUDPConnectionEventDelegate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execreceiveUDPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientUDPConnectionEventDelegate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketClientUDP(); \
	friend struct Z_Construct_UClass_USocketClientUDP_Statics; \
public: \
	DECLARE_CLASS(USocketClientUDP, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientUDP)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSocketClientUDP(); \
	friend struct Z_Construct_UClass_USocketClientUDP_Statics; \
public: \
	DECLARE_CLASS(USocketClientUDP, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientUDP)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientUDP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientUDP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientUDP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientUDP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientUDP(USocketClientUDP&&); \
	NO_API USocketClientUDP(const USocketClientUDP&); \
public: \
	NO_API virtual ~USocketClientUDP();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientUDP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientUDP(USocketClientUDP&&); \
	NO_API USocketClientUDP(const USocketClientUDP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientUDP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientUDP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientUDP) \
	NO_API virtual ~USocketClientUDP();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SocketClientUDP."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class USocketClientUDP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientUDP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
