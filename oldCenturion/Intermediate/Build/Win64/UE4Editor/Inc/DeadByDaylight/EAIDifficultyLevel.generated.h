// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EAIDifficultyLevel_generated_h
#error "EAIDifficultyLevel.generated.h already included, missing '#pragma once' in EAIDifficultyLevel.h"
#endif
#define DEADBYDAYLIGHT_EAIDifficultyLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EAIDifficultyLevel_h


#define FOREACH_ENUM_EAIDIFFICULTYLEVEL(op) \
	op(EAIDifficultyLevel::VeryEasy) \
	op(EAIDifficultyLevel::Easy) \
	op(EAIDifficultyLevel::Medium) \
	op(EAIDifficultyLevel::Hard) \
	op(EAIDifficultyLevel::Suggested) \
	op(EAIDifficultyLevel::Random) \
	op(EAIDifficultyLevel::None) \
	op(EAIDifficultyLevel::Max) 

enum class EAIDifficultyLevel : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIDifficultyLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
