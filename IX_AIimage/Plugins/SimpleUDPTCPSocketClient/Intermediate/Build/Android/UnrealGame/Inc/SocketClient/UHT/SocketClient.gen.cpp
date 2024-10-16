// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/SocketClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketClient() {}
// Cross Module References
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_EReceiveFilterClient();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientIPType();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator();
	SOCKETCLIENT_API UEnum* Z_Construct_UEnum_SocketClient_ESocketPlatformClient();
	SOCKETCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile();
	SOCKETCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSocketClientPluginSession();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile;
class UScriptStruct* FFileFunctionsSocketClientOpenFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile, Z_Construct_UPackage__Script_SocketClient(), TEXT("FileFunctionsSocketClientOpenFile"));
	}
	return Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.OuterSingleton;
}
template<> SOCKETCLIENT_API UScriptStruct* StaticStruct<FFileFunctionsSocketClientOpenFile>()
{
	return FFileFunctionsSocketClientOpenFile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileFunctionsSocketClientOpenFile>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		&NewStructOps,
		"FileFunctionsSocketClientOpenFile",
		sizeof(FFileFunctionsSocketClientOpenFile),
		alignof(FFileFunctionsSocketClientOpenFile),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile()
	{
		if (!Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.InnerSingleton, Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocketClientPluginSession;
class UScriptStruct* FSocketClientPluginSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocketClientPluginSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocketClientPluginSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketClientPluginSession, Z_Construct_UPackage__Script_SocketClient(), TEXT("SocketClientPluginSession"));
	}
	return Z_Registration_Info_UScriptStruct_SocketClientPluginSession.OuterSingleton;
}
template<> SOCKETCLIENT_API UScriptStruct* StaticStruct<FSocketClientPluginSession>()
{
	return FSocketClientPluginSession::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketClientPluginSession>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		&NewStructOps,
		"SocketClientPluginSession",
		sizeof(FSocketClientPluginSession),
		alignof(FSocketClientPluginSession),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocketClientPluginSession()
	{
		if (!Z_Registration_Info_UScriptStruct_SocketClientPluginSession.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocketClientPluginSession.InnerSingleton, Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SocketClientPluginSession.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType;
	static UEnum* EFileFunctionsSocketClientDirectoryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType, Z_Construct_UPackage__Script_SocketClient(), TEXT("EFileFunctionsSocketClientDirectoryType"));
		}
		return Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<EFileFunctionsSocketClientDirectoryType>()
	{
		return EFileFunctionsSocketClientDirectoryType_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enumerators[] = {
		{ "EFileFunctionsSocketClientDirectoryType::E_gd", (int64)EFileFunctionsSocketClientDirectoryType::E_gd },
		{ "EFileFunctionsSocketClientDirectoryType::E_ad", (int64)EFileFunctionsSocketClientDirectoryType::E_ad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ad.DisplayName", "Absolute directory" },
		{ "E_ad.Name", "EFileFunctionsSocketClientDirectoryType::E_ad" },
		{ "E_gd.DisplayName", "Game directory" },
		{ "E_gd.Name", "EFileFunctionsSocketClientDirectoryType::E_gd" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"EFileFunctionsSocketClientDirectoryType",
		"EFileFunctionsSocketClientDirectoryType",
		Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType()
	{
		if (!Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.InnerSingleton, Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientDirectoryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions;
	static UEnum* EFileFunctionsSocketClientEncodingOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions, Z_Construct_UPackage__Script_SocketClient(), TEXT("EFileFunctionsSocketClientEncodingOptions"));
		}
		return Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<EFileFunctionsSocketClientEncodingOptions>()
	{
		return EFileFunctionsSocketClientEncodingOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enumerators[] = {
		{ "EFileFunctionsSocketClientEncodingOptions::E_AutoDetect", (int64)EFileFunctionsSocketClientEncodingOptions::E_AutoDetect },
		{ "EFileFunctionsSocketClientEncodingOptions::E_ForceAnsi", (int64)EFileFunctionsSocketClientEncodingOptions::E_ForceAnsi },
		{ "EFileFunctionsSocketClientEncodingOptions::E_ForceUnicode", (int64)EFileFunctionsSocketClientEncodingOptions::E_ForceUnicode },
		{ "EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8", (int64)EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8 },
		{ "EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8WithoutBOM", (int64)EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8WithoutBOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_AutoDetect.DisplayName", "AutoDetect" },
		{ "E_AutoDetect.Name", "EFileFunctionsSocketClientEncodingOptions::E_AutoDetect" },
		{ "E_ForceAnsi.DisplayName", "ForceAnsi" },
		{ "E_ForceAnsi.Name", "EFileFunctionsSocketClientEncodingOptions::E_ForceAnsi" },
		{ "E_ForceUnicode.DisplayName", "ForceUnicode" },
		{ "E_ForceUnicode.Name", "EFileFunctionsSocketClientEncodingOptions::E_ForceUnicode" },
		{ "E_ForceUTF8.DisplayName", "ForceUTF8" },
		{ "E_ForceUTF8.Name", "EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8" },
		{ "E_ForceUTF8WithoutBOM.DisplayName", "ForceUTF8WithoutBOM" },
		{ "E_ForceUTF8WithoutBOM.Name", "EFileFunctionsSocketClientEncodingOptions::E_ForceUTF8WithoutBOM" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"EFileFunctionsSocketClientEncodingOptions",
		"EFileFunctionsSocketClientEncodingOptions",
		Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions()
	{
		if (!Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.InnerSingleton, Z_Construct_UEnum_SocketClient_EFileFunctionsSocketClientEncodingOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReceiveFilterClient;
	static UEnum* EReceiveFilterClient_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReceiveFilterClient.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReceiveFilterClient.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_EReceiveFilterClient, Z_Construct_UPackage__Script_SocketClient(), TEXT("EReceiveFilterClient"));
		}
		return Z_Registration_Info_UEnum_EReceiveFilterClient.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<EReceiveFilterClient>()
	{
		return EReceiveFilterClient_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enumerators[] = {
		{ "EReceiveFilterClient::E_SAB", (int64)EReceiveFilterClient::E_SAB },
		{ "EReceiveFilterClient::E_S", (int64)EReceiveFilterClient::E_S },
		{ "EReceiveFilterClient::E_B", (int64)EReceiveFilterClient::E_B },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_B.DisplayName", "Bytes" },
		{ "E_B.Name", "EReceiveFilterClient::E_B" },
		{ "E_S.DisplayName", "Message" },
		{ "E_S.Name", "EReceiveFilterClient::E_S" },
		{ "E_SAB.DisplayName", "Message And Bytes" },
		{ "E_SAB.Name", "EReceiveFilterClient::E_SAB" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"EReceiveFilterClient",
		"EReceiveFilterClient",
		Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_EReceiveFilterClient()
	{
		if (!Z_Registration_Info_UEnum_EReceiveFilterClient.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReceiveFilterClient.InnerSingleton, Z_Construct_UEnum_SocketClient_EReceiveFilterClient_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReceiveFilterClient.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketPlatformClient;
	static UEnum* ESocketPlatformClient_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketPlatformClient.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketPlatformClient.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_ESocketPlatformClient, Z_Construct_UPackage__Script_SocketClient(), TEXT("ESocketPlatformClient"));
		}
		return Z_Registration_Info_UEnum_ESocketPlatformClient.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketPlatformClient>()
	{
		return ESocketPlatformClient_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enumerators[] = {
		{ "ESocketPlatformClient::E_SSC_SYSTEM", (int64)ESocketPlatformClient::E_SSC_SYSTEM },
		{ "ESocketPlatformClient::E_SSC_DEFAULT", (int64)ESocketPlatformClient::E_SSC_DEFAULT },
		{ "ESocketPlatformClient::E_SSC_WINDOWS", (int64)ESocketPlatformClient::E_SSC_WINDOWS },
		{ "ESocketPlatformClient::E_SSC_MAC", (int64)ESocketPlatformClient::E_SSC_MAC },
		{ "ESocketPlatformClient::E_SSC_IOS", (int64)ESocketPlatformClient::E_SSC_IOS },
		{ "ESocketPlatformClient::E_SSC_UNIX", (int64)ESocketPlatformClient::E_SSC_UNIX },
		{ "ESocketPlatformClient::E_SSC_ANDROID", (int64)ESocketPlatformClient::E_SSC_ANDROID },
		{ "ESocketPlatformClient::E_SSC_PS4", (int64)ESocketPlatformClient::E_SSC_PS4 },
		{ "ESocketPlatformClient::E_SSC_XBOXONE", (int64)ESocketPlatformClient::E_SSC_XBOXONE },
		{ "ESocketPlatformClient::E_SSC_HTML5", (int64)ESocketPlatformClient::E_SSC_HTML5 },
		{ "ESocketPlatformClient::E_SSC_SWITCH", (int64)ESocketPlatformClient::E_SSC_SWITCH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_SSC_ANDROID.DisplayName", "ANDROID" },
		{ "E_SSC_ANDROID.Name", "ESocketPlatformClient::E_SSC_ANDROID" },
		{ "E_SSC_DEFAULT.DisplayName", "Auto" },
		{ "E_SSC_DEFAULT.Name", "ESocketPlatformClient::E_SSC_DEFAULT" },
		{ "E_SSC_HTML5.DisplayName", "HTML5" },
		{ "E_SSC_HTML5.Name", "ESocketPlatformClient::E_SSC_HTML5" },
		{ "E_SSC_IOS.DisplayName", "IOS" },
		{ "E_SSC_IOS.Name", "ESocketPlatformClient::E_SSC_IOS" },
		{ "E_SSC_MAC.DisplayName", "MAC" },
		{ "E_SSC_MAC.Name", "ESocketPlatformClient::E_SSC_MAC" },
		{ "E_SSC_PS4.DisplayName", "PS4" },
		{ "E_SSC_PS4.Name", "ESocketPlatformClient::E_SSC_PS4" },
		{ "E_SSC_SWITCH.DisplayName", "SWITCH" },
		{ "E_SSC_SWITCH.Name", "ESocketPlatformClient::E_SSC_SWITCH" },
		{ "E_SSC_SYSTEM.DisplayName", "System" },
		{ "E_SSC_SYSTEM.Name", "ESocketPlatformClient::E_SSC_SYSTEM" },
		{ "E_SSC_UNIX.DisplayName", "UNIX" },
		{ "E_SSC_UNIX.Name", "ESocketPlatformClient::E_SSC_UNIX" },
		{ "E_SSC_WINDOWS.DisplayName", "WINDOWS" },
		{ "E_SSC_WINDOWS.Name", "ESocketPlatformClient::E_SSC_WINDOWS" },
		{ "E_SSC_XBOXONE.DisplayName", "XBOXONE" },
		{ "E_SSC_XBOXONE.Name", "ESocketPlatformClient::E_SSC_XBOXONE" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"ESocketPlatformClient",
		"ESocketPlatformClient",
		Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_ESocketPlatformClient()
	{
		if (!Z_Registration_Info_UEnum_ESocketPlatformClient.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketPlatformClient.InnerSingleton, Z_Construct_UEnum_SocketClient_ESocketPlatformClient_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketPlatformClient.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketClientIPType;
	static UEnum* ESocketClientIPType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientIPType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketClientIPType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_ESocketClientIPType, Z_Construct_UPackage__Script_SocketClient(), TEXT("ESocketClientIPType"));
		}
		return Z_Registration_Info_UEnum_ESocketClientIPType.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientIPType>()
	{
		return ESocketClientIPType_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enumerators[] = {
		{ "ESocketClientIPType::E_ipv4", (int64)ESocketClientIPType::E_ipv4 },
		{ "ESocketClientIPType::E_ipv6", (int64)ESocketClientIPType::E_ipv6 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ipv4.DisplayName", "IPv4" },
		{ "E_ipv4.Name", "ESocketClientIPType::E_ipv4" },
		{ "E_ipv6.DisplayName", "IPv6" },
		{ "E_ipv6.Name", "ESocketClientIPType::E_ipv6" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"ESocketClientIPType",
		"ESocketClientIPType",
		Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_ESocketClientIPType()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientIPType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketClientIPType.InnerSingleton, Z_Construct_UEnum_SocketClient_ESocketClientIPType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketClientIPType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketClientTCPSeparator;
	static UEnum* ESocketClientTCPSeparator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientTCPSeparator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketClientTCPSeparator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator, Z_Construct_UPackage__Script_SocketClient(), TEXT("ESocketClientTCPSeparator"));
		}
		return Z_Registration_Info_UEnum_ESocketClientTCPSeparator.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UEnum* StaticEnum<ESocketClientTCPSeparator>()
	{
		return ESocketClientTCPSeparator_StaticEnum();
	}
	struct Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enumerators[] = {
		{ "ESocketClientTCPSeparator::E_None", (int64)ESocketClientTCPSeparator::E_None },
		{ "ESocketClientTCPSeparator::E_ByteSeparator", (int64)ESocketClientTCPSeparator::E_ByteSeparator },
		{ "ESocketClientTCPSeparator::E_StringSeparator", (int64)ESocketClientTCPSeparator::E_StringSeparator },
		{ "ESocketClientTCPSeparator::E_LengthSeparator", (int64)ESocketClientTCPSeparator::E_LengthSeparator },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ByteSeparator.DisplayName", "Separate via one Byte" },
		{ "E_ByteSeparator.Name", "ESocketClientTCPSeparator::E_ByteSeparator" },
		{ "E_LengthSeparator.DisplayName", "Separate by Length" },
		{ "E_LengthSeparator.Name", "ESocketClientTCPSeparator::E_LengthSeparator" },
		{ "E_None.DisplayName", "None" },
		{ "E_None.Name", "ESocketClientTCPSeparator::E_None" },
		{ "E_StringSeparator.DisplayName", "Separate via String" },
		{ "E_StringSeparator.Name", "ESocketClientTCPSeparator::E_StringSeparator" },
		{ "ModuleRelativePath", "Public/SocketClient.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SocketClient,
		nullptr,
		"ESocketClientTCPSeparator",
		"ESocketClientTCPSeparator",
		Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator()
	{
		if (!Z_Registration_Info_UEnum_ESocketClientTCPSeparator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketClientTCPSeparator.InnerSingleton, Z_Construct_UEnum_SocketClient_ESocketClientTCPSeparator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketClientTCPSeparator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::EnumInfo[] = {
		{ EFileFunctionsSocketClientDirectoryType_StaticEnum, TEXT("EFileFunctionsSocketClientDirectoryType"), &Z_Registration_Info_UEnum_EFileFunctionsSocketClientDirectoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2655112993U) },
		{ EFileFunctionsSocketClientEncodingOptions_StaticEnum, TEXT("EFileFunctionsSocketClientEncodingOptions"), &Z_Registration_Info_UEnum_EFileFunctionsSocketClientEncodingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 123313131U) },
		{ EReceiveFilterClient_StaticEnum, TEXT("EReceiveFilterClient"), &Z_Registration_Info_UEnum_EReceiveFilterClient, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3867733933U) },
		{ ESocketPlatformClient_StaticEnum, TEXT("ESocketPlatformClient"), &Z_Registration_Info_UEnum_ESocketPlatformClient, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1608997039U) },
		{ ESocketClientIPType_StaticEnum, TEXT("ESocketClientIPType"), &Z_Registration_Info_UEnum_ESocketClientIPType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 107307729U) },
		{ ESocketClientTCPSeparator_StaticEnum, TEXT("ESocketClientTCPSeparator"), &Z_Registration_Info_UEnum_ESocketClientTCPSeparator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 550266652U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::ScriptStructInfo[] = {
		{ FFileFunctionsSocketClientOpenFile::StaticStruct, Z_Construct_UScriptStruct_FFileFunctionsSocketClientOpenFile_Statics::NewStructOps, TEXT("FileFunctionsSocketClientOpenFile"), &Z_Registration_Info_UScriptStruct_FileFunctionsSocketClientOpenFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileFunctionsSocketClientOpenFile), 1622981194U) },
		{ FSocketClientPluginSession::StaticStruct, Z_Construct_UScriptStruct_FSocketClientPluginSession_Statics::NewStructOps, TEXT("SocketClientPluginSession"), &Z_Registration_Info_UScriptStruct_SocketClientPluginSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketClientPluginSession), 214721533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_2393412432(TEXT("/Script/SocketClient"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SocketClient_Source_SocketClient_Public_SocketClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
