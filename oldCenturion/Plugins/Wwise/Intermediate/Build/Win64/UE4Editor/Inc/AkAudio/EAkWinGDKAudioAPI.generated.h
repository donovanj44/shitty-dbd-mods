// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkWinGDKAudioAPI_generated_h
#error "EAkWinGDKAudioAPI.generated.h already included, missing '#pragma once' in EAkWinGDKAudioAPI.h"
#endif
#define AKAUDIO_EAkWinGDKAudioAPI_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_EAkWinGDKAudioAPI_h


#define FOREACH_ENUM_EAKWINGDKAUDIOAPI(op) \
	op(EAkWinGDKAudioAPI::Wasapi) \
	op(EAkWinGDKAudioAPI::XAudio2) \
	op(EAkWinGDKAudioAPI::DirectSound) 

enum class EAkWinGDKAudioAPI;
template<> AKAUDIO_API UEnum* StaticEnum<EAkWinGDKAudioAPI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
