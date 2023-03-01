// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOverlayMode_generated_h
#error "EOverlayMode.generated.h already included, missing '#pragma once' in EOverlayMode.h"
#endif
#define DEADBYDAYLIGHT_EOverlayMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOverlayMode_h


#define FOREACH_ENUM_EOVERLAYMODE(op) \
	op(EOverlayMode::Default) \
	op(EOverlayMode::TrialOrTally) \
	op(EOverlayMode::TutorialLevel) \
	op(EOverlayMode::TutorialBotMatch) 

enum class EOverlayMode : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOverlayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
