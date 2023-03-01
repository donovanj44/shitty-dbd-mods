// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECollectableCategory_generated_h
#error "ECollectableCategory.generated.h already included, missing '#pragma once' in ECollectableCategory.h"
#endif
#define DEADBYDAYLIGHT_ECollectableCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECollectableCategory_h


#define FOREACH_ENUM_ECOLLECTABLECATEGORY(op) \
	op(ECollectableCategory::Common) \
	op(ECollectableCategory::Rare) 

enum class ECollectableCategory : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECollectableCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
