// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ESleepingUIState_generated_h
#error "ESleepingUIState.generated.h already included, missing '#pragma once' in ESleepingUIState.h"
#endif
#define DBDSHAREDTYPES_ESleepingUIState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ESleepingUIState_h


#define FOREACH_ENUM_ESLEEPINGUISTATE(op) \
	op(ESleepingUIState::Off) \
	op(ESleepingUIState::FallingAsleep) \
	op(ESleepingUIState::Asleep) 

enum class ESleepingUIState : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESleepingUIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
