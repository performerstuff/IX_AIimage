// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/SocketClientBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClientBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientBPLibrary();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientBPLibrary_NoRegister();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientTCPClient_NoRegister();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_USocketClientUDP_NoRegister();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EReceiveFilterClient();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientIPType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientSystem();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketPlatformClient();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature();
	SOCKETCLIENT_API UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketClientSystem;
	static UEnum* ESocketClientSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketClientSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_ESocketClientSystem, Z_Construct_UPackage__Script_SocketClient(), TEXT("ESocketClientSystem"));
		}
		return Z_Registration_Info_UEnum_ESocketClientSystem.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientSystem>()
	{
		return ESocketClientSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enumerators[] = {
		{ "ESocketClientSystem::Android", (int64)ESocketClientSystem::Android },
		{ "ESocketClientSystem::IOS", (int64)ESocketClientSystem::IOS },
		{ "ESocketClientSystem::Windows", (int64)ESocketClientSystem::Windows },
		{ "ESocketClientSystem::Linux", (int64)ESocketClientSystem::Linux },
		{ "ESocketClientSystem::Mac", (int64)ESocketClientSystem::Mac },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enum_MetaDataParams[] = {
		{ "Android.Name", "ESocketClientSystem::Android" },
		{ "BlueprintType", "true" },
		{ "IOS.Name", "ESocketClientSystem::IOS" },
		{ "Linux.Name", "ESocketClientSystem::Linux" },
		{ "Mac.Name", "ESocketClientSystem::Mac" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "Windows.Name", "ESocketClientSystem::Windows" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"ESocketClientSystem",
		"ESocketClientSystem",
		Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_ESocketClientSystem()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketClientSystem.InnerSingleton, Z_Construct_UEnum_SocketClient_ESocketClientSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketClientSystem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketClientDirectoryType;
	static UEnum* ESocketClientDirectoryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientDirectoryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketClientDirectoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType, Z_Construct_UPackage__Script_SocketClient(), TEXT("ESocketClientDirectoryType"));
		}
		return Z_Registration_Info_UEnum_ESocketClientDirectoryType.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientDirectoryType>()
	{
		return ESocketClientDirectoryType_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enumerators[] = {
		{ "ESocketClientDirectoryType::E_gd", (int64)ESocketClientDirectoryType::E_gd },
		{ "ESocketClientDirectoryType::E_ad", (int64)ESocketClientDirectoryType::E_ad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ad.DisplayName", "Absolute directory" },
		{ "E_ad.Name", "ESocketClientDirectoryType::E_ad" },
		{ "E_gd.DisplayName", "Game directory" },
		{ "E_gd.Name", "ESocketClientDirectoryType::E_gd" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"ESocketClientDirectoryType",
		"ESocketClientDirectoryType",
		Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientDirectoryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketClientDirectoryType.InnerSingleton, Z_Construct_UEnum_SocketClient_ESocketClientDirectoryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketClientDirectoryType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms
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
	void Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientTCPConnectionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "receiveTCPMessageEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms
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
	void Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientUDPConnectionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_IP_FromSender = { "IP_FromSender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, IP_FromSender), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_portFromSender = { "portFromSender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, portFromSender), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_IP_FromSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_portFromSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "receiveUDPMessageEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms
		{
			int64 fileSize;
			int64 position;
			bool end;
			TArray<uint8> byteArray;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_position;
		static void NewProp_end_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_end;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, fileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, position), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_end_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms*)Obj)->end = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_end_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_fileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::NewProp_byteArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "readBytesFromFileInPartsEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_mbit = { "mbit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, mbit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_bytesTransferred = { "bytesTransferred", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, bytesTransferred), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, fileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_mbit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_bytesTransferred,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::NewProp_fileSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "transferFileOverTCPProgressEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics
	{
		struct SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms), &Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "fileTransferOverTCPInfoEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms), Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execchangeTCPSeparatorByteOnClient)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_separator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::changeTCPSeparatorByteOnClient(Z_Param_separator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execchangeTCPSeparatorStringOnClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_separator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::changeTCPSeparatorStringOnClient(Z_Param_separator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseInteger64ArrayToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_TARRAY(int64,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseInteger64ArrayToBytesPure(Z_Param_Out_byteArray,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseIntegerArrayToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_TARRAY(int32,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseIntegerArrayToBytesPure(Z_Param_Out_byteArray,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseFloatArrayToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_TARRAY(float,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseFloatArrayToBytesPure(Z_Param_Out_byteArray,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToInteger64ArrayPure)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_value);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToInteger64ArrayPure(Z_Param_Out_value,Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToIntegerArrayPure)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_value);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToIntegerArrayPure(Z_Param_Out_value,Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToFloatArrayPure)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_value);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToFloatArrayPure(Z_Param_Out_value,Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseInteger64ToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseInteger64ToBytesPure(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseIntegerToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseIntegerToBytesPure(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseFloatToBytesPure)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseFloatToBytesPure(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseInteger64ToBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FInt64Property,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseInteger64ToBytes(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseIntegerToBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseIntegerToBytes(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseFloatToBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_UBOOL(Z_Param_switchByteOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseFloatToBytes(Z_Param_Out_byteArray,Z_Param_value,Z_Param_switchByteOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToInteger64Endian)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_littleEndian);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_bigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToInteger64Endian(Z_Param_bytes,Z_Param_Out_littleEndian,Z_Param_Out_bigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToIntegerEndian)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_littleEndian);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToIntegerEndian(Z_Param_bytes,Z_Param_Out_littleEndian,Z_Param_Out_bigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToFloatEndian)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_littleEndian);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bigEndian);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToFloatEndian(Z_Param_bytes,Z_Param_Out_littleEndian,Z_Param_Out_bigEndian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToInteger64Pure)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToInteger64Pure(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToIntegerPure)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToIntegerPure(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToFloatPure)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToFloatPure(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToInteger64)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToInteger64(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToInteger)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToInteger(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToFloat)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::parseBytesToFloat(Z_Param_bytes,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToHexPure)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::parseBytesToHexPure(Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseHexToStringPure)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::parseHexToStringPure(Z_Param_hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseHexToBytesPure)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USocketClientBPLibrary::parseHexToBytesPure(Z_Param_hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseBytesToHex)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::parseBytesToHex(Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseHexToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::parseHexToString(Z_Param_hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execparseHexToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USocketClientBPLibrary::parseHexToBytes(Z_Param_hex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetRandomID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::getRandomID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetUniquePlayerID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USocketClientBPLibrary::getUniquePlayerID(Z_Param_playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetSystemType)
	{
		P_GET_ENUM_REF(ESocketClientSystem,Z_Param_Out_system);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::getSystemType((ESocketClientSystem&)(Z_Param_Out_system));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execchangeCleanerThreadSettingsOnClient)
	{
		P_GET_UBOOL(Z_Param_showLogs);
		P_GET_PROPERTY(FIntProperty,Z_Param_minLiveTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::changeCleanerThreadSettingsOnClient(Z_Param_showLogs,Z_Param_minLiveTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execchangeSocketPlatform)
	{
		P_GET_ENUM(ESocketPlatformClient,Z_Param_platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::changeSocketPlatform(ESocketPlatformClient(Z_Param_platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetLocalIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketClientBPLibrary::getLocalIP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execisUDPInitialized)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USocketClientBPLibrary::isUDPInitialized(Z_Param_connectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetUDPInitializationByConnectionID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_GET_OBJECT_REF(USocketClientUDP,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::getUDPInitializationByConnectionID(Z_Param_connectionID,Z_Param_Out_found,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execcloseSocketClientConnectionUDP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::closeSocketClientConnectionUDP(Z_Param_connectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientSendUDP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY(uint8,Z_Param_byteArray);
		P_GET_UBOOL(Z_Param_addLineBreak);
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::socketClientSendUDP(Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,Z_Param_message,Z_Param_byteArray,Z_Param_addLineBreak,Z_Param_connectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientInitUDPReceiver)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_connectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EReceiveFilterClient,Z_Param_receiveFilter);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxPacketSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::socketClientInitUDPReceiver(Z_Param_Out_connectionID,Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EReceiveFilterClient(Z_Param_receiveFilter),Z_Param_maxPacketSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execisTCPConnected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USocketClientBPLibrary::isTCPConnected(Z_Param_connectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetTCPConnectionByConnectionID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_GET_OBJECT_REF(USocketClientTCPClient,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::getTCPConnectionByConnectionID(Z_Param_connectionID,Z_Param_Out_found,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execcloseAllSocketClientConnectionsTCP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::closeAllSocketClientConnectionsTCP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execcloseSocketClientConnectionTCP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::closeSocketClientConnectionTCP(Z_Param_connectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientRequestFileOverTCP)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_connectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_downloadDirectory);
		P_GET_UBOOL(Z_Param_resume);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_Aes256bitKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::socketClientRequestFileOverTCP(Z_Param_Out_connectionID,Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_downloadDirectory,Z_Param_resume,Z_Param_token,Z_Param_Aes256bitKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientSendFileOverTCP)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_connectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EFileFunctionsSocketClientDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FStrProperty,Z_Param_Aes256bitKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::socketClientSendFileOverTCP(Z_Param_Out_connectionID,Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EFileFunctionsSocketClientDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_token,Z_Param_Aes256bitKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientSendTCP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY(uint8,Z_Param_byteArray);
		P_GET_UBOOL(Z_Param_addLineBreak);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::socketClientSendTCP(Z_Param_connectionID,Z_Param_message,Z_Param_byteArray,Z_Param_addLineBreak);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execconnectSocketClientTCP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_domainOrIP);
		P_GET_ENUM(ESocketClientIPType,Z_Param_ipType);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_ENUM(EReceiveFilterClient,Z_Param_receiveFilters);
		P_GET_ENUM(ESocketClientTCPSeparator,Z_Param_messageSeparator);
		P_GET_PROPERTY(FStrProperty,Z_Param_optionalCustomConnectionID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_connectionID);
		P_GET_UBOOL(Z_Param_ignoreTheKeepAlivePacket);
		P_GET_UBOOL(Z_Param_disableNaglesAlgorithm);
		P_FINISH;
		P_NATIVE_BEGIN;
		USocketClientBPLibrary::connectSocketClientTCP(Z_Param_domainOrIP,ESocketClientIPType(Z_Param_ipType),Z_Param_port,EReceiveFilterClient(Z_Param_receiveFilters),ESocketClientTCPSeparator(Z_Param_messageSeparator),Z_Param_optionalCustomConnectionID,Z_Param_Out_connectionID,Z_Param_ignoreTheKeepAlivePacket,Z_Param_disableNaglesAlgorithm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execgetSocketClientTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USocketClientBPLibrary**)Z_Param__Result=USocketClientBPLibrary::getSocketClientTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execfileTransferOverTCPInfoEventDelegate)
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
	DEFINE_FUNCTION(USocketClientBPLibrary::exectransferFileOverTCPProgressEventDelegate)
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
	DEFINE_FUNCTION(USocketClientBPLibrary::execreadBytesFromFileInPartsEventDelegate)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_fileSize);
		P_GET_PROPERTY(FInt64Property,Z_Param_position);
		P_GET_UBOOL(Z_Param_end);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->readBytesFromFileInPartsEventDelegate(Z_Param_fileSize,Z_Param_position,Z_Param_end,Z_Param_Out_byteArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execreceiveUDPMessageEventDelegate)
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
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientUDPConnectionEventDelegate)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->socketClientUDPConnectionEventDelegate(Z_Param_success,Z_Param_message,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execreceiveTCPMessageEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->receiveTCPMessageEventDelegate(Z_Param_message,Z_Param_Out_byteArray,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketClientBPLibrary::execsocketClientTCPConnectionEventDelegate)
	{
		P_GET_UBOOL(Z_Param_success);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_clientConnectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->socketClientTCPConnectionEventDelegate(Z_Param_success,Z_Param_message,Z_Param_clientConnectionID);
		P_NATIVE_END;
	}
	void USocketClientBPLibrary::StaticRegisterNativesUSocketClientBPLibrary()
	{
		UClass* Class = USocketClientBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeCleanerThreadSettingsOnClient", &USocketClientBPLibrary::execchangeCleanerThreadSettingsOnClient },
			{ "changeSocketPlatform", &USocketClientBPLibrary::execchangeSocketPlatform },
			{ "changeTCPSeparatorByteOnClient", &USocketClientBPLibrary::execchangeTCPSeparatorByteOnClient },
			{ "changeTCPSeparatorStringOnClient", &USocketClientBPLibrary::execchangeTCPSeparatorStringOnClient },
			{ "closeAllSocketClientConnectionsTCP", &USocketClientBPLibrary::execcloseAllSocketClientConnectionsTCP },
			{ "closeSocketClientConnectionTCP", &USocketClientBPLibrary::execcloseSocketClientConnectionTCP },
			{ "closeSocketClientConnectionUDP", &USocketClientBPLibrary::execcloseSocketClientConnectionUDP },
			{ "connectSocketClientTCP", &USocketClientBPLibrary::execconnectSocketClientTCP },
			{ "fileTransferOverTCPInfoEventDelegate", &USocketClientBPLibrary::execfileTransferOverTCPInfoEventDelegate },
			{ "getLocalIP", &USocketClientBPLibrary::execgetLocalIP },
			{ "getRandomID", &USocketClientBPLibrary::execgetRandomID },
			{ "getSocketClientTarget", &USocketClientBPLibrary::execgetSocketClientTarget },
			{ "getSystemType", &USocketClientBPLibrary::execgetSystemType },
			{ "getTCPConnectionByConnectionID", &USocketClientBPLibrary::execgetTCPConnectionByConnectionID },
			{ "getUDPInitializationByConnectionID", &USocketClientBPLibrary::execgetUDPInitializationByConnectionID },
			{ "getUniquePlayerID", &USocketClientBPLibrary::execgetUniquePlayerID },
			{ "isTCPConnected", &USocketClientBPLibrary::execisTCPConnected },
			{ "isUDPInitialized", &USocketClientBPLibrary::execisUDPInitialized },
			{ "parseBytesToFloat", &USocketClientBPLibrary::execparseBytesToFloat },
			{ "parseBytesToFloatArrayPure", &USocketClientBPLibrary::execparseBytesToFloatArrayPure },
			{ "parseBytesToFloatEndian", &USocketClientBPLibrary::execparseBytesToFloatEndian },
			{ "parseBytesToFloatPure", &USocketClientBPLibrary::execparseBytesToFloatPure },
			{ "parseBytesToHex", &USocketClientBPLibrary::execparseBytesToHex },
			{ "parseBytesToHexPure", &USocketClientBPLibrary::execparseBytesToHexPure },
			{ "parseBytesToInteger", &USocketClientBPLibrary::execparseBytesToInteger },
			{ "parseBytesToInteger64", &USocketClientBPLibrary::execparseBytesToInteger64 },
			{ "parseBytesToInteger64ArrayPure", &USocketClientBPLibrary::execparseBytesToInteger64ArrayPure },
			{ "parseBytesToInteger64Endian", &USocketClientBPLibrary::execparseBytesToInteger64Endian },
			{ "parseBytesToInteger64Pure", &USocketClientBPLibrary::execparseBytesToInteger64Pure },
			{ "parseBytesToIntegerArrayPure", &USocketClientBPLibrary::execparseBytesToIntegerArrayPure },
			{ "parseBytesToIntegerEndian", &USocketClientBPLibrary::execparseBytesToIntegerEndian },
			{ "parseBytesToIntegerPure", &USocketClientBPLibrary::execparseBytesToIntegerPure },
			{ "parseFloatArrayToBytesPure", &USocketClientBPLibrary::execparseFloatArrayToBytesPure },
			{ "parseFloatToBytes", &USocketClientBPLibrary::execparseFloatToBytes },
			{ "parseFloatToBytesPure", &USocketClientBPLibrary::execparseFloatToBytesPure },
			{ "parseHexToBytes", &USocketClientBPLibrary::execparseHexToBytes },
			{ "parseHexToBytesPure", &USocketClientBPLibrary::execparseHexToBytesPure },
			{ "parseHexToString", &USocketClientBPLibrary::execparseHexToString },
			{ "parseHexToStringPure", &USocketClientBPLibrary::execparseHexToStringPure },
			{ "parseInteger64ArrayToBytesPure", &USocketClientBPLibrary::execparseInteger64ArrayToBytesPure },
			{ "parseInteger64ToBytes", &USocketClientBPLibrary::execparseInteger64ToBytes },
			{ "parseInteger64ToBytesPure", &USocketClientBPLibrary::execparseInteger64ToBytesPure },
			{ "parseIntegerArrayToBytesPure", &USocketClientBPLibrary::execparseIntegerArrayToBytesPure },
			{ "parseIntegerToBytes", &USocketClientBPLibrary::execparseIntegerToBytes },
			{ "parseIntegerToBytesPure", &USocketClientBPLibrary::execparseIntegerToBytesPure },
			{ "readBytesFromFileInPartsEventDelegate", &USocketClientBPLibrary::execreadBytesFromFileInPartsEventDelegate },
			{ "receiveTCPMessageEventDelegate", &USocketClientBPLibrary::execreceiveTCPMessageEventDelegate },
			{ "receiveUDPMessageEventDelegate", &USocketClientBPLibrary::execreceiveUDPMessageEventDelegate },
			{ "socketClientInitUDPReceiver", &USocketClientBPLibrary::execsocketClientInitUDPReceiver },
			{ "socketClientRequestFileOverTCP", &USocketClientBPLibrary::execsocketClientRequestFileOverTCP },
			{ "socketClientSendFileOverTCP", &USocketClientBPLibrary::execsocketClientSendFileOverTCP },
			{ "socketClientSendTCP", &USocketClientBPLibrary::execsocketClientSendTCP },
			{ "socketClientSendUDP", &USocketClientBPLibrary::execsocketClientSendUDP },
			{ "socketClientTCPConnectionEventDelegate", &USocketClientBPLibrary::execsocketClientTCPConnectionEventDelegate },
			{ "socketClientUDPConnectionEventDelegate", &USocketClientBPLibrary::execsocketClientUDPConnectionEventDelegate },
			{ "transferFileOverTCPProgressEventDelegate", &USocketClientBPLibrary::exectransferFileOverTCPProgressEventDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics
	{
		struct SocketClientBPLibrary_eventchangeCleanerThreadSettingsOnClient_Parms
		{
			bool showLogs;
			int32 minLiveTimeInSeconds;
		};
		static void NewProp_showLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showLogs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_minLiveTimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_showLogs_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventchangeCleanerThreadSettingsOnClient_Parms*)Obj)->showLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_showLogs = { "showLogs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventchangeCleanerThreadSettingsOnClient_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_showLogs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_minLiveTimeInSeconds = { "minLiveTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventchangeCleanerThreadSettingsOnClient_Parms, minLiveTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_showLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::NewProp_minLiveTimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "Comment", "/**\n\x09*The cleaner thread is a thread that runs endlessly and deletes data remnants from closed/broken connections from RAM. \n\x09*@param showLogs Writes to the logs when data remnants are deleted.\n\x09*@param minLiveTimeInSeconds When a connection is closed it is passed to the cleaner thread. The thread ignores the connection for \"minLiveTimeInSeconds\" until it clears the data. This is necessary because sometimes connections need some time to be closed completely.\n\x09*/" },
		{ "CPP_Default_minLiveTimeInSeconds", "10" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "The cleaner thread is a thread that runs endlessly and deletes data remnants from closed/broken connections from RAM.\n@param showLogs Writes to the logs when data remnants are deleted.\n@param minLiveTimeInSeconds When a connection is closed it is passed to the cleaner thread. The thread ignores the connection for \"minLiveTimeInSeconds\" until it clears the data. This is necessary because sometimes connections need some time to be closed completely." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "changeCleanerThreadSettingsOnClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::SocketClientBPLibrary_eventchangeCleanerThreadSettingsOnClient_Parms), Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics
	{
		struct SocketClientBPLibrary_eventchangeSocketPlatform_Parms
		{
			ESocketPlatformClient platform;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_platform_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_platform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::NewProp_platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventchangeSocketPlatform_Parms, platform), Z_Construct_UEnum_SocketClient_ESocketPlatformClient, METADATA_PARAMS(nullptr, 0) }; // 1608997039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::NewProp_platform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::NewProp_platform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "Comment", "/**\n\x09*UE4 uses different socket connections. When Steam is active, Steam Sockets are used for all connections. This leads to problems if you want to use Steam but not Steam Sockets. Therefore you can change the sockets to \"System\".\n\x09*@param ESocketPlatformServer System = Windows on Windows, Mac = Mac on Mac ect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "UE4 uses different socket connections. When Steam is active, Steam Sockets are used for all connections. This leads to problems if you want to use Steam but not Steam Sockets. Therefore you can change the sockets to \"System\".\n@param ESocketPlatformServer System = Windows on Windows, Mac = Mac on Mac ect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "changeSocketPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::SocketClientBPLibrary_eventchangeSocketPlatform_Parms), Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics
	{
		struct SocketClientBPLibrary_eventchangeTCPSeparatorByteOnClient_Parms
		{
			uint8 separator;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_separator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::NewProp_separator = { "separator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventchangeTCPSeparatorByteOnClient_Parms, separator), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::NewProp_separator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "CPP_Default_separator", "0" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "changeTCPSeparatorByteOnClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::SocketClientBPLibrary_eventchangeTCPSeparatorByteOnClient_Parms), Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics
	{
		struct SocketClientBPLibrary_eventchangeTCPSeparatorStringOnClient_Parms
		{
			FString separator;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_separator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::NewProp_separator = { "separator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventchangeTCPSeparatorStringOnClient_Parms, separator), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::NewProp_separator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "CPP_Default_separator", "(~{" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "changeTCPSeparatorStringOnClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::SocketClientBPLibrary_eventchangeTCPSeparatorStringOnClient_Parms), Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Terminates all connections.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Terminates all connections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "closeAllSocketClientConnectionsTCP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics
	{
		struct SocketClientBPLibrary_eventcloseSocketClientConnectionTCP_Parms
		{
			FString connectionID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventcloseSocketClientConnectionTCP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::NewProp_connectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Terminates an existing connection.\n\x09*@param connectionID The ID to an existing connection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Terminates an existing connection.\n@param connectionID The ID to an existing connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "closeSocketClientConnectionTCP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::SocketClientBPLibrary_eventcloseSocketClientConnectionTCP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics
	{
		struct SocketClientBPLibrary_eventcloseSocketClientConnectionUDP_Parms
		{
			FString connectionID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventcloseSocketClientConnectionUDP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::NewProp_connectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|UDP" },
		{ "Comment", "/**\n\x09* Terminates an existing connection.\n\x09*@param connectionID The ID to an existing connection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Terminates an existing connection.\n@param connectionID The ID to an existing connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "closeSocketClientConnectionUDP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::SocketClientBPLibrary_eventcloseSocketClientConnectionUDP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics
	{
		struct SocketClientBPLibrary_eventconnectSocketClientTCP_Parms
		{
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EReceiveFilterClient receiveFilters;
			ESocketClientTCPSeparator messageSeparator;
			FString optionalCustomConnectionID;
			FString connectionID;
			bool ignoreTheKeepAlivePacket;
			bool disableNaglesAlgorithm;
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static void NewProp_ignoreTheKeepAlivePacket_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreTheKeepAlivePacket;
		static void NewProp_disableNaglesAlgorithm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_disableNaglesAlgorithm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_receiveFilters_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_receiveFilters = { "receiveFilters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, receiveFilters), Z_Construct_UEnum_SocketClient_EReceiveFilterClient, METADATA_PARAMS(nullptr, 0) }; // 3867733933
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_messageSeparator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_messageSeparator = { "messageSeparator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, messageSeparator), Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator, METADATA_PARAMS(nullptr, 0) }; // 550266652
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_optionalCustomConnectionID = { "optionalCustomConnectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, optionalCustomConnectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ignoreTheKeepAlivePacket_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventconnectSocketClientTCP_Parms*)Obj)->ignoreTheKeepAlivePacket = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ignoreTheKeepAlivePacket = { "ignoreTheKeepAlivePacket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ignoreTheKeepAlivePacket_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_disableNaglesAlgorithm_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventconnectSocketClientTCP_Parms*)Obj)->disableNaglesAlgorithm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_disableNaglesAlgorithm = { "disableNaglesAlgorithm", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventconnectSocketClientTCP_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_disableNaglesAlgorithm_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_receiveFilters_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_receiveFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_messageSeparator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_messageSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_optionalCustomConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_ignoreTheKeepAlivePacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::NewProp_disableNaglesAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "8" },
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Connect to a TCP Server\n\x09* @param domainOrIP IP or Domain of your server\n\x09* @param ipType\n\x09* @param port\n\x09* @param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n\x09* @param messageSeparator It may be that data packets are split or merged when transmitted over TCP in order to optimize the transmission. For example, if you send \"Hello\" two times in a row very quickly, it can happen that \"HelloHa\" and \"llo\" arrive. To counteract this circumstance there are options to separate the data packets.\n\x09* @param optionalCustomConnectionID Instead of an automatically generated ConnectionID you can use your own ID with this parameter.\n\x09* @param ignoreTheKeepAlivePacket Activate to ignore the (0x00) keep alive byte of the server that can optionally be sent by the server plugin.\n\x09* @param disableNaglesAlgorithm Don't change it if you don't know what this option is for! With this you can disable the TCP Nagle's algorithm to send (in LAN) very small data packets faster.\n\x09**/" },
		{ "CPP_Default_disableNaglesAlgorithm", "false" },
		{ "CPP_Default_ignoreTheKeepAlivePacket", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Connect to a TCP Server\n@param domainOrIP IP or Domain of your server\n@param ipType\n@param port\n@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n@param messageSeparator It may be that data packets are split or merged when transmitted over TCP in order to optimize the transmission. For example, if you send \"Hello\" two times in a row very quickly, it can happen that \"HelloHa\" and \"llo\" arrive. To counteract this circumstance there are options to separate the data packets.\n@param optionalCustomConnectionID Instead of an automatically generated ConnectionID you can use your own ID with this parameter.\n@param ignoreTheKeepAlivePacket Activate to ignore the (0x00) keep alive byte of the server that can optionally be sent by the server plugin.\n@param disableNaglesAlgorithm Don't change it if you don't know what this option is for! With this you can disable the TCP Nagle's algorithm to send (in LAN) very small data packets faster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "connectSocketClientTCP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::SocketClientBPLibrary_eventconnectSocketClientTCP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms, filePath), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "fileTransferOverTCPInfoEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::SocketClientBPLibrary_eventfileTransferOverTCPInfoEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics
	{
		struct SocketClientBPLibrary_eventgetLocalIP_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetLocalIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "Comment", "/**\n\x09*Trying to determine the local IP. It uses a function in the engine that does not work on all devices. On Windows and Linux it seems to work very well. Very bad on Android. 0.0.0.0 will be returned if it doesn't work.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Trying to determine the local IP. It uses a function in the engine that does not work on all devices. On Windows and Linux it seems to work very well. Very bad on Android. 0.0.0.0 will be returned if it doesn't work." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getLocalIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::SocketClientBPLibrary_eventgetLocalIP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics
	{
		struct SocketClientBPLibrary_eventgetRandomID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetRandomID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getRandomID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::SocketClientBPLibrary_eventgetRandomID_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getRandomID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getRandomID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics
	{
		struct SocketClientBPLibrary_eventgetSocketClientTarget_Parms
		{
			USocketClientBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetSocketClientTarget_Parms, ReturnValue), Z_Construct_UClass_USocketClientBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient" },
		{ "Comment", "/**\n\x09*  Get an instance of this library. This allows non-static functions to be called. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Get an instance of this library. This allows non-static functions to be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getSocketClientTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::SocketClientBPLibrary_eventgetSocketClientTarget_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics
	{
		struct SocketClientBPLibrary_eventgetSystemType_Parms
		{
			ESocketClientSystem system;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_system_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_system;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::NewProp_system_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::NewProp_system = { "system", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetSystemType_Parms, system), Z_Construct_UEnum_SocketClient_ESocketClientSystem, METADATA_PARAMS(nullptr, 0) }; // 2257453590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::NewProp_system_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::NewProp_system,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "Comment", "/**\n\x09* Returns which system you are currently use. (Windows, OSX, IOS ...)\n\x09*/" },
		{ "ExpandEnumAsExecs", "system" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Returns which system you are currently use. (Windows, OSX, IOS ...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getSystemType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::SocketClientBPLibrary_eventgetSystemType_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getSystemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getSystemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics
	{
		struct SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms
		{
			FString connectionID;
			bool found;
			USocketClientTCPClient* connection;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_connection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms, connection), Z_Construct_UClass_USocketClientTCPClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::NewProp_connection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Useful if you want to attach events to a certain connection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Useful if you want to attach events to a certain connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getTCPConnectionByConnectionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::SocketClientBPLibrary_eventgetTCPConnectionByConnectionID_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics
	{
		struct SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms
		{
			FString connectionID;
			bool found;
			USocketClientUDP* connection;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_connection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms, connection), Z_Construct_UClass_USocketClientUDP_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::NewProp_connection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|UDP" },
		{ "Comment", "/**\n\x09* Useful if you want to attach events to a certain connection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Useful if you want to attach events to a certain connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getUDPInitializationByConnectionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::SocketClientBPLibrary_eventgetUDPInitializationByConnectionID_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics
	{
		struct SocketClientBPLibrary_eventgetUniquePlayerID_Parms
		{
			APlayerController* playerController;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetUniquePlayerID_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventgetUniquePlayerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::NewProp_playerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions" },
		{ "CPP_Default_playerController", "None" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "getUniquePlayerID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::SocketClientBPLibrary_eventgetUniquePlayerID_Parms), Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics
	{
		struct SocketClientBPLibrary_eventisTCPConnected_Parms
		{
			FString connectionID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventisTCPConnected_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventisTCPConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventisTCPConnected_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "isTCPConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::SocketClientBPLibrary_eventisTCPConnected_Parms), Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics
	{
		struct SocketClientBPLibrary_eventisUDPInitialized_Parms
		{
			FString connectionID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventisUDPInitialized_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventisUDPInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventisUDPInitialized_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|UDP" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "isUDPInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::SocketClientBPLibrary_eventisUDPInitialized_Parms), Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToFloat_Parms
		{
			TArray<uint8> bytes;
			float value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloat_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "Comment", "//number stuff\n" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "number stuff" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::SocketClientBPLibrary_eventparseBytesToFloat_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToFloatArrayPure_Parms
		{
			TArray<float> value;
			TArray<uint8> bytes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatArrayPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatArrayPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::NewProp_bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "value" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToFloatArrayPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::SocketClientBPLibrary_eventparseBytesToFloatArrayPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToFloatEndian_Parms
		{
			TArray<uint8> bytes;
			float littleEndian;
			float bigEndian;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_littleEndian;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bigEndian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatEndian_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_littleEndian = { "littleEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatEndian_Parms, littleEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bigEndian = { "bigEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatEndian_Parms, bigEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_littleEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::NewProp_bigEndian,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToFloatEndian", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::SocketClientBPLibrary_eventparseBytesToFloatEndian_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToFloatPure_Parms
		{
			TArray<uint8> bytes;
			float value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToFloatPure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToFloatPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::SocketClientBPLibrary_eventparseBytesToFloatPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToHex_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToHex_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToHex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::SocketClientBPLibrary_eventparseBytesToHex_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToHexPure_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToHexPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToHexPure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToHexPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::SocketClientBPLibrary_eventparseBytesToHexPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToInteger_Parms
		{
			TArray<uint8> bytes;
			int32 value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::SocketClientBPLibrary_eventparseBytesToInteger_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToInteger64_Parms
		{
			TArray<uint8> bytes;
			int64 value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToInteger64", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::SocketClientBPLibrary_eventparseBytesToInteger64_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToInteger64ArrayPure_Parms
		{
			TArray<int64> value;
			TArray<uint8> bytes;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64ArrayPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64ArrayPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::NewProp_bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "value" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToInteger64ArrayPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::SocketClientBPLibrary_eventparseBytesToInteger64ArrayPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToInteger64Endian_Parms
		{
			TArray<uint8> bytes;
			int64 littleEndian;
			int64 bigEndian;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_littleEndian;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_bigEndian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64Endian_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_littleEndian = { "littleEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64Endian_Parms, littleEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bigEndian = { "bigEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64Endian_Parms, bigEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_littleEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::NewProp_bigEndian,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToInteger64Endian", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::SocketClientBPLibrary_eventparseBytesToInteger64Endian_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToInteger64Pure_Parms
		{
			TArray<uint8> bytes;
			int64 value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64Pure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToInteger64Pure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToInteger64Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::SocketClientBPLibrary_eventparseBytesToInteger64Pure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToIntegerArrayPure_Parms
		{
			TArray<int32> value;
			TArray<uint8> bytes;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerArrayPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerArrayPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::NewProp_bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "value" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToIntegerArrayPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::SocketClientBPLibrary_eventparseBytesToIntegerArrayPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToIntegerEndian_Parms
		{
			TArray<uint8> bytes;
			int32 littleEndian;
			int32 bigEndian;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_littleEndian;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bigEndian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerEndian_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_littleEndian = { "littleEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerEndian_Parms, littleEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bigEndian = { "bigEndian", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerEndian_Parms, bigEndian), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_littleEndian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::NewProp_bigEndian,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToIntegerEndian", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::SocketClientBPLibrary_eventparseBytesToIntegerEndian_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics
	{
		struct SocketClientBPLibrary_eventparseBytesToIntegerPure_Parms
		{
			TArray<uint8> bytes;
			int32 value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerPure_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseBytesToIntegerPure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseBytesToIntegerPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::SocketClientBPLibrary_eventparseBytesToIntegerPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseFloatArrayToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			TArray<float> value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatArrayToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatArrayToBytesPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseFloatArrayToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::SocketClientBPLibrary_eventparseFloatArrayToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics
	{
		struct SocketClientBPLibrary_eventparseFloatToBytes_Parms
		{
			TArray<uint8> byteArray;
			float value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatToBytes_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatToBytes_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseFloatToBytes_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseFloatToBytes_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseFloatToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::SocketClientBPLibrary_eventparseFloatToBytes_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseFloatToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			float value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseFloatToBytesPure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseFloatToBytesPure_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseFloatToBytesPure_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseFloatToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::SocketClientBPLibrary_eventparseFloatToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics
	{
		struct SocketClientBPLibrary_eventparseHexToBytes_Parms
		{
			FString hex;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_hex = { "hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToBytes_Parms, hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseHexToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::SocketClientBPLibrary_eventparseHexToBytes_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseHexToBytesPure_Parms
		{
			FString hex;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_hex = { "hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToBytesPure_Parms, hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToBytesPure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseHexToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::SocketClientBPLibrary_eventparseHexToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics
	{
		struct SocketClientBPLibrary_eventparseHexToString_Parms
		{
			FString hex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::NewProp_hex = { "hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToString_Parms, hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::NewProp_hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseHexToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::SocketClientBPLibrary_eventparseHexToString_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics
	{
		struct SocketClientBPLibrary_eventparseHexToStringPure_Parms
		{
			FString hex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::NewProp_hex = { "hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToStringPure_Parms, hex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseHexToStringPure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::NewProp_hex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|SpecialFunctions|Hex" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseHexToStringPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::SocketClientBPLibrary_eventparseHexToStringPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseInteger64ArrayToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			TArray<int64> value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ArrayToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ArrayToBytesPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseInteger64ArrayToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::SocketClientBPLibrary_eventparseInteger64ArrayToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics
	{
		struct SocketClientBPLibrary_eventparseInteger64ToBytes_Parms
		{
			TArray<uint8> byteArray;
			int64 value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ToBytes_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ToBytes_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseInteger64ToBytes_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseInteger64ToBytes_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseInteger64ToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::SocketClientBPLibrary_eventparseInteger64ToBytes_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			int64 value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseInteger64ToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::SocketClientBPLibrary_eventparseInteger64ToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseIntegerArrayToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			TArray<int32> value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerArrayToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerArrayToBytesPure_Parms, value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseIntegerArrayToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::SocketClientBPLibrary_eventparseIntegerArrayToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics
	{
		struct SocketClientBPLibrary_eventparseIntegerToBytes_Parms
		{
			TArray<uint8> byteArray;
			int32 value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerToBytes_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerToBytes_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseIntegerToBytes_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseIntegerToBytes_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseIntegerToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::SocketClientBPLibrary_eventparseIntegerToBytes_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics
	{
		struct SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms
		{
			TArray<uint8> byteArray;
			int32 value;
			bool switchByteOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static void NewProp_switchByteOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_switchByteOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_switchByteOrder_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms*)Obj)->switchByteOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_switchByteOrder = { "switchByteOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_switchByteOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::NewProp_switchByteOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|SpecialFunctions|Number" },
		{ "CPP_Default_switchByteOrder", "false" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "parseIntegerToBytesPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::SocketClientBPLibrary_eventparseIntegerToBytesPure_Parms), Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms
		{
			int64 fileSize;
			int64 position;
			bool end;
			TArray<uint8> byteArray;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static void NewProp_end_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_end;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_byteArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_fileSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, fileSize), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_fileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_fileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, position), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms*)Obj)->end = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_fileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::NewProp_byteArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "readBytesFromFileInPartsEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::SocketClientBPLibrary_eventreadBytesFromFileInPartsEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_message_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "receiveTCPMessageEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::SocketClientBPLibrary_eventreceiveTCPMessageEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_message_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, port), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "receiveUDPMessageEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::SocketClientBPLibrary_eventreceiveUDPMessageEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms
		{
			FString connectionID;
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EReceiveFilterClient receiveFilter;
			int32 maxPacketSize;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FBytePropertyParams NewProp_receiveFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_receiveFilter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxPacketSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_receiveFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_receiveFilter = { "receiveFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, receiveFilter), Z_Construct_UEnum_SocketClient_EReceiveFilterClient, METADATA_PARAMS(nullptr, 0) }; // 3867733933
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_maxPacketSize = { "maxPacketSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms, maxPacketSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_receiveFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_receiveFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::NewProp_maxPacketSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|UDP" },
		{ "Comment", "/**\n\x09*Opens a connection on specific ip and port and listen on it.\n\x09*@param DomainOrIP IP or Domain to listen on. 0.0.0.0 means that data can be received on all local IPs.\n\x09*@param port port to listen on\n\x09*@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n\x09*@param maxPacketSize sets the maximum UDP packet size. More than 65507 is not possible.\n\x09*/" },
		{ "CPP_Default_domainOrIP", "0.0.0.0" },
		{ "CPP_Default_ipType", "E_ipv4" },
		{ "CPP_Default_maxPacketSize", "65507" },
		{ "CPP_Default_port", "8888" },
		{ "CPP_Default_receiveFilter", "E_SAB" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Opens a connection on specific ip and port and listen on it.\n@param DomainOrIP IP or Domain to listen on. 0.0.0.0 means that data can be received on all local IPs.\n@param port port to listen on\n@param receiveFilter This allows you to decide which data type you want to receive. If you receive files it makes no sense to convert them into a string.\n@param maxPacketSize sets the maximum UDP packet size. More than 65507 is not possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientInitUDPReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::SocketClientBPLibrary_eventsocketClientInitUDPReceiver_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms
		{
			FString connectionID;
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString downloadDirectory;
			bool resume;
			FString token;
			FString Aes256bitKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_downloadDirectory;
		static void NewProp_resume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_resume;
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Aes256bitKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_downloadDirectory = { "downloadDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, downloadDirectory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_resume_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms*)Obj)->resume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_resume = { "resume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_resume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_Aes256bitKey = { "Aes256bitKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms, Aes256bitKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_downloadDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_resume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::NewProp_Aes256bitKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Lets the server send a file to this client as a kind of stream. This allows extremely large files to be sent since they do not have to be loaded into RAM beforehand. At the end of the transfer a MD5 checksum is created and compared between client and server to exclude errors during the transfer.\n\x09*@param connectionID The ID to an existing connection.\n\x09*@param domainOrIP IP or Domain of your server\n\x09*@param directoryType Absolute or relative directory. Absolute directory starts at the disk (e.g. Windows C:\\).  A relative directory starts one level higher than the Content directory in the project or game.\n\x09*@param filePath Directory including the file to be sent.\n\x09*@param token The token is a unique ID that the client and server must know. The server recognizes by the toke what kind of file should be sent.\n\x09*@param Aes256bitKey The AES key must consist of 32 ASCII characters. The communication between client and server is encrypted via AES in 256bit. Therefore a key must be entered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Lets the server send a file to this client as a kind of stream. This allows extremely large files to be sent since they do not have to be loaded into RAM beforehand. At the end of the transfer a MD5 checksum is created and compared between client and server to exclude errors during the transfer.\n@param connectionID The ID to an existing connection.\n@param domainOrIP IP or Domain of your server\n@param directoryType Absolute or relative directory. Absolute directory starts at the disk (e.g. Windows C:\\).  A relative directory starts one level higher than the Content directory in the project or game.\n@param filePath Directory including the file to be sent.\n@param token The token is a unique ID that the client and server must know. The server recognizes by the toke what kind of file should be sent.\n@param Aes256bitKey The AES key must consist of 32 ASCII characters. The communication between client and server is encrypted via AES in 256bit. Therefore a key must be entered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientRequestFileOverTCP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::SocketClientBPLibrary_eventsocketClientRequestFileOverTCP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms
		{
			FString connectionID;
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			EFileFunctionsSocketClientDirectoryType directoryType;
			FString filePath;
			FString token;
			FString Aes256bitKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Aes256bitKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, directoryType), Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2655112993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_Aes256bitKey = { "Aes256bitKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms, Aes256bitKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::NewProp_Aes256bitKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Sends files as a kind of stream. This allows extremely large files to be sent since they do not have to be loaded into RAM beforehand. At the end of the transfer a MD5 checksum is created and compared between client and server to exclude errors during the transfer. \n\x09*@param connectionID The ID to an existing connection.\n\x09*@param domainOrIP IP or Domain of your server\n\x09*@param directoryType Absolute or relative directory. Absolute directory starts at the disk (e.g. Windows C:\\).  A relative directory starts one level higher than the Content directory in the project or game.\n\x09*@param filePath Directory including the file to be sent. \n\x09*@param token The token is a unique ID that the client and server must know. The server knows from the token in which directory the file should be saved. \n\x09*@param Aes256bitKey The AES key must consist of 32 ASCII characters. The communication between client and server is encrypted via AES in 256bit. Therefore a key must be entered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Sends files as a kind of stream. This allows extremely large files to be sent since they do not have to be loaded into RAM beforehand. At the end of the transfer a MD5 checksum is created and compared between client and server to exclude errors during the transfer.\n@param connectionID The ID to an existing connection.\n@param domainOrIP IP or Domain of your server\n@param directoryType Absolute or relative directory. Absolute directory starts at the disk (e.g. Windows C:\\).  A relative directory starts one level higher than the Content directory in the project or game.\n@param filePath Directory including the file to be sent.\n@param token The token is a unique ID that the client and server must know. The server knows from the token in which directory the file should be saved.\n@param Aes256bitKey The AES key must consist of 32 ASCII characters. The communication between client and server is encrypted via AES in 256bit. Therefore a key must be entered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientSendFileOverTCP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::SocketClientBPLibrary_eventsocketClientSendFileOverTCP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientSendTCP_Parms
		{
			FString connectionID;
			FString message;
			TArray<uint8> byteArray;
			bool addLineBreak;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static void NewProp_addLineBreak_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_addLineBreak;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendTCP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendTCP_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendTCP_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_addLineBreak_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientSendTCP_Parms*)Obj)->addLineBreak = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_addLineBreak = { "addLineBreak", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientSendTCP_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_addLineBreak_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_connectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::NewProp_addLineBreak,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|TCP" },
		{ "Comment", "/**\n\x09* Sends a string or byte array to the server. \n\x09*@param connectionID The ID to an existing connection.\n\x09*@param message String to send\n\x09*@param byteArray bytes to send\n\x09*@param addLineBreak add a line break at the end\n\x09*/" },
		{ "CPP_Default_addLineBreak", "true" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "Sends a string or byte array to the server.\n@param connectionID The ID to an existing connection.\n@param message String to send\n@param byteArray bytes to send\n@param addLineBreak add a line break at the end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientSendTCP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::SocketClientBPLibrary_eventsocketClientSendTCP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientSendUDP_Parms
		{
			FString domainOrIP;
			ESocketClientIPType ipType;
			int32 port;
			FString message;
			TArray<uint8> byteArray;
			bool addLineBreak;
			FString connectionID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_domainOrIP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ipType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ipType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_byteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_byteArray;
		static void NewProp_addLineBreak_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_addLineBreak;
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_domainOrIP = { "domainOrIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, domainOrIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_ipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_ipType = { "ipType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, ipType), Z_Construct_UEnum_SocketClient_ESocketClientIPType, METADATA_PARAMS(nullptr, 0) }; // 107307729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_byteArray_Inner = { "byteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_byteArray = { "byteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, byteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_addLineBreak_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientSendUDP_Parms*)Obj)->addLineBreak = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_addLineBreak = { "addLineBreak", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientSendUDP_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_addLineBreak_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_connectionID = { "connectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientSendUDP_Parms, connectionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_domainOrIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_ipType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_ipType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_byteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_byteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_addLineBreak,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::NewProp_connectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "byteArray" },
		{ "Category", "SocketClient|UDP" },
		{ "Comment", "/**\n\x09* A ConnectionID must be created first with \"socketClientInitUDPReceiver\". Messages and bytes can be sent to different hosts with the same ConnectionID.\n\x09*@param DomainOrIP target IP or Domain\n\x09*@param port target port\n\x09*@param message String to send\n\x09*@param addLineBreak add a line break at the end\n\x09*@param uniqueID is optional and required when multiple connections to the same server (same ip and port) shall be established. You can use getUniquePlayerID\n\x09*/" },
		{ "CPP_Default_addLineBreak", "true" },
		{ "CPP_Default_connectionID", "" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "A ConnectionID must be created first with \"socketClientInitUDPReceiver\". Messages and bytes can be sent to different hosts with the same ConnectionID.\n@param DomainOrIP target IP or Domain\n@param port target port\n@param message String to send\n@param addLineBreak add a line break at the end\n@param uniqueID is optional and required when multiple connections to the same server (same ip and port) shall be established. You can use getUniquePlayerID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientSendUDP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::SocketClientBPLibrary_eventsocketClientSendUDP_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientTCPConnectionEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::SocketClientBPLibrary_eventsocketClientTCPConnectionEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms), &Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::NewProp_clientConnectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "socketClientUDPConnectionEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::SocketClientBPLibrary_eventsocketClientUDPConnectionEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics
	{
		struct SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID = { "clientConnectionID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, clientConnectionID), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, filePath), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, percent), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit = { "mbit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, mbit), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred = { "bytesTransferred", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, bytesTransferred), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms, fileSize), METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_clientConnectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_mbit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_bytesTransferred,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::NewProp_fileSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketClientBPLibrary, nullptr, "transferFileOverTCPProgressEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::SocketClientBPLibrary_eventtransferFileOverTCPProgressEventDelegate_Parms), Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocketClientBPLibrary);
	UClass* Z_Construct_UClass_USocketClientBPLibrary_NoRegister()
	{
		return USocketClientBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USocketClientBPLibrary_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onsocketClientUDPConnectionEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onsocketClientUDPConnectionEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onreceiveUDPMessageEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onreceiveUDPMessageEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onreadBytesFromFileInPartsEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onreadBytesFromFileInPartsEventDelegate;
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
	UObject* (*const Z_Construct_UClass_USocketClientBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketClientBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketClientBPLibrary_changeCleanerThreadSettingsOnClient, "changeCleanerThreadSettingsOnClient" }, // 716179410
		{ &Z_Construct_UFunction_USocketClientBPLibrary_changeSocketPlatform, "changeSocketPlatform" }, // 1681401912
		{ &Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorByteOnClient, "changeTCPSeparatorByteOnClient" }, // 2847130361
		{ &Z_Construct_UFunction_USocketClientBPLibrary_changeTCPSeparatorStringOnClient, "changeTCPSeparatorStringOnClient" }, // 2718333886
		{ &Z_Construct_UFunction_USocketClientBPLibrary_closeAllSocketClientConnectionsTCP, "closeAllSocketClientConnectionsTCP" }, // 902286743
		{ &Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionTCP, "closeSocketClientConnectionTCP" }, // 2399464037
		{ &Z_Construct_UFunction_USocketClientBPLibrary_closeSocketClientConnectionUDP, "closeSocketClientConnectionUDP" }, // 3238007557
		{ &Z_Construct_UFunction_USocketClientBPLibrary_connectSocketClientTCP, "connectSocketClientTCP" }, // 3794638163
		{ &Z_Construct_UFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate, "fileTransferOverTCPInfoEventDelegate" }, // 902862027
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature, "fileTransferOverTCPInfoEventDelegate__DelegateSignature" }, // 3242282145
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getLocalIP, "getLocalIP" }, // 4028155784
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getRandomID, "getRandomID" }, // 903357714
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getSocketClientTarget, "getSocketClientTarget" }, // 2056438515
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getSystemType, "getSystemType" }, // 826925627
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getTCPConnectionByConnectionID, "getTCPConnectionByConnectionID" }, // 282438986
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getUDPInitializationByConnectionID, "getUDPInitializationByConnectionID" }, // 3586777661
		{ &Z_Construct_UFunction_USocketClientBPLibrary_getUniquePlayerID, "getUniquePlayerID" }, // 1555288696
		{ &Z_Construct_UFunction_USocketClientBPLibrary_isTCPConnected, "isTCPConnected" }, // 2764779887
		{ &Z_Construct_UFunction_USocketClientBPLibrary_isUDPInitialized, "isUDPInitialized" }, // 3790732277
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloat, "parseBytesToFloat" }, // 3606168458
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatArrayPure, "parseBytesToFloatArrayPure" }, // 1460713830
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatEndian, "parseBytesToFloatEndian" }, // 249584467
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToFloatPure, "parseBytesToFloatPure" }, // 379120818
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHex, "parseBytesToHex" }, // 2839145064
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToHexPure, "parseBytesToHexPure" }, // 1014743944
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger, "parseBytesToInteger" }, // 1879427748
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64, "parseBytesToInteger64" }, // 9133000
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64ArrayPure, "parseBytesToInteger64ArrayPure" }, // 3970100880
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Endian, "parseBytesToInteger64Endian" }, // 1747983493
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToInteger64Pure, "parseBytesToInteger64Pure" }, // 434854539
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerArrayPure, "parseBytesToIntegerArrayPure" }, // 249200175
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerEndian, "parseBytesToIntegerEndian" }, // 1918818426
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseBytesToIntegerPure, "parseBytesToIntegerPure" }, // 2665415522
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseFloatArrayToBytesPure, "parseFloatArrayToBytesPure" }, // 1708428339
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytes, "parseFloatToBytes" }, // 1541006636
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseFloatToBytesPure, "parseFloatToBytesPure" }, // 91750652
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytes, "parseHexToBytes" }, // 3885925934
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseHexToBytesPure, "parseHexToBytesPure" }, // 3838130865
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseHexToString, "parseHexToString" }, // 811123273
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseHexToStringPure, "parseHexToStringPure" }, // 1207943711
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ArrayToBytesPure, "parseInteger64ArrayToBytesPure" }, // 2682034867
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytes, "parseInteger64ToBytes" }, // 3603175165
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseInteger64ToBytesPure, "parseInteger64ToBytesPure" }, // 1623331665
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerArrayToBytesPure, "parseIntegerArrayToBytesPure" }, // 4038041605
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytes, "parseIntegerToBytes" }, // 2019223503
		{ &Z_Construct_UFunction_USocketClientBPLibrary_parseIntegerToBytesPure, "parseIntegerToBytesPure" }, // 1129445157
		{ &Z_Construct_UFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate, "readBytesFromFileInPartsEventDelegate" }, // 3247687204
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature, "readBytesFromFileInPartsEventDelegate__DelegateSignature" }, // 3609063969
		{ &Z_Construct_UFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate, "receiveTCPMessageEventDelegate" }, // 4180998046
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature, "receiveTCPMessageEventDelegate__DelegateSignature" }, // 784061061
		{ &Z_Construct_UFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate, "receiveUDPMessageEventDelegate" }, // 3932480836
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature, "receiveUDPMessageEventDelegate__DelegateSignature" }, // 774147894
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientInitUDPReceiver, "socketClientInitUDPReceiver" }, // 3548514676
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientRequestFileOverTCP, "socketClientRequestFileOverTCP" }, // 1912969932
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendFileOverTCP, "socketClientSendFileOverTCP" }, // 1396127903
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendTCP, "socketClientSendTCP" }, // 536433864
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientSendUDP, "socketClientSendUDP" }, // 700348283
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate, "socketClientTCPConnectionEventDelegate" }, // 4032480905
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature, "socketClientTCPConnectionEventDelegate__DelegateSignature" }, // 3340782440
		{ &Z_Construct_UFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate, "socketClientUDPConnectionEventDelegate" }, // 4291717321
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature, "socketClientUDPConnectionEventDelegate__DelegateSignature" }, // 2203424277
		{ &Z_Construct_UFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate, "transferFileOverTCPProgressEventDelegate" }, // 2328060317
		{ &Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature, "transferFileOverTCPProgressEventDelegate__DelegateSignature" }, // 1370001064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class FReadFileInPartsThread;\n" },
		{ "IncludePath", "SocketClientBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
		{ "ToolTip", "class FReadFileInPartsThread;" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|ConnectionInfo" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientTCPConnectionEventDelegate = { "onsocketClientTCPConnectionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onsocketClientTCPConnectionEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientTCPConnectionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientTCPConnectionEventDelegate_MetaData)) }; // 3340782440
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|ReceiveMessage" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveTCPMessageEventDelegate = { "onreceiveTCPMessageEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onreceiveTCPMessageEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveTCPMessageEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveTCPMessageEventDelegate_MetaData)) }; // 784061061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|UDP|Events|ConnectionInfo" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientUDPConnectionEventDelegate = { "onsocketClientUDPConnectionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onsocketClientUDPConnectionEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_socketClientUDPConnectionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientUDPConnectionEventDelegate_MetaData)) }; // 2203424277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|UDP|Events|ReceiveMessage" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveUDPMessageEventDelegate = { "onreceiveUDPMessageEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onreceiveUDPMessageEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_receiveUDPMessageEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveUDPMessageEventDelegate_MetaData)) }; // 774147894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreadBytesFromFileInPartsEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|SpecialFunctions|File|Events|ReadBytesFromFileInPartsAsync" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreadBytesFromFileInPartsEventDelegate = { "onreadBytesFromFileInPartsEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onreadBytesFromFileInPartsEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_readBytesFromFileInPartsEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreadBytesFromFileInPartsEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreadBytesFromFileInPartsEventDelegate_MetaData)) }; // 3609063969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|File|transferFileOverTCPProgress" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate = { "ontransferFileOverTCPProgressEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, ontransferFileOverTCPProgressEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_transferFileOverTCPProgressEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate_MetaData)) }; // 1370001064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData[] = {
		{ "Category", "SocketClient|TCP|Events|File|FileTransferOverTCPInfo" },
		{ "ModuleRelativePath", "Public/SocketClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate = { "onfileTransferOverTCPInfoEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocketClientBPLibrary, onfileTransferOverTCPInfoEventDelegate), Z_Construct_UDelegateFunction_USocketClientBPLibrary_fileTransferOverTCPInfoEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate_MetaData)) }; // 3242282145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocketClientBPLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientTCPConnectionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveTCPMessageEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onsocketClientUDPConnectionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreceiveUDPMessageEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onreadBytesFromFileInPartsEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_ontransferFileOverTCPProgressEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocketClientBPLibrary_Statics::NewProp_onfileTransferOverTCPInfoEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketClientBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketClientBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketClientBPLibrary_Statics::ClassParams = {
		&USocketClientBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USocketClientBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketClientBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketClientBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketClientBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USocketClientBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketClientBPLibrary.OuterSingleton, Z_Construct_UClass_USocketClientBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocketClientBPLibrary.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<USocketClientBPLibrary>()
	{
		return USocketClientBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketClientBPLibrary);
	struct Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::EnumInfo[] = {
		{ ESocketClientSystem_StaticEnum, TEXT("ESocketClientSystem"), &Z_Registration_Info_UEnum_ESocketClientSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2257453590U) },
		{ ESocketClientDirectoryType_StaticEnum, TEXT("ESocketClientDirectoryType"), &Z_Registration_Info_UEnum_ESocketClientDirectoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3093557323U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocketClientBPLibrary, USocketClientBPLibrary::StaticClass, TEXT("USocketClientBPLibrary"), &Z_Registration_Info_UClass_USocketClientBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketClientBPLibrary), 4120107521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_746229519(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_SocketClientBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
