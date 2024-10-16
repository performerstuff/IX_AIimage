// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClient_init() {}
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SocketClient;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SocketClient()
	{
		if (!Z_Registration_Info_UPackage__Script_SocketClient.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SocketClient",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x84975566,
				0xBEFDB58D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SocketClient.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SocketClient.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SocketClient(Z_Construct_UPackage__Script_SocketClient, TEXT("/Script/SocketClient"), Z_Registration_Info_UPackage__Script_SocketClient, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84975566, 0xBEFDB58D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
