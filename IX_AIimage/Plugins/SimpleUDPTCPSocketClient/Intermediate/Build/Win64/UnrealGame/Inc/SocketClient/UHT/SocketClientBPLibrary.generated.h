// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketClientBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class USocketClientBPLibrary;
class USocketClientTCPClient;
class USocketClientUDP;
enum class EFileFunctionsSocketClientDirectoryType : uint8;
enum class EReceiveFilterClient : uint8;
enum class ESocketClientIPType : uint8;
enum class ESocketClientSystem : uint8;
enum class ESocketClientTCPSeparator : uint8;
enum class ESocketPlatformClient : uint8;
#ifdef SOCKETCLIENT_SocketClientBPLibrary_generated_h
#error "SocketClientBPLibrary.generated.h already included, missing '#pragma once' in SocketClientBPLibrary.h"
#endif
#define SOCKETCLIENT_SocketClientBPLibrary_generated_h

#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_44_DELEGATE \
struct SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms \
{ \
	bool success; \
	FString message; \
	FString clientConnectionID; \
}; \
static inline void FsocketClientTCPConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& socketClientTCPConnectionEventDelegate, bool success, const FString& message, const FString& clientConnectionID) \
{ \
	SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms Parms; \
	Parms.success=success ? true : false; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	socketClientTCPConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_45_DELEGATE \
struct SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms \
{ \
	FString message; \
	TArray<uint8> byteArray; \
	FString clientConnectionID; \
}; \
static inline void FreceiveTCPMessageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& receiveTCPMessageEventDelegate, const FString& message, TArray<uint8> const& byteArray, const FString& clientConnectionID) \
{ \
	SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.byteArray=byteArray; \
	Parms.clientConnectionID=clientConnectionID; \
	receiveTCPMessageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_46_DELEGATE \
struct SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms \
{ \
	bool success; \
	FString message; \
	FString clientConnectionID; \
}; \
static inline void FsocketClientUDPConnectionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& socketClientUDPConnectionEventDelegate, bool success, const FString& message, const FString& clientConnectionID) \
{ \
	SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms Parms; \
	Parms.success=success ? true : false; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	socketClientUDPConnectionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_47_DELEGATE \
struct SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms \
{ \
	FString message; \
	TArray<uint8> byteArray; \
	FString IP_FromSender; \
	int32 portFromSender; \
	FString clientConnectionID; \
}; \
static inline void FreceiveUDPMessageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& receiveUDPMessageEventDelegate, const FString& message, TArray<uint8> const& byteArray, const FString& IP_FromSender, int32 portFromSender, const FString& clientConnectionID) \
{ \
	SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.byteArray=byteArray; \
	Parms.IP_FromSender=IP_FromSender; \
	Parms.portFromSender=portFromSender; \
	Parms.clientConnectionID=clientConnectionID; \
	receiveUDPMessageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_48_DELEGATE \
struct SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms \
{ \
	int64 fileSize; \
	int64 position; \
	bool end; \
	TArray<uint8> byteArray; \
}; \
static inline void FreadBytesFromFileInPartsEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& readBytesFromFileInPartsEventDelegate, int64 fileSize, int64 position, bool end, TArray<uint8> const& byteArray) \
{ \
	SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms Parms; \
	Parms.fileSize=fileSize; \
	Parms.position=position; \
	Parms.end=end ? true : false; \
	Parms.byteArray=byteArray; \
	readBytesFromFileInPartsEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_49_DELEGATE \
struct SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms \
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
	SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms Parms; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.filePath=filePath; \
	Parms.percent=percent; \
	Parms.mbit=mbit; \
	Parms.bytesTransferred=bytesTransferred; \
	Parms.fileSize=fileSize; \
	transferFileOverTCPProgressEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_50_DELEGATE \
struct SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms \
{ \
	FString message; \
	FString clientConnectionID; \
	FString filePath; \
	bool success; \
}; \
static inline void FfileTransferOverTCPInfoEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& fileTransferOverTCPInfoEventDelegate, const FString& message, const FString& clientConnectionID, const FString& filePath, bool success) \
{ \
	SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms Parms; \
	Parms.message=message; \
	Parms.clientConnectionID=clientConnectionID; \
	Parms.filePath=filePath; \
	Parms.success=success ? true : false; \
	fileTransferOverTCPInfoEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_SPARSE_DATA
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execchangeTCPSeparatorByteOnClient); \
	DECLARE_FUNCTION(execchangeTCPSeparatorStringOnClient); \
	DECLARE_FUNCTION(execparseInteger64ArrayToBytesPure); \
	DECLARE_FUNCTION(execparseIntegerArrayToBytesPure); \
	DECLARE_FUNCTION(execparseFloatArrayToBytesPure); \
	DECLARE_FUNCTION(execparseBytesToInteger64ArrayPure); \
	DECLARE_FUNCTION(execparseBytesToIntegerArrayPure); \
	DECLARE_FUNCTION(execparseBytesToFloatArrayPure); \
	DECLARE_FUNCTION(execparseInteger64ToBytesPure); \
	DECLARE_FUNCTION(execparseIntegerToBytesPure); \
	DECLARE_FUNCTION(execparseFloatToBytesPure); \
	DECLARE_FUNCTION(execparseInteger64ToBytes); \
	DECLARE_FUNCTION(execparseIntegerToBytes); \
	DECLARE_FUNCTION(execparseFloatToBytes); \
	DECLARE_FUNCTION(execparseBytesToInteger64Endian); \
	DECLARE_FUNCTION(execparseBytesToIntegerEndian); \
	DECLARE_FUNCTION(execparseBytesToFloatEndian); \
	DECLARE_FUNCTION(execparseBytesToInteger64Pure); \
	DECLARE_FUNCTION(execparseBytesToIntegerPure); \
	DECLARE_FUNCTION(execparseBytesToFloatPure); \
	DECLARE_FUNCTION(execparseBytesToInteger64); \
	DECLARE_FUNCTION(execparseBytesToInteger); \
	DECLARE_FUNCTION(execparseBytesToFloat); \
	DECLARE_FUNCTION(execparseBytesToHexPure); \
	DECLARE_FUNCTION(execparseHexToStringPure); \
	DECLARE_FUNCTION(execparseHexToBytesPure); \
	DECLARE_FUNCTION(execparseBytesToHex); \
	DECLARE_FUNCTION(execparseHexToString); \
	DECLARE_FUNCTION(execparseHexToBytes); \
	DECLARE_FUNCTION(execgetRandomID); \
	DECLARE_FUNCTION(execgetUniquePlayerID); \
	DECLARE_FUNCTION(execgetSystemType); \
	DECLARE_FUNCTION(execchangeCleanerThreadSettingsOnClient); \
	DECLARE_FUNCTION(execchangeSocketPlatform); \
	DECLARE_FUNCTION(execgetLocalIP); \
	DECLARE_FUNCTION(execisUDPInitialized); \
	DECLARE_FUNCTION(execgetUDPInitializationByConnectionID); \
	DECLARE_FUNCTION(execcloseSocketClientConnectionUDP); \
	DECLARE_FUNCTION(execsocketClientSendUDP); \
	DECLARE_FUNCTION(execsocketClientInitUDPReceiver); \
	DECLARE_FUNCTION(execisTCPConnected); \
	DECLARE_FUNCTION(execgetTCPConnectionByConnectionID); \
	DECLARE_FUNCTION(execcloseAllSocketClientConnectionsTCP); \
	DECLARE_FUNCTION(execcloseSocketClientConnectionTCP); \
	DECLARE_FUNCTION(execsocketClientRequestFileOverTCP); \
	DECLARE_FUNCTION(execsocketClientSendFileOverTCP); \
	DECLARE_FUNCTION(execsocketClientSendTCP); \
	DECLARE_FUNCTION(execconnectSocketClientTCP); \
	DECLARE_FUNCTION(execgetSocketClientTarget); \
	DECLARE_FUNCTION(execfileTransferOverTCPInfoEventDelegate); \
	DECLARE_FUNCTION(exectransferFileOverTCPProgressEventDelegate); \
	DECLARE_FUNCTION(execreadBytesFromFileInPartsEventDelegate); \
	DECLARE_FUNCTION(execreceiveUDPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientUDPConnectionEventDelegate); \
	DECLARE_FUNCTION(execreceiveTCPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientTCPConnectionEventDelegate);


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execchangeTCPSeparatorByteOnClient); \
	DECLARE_FUNCTION(execchangeTCPSeparatorStringOnClient); \
	DECLARE_FUNCTION(execparseInteger64ArrayToBytesPure); \
	DECLARE_FUNCTION(execparseIntegerArrayToBytesPure); \
	DECLARE_FUNCTION(execparseFloatArrayToBytesPure); \
	DECLARE_FUNCTION(execparseBytesToInteger64ArrayPure); \
	DECLARE_FUNCTION(execparseBytesToIntegerArrayPure); \
	DECLARE_FUNCTION(execparseBytesToFloatArrayPure); \
	DECLARE_FUNCTION(execparseInteger64ToBytesPure); \
	DECLARE_FUNCTION(execparseIntegerToBytesPure); \
	DECLARE_FUNCTION(execparseFloatToBytesPure); \
	DECLARE_FUNCTION(execparseInteger64ToBytes); \
	DECLARE_FUNCTION(execparseIntegerToBytes); \
	DECLARE_FUNCTION(execparseFloatToBytes); \
	DECLARE_FUNCTION(execparseBytesToInteger64Endian); \
	DECLARE_FUNCTION(execparseBytesToIntegerEndian); \
	DECLARE_FUNCTION(execparseBytesToFloatEndian); \
	DECLARE_FUNCTION(execparseBytesToInteger64Pure); \
	DECLARE_FUNCTION(execparseBytesToIntegerPure); \
	DECLARE_FUNCTION(execparseBytesToFloatPure); \
	DECLARE_FUNCTION(execparseBytesToInteger64); \
	DECLARE_FUNCTION(execparseBytesToInteger); \
	DECLARE_FUNCTION(execparseBytesToFloat); \
	DECLARE_FUNCTION(execparseBytesToHexPure); \
	DECLARE_FUNCTION(execparseHexToStringPure); \
	DECLARE_FUNCTION(execparseHexToBytesPure); \
	DECLARE_FUNCTION(execparseBytesToHex); \
	DECLARE_FUNCTION(execparseHexToString); \
	DECLARE_FUNCTION(execparseHexToBytes); \
	DECLARE_FUNCTION(execgetRandomID); \
	DECLARE_FUNCTION(execgetUniquePlayerID); \
	DECLARE_FUNCTION(execgetSystemType); \
	DECLARE_FUNCTION(execchangeCleanerThreadSettingsOnClient); \
	DECLARE_FUNCTION(execchangeSocketPlatform); \
	DECLARE_FUNCTION(execgetLocalIP); \
	DECLARE_FUNCTION(execisUDPInitialized); \
	DECLARE_FUNCTION(execgetUDPInitializationByConnectionID); \
	DECLARE_FUNCTION(execcloseSocketClientConnectionUDP); \
	DECLARE_FUNCTION(execsocketClientSendUDP); \
	DECLARE_FUNCTION(execsocketClientInitUDPReceiver); \
	DECLARE_FUNCTION(execisTCPConnected); \
	DECLARE_FUNCTION(execgetTCPConnectionByConnectionID); \
	DECLARE_FUNCTION(execcloseAllSocketClientConnectionsTCP); \
	DECLARE_FUNCTION(execcloseSocketClientConnectionTCP); \
	DECLARE_FUNCTION(execsocketClientRequestFileOverTCP); \
	DECLARE_FUNCTION(execsocketClientSendFileOverTCP); \
	DECLARE_FUNCTION(execsocketClientSendTCP); \
	DECLARE_FUNCTION(execconnectSocketClientTCP); \
	DECLARE_FUNCTION(execgetSocketClientTarget); \
	DECLARE_FUNCTION(execfileTransferOverTCPInfoEventDelegate); \
	DECLARE_FUNCTION(exectransferFileOverTCPProgressEventDelegate); \
	DECLARE_FUNCTION(execreadBytesFromFileInPartsEventDelegate); \
	DECLARE_FUNCTION(execreceiveUDPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientUDPConnectionEventDelegate); \
	DECLARE_FUNCTION(execreceiveTCPMessageEventDelegate); \
	DECLARE_FUNCTION(execsocketClientTCPConnectionEventDelegate);


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_ACCESSORS
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketClientBPLibrary(); \
	friend struct Z_Construct_UClass_USocketClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USocketClientBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientBPLibrary)


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUSocketClientBPLibrary(); \
	friend struct Z_Construct_UClass_USocketClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USocketClientBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocketClient"), NO_API) \
	DECLARE_SERIALIZER(USocketClientBPLibrary)


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientBPLibrary(USocketClientBPLibrary&&); \
	NO_API USocketClientBPLibrary(const USocketClientBPLibrary&); \
public:


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketClientBPLibrary(USocketClientBPLibrary&&); \
	NO_API USocketClientBPLibrary(const USocketClientBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketClientBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketClientBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketClientBPLibrary)


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_33_PROLOG
#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_SPARSE_DATA \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_RPC_WRAPPERS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_ACCESSORS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_INCLASS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_SPARSE_DATA \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_ACCESSORS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SocketClientBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETCLIENT_API UClass* StaticClass<class USocketClientBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h


#define FOREACH_ENUM_ESOCKETCLIENTSYSTEM(op) \
	op(ESocketClientSystem::Android) \
	op(ESocketClientSystem::IOS) \
	op(ESocketClientSystem::Windows) \
	op(ESocketClientSystem::Linux) \
	op(ESocketClientSystem::Mac) 

enum class ESocketClientSystem : uint8;
template<> struct TIsUEnumClass<ESocketClientSystem> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientSystem>();

#define FOREACH_ENUM_ESOCKETCLIENTDIRECTORYTYPE(op) \
	op(ESocketClientDirectoryType::E_gd) \
	op(ESocketClientDirectoryType::E_ad) 

enum class ESocketClientDirectoryType : uint8;
template<> struct TIsUEnumClass<ESocketClientDirectoryType> { enum { Value = true }; };
template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientDirectoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
