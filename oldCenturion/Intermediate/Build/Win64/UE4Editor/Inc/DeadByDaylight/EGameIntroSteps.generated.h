// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGameIntroSteps_generated_h
#error "EGameIntroSteps.generated.h already included, missing '#pragma once' in EGameIntroSteps.h"
#endif
#define DEADBYDAYLIGHT_EGameIntroSteps_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGameIntroSteps_h


#define FOREACH_ENUM_EGAMEINTROSTEPS(op) \
	op(EGameIntroSteps::Idling) \
	op(EGameIntroSteps::PlayingIntro) \
	op(EGameIntroSteps::LoopingCamView) 

enum class EGameIntroSteps;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameIntroSteps>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
