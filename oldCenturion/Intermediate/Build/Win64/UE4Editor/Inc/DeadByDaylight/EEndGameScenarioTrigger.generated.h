// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EEndGameScenarioTrigger_generated_h
#error "EEndGameScenarioTrigger.generated.h already included, missing '#pragma once' in EEndGameScenarioTrigger.h"
#endif
#define DEADBYDAYLIGHT_EEndGameScenarioTrigger_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EEndGameScenarioTrigger_h


#define FOREACH_ENUM_EENDGAMESCENARIOTRIGGER(op) \
	op(EEndGameScenarioTrigger::ClosedHatch) \
	op(EEndGameScenarioTrigger::OpenedGate) \
	op(EEndGameScenarioTrigger::CheatUsed) \
	op(EEndGameScenarioTrigger::NotActivated) 

enum class EEndGameScenarioTrigger : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEndGameScenarioTrigger>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
