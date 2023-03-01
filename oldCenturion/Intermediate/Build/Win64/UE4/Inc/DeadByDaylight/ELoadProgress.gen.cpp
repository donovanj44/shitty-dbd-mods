// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ELoadProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELoadProgress() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadProgress();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ELoadProgress_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ELoadProgress, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ELoadProgress"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoadProgress>()
	{
		return ELoadProgress_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadProgress(ELoadProgress_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ELoadProgress"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ELoadProgress_Hash() { return 138322404U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadProgress()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadProgress"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ELoadProgress_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadProgress::NotStarted", (int64)ELoadProgress::NotStarted },
				{ "ELoadProgress::Init", (int64)ELoadProgress::Init },
				{ "ELoadProgress::ArtificialDelay", (int64)ELoadProgress::ArtificialDelay },
				{ "ELoadProgress::DisconnectingPresencePlugin", (int64)ELoadProgress::DisconnectingPresencePlugin },
				{ "ELoadProgress::ValidateOnlineSubsystem", (int64)ELoadProgress::ValidateOnlineSubsystem },
				{ "ELoadProgress::CheckingPlatformService", (int64)ELoadProgress::CheckingPlatformService },
				{ "ELoadProgress::PreMirrorsLogin", (int64)ELoadProgress::PreMirrorsLogin },
				{ "ELoadProgress::ConnectingToMirrors", (int64)ELoadProgress::ConnectingToMirrors },
				{ "ELoadProgress::StartEAC", (int64)ELoadProgress::StartEAC },
				{ "ELoadProgress::LoadingAuthInfo", (int64)ELoadProgress::LoadingAuthInfo },
				{ "ELoadProgress::LoadingBackendConfigs", (int64)ELoadProgress::LoadingBackendConfigs },
				{ "ELoadProgress::SetupRichPresence", (int64)ELoadProgress::SetupRichPresence },
				{ "ELoadProgress::LoadingBackendTunables", (int64)ELoadProgress::LoadingBackendTunables },
				{ "ELoadProgress::ApplyingCDNPatch", (int64)ELoadProgress::ApplyingCDNPatch },
				{ "ELoadProgress::AquiringExternalAuthentication", (int64)ELoadProgress::AquiringExternalAuthentication },
				{ "ELoadProgress::LoadingPlayerIndependentShopData", (int64)ELoadProgress::LoadingPlayerIndependentShopData },
				{ "ELoadProgress::LicenseCache", (int64)ELoadProgress::LicenseCache },
				{ "ELoadProgress::LoadingEvents", (int64)ELoadProgress::LoadingEvents },
				{ "ELoadProgress::LoadingInventory", (int64)ELoadProgress::LoadingInventory },
				{ "ELoadProgress::SyncingOwnedCharacters", (int64)ELoadProgress::SyncingOwnedCharacters },
				{ "ELoadProgress::LoadingProfile", (int64)ELoadProgress::LoadingProfile },
				{ "ELoadProgress::LoadingMirrorCurrencies", (int64)ELoadProgress::LoadingMirrorCurrencies },
				{ "ELoadProgress::LoadingWallet", (int64)ELoadProgress::LoadingWallet },
				{ "ELoadProgress::LoadingConsent", (int64)ELoadProgress::LoadingConsent },
				{ "ELoadProgress::LoadingGameConfigs", (int64)ELoadProgress::LoadingGameConfigs },
				{ "ELoadProgress::LoadingCharacterXPTables", (int64)ELoadProgress::LoadingCharacterXPTables },
				{ "ELoadProgress::CheckingPendingTransactions", (int64)ELoadProgress::CheckingPendingTransactions },
				{ "ELoadProgress::LoadingContentSchedule", (int64)ELoadProgress::LoadingContentSchedule },
				{ "ELoadProgress::LoadingNews", (int64)ELoadProgress::LoadingNews },
				{ "ELoadProgress::SendingAnalytics", (int64)ELoadProgress::SendingAnalytics },
				{ "ELoadProgress::ValidateData", (int64)ELoadProgress::ValidateData },
				{ "ELoadProgress::ValidatingClientVersion", (int64)ELoadProgress::ValidatingClientVersion },
				{ "ELoadProgress::CheckingNeedForCurrencyMigration", (int64)ELoadProgress::CheckingNeedForCurrencyMigration },
				{ "ELoadProgress::MigratingCurrenciesToMirror", (int64)ELoadProgress::MigratingCurrenciesToMirror },
				{ "ELoadProgress::SyncingFriendsList", (int64)ELoadProgress::SyncingFriendsList },
				{ "ELoadProgress::Complete", (int64)ELoadProgress::Complete },
				{ "ELoadProgress::Locating", (int64)ELoadProgress::Locating },
				{ "ELoadProgress::InitializingRTMConnection", (int64)ELoadProgress::InitializingRTMConnection },
				{ "ELoadProgress::LoadingStreamVideoData", (int64)ELoadProgress::LoadingStreamVideoData },
				{ "ELoadProgress::CollectingFreeCatalogItems", (int64)ELoadProgress::CollectingFreeCatalogItems },
				{ "ELoadProgress::DownloadDynamicContent", (int64)ELoadProgress::DownloadDynamicContent },
				{ "ELoadProgress::CheckingMobilePendingTransactions", (int64)ELoadProgress::CheckingMobilePendingTransactions },
				{ "ELoadProgress::LoadMarketingBanners", (int64)ELoadProgress::LoadMarketingBanners },
				{ "ELoadProgress::LoadingSubscriptionStatus", (int64)ELoadProgress::LoadingSubscriptionStatus },
				{ "ELoadProgress::RequestingTrackingAuthorization", (int64)ELoadProgress::RequestingTrackingAuthorization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApplyingCDNPatch.Name", "ELoadProgress::ApplyingCDNPatch" },
				{ "AquiringExternalAuthentication.Name", "ELoadProgress::AquiringExternalAuthentication" },
				{ "ArtificialDelay.Name", "ELoadProgress::ArtificialDelay" },
				{ "CheckingMobilePendingTransactions.Name", "ELoadProgress::CheckingMobilePendingTransactions" },
				{ "CheckingNeedForCurrencyMigration.Name", "ELoadProgress::CheckingNeedForCurrencyMigration" },
				{ "CheckingPendingTransactions.Name", "ELoadProgress::CheckingPendingTransactions" },
				{ "CheckingPlatformService.Name", "ELoadProgress::CheckingPlatformService" },
				{ "CollectingFreeCatalogItems.Name", "ELoadProgress::CollectingFreeCatalogItems" },
				{ "Complete.Name", "ELoadProgress::Complete" },
				{ "ConnectingToMirrors.Name", "ELoadProgress::ConnectingToMirrors" },
				{ "DisconnectingPresencePlugin.Name", "ELoadProgress::DisconnectingPresencePlugin" },
				{ "DownloadDynamicContent.Name", "ELoadProgress::DownloadDynamicContent" },
				{ "Init.Name", "ELoadProgress::Init" },
				{ "InitializingRTMConnection.Name", "ELoadProgress::InitializingRTMConnection" },
				{ "LicenseCache.Name", "ELoadProgress::LicenseCache" },
				{ "LoadingAuthInfo.Name", "ELoadProgress::LoadingAuthInfo" },
				{ "LoadingBackendConfigs.Name", "ELoadProgress::LoadingBackendConfigs" },
				{ "LoadingBackendTunables.Name", "ELoadProgress::LoadingBackendTunables" },
				{ "LoadingCharacterXPTables.Name", "ELoadProgress::LoadingCharacterXPTables" },
				{ "LoadingConsent.Name", "ELoadProgress::LoadingConsent" },
				{ "LoadingContentSchedule.Name", "ELoadProgress::LoadingContentSchedule" },
				{ "LoadingEvents.Name", "ELoadProgress::LoadingEvents" },
				{ "LoadingGameConfigs.Name", "ELoadProgress::LoadingGameConfigs" },
				{ "LoadingInventory.Name", "ELoadProgress::LoadingInventory" },
				{ "LoadingMirrorCurrencies.Name", "ELoadProgress::LoadingMirrorCurrencies" },
				{ "LoadingNews.Name", "ELoadProgress::LoadingNews" },
				{ "LoadingPlayerIndependentShopData.Name", "ELoadProgress::LoadingPlayerIndependentShopData" },
				{ "LoadingProfile.Name", "ELoadProgress::LoadingProfile" },
				{ "LoadingStreamVideoData.Name", "ELoadProgress::LoadingStreamVideoData" },
				{ "LoadingSubscriptionStatus.Name", "ELoadProgress::LoadingSubscriptionStatus" },
				{ "LoadingWallet.Name", "ELoadProgress::LoadingWallet" },
				{ "LoadMarketingBanners.Name", "ELoadProgress::LoadMarketingBanners" },
				{ "Locating.Name", "ELoadProgress::Locating" },
				{ "MigratingCurrenciesToMirror.Name", "ELoadProgress::MigratingCurrenciesToMirror" },
				{ "ModuleRelativePath", "Public/ELoadProgress.h" },
				{ "NotStarted.Name", "ELoadProgress::NotStarted" },
				{ "PreMirrorsLogin.Name", "ELoadProgress::PreMirrorsLogin" },
				{ "RequestingTrackingAuthorization.Name", "ELoadProgress::RequestingTrackingAuthorization" },
				{ "SendingAnalytics.Name", "ELoadProgress::SendingAnalytics" },
				{ "SetupRichPresence.Name", "ELoadProgress::SetupRichPresence" },
				{ "StartEAC.Name", "ELoadProgress::StartEAC" },
				{ "SyncingFriendsList.Name", "ELoadProgress::SyncingFriendsList" },
				{ "SyncingOwnedCharacters.Name", "ELoadProgress::SyncingOwnedCharacters" },
				{ "ValidateData.Name", "ELoadProgress::ValidateData" },
				{ "ValidateOnlineSubsystem.Name", "ELoadProgress::ValidateOnlineSubsystem" },
				{ "ValidatingClientVersion.Name", "ELoadProgress::ValidatingClientVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ELoadProgress",
				"ELoadProgress",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
