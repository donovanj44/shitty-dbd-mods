// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EErrorCodes_generated_h
#error "EErrorCodes.generated.h already included, missing '#pragma once' in EErrorCodes.h"
#endif
#define DEADBYDAYLIGHT_EErrorCodes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EErrorCodes_h


#define FOREACH_ENUM_EERRORCODES(op) \
	op(EErrorCodes::None) \
	op(EErrorCodes::SavefileDeserializationFailure) \
	op(EErrorCodes::SavefileDecryptionFailure) \
	op(EErrorCodes::SavefileEmpty) \
	op(EErrorCodes::SavefileBadPlayerId) \
	op(EErrorCodes::SavefileEmptyPlayerUID) \
	op(EErrorCodes::SavefileInvalidUniqueNetID) \
	op(EErrorCodes::SavefileInvalidPlayerState) \
	op(EErrorCodes::SavefileBackendError) \
	op(EErrorCodes::KrakenRankError) \
	op(EErrorCodes::KrakenRatingsError) \
	op(EErrorCodes::SavefileKrakenPlayerForbidden) \
	op(EErrorCodes::SyncCachedCurrencyError) \
	op(EErrorCodes::CurrencyTransactionError) \
	op(EErrorCodes::StateDownloadFailed) \
	op(EErrorCodes::StatcacheDecryptionFailed) \
	op(EErrorCodes::SavefilePlayerLoadUIDMismatch) \
	op(EErrorCodes::SavefilePlayerStateUIDMismatch) \
	op(EErrorCodes::SavefileEncryptionFailure) \
	op(EErrorCodes::SaveFailedInvalidData) \
	op(EErrorCodes::SaveFailedInvalidJSON) \
	op(EErrorCodes::SaveFailedDecodeDataString) \
	op(EErrorCodes::SaveFailedCompressDataString) \
	op(EErrorCodes::SaveFailedEncryptString) \
	op(EErrorCodes::StatcacheEncryptionFailed) \
	op(EErrorCodes::SaveFailedCloudErrorTimeout) \
	op(EErrorCodes::JsonToPersistenDataFailed) \
	op(EErrorCodes::SaveFailedCloudErrorAfterRetries) \
	op(EErrorCodes::StateUploadFailed) \
	op(EErrorCodes::GetPlayerLevelRequestError) \
	op(EErrorCodes::EarnPlayerXpRequestError) \
	op(EErrorCodes::EarnPlayerXpParamError) \
	op(EErrorCodes::OnboardingFailGet) \
	op(EErrorCodes::OnboardingFailUpdate) \
	op(EErrorCodes::OnboardingFailRequest) \
	op(EErrorCodes::MatchCancelledPlayerLeftDuringLoading) \
	op(EErrorCodes::MatchCancelledInvalidPlayerRoles) \
	op(EErrorCodes::MatchCancelledLoadingTimeout) 

enum class EErrorCodes;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EErrorCodes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
