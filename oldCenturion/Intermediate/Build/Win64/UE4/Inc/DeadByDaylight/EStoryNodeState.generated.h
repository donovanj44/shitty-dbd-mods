// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EStoryNodeState_generated_h
#error "EStoryNodeState.generated.h already included, missing '#pragma once' in EStoryNodeState.h"
#endif
#define DEADBYDAYLIGHT_EStoryNodeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EStoryNodeState_h


#define FOREACH_ENUM_ESTORYNODESTATE(op) \
	op(EStoryNodeState::None) \
	op(EStoryNodeState::Unavailable) \
	op(EStoryNodeState::AvailableDefault) \
	op(EStoryNodeState::AvailableActive) \
	op(EStoryNodeState::AvailablePaused) \
	op(EStoryNodeState::Completed) \
	op(EStoryNodeState::Claimed) 

enum class EStoryNodeState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStoryNodeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
