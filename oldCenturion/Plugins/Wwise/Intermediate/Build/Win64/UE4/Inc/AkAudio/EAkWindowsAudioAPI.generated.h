// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkWindowsAudioAPI_generated_h
#error "EAkWindowsAudioAPI.generated.h already included, missing '#pragma once' in EAkWindowsAudioAPI.h"
#endif
#define AKAUDIO_EAkWindowsAudioAPI_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_EAkWindowsAudioAPI_h


#define FOREACH_ENUM_EAKWINDOWSAUDIOAPI(op) \
	op(EAkWindowsAudioAPI::Wasapi) \
	op(EAkWindowsAudioAPI::XAudio2) \
	op(EAkWindowsAudioAPI::DirectSound) 

enum class EAkWindowsAudioAPI;
template<> AKAUDIO_API UEnum* StaticEnum<EAkWindowsAudioAPI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
