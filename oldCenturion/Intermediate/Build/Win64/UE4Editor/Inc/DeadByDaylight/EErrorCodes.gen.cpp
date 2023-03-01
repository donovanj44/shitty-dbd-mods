// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EErrorCodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEErrorCodes() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EErrorCodes();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EErrorCodes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EErrorCodes, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EErrorCodes"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EErrorCodes>()
	{
		return EErrorCodes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EErrorCodes(EErrorCodes_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EErrorCodes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EErrorCodes_Hash() { return 863238037U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EErrorCodes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EErrorCodes"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EErrorCodes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EErrorCodes::None", (int64)EErrorCodes::None },
				{ "EErrorCodes::SavefileDeserializationFailure", (int64)EErrorCodes::SavefileDeserializationFailure },
				{ "EErrorCodes::SavefileDecryptionFailure", (int64)EErrorCodes::SavefileDecryptionFailure },
				{ "EErrorCodes::SavefileEmpty", (int64)EErrorCodes::SavefileEmpty },
				{ "EErrorCodes::SavefileBadPlayerId", (int64)EErrorCodes::SavefileBadPlayerId },
				{ "EErrorCodes::SavefileEmptyPlayerUID", (int64)EErrorCodes::SavefileEmptyPlayerUID },
				{ "EErrorCodes::SavefileInvalidUniqueNetID", (int64)EErrorCodes::SavefileInvalidUniqueNetID },
				{ "EErrorCodes::SavefileInvalidPlayerState", (int64)EErrorCodes::SavefileInvalidPlayerState },
				{ "EErrorCodes::SavefileBackendError", (int64)EErrorCodes::SavefileBackendError },
				{ "EErrorCodes::KrakenRankError", (int64)EErrorCodes::KrakenRankError },
				{ "EErrorCodes::KrakenRatingsError", (int64)EErrorCodes::KrakenRatingsError },
				{ "EErrorCodes::SavefileKrakenPlayerForbidden", (int64)EErrorCodes::SavefileKrakenPlayerForbidden },
				{ "EErrorCodes::SyncCachedCurrencyError", (int64)EErrorCodes::SyncCachedCurrencyError },
				{ "EErrorCodes::CurrencyTransactionError", (int64)EErrorCodes::CurrencyTransactionError },
				{ "EErrorCodes::StateDownloadFailed", (int64)EErrorCodes::StateDownloadFailed },
				{ "EErrorCodes::StatcacheDecryptionFailed", (int64)EErrorCodes::StatcacheDecryptionFailed },
				{ "EErrorCodes::SavefilePlayerLoadUIDMismatch", (int64)EErrorCodes::SavefilePlayerLoadUIDMismatch },
				{ "EErrorCodes::SavefilePlayerStateUIDMismatch", (int64)EErrorCodes::SavefilePlayerStateUIDMismatch },
				{ "EErrorCodes::SavefileEncryptionFailure", (int64)EErrorCodes::SavefileEncryptionFailure },
				{ "EErrorCodes::SaveFailedInvalidData", (int64)EErrorCodes::SaveFailedInvalidData },
				{ "EErrorCodes::SaveFailedInvalidJSON", (int64)EErrorCodes::SaveFailedInvalidJSON },
				{ "EErrorCodes::SaveFailedDecodeDataString", (int64)EErrorCodes::SaveFailedDecodeDataString },
				{ "EErrorCodes::SaveFailedCompressDataString", (int64)EErrorCodes::SaveFailedCompressDataString },
				{ "EErrorCodes::SaveFailedEncryptString", (int64)EErrorCodes::SaveFailedEncryptString },
				{ "EErrorCodes::StatcacheEncryptionFailed", (int64)EErrorCodes::StatcacheEncryptionFailed },
				{ "EErrorCodes::SaveFailedCloudErrorTimeout", (int64)EErrorCodes::SaveFailedCloudErrorTimeout },
				{ "EErrorCodes::JsonToPersistenDataFailed", (int64)EErrorCodes::JsonToPersistenDataFailed },
				{ "EErrorCodes::SaveFailedCloudErrorAfterRetries", (int64)EErrorCodes::SaveFailedCloudErrorAfterRetries },
				{ "EErrorCodes::StateUploadFailed", (int64)EErrorCodes::StateUploadFailed },
				{ "EErrorCodes::GetPlayerLevelRequestError", (int64)EErrorCodes::GetPlayerLevelRequestError },
				{ "EErrorCodes::EarnPlayerXpRequestError", (int64)EErrorCodes::EarnPlayerXpRequestError },
				{ "EErrorCodes::EarnPlayerXpParamError", (int64)EErrorCodes::EarnPlayerXpParamError },
				{ "EErrorCodes::OnboardingFailGet", (int64)EErrorCodes::OnboardingFailGet },
				{ "EErrorCodes::OnboardingFailUpdate", (int64)EErrorCodes::OnboardingFailUpdate },
				{ "EErrorCodes::OnboardingFailRequest", (int64)EErrorCodes::OnboardingFailRequest },
				{ "EErrorCodes::MatchCancelledPlayerLeftDuringLoading", (int64)EErrorCodes::MatchCancelledPlayerLeftDuringLoading },
				{ "EErrorCodes::MatchCancelledInvalidPlayerRoles", (int64)EErrorCodes::MatchCancelledInvalidPlayerRoles },
				{ "EErrorCodes::MatchCancelledLoadingTimeout", (int64)EErrorCodes::MatchCancelledLoadingTimeout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CurrencyTransactionError.Name", "EErrorCodes::CurrencyTransactionError" },
				{ "EarnPlayerXpParamError.Name", "EErrorCodes::EarnPlayerXpParamError" },
				{ "EarnPlayerXpRequestError.Name", "EErrorCodes::EarnPlayerXpRequestError" },
				{ "GetPlayerLevelRequestError.Name", "EErrorCodes::GetPlayerLevelRequestError" },
				{ "JsonToPersistenDataFailed.Name", "EErrorCodes::JsonToPersistenDataFailed" },
				{ "KrakenRankError.Name", "EErrorCodes::KrakenRankError" },
				{ "KrakenRatingsError.Name", "EErrorCodes::KrakenRatingsError" },
				{ "MatchCancelledInvalidPlayerRoles.Name", "EErrorCodes::MatchCancelledInvalidPlayerRoles" },
				{ "MatchCancelledLoadingTimeout.Name", "EErrorCodes::MatchCancelledLoadingTimeout" },
				{ "MatchCancelledPlayerLeftDuringLoading.Name", "EErrorCodes::MatchCancelledPlayerLeftDuringLoading" },
				{ "ModuleRelativePath", "Public/EErrorCodes.h" },
				{ "None.Name", "EErrorCodes::None" },
				{ "OnboardingFailGet.Name", "EErrorCodes::OnboardingFailGet" },
				{ "OnboardingFailRequest.Name", "EErrorCodes::OnboardingFailRequest" },
				{ "OnboardingFailUpdate.Name", "EErrorCodes::OnboardingFailUpdate" },
				{ "SaveFailedCloudErrorAfterRetries.Name", "EErrorCodes::SaveFailedCloudErrorAfterRetries" },
				{ "SaveFailedCloudErrorTimeout.Name", "EErrorCodes::SaveFailedCloudErrorTimeout" },
				{ "SaveFailedCompressDataString.Name", "EErrorCodes::SaveFailedCompressDataString" },
				{ "SaveFailedDecodeDataString.Name", "EErrorCodes::SaveFailedDecodeDataString" },
				{ "SaveFailedEncryptString.Name", "EErrorCodes::SaveFailedEncryptString" },
				{ "SaveFailedInvalidData.Name", "EErrorCodes::SaveFailedInvalidData" },
				{ "SaveFailedInvalidJSON.Name", "EErrorCodes::SaveFailedInvalidJSON" },
				{ "SavefileBackendError.Name", "EErrorCodes::SavefileBackendError" },
				{ "SavefileBadPlayerId.Name", "EErrorCodes::SavefileBadPlayerId" },
				{ "SavefileDecryptionFailure.Name", "EErrorCodes::SavefileDecryptionFailure" },
				{ "SavefileDeserializationFailure.Name", "EErrorCodes::SavefileDeserializationFailure" },
				{ "SavefileEmpty.Name", "EErrorCodes::SavefileEmpty" },
				{ "SavefileEmptyPlayerUID.Name", "EErrorCodes::SavefileEmptyPlayerUID" },
				{ "SavefileEncryptionFailure.Name", "EErrorCodes::SavefileEncryptionFailure" },
				{ "SavefileInvalidPlayerState.Name", "EErrorCodes::SavefileInvalidPlayerState" },
				{ "SavefileInvalidUniqueNetID.Name", "EErrorCodes::SavefileInvalidUniqueNetID" },
				{ "SavefileKrakenPlayerForbidden.Name", "EErrorCodes::SavefileKrakenPlayerForbidden" },
				{ "SavefilePlayerLoadUIDMismatch.Name", "EErrorCodes::SavefilePlayerLoadUIDMismatch" },
				{ "SavefilePlayerStateUIDMismatch.Name", "EErrorCodes::SavefilePlayerStateUIDMismatch" },
				{ "StatcacheDecryptionFailed.Name", "EErrorCodes::StatcacheDecryptionFailed" },
				{ "StatcacheEncryptionFailed.Name", "EErrorCodes::StatcacheEncryptionFailed" },
				{ "StateDownloadFailed.Name", "EErrorCodes::StateDownloadFailed" },
				{ "StateUploadFailed.Name", "EErrorCodes::StateUploadFailed" },
				{ "SyncCachedCurrencyError.Name", "EErrorCodes::SyncCachedCurrencyError" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EErrorCodes",
				"EErrorCodes",
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
