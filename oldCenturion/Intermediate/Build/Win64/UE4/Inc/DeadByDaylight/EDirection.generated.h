// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDirection_generated_h
#error "EDirection.generated.h already included, missing '#pragma once' in EDirection.h"
#endif
#define DEADBYDAYLIGHT_EDirection_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDirection_h


#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::Up) \
	op(EDirection::Down) \
	op(EDirection::Left) \
	op(EDirection::Right) \
	op(EDirection::UpLeft) \
	op(EDirection::UpRight) \
	op(EDirection::DownLeft) \
	op(EDirection::DownRight) 

enum class EDirection : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
