// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGhostStealthState_generated_h
#error "EGhostStealthState.generated.h already included, missing '#pragma once' in EGhostStealthState.h"
#endif
#define DEADBYDAYLIGHT_EGhostStealthState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGhostStealthState_h


#define FOREACH_ENUM_EGHOSTSTEALTHSTATE(op) \
	op(EGhostStealthState::AWAITING_ACTIVATION) \
	op(EGhostStealthState::ACTIVATED) \
	op(EGhostStealthState::COOLDOWN) 

enum class EGhostStealthState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGhostStealthState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
