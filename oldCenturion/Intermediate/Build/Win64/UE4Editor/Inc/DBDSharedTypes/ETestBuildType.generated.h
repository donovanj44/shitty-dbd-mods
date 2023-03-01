// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ETestBuildType_generated_h
#error "ETestBuildType.generated.h already included, missing '#pragma once' in ETestBuildType.h"
#endif
#define DBDSHAREDTYPES_ETestBuildType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ETestBuildType_h


#define FOREACH_ENUM_ETESTBUILDTYPE(op) \
	op(ETestBuildType::None) \
	op(ETestBuildType::PublicTestBuild) \
	op(ETestBuildType::PaxBuild) \
	op(ETestBuildType::ConsolePreAlphaBuild) 

enum class ETestBuildType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ETestBuildType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
