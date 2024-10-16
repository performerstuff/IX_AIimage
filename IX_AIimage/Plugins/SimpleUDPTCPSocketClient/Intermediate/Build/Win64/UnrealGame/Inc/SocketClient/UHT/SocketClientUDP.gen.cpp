// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/SocketClientUDP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClientUDP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientUDP();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientUDP_NoRegister();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms
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
	void Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientUDP, nullptr, "socketClientUDPConnectionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms
		{
			FString message;
			TArray<uint8> byteArray;
			FString IP_FromSender;
			int32 portFromSender;
			FString clientConnectionID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP_FromSender;
		static const UECodeGen_Private::FIntPropertyParams NewProp_portFromSender;
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_IP_FromSender = { "IP_FromSender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, IP_FromSender), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_portFromSender = { "portFromSender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, portFromSender), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_IP_FromSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_portFromSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientUDP, nullptr, "receiveUDPMessageEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USocketClientUDP::execreceiveUDPMessageEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->receiveUDPMessageEventDelegate(Z_Param_message,Z_Param_Out_byteArray,Z_Param_IP,Z_Param_port,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientUDP::execsocketClientUDPConnectionEventDelegate)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->socketClientUDPConnectionEventDelegate(Z_Param_success,Z_Param_message,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	void USocketClientUDP::StaticRegisterNativesUSocketClientUDP()
	{
		UClass* Class = USocketClientUDP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "receiveUDPMessageEventDelegate", &USocketClientUDP::execreceiveUDPMessageEventDelegate },
			{ "socketClientUDPConnectionEventDelegate", &USocketClientUDP::execsocketClientUDPConnectionEventDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics
	{
		struct SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms
		{
			FString message;
			TArray<uint8> byteArray;
			FString IP;
			int32 port;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, port), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientUDP, nullptr, "receiveUDPMessageEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::SocketClientUDP_eventreceiveUDPMessageEventDelegate_Parms), Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics
	{
		struct SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms), &Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientUDP, nullptr, "socketClientUDPConnectionEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::SocketClientUDP_eventsocketClientUDPConnectionEventDelegate_Parms), Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocketClientUDP);
	UClass* Z_Construct_UClass_USocketClientUDP_NoRegister()
	{
		return USocketClientUDP::StaticClass();
	}
	struct Z_Construct_UClass_USocketClientUDP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onsocketClientUDPConnectionEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onsocketClientUDPConnectionEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onreceiveUDPMessageEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onreceiveUDPMessageEventDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketClientUDP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketClientUDP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketClientUDP_receiveUDPMessageEventDelegate, "receiveUDPMessageEventDelegate" }, // 1294939106
		{ &Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature, "receiveUDPMessageEventDelegate__DelegateSignature" }, // 486632979
		{ &Z_Construct_UFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate, "socketClientUDPConnectionEventDelegate" }, // 4084233281
		{ &Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature, "socketClientUDPConnectionEventDelegate__DelegateSignature" }, // 1683005972
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientUDP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocketClientUDP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|UDP|Events|ConnectionInfo" },
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onsocketClientUDPConnectionEventDelegate = { "onsocketClientUDPConnectionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientUDP, onsocketClientUDPConnectionEventDelegate), Z_Construct_UDelegateFunction_USocketClientUDP_socketClientUDPConnectionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData)) }; // 1683005972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|UDP|Events|ReceiveMessage" },
		{ "ModuleRelativePath", "Public/SocketClientUDP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onreceiveUDPMessageEventDelegate = { "onreceiveUDPMessageEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientUDP, onreceiveUDPMessageEventDelegate), Z_Construct_UDelegateFunction_USocketClientUDP_receiveUDPMessageEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData)) }; // 486632979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocketClientUDP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onsocketClientUDPConnectionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientUDP_Statics::NewProp_onreceiveUDPMessageEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketClientUDP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketClientUDP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketClientUDP_Statics::ClassParams = {
		&USocketClientUDP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USocketClientUDP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientUDP_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketClientUDP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientUDP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketClientUDP()
	{
		if (!Z_Registration_Info_UClass_USocketClientUDP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketClientUDP.OuterSingleton, Z_Construct_UClass_USocketClientUDP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocketClientUDP.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<USocketClientUDP>()
	{
		return USocketClientUDP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketClientUDP);
	USocketClientUDP::~USocketClientUDP() {}
	struct Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientUDP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientUDP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocketClientUDP, USocketClientUDP::StaticClass, TEXT("USocketClientUDP"), &Z_Registration_Info_UClass_USocketClientUDP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketClientUDP), 1039640674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientUDP_h_1882620986(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientUDP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientUDP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
