// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDisconnectErrors_generated_h
#error "EDisconnectErrors.generated.h already included, missing '#pragma once' in EDisconnectErrors.h"
#endif
#define DEADBYDAYLIGHT_EDisconnectErrors_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDisconnectErrors_h


#define FOREACH_ENUM_EDISCONNECTERRORS(op) \
	op(EDisconnectErrors::None) \
	op(EDisconnectErrors::SteamAuthFailure) \
	op(EDisconnectErrors::SteamAuthFailureKickedFromServer) \
	op(EDisconnectErrors::EACServerValidationFailure) \
	op(EDisconnectErrors::EACValidationFailureKickedFromServer) \
	op(EDisconnectErrors::EACClientNotRunning) \
	op(EDisconnectErrors::EACClientIntegrityViolation) \
	op(EDisconnectErrors::PlayerRemovedOnSuspend) \
	op(EDisconnectErrors::LostConnectionToHost) \
	op(EDisconnectErrors::LostConnectionToProfileService) \
	op(EDisconnectErrors::MirrorsUnscheduledSessionDestruction) \
	op(EDisconnectErrors::SessionKilledByMirrors) \
	op(EDisconnectErrors::UnableToSaveProfileAfterRetries) \
	op(EDisconnectErrors::UnableToGetPlayerLevel) \
	op(EDisconnectErrors::UnableToEarnPlayerXp) \
	op(EDisconnectErrors::UnableToUpdatePips) \
	op(EDisconnectErrors::UnableToUpdateRatings) \
	op(EDisconnectErrors::ClientProviderAuthenticationFailed) \
	op(EDisconnectErrors::UnableToSyncCachedCurrency) \
	op(EDisconnectErrors::OwnershipValidationFailure) 

enum class EDisconnectErrors : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDisconnectErrors>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
