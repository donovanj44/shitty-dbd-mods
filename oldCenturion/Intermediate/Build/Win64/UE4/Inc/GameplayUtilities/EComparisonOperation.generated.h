// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYUTILITIES_EComparisonOperation_generated_h
#error "EComparisonOperation.generated.h already included, missing '#pragma once' in EComparisonOperation.h"
#endif
#define GAMEPLAYUTILITIES_EComparisonOperation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_EComparisonOperation_h


#define FOREACH_ENUM_ECOMPARISONOPERATION(op) \
	op(EComparisonOperation::EqualTo) \
	op(EComparisonOperation::NotEqualTo) \
	op(EComparisonOperation::GreaterThan) \
	op(EComparisonOperation::GreaterThanOrEqualTo) \
	op(EComparisonOperation::LesserThan) \
	op(EComparisonOperation::LesserThanOrEqualTo) 

enum class EComparisonOperation : uint8;
template<> GAMEPLAYUTILITIES_API UEnum* StaticEnum<EComparisonOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
