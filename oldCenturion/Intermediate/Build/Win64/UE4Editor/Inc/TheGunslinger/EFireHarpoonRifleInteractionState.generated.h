// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_EFireHarpoonRifleInteractionState_generated_h
#error "EFireHarpoonRifleInteractionState.generated.h already included, missing '#pragma once' in EFireHarpoonRifleInteractionState.h"
#endif
#define THEGUNSLINGER_EFireHarpoonRifleInteractionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_EFireHarpoonRifleInteractionState_h


#define FOREACH_ENUM_EFIREHARPOONRIFLEINTERACTIONSTATE(op) \
	op(EFireHarpoonRifleInteractionState::None) \
	op(EFireHarpoonRifleInteractionState::Aiming) \
	op(EFireHarpoonRifleInteractionState::FirePhase) \
	op(EFireHarpoonRifleInteractionState::MissPhase) \
	op(EFireHarpoonRifleInteractionState::SuccessPhase) \
	op(EFireHarpoonRifleInteractionState::EndResult) \
	op(EFireHarpoonRifleInteractionState::CanceledAiming) 

enum class EFireHarpoonRifleInteractionState;
template<> THEGUNSLINGER_API UEnum* StaticEnum<EFireHarpoonRifleInteractionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
