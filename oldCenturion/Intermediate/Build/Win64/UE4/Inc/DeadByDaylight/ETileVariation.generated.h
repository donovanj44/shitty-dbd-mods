// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETileVariation_generated_h
#error "ETileVariation.generated.h already included, missing '#pragma once' in ETileVariation.h"
#endif
#define DEADBYDAYLIGHT_ETileVariation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETileVariation_h


#define FOREACH_ENUM_ETILEVARIATION(op) \
	op(ETileVariation::None) \
	op(ETileVariation::BlueTag) \
	op(ETileVariation::PinkTag) \
	op(ETileVariation::YellowTag) \
	op(ETileVariation::GreenTag) \
	op(ETileVariation::Empty) 

enum class ETileVariation : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETileVariation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
