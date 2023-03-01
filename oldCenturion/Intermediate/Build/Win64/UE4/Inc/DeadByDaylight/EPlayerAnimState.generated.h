// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPlayerAnimState_generated_h
#error "EPlayerAnimState.generated.h already included, missing '#pragma once' in EPlayerAnimState.h"
#endif
#define DEADBYDAYLIGHT_EPlayerAnimState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPlayerAnimState_h


#define FOREACH_ENUM_EPLAYERANIMSTATE(op) \
	op(EPlayerAnimState::VE_Default) \
	op(EPlayerAnimState::VE_Injured) \
	op(EPlayerAnimState::VE_InjuredCrouch) \
	op(EPlayerAnimState::VE_Crouch) 

enum class EPlayerAnimState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPlayerAnimState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
