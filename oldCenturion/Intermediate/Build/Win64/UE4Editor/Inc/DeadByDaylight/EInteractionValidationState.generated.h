// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EInteractionValidationState_generated_h
#error "EInteractionValidationState.generated.h already included, missing '#pragma once' in EInteractionValidationState.h"
#endif
#define DEADBYDAYLIGHT_EInteractionValidationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EInteractionValidationState_h


#define FOREACH_ENUM_EINTERACTIONVALIDATIONSTATE(op) \
	op(EInteractionValidationState::None) \
	op(EInteractionValidationState::Predicted) \
	op(EInteractionValidationState::Authorized) \
	op(EInteractionValidationState::DeniedByRaceCondition) \
	op(EInteractionValidationState::DeniedByTimeout) \
	op(EInteractionValidationState::DeniedByError) 

enum class EInteractionValidationState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInteractionValidationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
