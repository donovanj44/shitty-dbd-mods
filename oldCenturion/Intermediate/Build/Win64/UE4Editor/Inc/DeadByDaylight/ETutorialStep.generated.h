// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETutorialStep_generated_h
#error "ETutorialStep.generated.h already included, missing '#pragma once' in ETutorialStep.h"
#endif
#define DEADBYDAYLIGHT_ETutorialStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETutorialStep_h


#define FOREACH_ENUM_ETUTORIALSTEP(op) \
	op(ETutorialStep::Survivor_NotStarted) \
	op(ETutorialStep::Survivor_CompleteGenerator) \
	op(ETutorialStep::Survivor_EvadeKiller) \
	op(ETutorialStep::Survivor_OnHook) \
	op(ETutorialStep::Done) \
	op(ETutorialStep::Invalid) 

enum class ETutorialStep : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETutorialStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
