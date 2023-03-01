// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EAITerrorLevel_generated_h
#error "EAITerrorLevel.generated.h already included, missing '#pragma once' in EAITerrorLevel.h"
#endif
#define DEADBYDAYLIGHT_EAITerrorLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EAITerrorLevel_h


#define FOREACH_ENUM_EAITERRORLEVEL(op) \
	op(EAITerrorLevel::None) \
	op(EAITerrorLevel::Low) \
	op(EAITerrorLevel::Min) \
	op(EAITerrorLevel::Medium) \
	op(EAITerrorLevel::High) \
	op(EAITerrorLevel::VeryHigh) \
	op(EAITerrorLevel::Max) 

enum class EAITerrorLevel : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAITerrorLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
