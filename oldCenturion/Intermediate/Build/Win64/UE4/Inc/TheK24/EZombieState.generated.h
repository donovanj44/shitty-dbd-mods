// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_EZombieState_generated_h
#error "EZombieState.generated.h already included, missing '#pragma once' in EZombieState.h"
#endif
#define THEK24_EZombieState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_EZombieState_h


#define FOREACH_ENUM_EZOMBIESTATE(op) \
	op(EZombieState::InPool) \
	op(EZombieState::Spawn) \
	op(EZombieState::Patrolling) \
	op(EZombieState::Searching) \
	op(EZombieState::Chase) \
	op(EZombieState::Attack) \
	op(EZombieState::Dying) \
	op(EZombieState::Dead) \
	op(EZombieState::ChaseSearching) \
	op(EZombieState::InPlaceIdle) \
	op(EZombieState::Stunned) \
	op(EZombieState::FallSmash) \
	op(EZombieState::AttackCooldown) \
	op(EZombieState::Stop) 

enum class EZombieState : uint8;
template<> THEK24_API UEnum* StaticEnum<EZombieState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
