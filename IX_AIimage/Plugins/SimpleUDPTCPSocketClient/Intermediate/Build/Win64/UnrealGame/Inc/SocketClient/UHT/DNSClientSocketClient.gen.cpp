// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketClient/Public/DNSClientSocketClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNSClientSocketClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UDNSClientSocketClient();
	SOCKETCLIENT_API UClass* Z_Construct_UClass_UDNSClientSocketClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SocketClient();
// End Cross Module References
	void UDNSClientSocketClient::StaticRegisterNativesUDNSClientSocketClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNSClientSocketClient);
	UClass* Z_Construct_UClass_UDNSClientSocketClient_NoRegister()
	{
		return UDNSClientSocketClient::StaticClass();
	}
	struct Z_Construct_UClass_UDNSClientSocketClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDNSClientSocketClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNSClientSocketClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DNSClientSocketClient.h" },
		{ "ModuleRelativePath", "Public/DNSClientSocketClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDNSClientSocketClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNSClientSocketClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNSClientSocketClient_Statics::ClassParams = {
		&UDNSClientSocketClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDNSClientSocketClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDNSClientSocketClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDNSClientSocketClient()
	{
		if (!Z_Registration_Info_UClass_UDNSClientSocketClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNSClientSocketClient.OuterSingleton, Z_Construct_UClass_UDNSClientSocketClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDNSClientSocketClient.OuterSingleton;
	}
	template<> SOCKETCLIENT_API UClass* StaticClass<UDNSClientSocketClient>()
	{
		return UDNSClientSocketClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDNSClientSocketClient);
	UDNSClientSocketClient::~UDNSClientSocketClient() {}
	struct Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_DNSClientSocketClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_DNSClientSocketClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDNSClientSocketClient, UDNSClientSocketClient::StaticClass, TEXT("UDNSClientSocketClient"), &Z_Registration_Info_UClass_UDNSClientSocketClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNSClientSocketClient), 2998447676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_DNSClientSocketClient_h_1483190335(TEXT("/Script/SocketClient"),
		Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_DNSClientSocketClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IX_AIimage_Plugins_SimpleUDPTCPSocketClient_Source_SocketClient_Public_DNSClientSocketClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
