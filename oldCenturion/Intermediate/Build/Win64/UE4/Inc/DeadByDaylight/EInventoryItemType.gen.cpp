// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInventoryItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInventoryItemType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInventoryItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInventoryItemType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInventoryItemType>()
	{
		return EInventoryItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInventoryItemType(EInventoryItemType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInventoryItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInventoryItemType_Hash() { return 3077617359U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInventoryItemType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInventoryItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInventoryItemType::None", (int64)EInventoryItemType::None },
				{ "EInventoryItemType::Item", (int64)EInventoryItemType::Item },
				{ "EInventoryItemType::ItemAddOn", (int64)EInventoryItemType::ItemAddOn },
				{ "EInventoryItemType::CamperPerk", (int64)EInventoryItemType::CamperPerk },
				{ "EInventoryItemType::Power", (int64)EInventoryItemType::Power },
				{ "EInventoryItemType::PowerAddOn", (int64)EInventoryItemType::PowerAddOn },
				{ "EInventoryItemType::SlasherPerk", (int64)EInventoryItemType::SlasherPerk },
				{ "EInventoryItemType::Favor", (int64)EInventoryItemType::Favor },
				{ "EInventoryItemType::Customization", (int64)EInventoryItemType::Customization },
				{ "EInventoryItemType::IridescentShardsPack", (int64)EInventoryItemType::IridescentShardsPack },
				{ "EInventoryItemType::AuricCellsPack", (int64)EInventoryItemType::AuricCellsPack },
				{ "EInventoryItemType::BloodPointsPack", (int64)EInventoryItemType::BloodPointsPack },
				{ "EInventoryItemType::FreeTicket", (int64)EInventoryItemType::FreeTicket },
				{ "EInventoryItemType::Chest", (int64)EInventoryItemType::Chest },
				{ "EInventoryItemType::SuperChest", (int64)EInventoryItemType::SuperChest },
				{ "EInventoryItemType::EntityBox", (int64)EInventoryItemType::EntityBox },
				{ "EInventoryItemType::Count", (int64)EInventoryItemType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AuricCellsPack.Name", "EInventoryItemType::AuricCellsPack" },
				{ "BloodPointsPack.Name", "EInventoryItemType::BloodPointsPack" },
				{ "BlueprintType", "true" },
				{ "CamperPerk.Name", "EInventoryItemType::CamperPerk" },
				{ "Chest.Name", "EInventoryItemType::Chest" },
				{ "Count.Name", "EInventoryItemType::Count" },
				{ "Customization.Name", "EInventoryItemType::Customization" },
				{ "EntityBox.Name", "EInventoryItemType::EntityBox" },
				{ "Favor.Name", "EInventoryItemType::Favor" },
				{ "FreeTicket.Name", "EInventoryItemType::FreeTicket" },
				{ "IridescentShardsPack.Name", "EInventoryItemType::IridescentShardsPack" },
				{ "Item.Name", "EInventoryItemType::Item" },
				{ "ItemAddOn.Name", "EInventoryItemType::ItemAddOn" },
				{ "ModuleRelativePath", "Public/EInventoryItemType.h" },
				{ "None.Name", "EInventoryItemType::None" },
				{ "Power.Name", "EInventoryItemType::Power" },
				{ "PowerAddOn.Name", "EInventoryItemType::PowerAddOn" },
				{ "SlasherPerk.Name", "EInventoryItemType::SlasherPerk" },
				{ "SuperChest.Name", "EInventoryItemType::SuperChest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInventoryItemType",
				"EInventoryItemType",
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
