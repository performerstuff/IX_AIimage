// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NDITriCasterExtComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNDIMediaSender;
class UObject;
struct FTimespan;
struct FTriCasterExt;
#ifdef NDIIO_NDITriCasterExtComponent_generated_h
#error "NDITriCasterExtComponent.generated.h already included, missing '#pragma once' in NDITriCasterExtComponent.h"
#endif
#define NDIIO_NDITriCasterExtComponent_generated_h

#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriCasterExt_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NDIIO_API UScriptStruct* StaticStruct<struct FTriCasterExt>();

#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_30_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnTriCasterExt_Parms \
{ \
	AActor* Actor; \
	UObject* Object; \
	FString PropertyElementName; \
	FString PropertyValueStr; \
	FTimespan EasingDuration; \
}; \
static inline void FNDIEventDelegate_OnTriCasterExt_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnTriCasterExt, AActor* Actor, UObject* Object, const FString& PropertyElementName, const FString& PropertyValueStr, FTimespan EasingDuration) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnTriCasterExt_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Object=Object; \
	Parms.PropertyElementName=PropertyElementName; \
	Parms.PropertyValueStr=PropertyValueStr; \
	Parms.EasingDuration=EasingDuration; \
	NDIEventDelegate_OnTriCasterExt.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_31_DELEGATE \
struct _Script_NDIIO_eventNDIEventDelegate_OnTriCasterExtCustom_Parms \
{ \
	FTriCasterExt TCData; \
}; \
static inline void FNDIEventDelegate_OnTriCasterExtCustom_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnTriCasterExtCustom, FTriCasterExt const& TCData) \
{ \
	_Script_NDIIO_eventNDIEventDelegate_OnTriCasterExtCustom_Parms Parms; \
	Parms.TCData=TCData; \
	NDIEventDelegate_OnTriCasterExtCustom.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_SPARSE_DATA
#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceiveMetaDataFromSender);


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceiveMetaDataFromSender);


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_ACCESSORS
#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriCasterExtComponent(); \
	friend struct Z_Construct_UClass_UTriCasterExtComponent_Statics; \
public: \
	DECLARE_CLASS(UTriCasterExtComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UTriCasterExtComponent)


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUTriCasterExtComponent(); \
	friend struct Z_Construct_UClass_UTriCasterExtComponent_Statics; \
public: \
	DECLARE_CLASS(UTriCasterExtComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UTriCasterExtComponent)


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriCasterExtComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriCasterExtComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriCasterExtComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriCasterExtComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriCasterExtComponent(UTriCasterExtComponent&&); \
	NO_API UTriCasterExtComponent(const UTriCasterExtComponent&); \
public:


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriCasterExtComponent(UTriCasterExtComponent&&); \
	NO_API UTriCasterExtComponent(const UTriCasterExtComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriCasterExtComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriCasterExtComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriCasterExtComponent)


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_35_PROLOG
#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_SPARSE_DATA \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_RPC_WRAPPERS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_ACCESSORS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_INCLASS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_SPARSE_DATA \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_ACCESSORS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_INCLASS_NO_PURE_DECLS \
	FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UTriCasterExtComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDITriCasterExtComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
