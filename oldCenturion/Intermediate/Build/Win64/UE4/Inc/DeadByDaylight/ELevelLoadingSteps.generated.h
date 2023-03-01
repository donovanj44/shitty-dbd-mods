// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELevelLoadingSteps_generated_h
#error "ELevelLoadingSteps.generated.h already included, missing '#pragma once' in ELevelLoadingSteps.h"
#endif
#define DEADBYDAYLIGHT_ELevelLoadingSteps_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELevelLoadingSteps_h


#define FOREACH_ENUM_ELEVELLOADINGSTEPS(op) \
	op(ELevelLoadingSteps::Invalid) \
	op(ELevelLoadingSteps::WaitingForPlayersToBeSpawned) \
	op(ELevelLoadingSteps::WaitingForAIPawnToBeSpawned) \
	op(ELevelLoadingSteps::WaitingForAssetPreloader) \
	op(ELevelLoadingSteps::WaitingForLoadoutAndTheme) \
	op(ELevelLoadingSteps::WaitingForPIAToBeSpawnedAndInitialized) \
	op(ELevelLoadingSteps::WaitingForNavmeshComputationToStart) \
	op(ELevelLoadingSteps::WaitingForNavmeshComputationToFinish) \
	op(ELevelLoadingSteps::SetGameLoadedAndReadyToPlay) \
	op(ELevelLoadingSteps::WaitingForIntroToBeDone) \
	op(ELevelLoadingSteps::LoadingCompleted) 

enum class ELevelLoadingSteps;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELevelLoadingSteps>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
