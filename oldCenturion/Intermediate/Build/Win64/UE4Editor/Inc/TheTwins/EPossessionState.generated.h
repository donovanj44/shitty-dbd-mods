// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THETWINS_EPossessionState_generated_h
#error "EPossessionState.generated.h already included, missing '#pragma once' in EPossessionState.h"
#endif
#define THETWINS_EPossessionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_EPossessionState_h


#define FOREACH_ENUM_EPOSSESSIONSTATE(op) \
	op(EPossessionState::NotPossessed) \
	op(EPossessionState::BeingPossessed) \
	op(EPossessionState::Possessed) 

enum class EPossessionState;
template<> THETWINS_API UEnum* StaticEnum<EPossessionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
