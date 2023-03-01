// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ELeanState_generated_h
#error "ELeanState.generated.h already included, missing '#pragma once' in ELeanState.h"
#endif
#define DBDSHAREDTYPES_ELeanState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ELeanState_h


#define FOREACH_ENUM_ELEANSTATE(op) \
	op(ELeanState::NotLeaning) \
	op(ELeanState::LeanLeft) \
	op(ELeanState::LeanRight) 

enum class ELeanState : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ELeanState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
