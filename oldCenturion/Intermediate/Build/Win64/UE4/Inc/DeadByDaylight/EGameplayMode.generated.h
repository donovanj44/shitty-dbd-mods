// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGameplayMode_generated_h
#error "EGameplayMode.generated.h already included, missing '#pragma once' in EGameplayMode.h"
#endif
#define DEADBYDAYLIGHT_EGameplayMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGameplayMode_h


#define FOREACH_ENUM_EGAMEPLAYMODE(op) \
	op(EGameplayMode::Ranked) \
	op(EGameplayMode::TrainingVersusBots) \
	op(EGameplayMode::CustomGame) \
	op(EGameplayMode::None) 

enum class EGameplayMode : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameplayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
