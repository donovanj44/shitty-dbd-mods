// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAtlantaRitualRewardUIType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaRitualRewardUIType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaRitualRewardUIType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAtlantaRitualRewardUIType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAtlantaRitualRewardUIType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAtlantaRitualRewardUIType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAtlantaRitualRewardUIType>()
	{
		return EAtlantaRitualRewardUIType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaRitualRewardUIType(EAtlantaRitualRewardUIType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAtlantaRitualRewardUIType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaRitualRewardUIType_Hash() { return 3091042666U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaRitualRewardUIType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaRitualRewardUIType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaRitualRewardUIType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaRitualRewardUIType::Item", (int64)EAtlantaRitualRewardUIType::Item },
				{ "EAtlantaRitualRewardUIType::AddOn", (int64)EAtlantaRitualRewardUIType::AddOn },
				{ "EAtlantaRitualRewardUIType::Offering", (int64)EAtlantaRitualRewardUIType::Offering },
				{ "EAtlantaRitualRewardUIType::BloodPoints", (int64)EAtlantaRitualRewardUIType::BloodPoints },
				{ "EAtlantaRitualRewardUIType::IridescentShards", (int64)EAtlantaRitualRewardUIType::IridescentShards },
				{ "EAtlantaRitualRewardUIType::AuricCells", (int64)EAtlantaRitualRewardUIType::AuricCells },
				{ "EAtlantaRitualRewardUIType::Customization", (int64)EAtlantaRitualRewardUIType::Customization },
				{ "EAtlantaRitualRewardUIType::CustoTicket", (int64)EAtlantaRitualRewardUIType::CustoTicket },
				{ "EAtlantaRitualRewardUIType::MysteryBox", (int64)EAtlantaRitualRewardUIType::MysteryBox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddOn.Name", "EAtlantaRitualRewardUIType::AddOn" },
				{ "AuricCells.Name", "EAtlantaRitualRewardUIType::AuricCells" },
				{ "BloodPoints.Name", "EAtlantaRitualRewardUIType::BloodPoints" },
				{ "BlueprintType", "true" },
				{ "Customization.Name", "EAtlantaRitualRewardUIType::Customization" },
				{ "CustoTicket.Name", "EAtlantaRitualRewardUIType::CustoTicket" },
				{ "IridescentShards.Name", "EAtlantaRitualRewardUIType::IridescentShards" },
				{ "Item.Name", "EAtlantaRitualRewardUIType::Item" },
				{ "ModuleRelativePath", "Public/EAtlantaRitualRewardUIType.h" },
				{ "MysteryBox.Name", "EAtlantaRitualRewardUIType::MysteryBox" },
				{ "Offering.Name", "EAtlantaRitualRewardUIType::Offering" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAtlantaRitualRewardUIType",
				"EAtlantaRitualRewardUIType",
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
