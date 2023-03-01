// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSYSTEM_EModifierCompoundStrategy_generated_h
#error "EModifierCompoundStrategy.generated.h already included, missing '#pragma once' in EModifierCompoundStrategy.h"
#endif
#define STATSYSTEM_EModifierCompoundStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_StatSystem_Public_EModifierCompoundStrategy_h


#define FOREACH_ENUM_EMODIFIERCOMPOUNDSTRATEGY(op) \
	op(EModifierCompoundStrategy::Add) \
	op(EModifierCompoundStrategy::AddPlusOne) \
	op(EModifierCompoundStrategy::Min) \
	op(EModifierCompoundStrategy::Max) \
	op(EModifierCompoundStrategy::Mult) \
	op(EModifierCompoundStrategy::MultWithCompoundNegative) \
	op(EModifierCompoundStrategy::MultWithCompoundNegativeMinusOne) 

enum class EModifierCompoundStrategy : uint8;
template<> STATSYSTEM_API UEnum* StaticEnum<EModifierCompoundStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
