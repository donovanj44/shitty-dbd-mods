// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAtlantaRewardType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaRewardType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaRewardType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAtlantaRewardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAtlantaRewardType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAtlantaRewardType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAtlantaRewardType>()
	{
		return EAtlantaRewardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaRewardType(EAtlantaRewardType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAtlantaRewardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaRewardType_Hash() { return 1160888878U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaRewardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaRewardType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaRewardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaRewardType::Item", (int64)EAtlantaRewardType::Item },
				{ "EAtlantaRewardType::AddOn", (int64)EAtlantaRewardType::AddOn },
				{ "EAtlantaRewardType::Offering", (int64)EAtlantaRewardType::Offering },
				{ "EAtlantaRewardType::BloodPoints", (int64)EAtlantaRewardType::BloodPoints },
				{ "EAtlantaRewardType::IridescentShards", (int64)EAtlantaRewardType::IridescentShards },
				{ "EAtlantaRewardType::AuricCells", (int64)EAtlantaRewardType::AuricCells },
				{ "EAtlantaRewardType::Customization", (int64)EAtlantaRewardType::Customization },
				{ "EAtlantaRewardType::FreeTicket", (int64)EAtlantaRewardType::FreeTicket },
				{ "EAtlantaRewardType::MysteryBox", (int64)EAtlantaRewardType::MysteryBox },
				{ "EAtlantaRewardType::Character", (int64)EAtlantaRewardType::Character },
				{ "EAtlantaRewardType::DuplicatesRefundKey", (int64)EAtlantaRewardType::DuplicatesRefundKey },
				{ "EAtlantaRewardType::Count", (int64)EAtlantaRewardType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddOn.Name", "EAtlantaRewardType::AddOn" },
				{ "AuricCells.Name", "EAtlantaRewardType::AuricCells" },
				{ "BloodPoints.Name", "EAtlantaRewardType::BloodPoints" },
				{ "BlueprintType", "true" },
				{ "Character.Name", "EAtlantaRewardType::Character" },
				{ "Count.Name", "EAtlantaRewardType::Count" },
				{ "Customization.Name", "EAtlantaRewardType::Customization" },
				{ "DuplicatesRefundKey.Name", "EAtlantaRewardType::DuplicatesRefundKey" },
				{ "FreeTicket.Name", "EAtlantaRewardType::FreeTicket" },
				{ "IridescentShards.Name", "EAtlantaRewardType::IridescentShards" },
				{ "Item.Name", "EAtlantaRewardType::Item" },
				{ "ModuleRelativePath", "Public/EAtlantaRewardType.h" },
				{ "MysteryBox.Name", "EAtlantaRewardType::MysteryBox" },
				{ "Offering.Name", "EAtlantaRewardType::Offering" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAtlantaRewardType",
				"EAtlantaRewardType",
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
