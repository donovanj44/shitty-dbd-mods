// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_FlickeringLightType_generated_h
#error "FlickeringLightType.generated.h already included, missing '#pragma once' in FlickeringLightType.h"
#endif
#define DEADBYDAYLIGHT_FlickeringLightType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLightType_h


#define FOREACH_ENUM_FLICKERINGLIGHTTYPE(op) \
	op(FlickeringLightType::Point) \
	op(FlickeringLightType::Rect) \
	op(FlickeringLightType::Spot) 

enum class FlickeringLightType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<FlickeringLightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
