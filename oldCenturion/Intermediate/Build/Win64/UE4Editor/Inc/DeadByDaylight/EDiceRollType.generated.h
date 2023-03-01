// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDiceRollType_generated_h
#error "EDiceRollType.generated.h already included, missing '#pragma once' in EDiceRollType.h"
#endif
#define DEADBYDAYLIGHT_EDiceRollType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDiceRollType_h


#define FOREACH_ENUM_EDICEROLLTYPE(op) \
	op(EDiceRollType::VE_EscapeHook) \
	op(EDiceRollType::VE_EscapeTrap) \
	op(EDiceRollType::VE_TrapInflictsDying) \
	op(EDiceRollType::VE_TriggerSkillCheck) \
	op(EDiceRollType::VE_TriggerFootNoise) \
	op(EDiceRollType::VE_TriggerCrowAlert) 

enum class EDiceRollType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDiceRollType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
