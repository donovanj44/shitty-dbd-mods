// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/EClaimType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEClaimType() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UEnum* Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
// End Cross Module References
	static UEnum* EClaimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("EClaimType"));
		}
		return Singleton;
	}
	template<> RETENTIONREWARDSUTILITIES_API UEnum* StaticEnum<EClaimType>()
	{
		return EClaimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClaimType(EClaimType_StaticEnum, TEXT("/Script/RetentionRewardsUtilities"), TEXT("EClaimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType_Hash() { return 493772924U; }
	UEnum* Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClaimType"), 0, Get_Z_Construct_UEnum_RetentionRewardsUtilities_EClaimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClaimType::Minute", (int64)EClaimType::Minute },
				{ "EClaimType::Hour", (int64)EClaimType::Hour },
				{ "EClaimType::Day", (int64)EClaimType::Day },
				{ "EClaimType::Week", (int64)EClaimType::Week },
				{ "EClaimType::Month", (int64)EClaimType::Month },
				{ "EClaimType::Year", (int64)EClaimType::Year },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Day.Name", "EClaimType::Day" },
				{ "Hour.Name", "EClaimType::Hour" },
				{ "Minute.Name", "EClaimType::Minute" },
				{ "ModuleRelativePath", "Public/EClaimType.h" },
				{ "Month.Name", "EClaimType::Month" },
				{ "Week.Name", "EClaimType::Week" },
				{ "Year.Name", "EClaimType::Year" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
				nullptr,
				"EClaimType",
				"EClaimType",
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
