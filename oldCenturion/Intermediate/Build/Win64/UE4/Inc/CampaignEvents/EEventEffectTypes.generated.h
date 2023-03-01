// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMPAIGNEVENTS_EEventEffectTypes_generated_h
#error "EEventEffectTypes.generated.h already included, missing '#pragma once' in EEventEffectTypes.h"
#endif
#define CAMPAIGNEVENTS_EEventEffectTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_CampaignEvents_Public_EEventEffectTypes_h


#define FOREACH_ENUM_EEVENTEFFECTTYPES(op) \
	op(EEventEffectTypes::Bloodpoints) \
	op(EEventEffectTypes::Experience) \
	op(EEventEffectTypes::RetentionRewards) \
	op(EEventEffectTypes::PromoPack) \
	op(EEventEffectTypes::EventItemsPack) \
	op(EEventEffectTypes::ProvingGroundCharacterRand) \
	op(EEventEffectTypes::ProvingGroundStore) 

enum class EEventEffectTypes;
template<> CAMPAIGNEVENTS_API UEnum* StaticEnum<EEventEffectTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
