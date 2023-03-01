// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDensity_generated_h
#error "EDensity.generated.h already included, missing '#pragma once' in EDensity.h"
#endif
#define DEADBYDAYLIGHT_EDensity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDensity_h


#define FOREACH_ENUM_EDENSITY(op) \
	op(EDensity::Unspecified) \
	op(EDensity::Light) \
	op(EDensity::Moderate) \
	op(EDensity::Heavy) \
	op(EDensity::Empty) 

enum class EDensity : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDensity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
