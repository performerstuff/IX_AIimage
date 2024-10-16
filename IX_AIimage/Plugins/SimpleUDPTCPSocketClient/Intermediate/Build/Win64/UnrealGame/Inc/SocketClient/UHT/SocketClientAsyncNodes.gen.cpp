// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/SocketClientAsyncNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClientAsyncNodes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UTCPConnectAsyncNode();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UTCPConnectAsyncNode_NoRegister();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UUDPInitAsyncNode();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UUDPInitAsyncNode_NoRegister();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EReceiveFilterClient();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientIPType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics
	{
		struct TCPConnectAsyncNode_eventTCPConnectDelegate_Parms
		{
			FString connenctionInfo;
			FString clientConnectionID;
			FString messageFromServer;
			TArray<uint8> byteArrayFromServer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connenctionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_connenctionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_messageFromServer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_messageFromServer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArrayFromServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArrayFromServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArrayFromServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_connenctionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_connenctionInfo = { "connenctionInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventTCPConnectDelegate_Parms, connenctionInfo), METADATA_PARAMS(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_connenctionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_connenctionInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventTCPConnectDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_messageFromServer = { "messageFromServer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventTCPConnectDelegate_Parms, messageFromServer), METADATA_PARAMS(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_Inner = { "byteArrayFromServer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer = { "byteArrayFromServer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventTCPConnectDelegate_Parms, byteArrayFromServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_connenctionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_messageFromServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPConnectAsyncNode, nullptr, "TCPConnectDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::TCPConnectAsyncNode_eventTCPConnectDelegate_Parms), Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTCPConnectAsyncNode::execsocketClientTCPConnectionAsyncNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EReceiveFilterClient,Z_Param_receiveFilters);
		P_GET_ENUM(ESocketClientTCPSeparator,Z_Param_messageSeparator);
		P_GET_PROPERTY(FStrProperty,Z_Param_optionalCustomConnectionID);
		P_GET_UBOOL(Z_Param_ignoreTheKeepAlivePacket);
		P_GET_UBOOL(Z_Param_disableNaglesAlgorithm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTCPConnectAsyncNode**)Z_Param__Result=UTCPConnectAsyncNode::socketClientTCPConnectionAsyncNode(Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EReceiveFilterClient(Z_Param_receiveFilters),ESocketClientTCPSeparator(Z_Param_messageSeparator),Z_Param_optionalCustomConnectionID,Z_Param_ignoreTheKeepAlivePacket,Z_Param_disableNaglesAlgorithm);
		P_NATIVE_END;
	}
	void UTCPConnectAsyncNode::StaticRegisterNativesUTCPConnectAsyncNode()
	{
		UClass* Class = UTCPConnectAsyncNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "socketClientTCPConnectionAsyncNode", &UTCPConnectAsyncNode::execsocketClientTCPConnectionAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics
	{
		struct TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms
		{
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EReceiveFilterClient receiveFilters;
			ESocketClientTCPSeparator messageSeparator;
			FString optionalCustomConnectionID;
			bool ignoreTheKeepAlivePacket;
			bool disableNaglesAlgorithm;
			UTCPConnectAsyncNode* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FBytePropertyParams NewProp_receiveFilters_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_receiveFilters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_messageSeparator_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_messageSeparator;
		static const UECodeGen_Private::FStrPropertyParams NewProp_optionalCustomConnectionID;
		static void NewProp_ignoreTheKeepAlivePacket_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreTheKeepAlivePacket;
		static void NewProp_disableNaglesAlgorithm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_disableNaglesAlgorithm;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_receiveFilters_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_receiveFilters = { "receiveFilters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, receiveFilters), Z_Construct_UEnum_SocketClient_EReceiveFilterClient, METADATA_PARAMS(nullptr, 0) }; // 3867733933
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_messageSeparator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_messageSeparator = { "messageSeparator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, messageSeparator), Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator, METADATA_PARAMS(nullptr, 0) }; // 550266652
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_optionalCustomConnectionID = { "optionalCustomConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, optionalCustomConnectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ignoreTheKeepAlivePacket_SetBit(void* Obj)
	{
		((TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms*)Obj)->ignoreTheKeepAlivePacket = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ignoreTheKeepAlivePacket = { "ignoreTheKeepAlivePacket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms), &Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ignoreTheKeepAlivePacket_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_disableNaglesAlgorithm_SetBit(void* Obj)
	{
		((TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms*)Obj)->disableNaglesAlgorithm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_disableNaglesAlgorithm = { "disableNaglesAlgorithm", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms), &Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_disableNaglesAlgorithm_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UTCPConnectAsyncNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_receiveFilters_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_receiveFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_messageSeparator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_messageSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_optionalCustomConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ignoreTheKeepAlivePacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_disableNaglesAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Connect to a TCP Server\n\x09* @param domainOrIP IP or Domain of your server\n\x09* @param ipType\n\x09* @param port\n\x09* @param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n\x09* @param messageSeparator It may be that data packets are split or merged when transmitted over TCP in order to optimize the transmission. For example, if you send \"Hello\" two times in a row very quickly, it can happen that \"HelloHa\" and \"llo\" arrive. To counteract this circumstance there are options to separate the data packets.\n\x09* @param optionalCustomConnectionID Instead of an automatically generated ConnectionID you can use your own ID with this parameter.\n\x09* @param ignoreTheKeepAlivePacket Activate to ignore the (0x00) keep alive byte of the server that can optionally be sent by the server plugin.\n\x09* @param disableNaglesAlgorithm Don't change it if you don't know what this option is for! With this you can disable the TCP Nagle's algorithm to send (in LAN) very small data packets faster.\n\x09**/" },
		{ "CPP_Default_disableNaglesAlgorithm", "false" },
		{ "CPP_Default_ignoreTheKeepAlivePacket", "false" },
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
		{ "ToolTip", "Connect to a TCP Server\n@param domainOrIP IP or Domain of your server\n@param ipType\n@param port\n@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n@param messageSeparator It may be that data packets are split or merged when transmitted over TCP in order to optimize the transmission. For example, if you send \"Hello\" two times in a row very quickly, it can happen that \"HelloHa\" and \"llo\" arrive. To counteract this circumstance there are options to separate the data packets.\n@param optionalCustomConnectionID Instead of an automatically generated ConnectionID you can use your own ID with this parameter.\n@param ignoreTheKeepAlivePacket Activate to ignore the (0x00) keep alive byte of the server that can optionally be sent by the server plugin.\n@param disableNaglesAlgorithm Don't change it if you don't know what this option is for! With this you can disable the TCP Nagle's algorithm to send (in LAN) very small data packets faster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTCPConnectAsyncNode, nullptr, "socketClientTCPConnectionAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::TCPConnectAsyncNode_eventsocketClientTCPConnectionAsyncNode_Parms), Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTCPConnectAsyncNode);
	UClass* Z_Construct_UClass_UTCPConnectAsyncNode_NoRegister()
	{
		return UTCPConnectAsyncNode::StaticClass();
	}
	struct Z_Construct_UClass_UTCPConnectAsyncNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnServerMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTCPConnectAsyncNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTCPConnectAsyncNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTCPConnectAsyncNode_socketClientTCPConnectionAsyncNode, "socketClientTCPConnectionAsyncNode" }, // 2905324017
		{ &Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature, "TCPConnectDelegate__DelegateSignature" }, // 1343562166
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPConnectAsyncNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--- TCP -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "SocketClientAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
		{ "ToolTip", "--- TCP -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnConnect_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnConnect = { "OnConnect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPConnectAsyncNode, OnConnect), Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnConnect_MetaData)) }; // 1343562166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnDisconnect_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnDisconnect = { "OnDisconnect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPConnectAsyncNode, OnDisconnect), Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnDisconnect_MetaData)) }; // 1343562166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnServerMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnServerMessage = { "OnServerMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTCPConnectAsyncNode, OnServerMessage), Z_Construct_UDelegateFunction_UTCPConnectAsyncNode_TCPConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnServerMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnServerMessage_MetaData)) }; // 1343562166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTCPConnectAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnDisconnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTCPConnectAsyncNode_Statics::NewProp_OnServerMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTCPConnectAsyncNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTCPConnectAsyncNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTCPConnectAsyncNode_Statics::ClassParams = {
		&UTCPConnectAsyncNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTCPConnectAsyncNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTCPConnectAsyncNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTCPConnectAsyncNode()
	{
		if (!Z_Registration_Info_UClass_UTCPConnectAsyncNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTCPConnectAsyncNode.OuterSingleton, Z_Construct_UClass_UTCPConnectAsyncNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTCPConnectAsyncNode.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<UTCPConnectAsyncNode>()
	{
		return UTCPConnectAsyncNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTCPConnectAsyncNode);
	UTCPConnectAsyncNode::~UTCPConnectAsyncNode() {}
	struct Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics
	{
		struct UDPInitAsyncNode_eventUDPInitDelegate_Parms
		{
			FString initializationInfo;
			FString clientConnectionID;
			FString peerIP;
			int32 peerPort;
			FString messageFromServer;
			TArray<uint8> byteArrayFromServer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initializationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_initializationInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clientConnectionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_clientConnectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_peerIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_peerIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_peerPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_peerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_messageFromServer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_messageFromServer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArrayFromServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArrayFromServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArrayFromServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_initializationInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_initializationInfo = { "initializationInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, initializationInfo), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_initializationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_initializationInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerIP = { "peerIP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, peerIP), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerPort = { "peerPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, peerPort), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_messageFromServer = { "messageFromServer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, messageFromServer), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_messageFromServer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_Inner = { "byteArrayFromServer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer = { "byteArrayFromServer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventUDPInitDelegate_Parms, byteArrayFromServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_initializationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_peerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_messageFromServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::NewProp_byteArrayFromServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPInitAsyncNode, nullptr, "UDPInitDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::UDPInitAsyncNode_eventUDPInitDelegate_Parms), Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUDPInitAsyncNode::execsocketClientInitUDPReceiverAsyncNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EReceiveFilterClient,Z_Param_receiveFilter);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxPacketSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUDPInitAsyncNode**)Z_Param__Result=UUDPInitAsyncNode::socketClientInitUDPReceiverAsyncNode(Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EReceiveFilterClient(Z_Param_receiveFilter),Z_Param_maxPacketSize);
		P_NATIVE_END;
	}
	void UUDPInitAsyncNode::StaticRegisterNativesUUDPInitAsyncNode()
	{
		UClass* Class = UUDPInitAsyncNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "socketClientInitUDPReceiverAsyncNode", &UUDPInitAsyncNode::execsocketClientInitUDPReceiverAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics
	{
		struct UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms
		{
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EReceiveFilterClient receiveFilter;
			int32 maxPacketSize;
			UUDPInitAsyncNode* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FBytePropertyParams NewProp_receiveFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_receiveFilter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxPacketSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_receiveFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_receiveFilter = { "receiveFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, receiveFilter), Z_Construct_UEnum_SocketClient_EReceiveFilterClient, METADATA_PARAMS(nullptr, 0) }; // 3867733933
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_maxPacketSize = { "maxPacketSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, maxPacketSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UUDPInitAsyncNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_receiveFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_receiveFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_maxPacketSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SocketClient|UDP" },
		{ "Comment", "/**\n\x09*Opens a connection on specific ip and port and listen on it.\n\x09*@param DomainOrIP IP or Domain to listen on. 0.0.0.0 means that data can be received on all local IPs.\n\x09*@param port port to listen on\n\x09*@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n\x09*@param maxPacketSize sets the maximum UDP packet size. More than 65507 is not possible.\n\x09*/" },
		{ "CPP_Default_domainOrIP", "0.0.0.0" },
		{ "CPP_Default_ipType", "E_ipv4" },
		{ "CPP_Default_maxPacketSize", "65507" },
		{ "CPP_Default_port", "8888" },
		{ "CPP_Default_receiveFilter", "E_SAB" },
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
		{ "ToolTip", "Opens a connection on specific ip and port and listen on it.\n@param DomainOrIP IP or Domain to listen on. 0.0.0.0 means that data can be received on all local IPs.\n@param port port to listen on\n@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n@param maxPacketSize sets the maximum UDP packet size. More than 65507 is not possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPInitAsyncNode, nullptr, "socketClientInitUDPReceiverAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::UDPInitAsyncNode_eventsocketClientInitUDPReceiverAsyncNode_Parms), Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUDPInitAsyncNode);
	UClass* Z_Construct_UClass_UUDPInitAsyncNode_NoRegister()
	{
		return UUDPInitAsyncNode::StaticClass();
	}
	struct Z_Construct_UClass_UUDPInitAsyncNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnServerMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUDPInitAsyncNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUDPInitAsyncNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDPInitAsyncNode_socketClientInitUDPReceiverAsyncNode, "socketClientInitUDPReceiverAsyncNode" }, // 787428786
		{ &Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature, "UDPInitDelegate__DelegateSignature" }, // 1679810898
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPInitAsyncNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--- UDP -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "SocketClientAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
		{ "ToolTip", "--- UDP -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUDPInitAsyncNode, OnSuccess), Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnSuccess_MetaData)) }; // 1679810898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUDPInitAsyncNode, OnFail), Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnFail_MetaData)) }; // 1679810898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnServerMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocketClientAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnServerMessage = { "OnServerMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUDPInitAsyncNode, OnServerMessage), Z_Construct_UDelegateFunction_UUDPInitAsyncNode_UDPInitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnServerMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnServerMessage_MetaData)) }; // 1679810898
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUDPInitAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDPInitAsyncNode_Statics::NewProp_OnServerMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUDPInitAsyncNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDPInitAsyncNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUDPInitAsyncNode_Statics::ClassParams = {
		&UUDPInitAsyncNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUDPInitAsyncNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUDPInitAsyncNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUDPInitAsyncNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPInitAsyncNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUDPInitAsyncNode()
	{
		if (!Z_Registration_Info_UClass_UUDPInitAsyncNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUDPInitAsyncNode.OuterSingleton, Z_Construct_UClass_UUDPInitAsyncNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUDPInitAsyncNode.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<UUDPInitAsyncNode>()
	{
		return UUDPInitAsyncNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUDPInitAsyncNode);
	UUDPInitAsyncNode::~UUDPInitAsyncNode() {}
	struct Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTCPConnectAsyncNode, UTCPConnectAsyncNode::StaticClass, TEXT("UTCPConnectAsyncNode"), &Z_Registration_Info_UClass_UTCPConnectAsyncNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTCPConnectAsyncNode), 4184760346U) },
		{ Z_Construct_UClass_UUDPInitAsyncNode, UUDPInitAsyncNode::StaticClass, TEXT("UUDPInitAsyncNode"), &Z_Registration_Info_UClass_UUDPInitAsyncNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUDPInitAsyncNode), 3606964280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_3731448800(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientAsyncNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
