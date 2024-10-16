// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enumerations/NDIAudioChannels.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NDIIO_NDIAudioChannels_generated_h
#error "NDIAudioChannels.generated.h already included, missing '#pragma once' in NDIAudioChannels.h"
#endif
#define NDIIO_NDIAudioChannels_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IX_AIimage_Plugins_NDIIOPlugin_Source_Core_Public_Enumerations_NDIAudioChannels_h


#define FOREACH_ENUM_ENDIAUDIOCHANNELS(op) \
	op(ENDIAudioChannels::Mono) \
	op(ENDIAudioChannels::Stereo) \
	op(ENDIAudioChannels::Source) 

enum class ENDIAudioChannels : uint8;
template<> struct TIsUEnumClass<ENDIAudioChannels> { enum { Value = true }; };
template<> NDIIO_API UEnum* StaticEnum<ENDIAudioChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
