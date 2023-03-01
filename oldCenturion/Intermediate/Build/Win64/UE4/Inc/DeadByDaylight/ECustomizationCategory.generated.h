// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECustomizationCategory_generated_h
#error "ECustomizationCategory.generated.h already included, missing '#pragma once' in ECustomizationCategory.h"
#endif
#define DEADBYDAYLIGHT_ECustomizationCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECustomizationCategory_h


#define FOREACH_ENUM_ECUSTOMIZATIONCATEGORY(op) \
	op(ECustomizationCategory::None) \
	op(ECustomizationCategory::SurvivorHead) \
	op(ECustomizationCategory::SurvivorTorso) \
	op(ECustomizationCategory::SurvivorLegs) \
	op(ECustomizationCategory::KillerHead) \
	op(ECustomizationCategory::KillerBody) \
	op(ECustomizationCategory::KillerWeapon) \
	op(ECustomizationCategory::Outfits) \
	op(ECustomizationCategory::Charm) 

enum class ECustomizationCategory : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECustomizationCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
