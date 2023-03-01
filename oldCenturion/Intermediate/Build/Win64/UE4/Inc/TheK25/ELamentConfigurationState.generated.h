// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_ELamentConfigurationState_generated_h
#error "ELamentConfigurationState.generated.h already included, missing '#pragma once' in ELamentConfigurationState.h"
#endif
#define THEK25_ELamentConfigurationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_ELamentConfigurationState_h


#define FOREACH_ENUM_ELAMENTCONFIGURATIONSTATE(op) \
	op(ELamentConfigurationState::SurvivorEscapedWithLamentConfiguration) \
	op(ELamentConfigurationState::WaitingToSpawn) \
	op(ELamentConfigurationState::Spawned) \
	op(ELamentConfigurationState::IsBeingPickedUp) \
	op(ELamentConfigurationState::CarriedBySurvivor) \
	op(ELamentConfigurationState::HoldingSurvivorHostage) 

enum class ELamentConfigurationState : uint8;
template<> THEK25_API UEnum* StaticEnum<ELamentConfigurationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
