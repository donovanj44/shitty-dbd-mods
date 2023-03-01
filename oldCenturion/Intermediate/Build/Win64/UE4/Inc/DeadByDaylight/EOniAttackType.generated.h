// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOniAttackType_generated_h
#error "EOniAttackType.generated.h already included, missing '#pragma once' in EOniAttackType.h"
#endif
#define DEADBYDAYLIGHT_EOniAttackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOniAttackType_h


#define FOREACH_ENUM_EONIATTACKTYPE(op) \
	op(EOniAttackType::VE_NotDemonMode) \
	op(EOniAttackType::VE_DemonBasicAttack) \
	op(EOniAttackType::VE_DemonPowerAttack) \
	op(EOniAttackType::VE_DemonDashAttack) 

enum class EOniAttackType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOniAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
