// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EChatType_generated_h
#error "EChatType.generated.h already included, missing '#pragma once' in EChatType.h"
#endif
#define DBDSHAREDTYPES_EChatType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EChatType_h


#define FOREACH_ENUM_ECHATTYPE(op) \
	op(EChatType::None) \
	op(EChatType::PreGame) \
	op(EChatType::PostGame) \
	op(EChatType::Party) 

enum class EChatType;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EChatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
