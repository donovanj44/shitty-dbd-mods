// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ETutorialObjectivePlayerActionMapping_generated_h
#error "ETutorialObjectivePlayerActionMapping.generated.h already included, missing '#pragma once' in ETutorialObjectivePlayerActionMapping.h"
#endif
#define DBDSHAREDTYPES_ETutorialObjectivePlayerActionMapping_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ETutorialObjectivePlayerActionMapping_h


#define FOREACH_ENUM_ETUTORIALOBJECTIVEPLAYERACTIONMAPPING(op) \
	op(ETutorialObjectivePlayerActionMapping::None) \
	op(ETutorialObjectivePlayerActionMapping::Action_Camper) \
	op(ETutorialObjectivePlayerActionMapping::Interact_Camper) \
	op(ETutorialObjectivePlayerActionMapping::Interact_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::Run_Camper) \
	op(ETutorialObjectivePlayerActionMapping::Attack_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::SecondaryAction_Camper) \
	op(ETutorialObjectivePlayerActionMapping::ItemUse_Camper) \
	op(ETutorialObjectivePlayerActionMapping::Crouch) \
	op(ETutorialObjectivePlayerActionMapping::ItemDrop_Camper) \
	op(ETutorialObjectivePlayerActionMapping::ItemUse_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::ItemDrop_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::Mash_Camper) \
	op(ETutorialObjectivePlayerActionMapping::FastInteract_Camper) \
	op(ETutorialObjectivePlayerActionMapping::SecondaryAction_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::Action_Slasher) \
	op(ETutorialObjectivePlayerActionMapping::Struggle) \
	op(ETutorialObjectivePlayerActionMapping::MoveAxes) \
	op(ETutorialObjectivePlayerActionMapping::LookAxes) \
	op(ETutorialObjectivePlayerActionMapping::Count) 

enum class ETutorialObjectivePlayerActionMapping : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ETutorialObjectivePlayerActionMapping>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
