// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EAIRepairGeneratorState_generated_h
#error "EAIRepairGeneratorState.generated.h already included, missing '#pragma once' in EAIRepairGeneratorState.h"
#endif
#define DEADBYDAYLIGHT_EAIRepairGeneratorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EAIRepairGeneratorState_h


#define FOREACH_ENUM_EAIREPAIRGENERATORSTATE(op) \
	op(EAIRepairGeneratorState::FindAvailableGeneratorPosition) \
	op(EAIRepairGeneratorState::WalkToGenerator) \
	op(EAIRepairGeneratorState::RotateTowardsGenerator) \
	op(EAIRepairGeneratorState::BeginGeneratorRepairs) \
	op(EAIRepairGeneratorState::RepairingGenerator) 

enum class EAIRepairGeneratorState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIRepairGeneratorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
