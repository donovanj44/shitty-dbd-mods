// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EActionButtonState_generated_h
#error "EActionButtonState.generated.h already included, missing '#pragma once' in EActionButtonState.h"
#endif
#define DEADBYDAYLIGHT_EActionButtonState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EActionButtonState_h


#define FOREACH_ENUM_EACTIONBUTTONSTATE(op) \
	op(EActionButtonState::Normal) \
	op(EActionButtonState::Toggled) \
	op(EActionButtonState::Disabled) \
	op(EActionButtonState::Hidden) 

enum class EActionButtonState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EActionButtonState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
