// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELoadCompleteState_generated_h
#error "ELoadCompleteState.generated.h already included, missing '#pragma once' in ELoadCompleteState.h"
#endif
#define DEADBYDAYLIGHT_ELoadCompleteState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELoadCompleteState_h


#define FOREACH_ENUM_ELOADCOMPLETESTATE(op) \
	op(ELoadCompleteState::InProgress) \
	op(ELoadCompleteState::Success) \
	op(ELoadCompleteState::ReloginRequested) \
	op(ELoadCompleteState::FailedEAC) \
	op(ELoadCompleteState::FailedRecoverable) \
	op(ELoadCompleteState::FailedRecoverableProfileLoad) \
	op(ELoadCompleteState::FailedUnequipedDisableditems) \
	op(ELoadCompleteState::FailedBlocking) \
	op(ELoadCompleteState::FailedBlockingNoDBDServer) \
	op(ELoadCompleteState::FailedBlockingNotConnected) \
	op(ELoadCompleteState::FailedBlockedNoNetworkConnection) \
	op(ELoadCompleteState::FailedBlockingSharedAuthenticationFailed) \
	op(ELoadCompleteState::FailedBlockingPlatformNotAuthenticated) \
	op(ELoadCompleteState::FailedBlockingPlatformSubsystemNotInitialized) \
	op(ELoadCompleteState::FailedBlockingOnlinePresenceNotInitialized) \
	op(ELoadCompleteState::FailedBlockingPlatformNetUniqueIdInvalid) \
	op(ELoadCompleteState::FailedBlockingInvalidLocalPlayer) \
	op(ELoadCompleteState::FailedBlockingInvalidGameObjects) \
	op(ELoadCompleteState::FailedBlockingInvalidSDA) \
	op(ELoadCompleteState::FailedBlockingInvalidClientVersion) \
	op(ELoadCompleteState::FailedBlockingInvalidAtlantaClientVersion) \
	op(ELoadCompleteState::FailedBlockingWindowsStoreAccountNotLoggedIn) \
	op(ELoadCompleteState::FailedBlockingSSLCACert) \
	op(ELoadCompleteState::FailedBlockingUserCancelled) \
	op(ELoadCompleteState::FailedBlockingCDNFailure) \
	op(ELoadCompleteState::FailedBlockingCDNContentError) \
	op(ELoadCompleteState::FailedBlockingCDNCantFindContentToDownload) \
	op(ELoadCompleteState::FailedBlockingCDNNoPatchForCurrentPlatformAndVersion) \
	op(ELoadCompleteState::FailedBlockingCDNNotEnoughDiskSpace) \
	op(ELoadCompleteState::FailedBlockingCDNFailureToRetrieveContent) \
	op(ELoadCompleteState::FailedRecoverableCDNUserCancelled) \
	op(ELoadCompleteState::FailedBlockingVersionFileError) \
	op(ELoadCompleteState::FailedBlockingRTMConnection) \
	op(ELoadCompleteState::FailedBlockingMaxTrialsReached) \
	op(ELoadCompleteState::FailedBlockingMirrorsHealthCheckFailed) \
	op(ELoadCompleteState::FailedBlockingTutorialRewardsFetchFailed) 

enum class ELoadCompleteState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoadCompleteState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
