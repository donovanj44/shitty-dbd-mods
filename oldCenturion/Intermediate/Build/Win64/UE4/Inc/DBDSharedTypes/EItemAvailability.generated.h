// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EItemAvailability_generated_h
#error "EItemAvailability.generated.h already included, missing '#pragma once' in EItemAvailability.h"
#endif
#define DBDSHAREDTYPES_EItemAvailability_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EItemAvailability_h


#define FOREACH_ENUM_EITEMAVAILABILITY(op) \
	op(EItemAvailability::Available) \
	op(EItemAvailability::Disabled) \
	op(EItemAvailability::Retired) 

enum class EItemAvailability : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EItemAvailability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
