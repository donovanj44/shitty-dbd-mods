// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ESicknessLevel_generated_h
#error "ESicknessLevel.generated.h already included, missing '#pragma once' in ESicknessLevel.h"
#endif
#define DBDSHAREDTYPES_ESicknessLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ESicknessLevel_h


#define FOREACH_ENUM_ESICKNESSLEVEL(op) \
	op(ESicknessLevel::Off) \
	op(ESicknessLevel::InProgress) \
	op(ESicknessLevel::Full) 

enum class ESicknessLevel : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESicknessLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
