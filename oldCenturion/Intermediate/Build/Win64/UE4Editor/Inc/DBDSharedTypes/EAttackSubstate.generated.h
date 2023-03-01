// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EAttackSubstate_generated_h
#error "EAttackSubstate.generated.h already included, missing '#pragma once' in EAttackSubstate.h"
#endif
#define DBDSHAREDTYPES_EAttackSubstate_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EAttackSubstate_h


#define FOREACH_ENUM_EATTACKSUBSTATE(op) \
	op(EAttackSubstate::VE_None) \
	op(EAttackSubstate::VE_Open) \
	op(EAttackSubstate::VE_Hitting) \
	op(EAttackSubstate::VE_HitSucceed) \
	op(EAttackSubstate::VE_HitMiss) \
	op(EAttackSubstate::VE_HitObstructed) \
	op(EAttackSubstate::VE_Done) 

enum class EAttackSubstate : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAttackSubstate>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
