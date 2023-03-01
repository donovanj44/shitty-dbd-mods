// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECDNPatchCompleteStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECDNPatchCompleteStatus() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECDNPatchCompleteStatus();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECDNPatchCompleteStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECDNPatchCompleteStatus, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECDNPatchCompleteStatus"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECDNPatchCompleteStatus>()
	{
		return ECDNPatchCompleteStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECDNPatchCompleteStatus(ECDNPatchCompleteStatus_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECDNPatchCompleteStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECDNPatchCompleteStatus_Hash() { return 881665276U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECDNPatchCompleteStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECDNPatchCompleteStatus"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECDNPatchCompleteStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECDNPatchCompleteStatus::Success", (int64)ECDNPatchCompleteStatus::Success },
				{ "ECDNPatchCompleteStatus::NotEnoughDiskSpace", (int64)ECDNPatchCompleteStatus::NotEnoughDiskSpace },
				{ "ECDNPatchCompleteStatus::PatchInstallDownloadError", (int64)ECDNPatchCompleteStatus::PatchInstallDownloadError },
				{ "ECDNPatchCompleteStatus::PatchInstallFileConstructionFail", (int64)ECDNPatchCompleteStatus::PatchInstallFileConstructionFail },
				{ "ECDNPatchCompleteStatus::PatchInstallMoveFileToInstallFail", (int64)ECDNPatchCompleteStatus::PatchInstallMoveFileToInstallFail },
				{ "ECDNPatchCompleteStatus::PatchInstallBuildVerifyFail", (int64)ECDNPatchCompleteStatus::PatchInstallBuildVerifyFail },
				{ "ECDNPatchCompleteStatus::PatchInstallApplicationClosing", (int64)ECDNPatchCompleteStatus::PatchInstallApplicationClosing },
				{ "ECDNPatchCompleteStatus::PatchInstallApplicationError", (int64)ECDNPatchCompleteStatus::PatchInstallApplicationError },
				{ "ECDNPatchCompleteStatus::PatchInstallUserCanceled", (int64)ECDNPatchCompleteStatus::PatchInstallUserCanceled },
				{ "ECDNPatchCompleteStatus::PatchInstallPrerequisiteError", (int64)ECDNPatchCompleteStatus::PatchInstallPrerequisiteError },
				{ "ECDNPatchCompleteStatus::PatchInstallInitializationError", (int64)ECDNPatchCompleteStatus::PatchInstallInitializationError },
				{ "ECDNPatchCompleteStatus::PatchInstallPathLengthExceeded", (int64)ECDNPatchCompleteStatus::PatchInstallPathLengthExceeded },
				{ "ECDNPatchCompleteStatus::PatchInstallOutOfDiskSpace", (int64)ECDNPatchCompleteStatus::PatchInstallOutOfDiskSpace },
				{ "ECDNPatchCompleteStatus::PatchInstallUnknownError", (int64)ECDNPatchCompleteStatus::PatchInstallUnknownError },
				{ "ECDNPatchCompleteStatus::FailureToMountContent", (int64)ECDNPatchCompleteStatus::FailureToMountContent },
				{ "ECDNPatchCompleteStatus::InstalledContentNotFound", (int64)ECDNPatchCompleteStatus::InstalledContentNotFound },
				{ "ECDNPatchCompleteStatus::InvalidPendingContent", (int64)ECDNPatchCompleteStatus::InvalidPendingContent },
				{ "ECDNPatchCompleteStatus::CantFindContentToDownload", (int64)ECDNPatchCompleteStatus::CantFindContentToDownload },
				{ "ECDNPatchCompleteStatus::NoPatchForCurrentPlatformAndVersion", (int64)ECDNPatchCompleteStatus::NoPatchForCurrentPlatformAndVersion },
				{ "ECDNPatchCompleteStatus::FailureToRetrieveContent", (int64)ECDNPatchCompleteStatus::FailureToRetrieveContent },
				{ "ECDNPatchCompleteStatus::CancelledByUser", (int64)ECDNPatchCompleteStatus::CancelledByUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CancelledByUser.Name", "ECDNPatchCompleteStatus::CancelledByUser" },
				{ "CantFindContentToDownload.Name", "ECDNPatchCompleteStatus::CantFindContentToDownload" },
				{ "FailureToMountContent.Name", "ECDNPatchCompleteStatus::FailureToMountContent" },
				{ "FailureToRetrieveContent.Name", "ECDNPatchCompleteStatus::FailureToRetrieveContent" },
				{ "InstalledContentNotFound.Name", "ECDNPatchCompleteStatus::InstalledContentNotFound" },
				{ "InvalidPendingContent.Name", "ECDNPatchCompleteStatus::InvalidPendingContent" },
				{ "ModuleRelativePath", "Public/ECDNPatchCompleteStatus.h" },
				{ "NoPatchForCurrentPlatformAndVersion.Name", "ECDNPatchCompleteStatus::NoPatchForCurrentPlatformAndVersion" },
				{ "NotEnoughDiskSpace.Name", "ECDNPatchCompleteStatus::NotEnoughDiskSpace" },
				{ "PatchInstallApplicationClosing.Name", "ECDNPatchCompleteStatus::PatchInstallApplicationClosing" },
				{ "PatchInstallApplicationError.Name", "ECDNPatchCompleteStatus::PatchInstallApplicationError" },
				{ "PatchInstallBuildVerifyFail.Name", "ECDNPatchCompleteStatus::PatchInstallBuildVerifyFail" },
				{ "PatchInstallDownloadError.Name", "ECDNPatchCompleteStatus::PatchInstallDownloadError" },
				{ "PatchInstallFileConstructionFail.Name", "ECDNPatchCompleteStatus::PatchInstallFileConstructionFail" },
				{ "PatchInstallInitializationError.Name", "ECDNPatchCompleteStatus::PatchInstallInitializationError" },
				{ "PatchInstallMoveFileToInstallFail.Name", "ECDNPatchCompleteStatus::PatchInstallMoveFileToInstallFail" },
				{ "PatchInstallOutOfDiskSpace.Name", "ECDNPatchCompleteStatus::PatchInstallOutOfDiskSpace" },
				{ "PatchInstallPathLengthExceeded.Name", "ECDNPatchCompleteStatus::PatchInstallPathLengthExceeded" },
				{ "PatchInstallPrerequisiteError.Name", "ECDNPatchCompleteStatus::PatchInstallPrerequisiteError" },
				{ "PatchInstallUnknownError.Name", "ECDNPatchCompleteStatus::PatchInstallUnknownError" },
				{ "PatchInstallUserCanceled.Name", "ECDNPatchCompleteStatus::PatchInstallUserCanceled" },
				{ "Success.Name", "ECDNPatchCompleteStatus::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECDNPatchCompleteStatus",
				"ECDNPatchCompleteStatus",
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
