// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ELoadCompleteState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELoadCompleteState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadCompleteState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ELoadCompleteState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ELoadCompleteState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ELoadCompleteState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoadCompleteState>()
	{
		return ELoadCompleteState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadCompleteState(ELoadCompleteState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ELoadCompleteState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ELoadCompleteState_Hash() { return 2081478724U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ELoadCompleteState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadCompleteState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ELoadCompleteState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadCompleteState::InProgress", (int64)ELoadCompleteState::InProgress },
				{ "ELoadCompleteState::Success", (int64)ELoadCompleteState::Success },
				{ "ELoadCompleteState::ReloginRequested", (int64)ELoadCompleteState::ReloginRequested },
				{ "ELoadCompleteState::FailedEAC", (int64)ELoadCompleteState::FailedEAC },
				{ "ELoadCompleteState::FailedRecoverable", (int64)ELoadCompleteState::FailedRecoverable },
				{ "ELoadCompleteState::FailedRecoverableProfileLoad", (int64)ELoadCompleteState::FailedRecoverableProfileLoad },
				{ "ELoadCompleteState::FailedUnequipedDisableditems", (int64)ELoadCompleteState::FailedUnequipedDisableditems },
				{ "ELoadCompleteState::FailedBlocking", (int64)ELoadCompleteState::FailedBlocking },
				{ "ELoadCompleteState::FailedBlockingNoDBDServer", (int64)ELoadCompleteState::FailedBlockingNoDBDServer },
				{ "ELoadCompleteState::FailedBlockingNotConnected", (int64)ELoadCompleteState::FailedBlockingNotConnected },
				{ "ELoadCompleteState::FailedBlockedNoNetworkConnection", (int64)ELoadCompleteState::FailedBlockedNoNetworkConnection },
				{ "ELoadCompleteState::FailedBlockingSharedAuthenticationFailed", (int64)ELoadCompleteState::FailedBlockingSharedAuthenticationFailed },
				{ "ELoadCompleteState::FailedBlockingPlatformNotAuthenticated", (int64)ELoadCompleteState::FailedBlockingPlatformNotAuthenticated },
				{ "ELoadCompleteState::FailedBlockingPlatformSubsystemNotInitialized", (int64)ELoadCompleteState::FailedBlockingPlatformSubsystemNotInitialized },
				{ "ELoadCompleteState::FailedBlockingOnlinePresenceNotInitialized", (int64)ELoadCompleteState::FailedBlockingOnlinePresenceNotInitialized },
				{ "ELoadCompleteState::FailedBlockingPlatformNetUniqueIdInvalid", (int64)ELoadCompleteState::FailedBlockingPlatformNetUniqueIdInvalid },
				{ "ELoadCompleteState::FailedBlockingInvalidLocalPlayer", (int64)ELoadCompleteState::FailedBlockingInvalidLocalPlayer },
				{ "ELoadCompleteState::FailedBlockingInvalidGameObjects", (int64)ELoadCompleteState::FailedBlockingInvalidGameObjects },
				{ "ELoadCompleteState::FailedBlockingInvalidSDA", (int64)ELoadCompleteState::FailedBlockingInvalidSDA },
				{ "ELoadCompleteState::FailedBlockingInvalidClientVersion", (int64)ELoadCompleteState::FailedBlockingInvalidClientVersion },
				{ "ELoadCompleteState::FailedBlockingInvalidAtlantaClientVersion", (int64)ELoadCompleteState::FailedBlockingInvalidAtlantaClientVersion },
				{ "ELoadCompleteState::FailedBlockingWindowsStoreAccountNotLoggedIn", (int64)ELoadCompleteState::FailedBlockingWindowsStoreAccountNotLoggedIn },
				{ "ELoadCompleteState::FailedBlockingSSLCACert", (int64)ELoadCompleteState::FailedBlockingSSLCACert },
				{ "ELoadCompleteState::FailedBlockingUserCancelled", (int64)ELoadCompleteState::FailedBlockingUserCancelled },
				{ "ELoadCompleteState::FailedBlockingCDNFailure", (int64)ELoadCompleteState::FailedBlockingCDNFailure },
				{ "ELoadCompleteState::FailedBlockingCDNContentError", (int64)ELoadCompleteState::FailedBlockingCDNContentError },
				{ "ELoadCompleteState::FailedBlockingCDNCantFindContentToDownload", (int64)ELoadCompleteState::FailedBlockingCDNCantFindContentToDownload },
				{ "ELoadCompleteState::FailedBlockingCDNNoPatchForCurrentPlatformAndVersion", (int64)ELoadCompleteState::FailedBlockingCDNNoPatchForCurrentPlatformAndVersion },
				{ "ELoadCompleteState::FailedBlockingCDNNotEnoughDiskSpace", (int64)ELoadCompleteState::FailedBlockingCDNNotEnoughDiskSpace },
				{ "ELoadCompleteState::FailedBlockingCDNFailureToRetrieveContent", (int64)ELoadCompleteState::FailedBlockingCDNFailureToRetrieveContent },
				{ "ELoadCompleteState::FailedRecoverableCDNUserCancelled", (int64)ELoadCompleteState::FailedRecoverableCDNUserCancelled },
				{ "ELoadCompleteState::FailedBlockingVersionFileError", (int64)ELoadCompleteState::FailedBlockingVersionFileError },
				{ "ELoadCompleteState::FailedBlockingRTMConnection", (int64)ELoadCompleteState::FailedBlockingRTMConnection },
				{ "ELoadCompleteState::FailedBlockingMaxTrialsReached", (int64)ELoadCompleteState::FailedBlockingMaxTrialsReached },
				{ "ELoadCompleteState::FailedBlockingMirrorsHealthCheckFailed", (int64)ELoadCompleteState::FailedBlockingMirrorsHealthCheckFailed },
				{ "ELoadCompleteState::FailedBlockingTutorialRewardsFetchFailed", (int64)ELoadCompleteState::FailedBlockingTutorialRewardsFetchFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FailedBlockedNoNetworkConnection.Name", "ELoadCompleteState::FailedBlockedNoNetworkConnection" },
				{ "FailedBlocking.Name", "ELoadCompleteState::FailedBlocking" },
				{ "FailedBlockingCDNCantFindContentToDownload.Name", "ELoadCompleteState::FailedBlockingCDNCantFindContentToDownload" },
				{ "FailedBlockingCDNContentError.Name", "ELoadCompleteState::FailedBlockingCDNContentError" },
				{ "FailedBlockingCDNFailure.Name", "ELoadCompleteState::FailedBlockingCDNFailure" },
				{ "FailedBlockingCDNFailureToRetrieveContent.Name", "ELoadCompleteState::FailedBlockingCDNFailureToRetrieveContent" },
				{ "FailedBlockingCDNNoPatchForCurrentPlatformAndVersion.Name", "ELoadCompleteState::FailedBlockingCDNNoPatchForCurrentPlatformAndVersion" },
				{ "FailedBlockingCDNNotEnoughDiskSpace.Name", "ELoadCompleteState::FailedBlockingCDNNotEnoughDiskSpace" },
				{ "FailedBlockingInvalidAtlantaClientVersion.Name", "ELoadCompleteState::FailedBlockingInvalidAtlantaClientVersion" },
				{ "FailedBlockingInvalidClientVersion.Name", "ELoadCompleteState::FailedBlockingInvalidClientVersion" },
				{ "FailedBlockingInvalidGameObjects.Name", "ELoadCompleteState::FailedBlockingInvalidGameObjects" },
				{ "FailedBlockingInvalidLocalPlayer.Name", "ELoadCompleteState::FailedBlockingInvalidLocalPlayer" },
				{ "FailedBlockingInvalidSDA.Name", "ELoadCompleteState::FailedBlockingInvalidSDA" },
				{ "FailedBlockingMaxTrialsReached.Name", "ELoadCompleteState::FailedBlockingMaxTrialsReached" },
				{ "FailedBlockingMirrorsHealthCheckFailed.Name", "ELoadCompleteState::FailedBlockingMirrorsHealthCheckFailed" },
				{ "FailedBlockingNoDBDServer.Name", "ELoadCompleteState::FailedBlockingNoDBDServer" },
				{ "FailedBlockingNotConnected.Name", "ELoadCompleteState::FailedBlockingNotConnected" },
				{ "FailedBlockingOnlinePresenceNotInitialized.Name", "ELoadCompleteState::FailedBlockingOnlinePresenceNotInitialized" },
				{ "FailedBlockingPlatformNetUniqueIdInvalid.Name", "ELoadCompleteState::FailedBlockingPlatformNetUniqueIdInvalid" },
				{ "FailedBlockingPlatformNotAuthenticated.Name", "ELoadCompleteState::FailedBlockingPlatformNotAuthenticated" },
				{ "FailedBlockingPlatformSubsystemNotInitialized.Name", "ELoadCompleteState::FailedBlockingPlatformSubsystemNotInitialized" },
				{ "FailedBlockingRTMConnection.Name", "ELoadCompleteState::FailedBlockingRTMConnection" },
				{ "FailedBlockingSharedAuthenticationFailed.Name", "ELoadCompleteState::FailedBlockingSharedAuthenticationFailed" },
				{ "FailedBlockingSSLCACert.Name", "ELoadCompleteState::FailedBlockingSSLCACert" },
				{ "FailedBlockingTutorialRewardsFetchFailed.Name", "ELoadCompleteState::FailedBlockingTutorialRewardsFetchFailed" },
				{ "FailedBlockingUserCancelled.Name", "ELoadCompleteState::FailedBlockingUserCancelled" },
				{ "FailedBlockingVersionFileError.Name", "ELoadCompleteState::FailedBlockingVersionFileError" },
				{ "FailedBlockingWindowsStoreAccountNotLoggedIn.Name", "ELoadCompleteState::FailedBlockingWindowsStoreAccountNotLoggedIn" },
				{ "FailedEAC.Name", "ELoadCompleteState::FailedEAC" },
				{ "FailedRecoverable.Name", "ELoadCompleteState::FailedRecoverable" },
				{ "FailedRecoverableCDNUserCancelled.Name", "ELoadCompleteState::FailedRecoverableCDNUserCancelled" },
				{ "FailedRecoverableProfileLoad.Name", "ELoadCompleteState::FailedRecoverableProfileLoad" },
				{ "FailedUnequipedDisableditems.Name", "ELoadCompleteState::FailedUnequipedDisableditems" },
				{ "InProgress.Name", "ELoadCompleteState::InProgress" },
				{ "ModuleRelativePath", "Public/ELoadCompleteState.h" },
				{ "ReloginRequested.Name", "ELoadCompleteState::ReloginRequested" },
				{ "Success.Name", "ELoadCompleteState::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ELoadCompleteState",
				"ELoadCompleteState",
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
