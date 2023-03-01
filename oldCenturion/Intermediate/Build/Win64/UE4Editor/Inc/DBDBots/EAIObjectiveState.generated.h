// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAIObjectiveState_generated_h
#error "EAIObjectiveState.generated.h already included, missing '#pragma once' in EAIObjectiveState.h"
#endif
#define DBDBOTS_EAIObjectiveState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAIObjectiveState_h


#define FOREACH_ENUM_EAIOBJECTIVESTATE(op) \
	op(EAIObjectiveState::Early) \
	op(EAIObjectiveState::Mid) \
	op(EAIObjectiveState::Last) \
	op(EAIObjectiveState::Completed) 

enum class EAIObjectiveState : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EAIObjectiveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
