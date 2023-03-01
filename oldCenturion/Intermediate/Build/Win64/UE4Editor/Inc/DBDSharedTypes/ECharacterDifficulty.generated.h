// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ECharacterDifficulty_generated_h
#error "ECharacterDifficulty.generated.h already included, missing '#pragma once' in ECharacterDifficulty.h"
#endif
#define DBDSHAREDTYPES_ECharacterDifficulty_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ECharacterDifficulty_h


#define FOREACH_ENUM_ECHARACTERDIFFICULTY(op) \
	op(ECharacterDifficulty::VE_Easy) \
	op(ECharacterDifficulty::VE_Intermediate) \
	op(ECharacterDifficulty::VE_Hard) 

enum class ECharacterDifficulty : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ECharacterDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
