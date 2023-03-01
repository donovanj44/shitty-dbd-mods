// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKUTILITIES_ETimerState_generated_h
#error "ETimerState.generated.h already included, missing '#pragma once' in ETimerState.h"
#endif
#define NETWORKUTILITIES_ETimerState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_NetworkUtilities_Public_ETimerState_h


#define FOREACH_ENUM_ETIMERSTATE(op) \
	op(ETimerState::Cleared) \
	op(ETimerState::Started) \
	op(ETimerState::Paused) 

enum class ETimerState : uint8;
template<> NETWORKUTILITIES_API UEnum* StaticEnum<ETimerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
