// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/SocketClientTCP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClientTCP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientTCPClient();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientTCPClient_NoRegister();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms
		{
			bool success;
			FString message;
			FString clientConnectionID;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "socketClientTCPConnectionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms
		{
			FString message;
			TArray<uint8> byteArray;
			FString clientConnectionID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "receiveTCPMessageEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms
		{
			FString clientConnectionID;
			FString filePath;
			float percent;
			float mbit;
			int64 bytesTransferred;
			int64 fileSize;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mbit;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_bytesTransferred;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_mbit = { "mbit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, mbit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_bytesTransferred = { "bytesTransferred", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, bytesTransferred), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, fileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_mbit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_bytesTransferred,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_fileSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "transferFileOverTCPProgressEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms
		{
			FString message;
			FString clientConnectionID;
			FString filePath;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "fileTransferOverTCPInfoEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USocketClientTCPClient::execconnectionEvent)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->connectionEvent(Z_Param_success,Z_Param_message,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientTCPClient::execfileTransferOverTCPInfoEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->fileTransferOverTCPInfoEventDelegate(Z_Param_message,Z_Param_clientConnectionID,Z_Param_filePath,Z_Param_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientTCPClient::exectransferFileOverTCPProgressEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mbit);
		P_GET_PROPERTY(FInt64Property,Z_Param_bytesTransferred);
		P_GET_PROPERTY(FInt64Property,Z_Param_fileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->transferFileOverTCPProgressEventDelegate(Z_Param_clientConnectionID,Z_Param_filePath,Z_Param_percent,Z_Param_mbit,Z_Param_bytesTransferred,Z_Param_fileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientTCPClient::execreceiveTCPMessageEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->receiveTCPMessageEventDelegate(Z_Param_message,Z_Param_Out_byteArray,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientTCPClient::execsocketClientTCPConnectionEventDelegate)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->socketClientTCPConnectionEventDelegate(Z_Param_success,Z_Param_message,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	void USocketClientTCPClient::StaticRegisterNativesUSocketClientTCPClient()
	{
		UClass* Class = USocketClientTCPClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "connectionEvent", &USocketClientTCPClient::execconnectionEvent },
			{ "fileTransferOverTCPInfoEventDelegate", &USocketClientTCPClient::execfileTransferOverTCPInfoEventDelegate },
			{ "receiveTCPMessageEventDelegate", &USocketClientTCPClient::execreceiveTCPMessageEventDelegate },
			{ "socketClientTCPConnectionEventDelegate", &USocketClientTCPClient::execsocketClientTCPConnectionEventDelegate },
			{ "transferFileOverTCPProgressEventDelegate", &USocketClientTCPClient::exectransferFileOverTCPProgressEventDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics
	{
		struct SocketClientTCPClient_eventconnectionEvent_Parms
		{
			bool success;
			FString message;
			FString clientConnectionID;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientTCPClient_eventconnectionEvent_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientTCPClient_eventconnectionEvent_Parms), &Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventconnectionEvent_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventconnectionEvent_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "connectionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::SocketClientTCPClient_eventconnectionEvent_Parms), Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientTCPClient_connectionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientTCPClient_connectionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics
	{
		struct SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms
		{
			FString message;
			FString clientConnectionID;
			FString filePath;
			bool success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_success_MetaData[];
#endif
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms, filePath), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms), &Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "fileTransferOverTCPInfoEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::SocketClientTCPClient_eventfileTransferOverTCPInfoEventDelegate_Parms), Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics
	{
		struct SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms
		{
			FString message;
			TArray<uint8> byteArray;
			FString clientConnectionID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "receiveTCPMessageEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::SocketClientTCPClient_eventreceiveTCPMessageEventDelegate_Parms), Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics
	{
		struct SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms
		{
			bool success;
			FString message;
			FString clientConnectionID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_success_MetaData[];
#endif
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms), &Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "socketClientTCPConnectionEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::SocketClientTCPClient_eventsocketClientTCPConnectionEventDelegate_Parms), Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics
	{
		struct SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms
		{
			FString clientConnectionID;
			FString filePath;
			float percent;
			float mbit;
			int64 bytesTransferred;
			int64 fileSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_percent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mbit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mbit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytesTransferred_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_bytesTransferred;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, filePath), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, percent), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit = { "mbit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, mbit), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred = { "bytesTransferred", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, bytesTransferred), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms, fileSize), METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientTCPClient, nullptr, "transferFileOverTCPProgressEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::SocketClientTCPClient_eventtransferFileOverTCPProgressEventDelegate_Parms), Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocketClientTCPClient);
	UClass* Z_Construct_UClass_USocketClientTCPClient_NoRegister()
	{
		return USocketClientTCPClient::StaticClass();
	}
	struct Z_Construct_UClass_USocketClientTCPClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onsocketClientTCPConnectionEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onsocketClientTCPConnectionEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onreceiveTCPMessageEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onreceiveTCPMessageEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ontransferFileOverTCPProgressEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onfileTransferOverTCPInfoEventDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketClientTCPClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketClientTCPClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketClientTCPClient_connectionEvent, "connectionEvent" }, // 312325577
		{ &Z_Construct_UFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate, "fileTransferOverTCPInfoEventDelegate" }, // 386654039
		{ &Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature, "fileTransferOverTCPInfoEventDelegate__DelegateSignature" }, // 38641337
		{ &Z_Construct_UFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate, "receiveTCPMessageEventDelegate" }, // 729200821
		{ &Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature, "receiveTCPMessageEventDelegate__DelegateSignature" }, // 3275575709
		{ &Z_Construct_UFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate, "socketClientTCPConnectionEventDelegate" }, // 2307933956
		{ &Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature, "socketClientTCPConnectionEventDelegate__DelegateSignature" }, // 3044989281
		{ &Z_Construct_UFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate, "transferFileOverTCPProgressEventDelegate" }, // 1111632561
		{ &Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature, "transferFileOverTCPProgressEventDelegate__DelegateSignature" }, // 3687196734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientTCPClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocketClientTCP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|ConnectionInfo" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onsocketClientTCPConnectionEventDelegate = { "onsocketClientTCPConnectionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientTCPClient, onsocketClientTCPConnectionEventDelegate), Z_Construct_UDelegateFunction_USocketClientTCPClient_socketClientTCPConnectionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData)) }; // 3044989281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|ReceiveMessage" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onreceiveTCPMessageEventDelegate = { "onreceiveTCPMessageEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientTCPClient, onreceiveTCPMessageEventDelegate), Z_Construct_UDelegateFunction_USocketClientTCPClient_receiveTCPMessageEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData)) }; // 3275575709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|File|transferFileOverTCPProgress" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate = { "ontransferFileOverTCPProgressEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientTCPClient, ontransferFileOverTCPProgressEventDelegate), Z_Construct_UDelegateFunction_USocketClientTCPClient_transferFileOverTCPProgressEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData)) }; // 3687196734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|File|FileTransferOverTCPInfo" },
		{ "ModuleRelativePath", "Public/SocketClientTCP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate = { "onfileTransferOverTCPInfoEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientTCPClient, onfileTransferOverTCPInfoEventDelegate), Z_Construct_UDelegateFunction_USocketClientTCPClient_fileTransferOverTCPInfoEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData)) }; // 38641337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocketClientTCPClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onsocketClientTCPConnectionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onreceiveTCPMessageEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientTCPClient_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketClientTCPClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketClientTCPClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketClientTCPClient_Statics::ClassParams = {
		&USocketClientTCPClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USocketClientTCPClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketClientTCPClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientTCPClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketClientTCPClient()
	{
		if (!Z_Registration_Info_UClass_USocketClientTCPClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketClientTCPClient.OuterSingleton, Z_Construct_UClass_USocketClientTCPClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocketClientTCPClient.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<USocketClientTCPClient>()
	{
		return USocketClientTCPClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketClientTCPClient);
	USocketClientTCPClient::~USocketClientTCPClient() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientTCP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientTCP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocketClientTCPClient, USocketClientTCPClient::StaticClass, TEXT("USocketClientTCPClient"), &Z_Registration_Info_UClass_USocketClientTCPClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketClientTCPClient), 3769858268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientTCP_h_3883197664(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientTCP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClientTCP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
