// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EInteractionTargetInSightModes_generated_h
#error "EInteractionTargetInSightModes.generated.h already included, missing '#pragma once' in EInteractionTargetInSightModes.h"
#endif
#define DBDBOTS_EInteractionTargetInSightModes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EInteractionTargetInSightModes_h


#define FOREACH_ENUM_EINTERACTIONTARGETINSIGHTMODES(op) \
	op(EInteractionTargetInSightModes::None) \
	op(EInteractionTargetInSightModes::MustBeInSight) \
	op(EInteractionTargetInSightModes::MustBeInSight_NoObstruction) \
	op(EInteractionTargetInSightModes::ActivateIfOutOfSight) 

enum class EInteractionTargetInSightModes : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EInteractionTargetInSightModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
