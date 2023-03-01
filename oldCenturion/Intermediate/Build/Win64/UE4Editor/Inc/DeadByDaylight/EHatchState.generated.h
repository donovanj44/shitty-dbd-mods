// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EHatchState_generated_h
#error "EHatchState.generated.h already included, missing '#pragma once' in EHatchState.h"
#endif
#define DEADBYDAYLIGHT_EHatchState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EHatchState_h


#define FOREACH_ENUM_EHATCHSTATE(op) \
	op(EHatchState::Hidden) \
	op(EHatchState::DefaultClose) \
	op(EHatchState::Opened) \
	op(EHatchState::ForcedClose) 

enum class EHatchState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
