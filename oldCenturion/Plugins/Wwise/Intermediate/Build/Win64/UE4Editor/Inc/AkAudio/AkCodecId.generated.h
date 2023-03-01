// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkCodecId_generated_h
#error "AkCodecId.generated.h already included, missing '#pragma once' in AkCodecId.h"
#endif
#define AKAUDIO_AkCodecId_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCodecId_h


#define FOREACH_ENUM_AKCODECID(op) \
	op(AkCodecId::Bank) \
	op(AkCodecId::PCM) \
	op(AkCodecId::ADPCM) \
	op(AkCodecId::XMA) \
	op(AkCodecId::Vorbis) \
	op(AkCodecId::WiiADPCM) \
	op(AkCodecId::PCMEX) \
	op(AkCodecId::ExternalSource) \
	op(AkCodecId::XWMA) \
	op(AkCodecId::AAC) \
	op(AkCodecId::FilePackage) \
	op(AkCodecId::ATRAC9) \
	op(AkCodecId::VAG) \
	op(AkCodecId::ProfilerCapture) \
	op(AkCodecId::AnalysisFile) \
	op(AkCodecId::MIDI) \
	op(AkCodecId::OpusNX) \
	op(AkCodecId::CAF) \
	op(AkCodecId::AkOpus) 

enum class AkCodecId : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
