// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSYSTEM_EModifierOperationStrategy_generated_h
#error "EModifierOperationStrategy.generated.h already included, missing '#pragma once' in EModifierOperationStrategy.h"
#endif
#define STATSYSTEM_EModifierOperationStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_StatSystem_Public_EModifierOperationStrategy_h


#define FOREACH_ENUM_EMODIFIEROPERATIONSTRATEGY(op) \
	op(EModifierOperationStrategy::Add) \
	op(EModifierOperationStrategy::Subs) \
	op(EModifierOperationStrategy::Mult) \
	op(EModifierOperationStrategy::Div) 

enum class EModifierOperationStrategy : uint8;
template<> STATSYSTEM_API UEnum* StaticEnum<EModifierOperationStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
