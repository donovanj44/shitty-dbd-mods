// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVES_EventCountComparisonOperator_generated_h
#error "EventCountComparisonOperator.generated.h already included, missing '#pragma once' in EventCountComparisonOperator.h"
#endif
#define ARCHIVES_EventCountComparisonOperator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_EventCountComparisonOperator_h


#define FOREACH_ENUM_EVENTCOUNTCOMPARISONOPERATOR(op) \
	op(EventCountComparisonOperator::EqualTo) \
	op(EventCountComparisonOperator::GreaterThan) \
	op(EventCountComparisonOperator::GreaterThanEqualTo) \
	op(EventCountComparisonOperator::LessThan) \
	op(EventCountComparisonOperator::LessThanEqualTo) 

enum class EventCountComparisonOperator : uint8;
template<> ARCHIVES_API UEnum* StaticEnum<EventCountComparisonOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
