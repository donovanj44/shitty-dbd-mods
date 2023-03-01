// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EPathBuildResult_generated_h
#error "EPathBuildResult.generated.h already included, missing '#pragma once' in EPathBuildResult.h"
#endif
#define DBDBOTS_EPathBuildResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EPathBuildResult_h


#define FOREACH_ENUM_EPATHBUILDRESULT(op) \
	op(EPathBuildResult::None) \
	op(EPathBuildResult::Failed) \
	op(EPathBuildResult::Succeeded) \
	op(EPathBuildResult::Partial) \
	op(EPathBuildResult::InProgress) 

enum class EPathBuildResult;
template<> DBDBOTS_API UEnum* StaticEnum<EPathBuildResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
