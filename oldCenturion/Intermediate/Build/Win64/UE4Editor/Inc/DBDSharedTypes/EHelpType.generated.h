// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EHelpType_generated_h
#error "EHelpType.generated.h already included, missing '#pragma once' in EHelpType.h"
#endif
#define DBDSHAREDTYPES_EHelpType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EHelpType_h


#define FOREACH_ENUM_EHELPTYPE(op) \
	op(EHelpType::General) \
	op(EHelpType::Survivor) \
	op(EHelpType::Killer) 

enum class EHelpType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EHelpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
