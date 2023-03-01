// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELevelBuildingState_generated_h
#error "ELevelBuildingState.generated.h already included, missing '#pragma once' in ELevelBuildingState.h"
#endif
#define DEADBYDAYLIGHT_ELevelBuildingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELevelBuildingState_h


#define FOREACH_ENUM_ELEVELBUILDINGSTATE(op) \
	op(ELevelBuildingState::NotInitialized) \
	op(ELevelBuildingState::WaitingForInitialSync) \
	op(ELevelBuildingState::SyncSeeds) \
	op(ELevelBuildingState::GetAvailableItems) \
	op(ELevelBuildingState::PendingGettingItems) \
	op(ELevelBuildingState::GettingLevelsDone) \
	op(ELevelBuildingState::PendingPremadeMapStreaming) \
	op(ELevelBuildingState::GetThemedTiles) \
	op(ELevelBuildingState::PendingGettingTiles) \
	op(ELevelBuildingState::SpawnRequiredTiles) \
	op(ELevelBuildingState::SpawningLevelTiles) \
	op(ELevelBuildingState::SpawnInterTileElements) \
	op(ELevelBuildingState::PendingInterTileElementsSpawning) \
	op(ELevelBuildingState::SpawningActors) \
	op(ELevelBuildingState::SpawningMultiPassActors) \
	op(ELevelBuildingState::StallingForRemotes) \
	op(ELevelBuildingState::BuildingDone) \
	op(ELevelBuildingState::BuildingStateCount) 

enum class ELevelBuildingState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELevelBuildingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
