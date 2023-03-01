// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEONI_EDemonModeState_generated_h
#error "EDemonModeState.generated.h already included, missing '#pragma once' in EDemonModeState.h"
#endif
#define THEONI_EDemonModeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_EDemonModeState_h


#define FOREACH_ENUM_EDEMONMODESTATE(op) \
	op(EDemonModeState::Invalid) \
	op(EDemonModeState::NotInPower) \
	op(EDemonModeState::Activation) \
	op(EDemonModeState::InPower) \
	op(EDemonModeState::Cooldown) 

enum class EDemonModeState : uint8;
template<> THEONI_API UEnum* StaticEnum<EDemonModeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
