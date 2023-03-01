// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EAttackSuccess_generated_h
#error "EAttackSuccess.generated.h already included, missing '#pragma once' in EAttackSuccess.h"
#endif
#define DBDSHAREDTYPES_EAttackSuccess_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EAttackSuccess_h


#define FOREACH_ENUM_EATTACKSUCCESS(op) \
	op(EAttackSuccess::VE_None) \
	op(EAttackSuccess::VE_Success) \
	op(EAttackSuccess::VE_Failure) \
	op(EAttackSuccess::VE_Obstructed) 

enum class EAttackSuccess;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAttackSuccess>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
