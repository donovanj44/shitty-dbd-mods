// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EHintCategory_generated_h
#error "EHintCategory.generated.h already included, missing '#pragma once' in EHintCategory.h"
#endif
#define DEADBYDAYLIGHT_EHintCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EHintCategory_h


#define FOREACH_ENUM_EHINTCATEGORY(op) \
	op(EHintCategory::Lore) \
	op(EHintCategory::Survivor) \
	op(EHintCategory::Killer) 

enum class EHintCategory : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHintCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
