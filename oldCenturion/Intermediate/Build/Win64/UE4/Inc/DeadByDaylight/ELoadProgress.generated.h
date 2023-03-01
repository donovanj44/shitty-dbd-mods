// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELoadProgress_generated_h
#error "ELoadProgress.generated.h already included, missing '#pragma once' in ELoadProgress.h"
#endif
#define DEADBYDAYLIGHT_ELoadProgress_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELoadProgress_h


#define FOREACH_ENUM_ELOADPROGRESS(op) \
	op(ELoadProgress::NotStarted) \
	op(ELoadProgress::Init) \
	op(ELoadProgress::ArtificialDelay) \
	op(ELoadProgress::DisconnectingPresencePlugin) \
	op(ELoadProgress::ValidateOnlineSubsystem) \
	op(ELoadProgress::CheckingPlatformService) \
	op(ELoadProgress::PreMirrorsLogin) \
	op(ELoadProgress::ConnectingToMirrors) \
	op(ELoadProgress::StartEAC) \
	op(ELoadProgress::LoadingAuthInfo) \
	op(ELoadProgress::LoadingBackendConfigs) \
	op(ELoadProgress::SetupRichPresence) \
	op(ELoadProgress::LoadingBackendTunables) \
	op(ELoadProgress::ApplyingCDNPatch) \
	op(ELoadProgress::AquiringExternalAuthentication) \
	op(ELoadProgress::LoadingPlayerIndependentShopData) \
	op(ELoadProgress::LicenseCache) \
	op(ELoadProgress::LoadingEvents) \
	op(ELoadProgress::LoadingInventory) \
	op(ELoadProgress::SyncingOwnedCharacters) \
	op(ELoadProgress::LoadingProfile) \
	op(ELoadProgress::LoadingMirrorCurrencies) \
	op(ELoadProgress::LoadingWallet) \
	op(ELoadProgress::LoadingConsent) \
	op(ELoadProgress::LoadingGameConfigs) \
	op(ELoadProgress::LoadingCharacterXPTables) \
	op(ELoadProgress::CheckingPendingTransactions) \
	op(ELoadProgress::LoadingContentSchedule) \
	op(ELoadProgress::LoadingNews) \
	op(ELoadProgress::SendingAnalytics) \
	op(ELoadProgress::ValidateData) \
	op(ELoadProgress::ValidatingClientVersion) \
	op(ELoadProgress::CheckingNeedForCurrencyMigration) \
	op(ELoadProgress::MigratingCurrenciesToMirror) \
	op(ELoadProgress::SyncingFriendsList) \
	op(ELoadProgress::Complete) \
	op(ELoadProgress::Locating) \
	op(ELoadProgress::InitializingRTMConnection) \
	op(ELoadProgress::LoadingStreamVideoData) \
	op(ELoadProgress::CollectingFreeCatalogItems) \
	op(ELoadProgress::DownloadDynamicContent) \
	op(ELoadProgress::CheckingMobilePendingTransactions) \
	op(ELoadProgress::LoadMarketingBanners) \
	op(ELoadProgress::LoadingSubscriptionStatus) \
	op(ELoadProgress::RequestingTrackingAuthorization) 

enum class ELoadProgress;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoadProgress>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
