// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYUTILITIES_ESightStatus_generated_h
#error "ESightStatus.generated.h already included, missing '#pragma once' in ESightStatus.h"
#endif
#define GAMEPLAYUTILITIES_ESightStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_ESightStatus_h


#define FOREACH_ENUM_ESIGHTSTATUS(op) \
	op(ESightStatus::OutOfSight) \
	op(ESightStatus::Discerned) \
	op(ESightStatus::Sighted) 

enum class ESightStatus : uint8;
template<> GAMEPLAYUTILITIES_API UEnum* StaticEnum<ESightStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
