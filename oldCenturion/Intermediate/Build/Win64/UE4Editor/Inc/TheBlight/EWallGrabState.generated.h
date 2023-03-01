// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBLIGHT_EWallGrabState_generated_h
#error "EWallGrabState.generated.h already included, missing '#pragma once' in EWallGrabState.h"
#endif
#define THEBLIGHT_EWallGrabState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_EWallGrabState_h


#define FOREACH_ENUM_EWALLGRABSTATE(op) \
	op(EWallGrabState::None) \
	op(EWallGrabState::Charging) \
	op(EWallGrabState::Charged) \
	op(EWallGrabState::NonLethalCharge) \
	op(EWallGrabState::Adjusting) \
	op(EWallGrabState::Holding) \
	op(EWallGrabState::LethalCharge) \
	op(EWallGrabState::Cooldown) \
	op(EWallGrabState::Sliding) \
	op(EWallGrabState::Attacking) 

enum class EWallGrabState : uint8;
template<> THEBLIGHT_API UEnum* StaticEnum<EWallGrabState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
