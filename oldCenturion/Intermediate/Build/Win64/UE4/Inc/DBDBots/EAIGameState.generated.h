// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAIGameState_generated_h
#error "EAIGameState.generated.h already included, missing '#pragma once' in EAIGameState.h"
#endif
#define DBDBOTS_EAIGameState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAIGameState_h


#define FOREACH_ENUM_EAIGAMESTATE(op) \
	op(EAIGameState::VeryEarly) \
	op(EAIGameState::Early) \
	op(EAIGameState::Mid) \
	op(EAIGameState::Late) \
	op(EAIGameState::VeryLate) \
	op(EAIGameState::Max) 

enum class EAIGameState : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EAIGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
