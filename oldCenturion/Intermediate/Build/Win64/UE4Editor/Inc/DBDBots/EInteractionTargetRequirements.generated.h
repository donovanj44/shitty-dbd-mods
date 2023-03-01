// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EInteractionTargetRequirements_generated_h
#error "EInteractionTargetRequirements.generated.h already included, missing '#pragma once' in EInteractionTargetRequirements.h"
#endif
#define DBDBOTS_EInteractionTargetRequirements_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EInteractionTargetRequirements_h


#define FOREACH_ENUM_EINTERACTIONTARGETREQUIREMENTS(op) \
	op(EInteractionTargetRequirements::BestTargetMustBeValid) \
	op(EInteractionTargetRequirements::AnyValidTarget) \
	op(EInteractionTargetRequirements::AnyTarget) \
	op(EInteractionTargetRequirements::NoTarget) \
	op(EInteractionTargetRequirements::None) 

enum class EInteractionTargetRequirements : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EInteractionTargetRequirements>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
