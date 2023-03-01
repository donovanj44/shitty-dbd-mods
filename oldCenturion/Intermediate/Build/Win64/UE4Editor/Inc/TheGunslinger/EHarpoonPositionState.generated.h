// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_EHarpoonPositionState_generated_h
#error "EHarpoonPositionState.generated.h already included, missing '#pragma once' in EHarpoonPositionState.h"
#endif
#define THEGUNSLINGER_EHarpoonPositionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_EHarpoonPositionState_h


#define FOREACH_ENUM_EHARPOONPOSITIONSTATE(op) \
	op(EHarpoonPositionState::None) \
	op(EHarpoonPositionState::LoadedInRifle) \
	op(EHarpoonPositionState::FollowingProjectile) \
	op(EHarpoonPositionState::ReelBackToRifle) \
	op(EHarpoonPositionState::AttachedToPlayer) \
	op(EHarpoonPositionState::Animated) 

enum class EHarpoonPositionState;
template<> THEGUNSLINGER_API UEnum* StaticEnum<EHarpoonPositionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
