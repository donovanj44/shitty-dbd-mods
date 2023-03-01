// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK26_EK26AmmoState_generated_h
#error "EK26AmmoState.generated.h already included, missing '#pragma once' in EK26AmmoState.h"
#endif
#define THEK26_EK26AmmoState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_EK26AmmoState_h


#define FOREACH_ENUM_EK26AMMOSTATE(op) \
	op(EK26AmmoState::Available) \
	op(EK26AmmoState::Expiring) \
	op(EK26AmmoState::Recharging) 

enum class EK26AmmoState : uint8;
template<> THEK26_API UEnum* StaticEnum<EK26AmmoState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
