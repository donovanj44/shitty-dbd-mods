// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EAttackEventType_generated_h
#error "EAttackEventType.generated.h already included, missing '#pragma once' in EAttackEventType.h"
#endif
#define DEADBYDAYLIGHT_EAttackEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EAttackEventType_h


#define FOREACH_ENUM_EATTACKEVENTTYPE(op) \
	op(EAttackEventType::VE_None) \
	op(EAttackEventType::VE_BasicAttackAttempt) \
	op(EAttackEventType::VE_BasicAttackHit) \
	op(EAttackEventType::VE_SpecialAttackAttempt) \
	op(EAttackEventType::VE_SpecialAttackHit) 

enum class EAttackEventType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAttackEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
