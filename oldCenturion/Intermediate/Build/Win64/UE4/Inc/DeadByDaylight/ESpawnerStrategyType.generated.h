// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESpawnerStrategyType_generated_h
#error "ESpawnerStrategyType.generated.h already included, missing '#pragma once' in ESpawnerStrategyType.h"
#endif
#define DEADBYDAYLIGHT_ESpawnerStrategyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESpawnerStrategyType_h


#define FOREACH_ENUM_ESPAWNERSTRATEGYTYPE(op) \
	op(ESpawnerStrategyType::None) \
	op(ESpawnerStrategyType::NoAccumulation) \
	op(ESpawnerStrategyType::LimitAccumulation) 

enum class ESpawnerStrategyType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESpawnerStrategyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
