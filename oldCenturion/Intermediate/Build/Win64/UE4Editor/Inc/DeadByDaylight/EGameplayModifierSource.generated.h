// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGameplayModifierSource_generated_h
#error "EGameplayModifierSource.generated.h already included, missing '#pragma once' in EGameplayModifierSource.h"
#endif
#define DEADBYDAYLIGHT_EGameplayModifierSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGameplayModifierSource_h


#define FOREACH_ENUM_EGAMEPLAYMODIFIERSOURCE(op) \
	op(EGameplayModifierSource::VE_Perk) \
	op(EGameplayModifierSource::VE_StatusEffect) \
	op(EGameplayModifierSource::VE_Item) \
	op(EGameplayModifierSource::VE_ItemAddon) \
	op(EGameplayModifierSource::VE_All) \
	op(EGameplayModifierSource::VE_PerkOrStatusEffect) \
	op(EGameplayModifierSource::VE_PerkStatusOrAddon) 

enum class EGameplayModifierSource : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameplayModifierSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
