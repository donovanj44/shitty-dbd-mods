// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EBloodwebNodeState_generated_h
#error "EBloodwebNodeState.generated.h already included, missing '#pragma once' in EBloodwebNodeState.h"
#endif
#define DEADBYDAYLIGHT_EBloodwebNodeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EBloodwebNodeState_h


#define FOREACH_ENUM_EBLOODWEBNODESTATE(op) \
	op(EBloodwebNodeState::Inactive) \
	op(EBloodwebNodeState::Available) \
	op(EBloodwebNodeState::Locked_Do_Not_Use_Deprecated) \
	op(EBloodwebNodeState::Collected) \
	op(EBloodwebNodeState::Consumed) \
	op(EBloodwebNodeState::Count) 

enum class EBloodwebNodeState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBloodwebNodeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
