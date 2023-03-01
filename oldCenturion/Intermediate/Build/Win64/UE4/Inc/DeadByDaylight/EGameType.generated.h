// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGameType_generated_h
#error "EGameType.generated.h already included, missing '#pragma once' in EGameType.h"
#endif
#define DEADBYDAYLIGHT_EGameType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGameType_h


#define FOREACH_ENUM_EGAMETYPE(op) \
	op(EGameType::Online) \
	op(EGameType::KillYourFriends) \
	op(EGameType::SurvivorGroup) \
	op(EGameType::Tutorial) \
	op(EGameType::TutorialBotMatch) \
	op(EGameType::SecretBotMatch) \
	op(EGameType::None) 

enum class EGameType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
