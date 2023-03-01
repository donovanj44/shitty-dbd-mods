// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETileType_generated_h
#error "ETileType.generated.h already included, missing '#pragma once' in ETileType.h"
#endif
#define DEADBYDAYLIGHT_ETileType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETileType_h


#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::None) \
	op(ETileType::Blocker) \
	op(ETileType::Any) \
	op(ETileType::Forest) \
	op(ETileType::Building) \
	op(ETileType::Maze) \
	op(ETileType::Landmark) \
	op(ETileType::Signature) 

enum class ETileType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
