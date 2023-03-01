// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EBlinkerState_generated_h
#error "EBlinkerState.generated.h already included, missing '#pragma once' in EBlinkerState.h"
#endif
#define DEADBYDAYLIGHT_EBlinkerState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EBlinkerState_h


#define FOREACH_ENUM_EBLINKERSTATE(op) \
	op(EBlinkerState::VE_Ready) \
	op(EBlinkerState::VE_ChainBlink) \
	op(EBlinkerState::VE_AttackBlink) \
	op(EBlinkerState::VE_CooldownRequested) \
	op(EBlinkerState::VE_Cooldown) 

enum class EBlinkerState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBlinkerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
