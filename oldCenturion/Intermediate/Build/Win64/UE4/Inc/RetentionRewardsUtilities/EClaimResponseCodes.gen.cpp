// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/EClaimResponseCodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEClaimResponseCodes() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UEnum* Z_Construct_UEnum_RetentionRewardsUtilities_EClaimResponseCodes();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
// End Cross Module References
	static UEnum* EClaimResponseCodes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RetentionRewardsUtilities_EClaimResponseCodes, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("EClaimResponseCodes"));
		}
		return Singleton;
	}
	template<> RETENTIONREWARDSUTILITIES_API UEnum* StaticEnum<EClaimResponseCodes>()
	{
		return EClaimResponseCodes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClaimResponseCodes(EClaimResponseCodes_StaticEnum, TEXT("/Script/RetentionRewardsUtilities"), TEXT("EClaimResponseCodes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RetentionRewardsUtilities_EClaimResponseCodes_Hash() { return 1505662950U; }
	UEnum* Z_Construct_UEnum_RetentionRewardsUtilities_EClaimResponseCodes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClaimResponseCodes"), 0, Get_Z_Construct_UEnum_RetentionRewardsUtilities_EClaimResponseCodes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClaimResponseCodes::Claimed", (int64)EClaimResponseCodes::Claimed },
				{ "EClaimResponseCodes::CalendarNotFound", (int64)EClaimResponseCodes::CalendarNotFound },
				{ "EClaimResponseCodes::RewardNotAvailable", (int64)EClaimResponseCodes::RewardNotAvailable },
				{ "EClaimResponseCodes::RewardNotSupported", (int64)EClaimResponseCodes::RewardNotSupported },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CalendarNotFound.Name", "EClaimResponseCodes::CalendarNotFound" },
				{ "Claimed.Name", "EClaimResponseCodes::Claimed" },
				{ "ModuleRelativePath", "Public/EClaimResponseCodes.h" },
				{ "RewardNotAvailable.Name", "EClaimResponseCodes::RewardNotAvailable" },
				{ "RewardNotSupported.Name", "EClaimResponseCodes::RewardNotSupported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
				nullptr,
				"EClaimResponseCodes",
				"EClaimResponseCodes",
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
