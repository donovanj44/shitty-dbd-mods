// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECamperDamageState_generated_h
#error "ECamperDamageState.generated.h already included, missing '#pragma once' in ECamperDamageState.h"
#endif
#define DEADBYDAYLIGHT_ECamperDamageState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECamperDamageState_h


#define FOREACH_ENUM_ECAMPERDAMAGESTATE(op) \
	op(ECamperDamageState::VE_Healthy) \
	op(ECamperDamageState::VE_Injured) \
	op(ECamperDamageState::VE_KO) \
	op(ECamperDamageState::VE_Dead) 

enum class ECamperDamageState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECamperDamageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
