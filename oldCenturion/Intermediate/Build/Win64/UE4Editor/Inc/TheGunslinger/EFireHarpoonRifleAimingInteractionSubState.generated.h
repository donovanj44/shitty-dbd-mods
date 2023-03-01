// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_EFireHarpoonRifleAimingInteractionSubState_generated_h
#error "EFireHarpoonRifleAimingInteractionSubState.generated.h already included, missing '#pragma once' in EFireHarpoonRifleAimingInteractionSubState.h"
#endif
#define THEGUNSLINGER_EFireHarpoonRifleAimingInteractionSubState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_EFireHarpoonRifleAimingInteractionSubState_h


#define FOREACH_ENUM_EFIREHARPOONRIFLEAIMINGINTERACTIONSUBSTATE(op) \
	op(EFireHarpoonRifleAimingInteractionSubState::None) \
	op(EFireHarpoonRifleAimingInteractionSubState::Warmup) \
	op(EFireHarpoonRifleAimingInteractionSubState::ReadyToShoot) \
	op(EFireHarpoonRifleAimingInteractionSubState::Cooldown) 

enum class EFireHarpoonRifleAimingInteractionSubState : uint8;
template<> THEGUNSLINGER_API UEnum* StaticEnum<EFireHarpoonRifleAimingInteractionSubState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
