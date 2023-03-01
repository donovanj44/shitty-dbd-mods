// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EAfflictionLevel_generated_h
#error "EAfflictionLevel.generated.h already included, missing '#pragma once' in EAfflictionLevel.h"
#endif
#define DBDSHAREDTYPES_EAfflictionLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EAfflictionLevel_h


#define FOREACH_ENUM_EAFFLICTIONLEVEL(op) \
	op(EAfflictionLevel::Off) \
	op(EAfflictionLevel::Level1) \
	op(EAfflictionLevel::Level2) \
	op(EAfflictionLevel::Level3) 

enum class EAfflictionLevel : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAfflictionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
