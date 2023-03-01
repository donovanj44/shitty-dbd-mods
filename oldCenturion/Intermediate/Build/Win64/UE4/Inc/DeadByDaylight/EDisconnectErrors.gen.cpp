// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDisconnectErrors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDisconnectErrors() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDisconnectErrors();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDisconnectErrors_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDisconnectErrors, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDisconnectErrors"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDisconnectErrors>()
	{
		return EDisconnectErrors_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDisconnectErrors(EDisconnectErrors_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDisconnectErrors"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDisconnectErrors_Hash() { return 689978311U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDisconnectErrors()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDisconnectErrors"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDisconnectErrors_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDisconnectErrors::None", (int64)EDisconnectErrors::None },
				{ "EDisconnectErrors::SteamAuthFailure", (int64)EDisconnectErrors::SteamAuthFailure },
				{ "EDisconnectErrors::SteamAuthFailureKickedFromServer", (int64)EDisconnectErrors::SteamAuthFailureKickedFromServer },
				{ "EDisconnectErrors::EACServerValidationFailure", (int64)EDisconnectErrors::EACServerValidationFailure },
				{ "EDisconnectErrors::EACValidationFailureKickedFromServer", (int64)EDisconnectErrors::EACValidationFailureKickedFromServer },
				{ "EDisconnectErrors::EACClientNotRunning", (int64)EDisconnectErrors::EACClientNotRunning },
				{ "EDisconnectErrors::EACClientIntegrityViolation", (int64)EDisconnectErrors::EACClientIntegrityViolation },
				{ "EDisconnectErrors::PlayerRemovedOnSuspend", (int64)EDisconnectErrors::PlayerRemovedOnSuspend },
				{ "EDisconnectErrors::LostConnectionToHost", (int64)EDisconnectErrors::LostConnectionToHost },
				{ "EDisconnectErrors::LostConnectionToProfileService", (int64)EDisconnectErrors::LostConnectionToProfileService },
				{ "EDisconnectErrors::MirrorsUnscheduledSessionDestruction", (int64)EDisconnectErrors::MirrorsUnscheduledSessionDestruction },
				{ "EDisconnectErrors::SessionKilledByMirrors", (int64)EDisconnectErrors::SessionKilledByMirrors },
				{ "EDisconnectErrors::UnableToSaveProfileAfterRetries", (int64)EDisconnectErrors::UnableToSaveProfileAfterRetries },
				{ "EDisconnectErrors::UnableToGetPlayerLevel", (int64)EDisconnectErrors::UnableToGetPlayerLevel },
				{ "EDisconnectErrors::UnableToEarnPlayerXp", (int64)EDisconnectErrors::UnableToEarnPlayerXp },
				{ "EDisconnectErrors::UnableToUpdatePips", (int64)EDisconnectErrors::UnableToUpdatePips },
				{ "EDisconnectErrors::UnableToUpdateRatings", (int64)EDisconnectErrors::UnableToUpdateRatings },
				{ "EDisconnectErrors::ClientProviderAuthenticationFailed", (int64)EDisconnectErrors::ClientProviderAuthenticationFailed },
				{ "EDisconnectErrors::UnableToSyncCachedCurrency", (int64)EDisconnectErrors::UnableToSyncCachedCurrency },
				{ "EDisconnectErrors::OwnershipValidationFailure", (int64)EDisconnectErrors::OwnershipValidationFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ClientProviderAuthenticationFailed.Name", "EDisconnectErrors::ClientProviderAuthenticationFailed" },
				{ "EACClientIntegrityViolation.Name", "EDisconnectErrors::EACClientIntegrityViolation" },
				{ "EACClientNotRunning.Name", "EDisconnectErrors::EACClientNotRunning" },
				{ "EACServerValidationFailure.Name", "EDisconnectErrors::EACServerValidationFailure" },
				{ "EACValidationFailureKickedFromServer.Name", "EDisconnectErrors::EACValidationFailureKickedFromServer" },
				{ "LostConnectionToHost.Name", "EDisconnectErrors::LostConnectionToHost" },
				{ "LostConnectionToProfileService.Name", "EDisconnectErrors::LostConnectionToProfileService" },
				{ "MirrorsUnscheduledSessionDestruction.Name", "EDisconnectErrors::MirrorsUnscheduledSessionDestruction" },
				{ "ModuleRelativePath", "Public/EDisconnectErrors.h" },
				{ "None.Name", "EDisconnectErrors::None" },
				{ "OwnershipValidationFailure.Name", "EDisconnectErrors::OwnershipValidationFailure" },
				{ "PlayerRemovedOnSuspend.Name", "EDisconnectErrors::PlayerRemovedOnSuspend" },
				{ "SessionKilledByMirrors.Name", "EDisconnectErrors::SessionKilledByMirrors" },
				{ "SteamAuthFailure.Name", "EDisconnectErrors::SteamAuthFailure" },
				{ "SteamAuthFailureKickedFromServer.Name", "EDisconnectErrors::SteamAuthFailureKickedFromServer" },
				{ "UnableToEarnPlayerXp.Name", "EDisconnectErrors::UnableToEarnPlayerXp" },
				{ "UnableToGetPlayerLevel.Name", "EDisconnectErrors::UnableToGetPlayerLevel" },
				{ "UnableToSaveProfileAfterRetries.Name", "EDisconnectErrors::UnableToSaveProfileAfterRetries" },
				{ "UnableToSyncCachedCurrency.Name", "EDisconnectErrors::UnableToSyncCachedCurrency" },
				{ "UnableToUpdatePips.Name", "EDisconnectErrors::UnableToUpdatePips" },
				{ "UnableToUpdateRatings.Name", "EDisconnectErrors::UnableToUpdateRatings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDisconnectErrors",
				"EDisconnectErrors",
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
