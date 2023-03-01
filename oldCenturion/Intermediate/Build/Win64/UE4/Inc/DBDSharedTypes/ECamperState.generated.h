// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ECamperState_generated_h
#error "ECamperState.generated.h already included, missing '#pragma once' in ECamperState.h"
#endif
#define DBDSHAREDTYPES_ECamperState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ECamperState_h


#define FOREACH_ENUM_ECAMPERSTATE(op) \
	op(ECamperState::VE_None) \
	op(ECamperState::VE_Navigate) \
	op(ECamperState::VE_Interact) 

enum class ECamperState : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ECamperState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
