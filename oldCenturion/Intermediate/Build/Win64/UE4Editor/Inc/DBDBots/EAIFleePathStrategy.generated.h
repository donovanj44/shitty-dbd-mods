// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAIFleePathStrategy_generated_h
#error "EAIFleePathStrategy.generated.h already included, missing '#pragma once' in EAIFleePathStrategy.h"
#endif
#define DBDBOTS_EAIFleePathStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAIFleePathStrategy_h


#define FOREACH_ENUM_EAIFLEEPATHSTRATEGY(op) \
	op(EAIFleePathStrategy::None) \
	op(EAIFleePathStrategy::KeepGoal) \
	op(EAIFleePathStrategy::Away) \
	op(EAIFleePathStrategy::Loop) \
	op(EAIFleePathStrategy::AwayLOS) 

enum class EAIFleePathStrategy : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EAIFleePathStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
