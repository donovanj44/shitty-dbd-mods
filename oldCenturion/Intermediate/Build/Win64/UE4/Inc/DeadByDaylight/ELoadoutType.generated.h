// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELoadoutType_generated_h
#error "ELoadoutType.generated.h already included, missing '#pragma once' in ELoadoutType.h"
#endif
#define DEADBYDAYLIGHT_ELoadoutType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELoadoutType_h


#define FOREACH_ENUM_ELOADOUTTYPE(op) \
	op(ELoadoutType::Item) \
	op(ELoadoutType::Perk) \
	op(ELoadoutType::Offering) 

enum class ELoadoutType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoadoutType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
