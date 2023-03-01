// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EHitValidatorConfigName_generated_h
#error "EHitValidatorConfigName.generated.h already included, missing '#pragma once' in EHitValidatorConfigName.h"
#endif
#define DEADBYDAYLIGHT_EHitValidatorConfigName_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EHitValidatorConfigName_h


#define FOREACH_ENUM_EHITVALIDATORCONFIGNAME(op) \
	op(EHitValidatorConfigName::Default) \
	op(EHitValidatorConfigName::Hatchet) \
	op(EHitValidatorConfigName::Bomb) \
	op(EHitValidatorConfigName::Harpoon) \
	op(EHitValidatorConfigName::Oni) \
	op(EHitValidatorConfigName::Whip) \
	op(EHitValidatorConfigName::DefaultProjectile) 

enum class EHitValidatorConfigName : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHitValidatorConfigName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
