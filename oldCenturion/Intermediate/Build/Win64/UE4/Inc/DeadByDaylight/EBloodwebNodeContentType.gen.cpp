// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EBloodwebNodeContentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodwebNodeContentType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EBloodwebNodeContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EBloodwebNodeContentType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBloodwebNodeContentType>()
	{
		return EBloodwebNodeContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodwebNodeContentType(EBloodwebNodeContentType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EBloodwebNodeContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType_Hash() { return 3665558532U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodwebNodeContentType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodwebNodeContentType::Empty", (int64)EBloodwebNodeContentType::Empty },
				{ "EBloodwebNodeContentType::Perks", (int64)EBloodwebNodeContentType::Perks },
				{ "EBloodwebNodeContentType::PerkBuffs_Do_Not_Use_Deprecated", (int64)EBloodwebNodeContentType::PerkBuffs_Do_Not_Use_Deprecated },
				{ "EBloodwebNodeContentType::Offerings", (int64)EBloodwebNodeContentType::Offerings },
				{ "EBloodwebNodeContentType::Items", (int64)EBloodwebNodeContentType::Items },
				{ "EBloodwebNodeContentType::AddOn", (int64)EBloodwebNodeContentType::AddOn },
				{ "EBloodwebNodeContentType::Chests", (int64)EBloodwebNodeContentType::Chests },
				{ "EBloodwebNodeContentType::PerksPacks", (int64)EBloodwebNodeContentType::PerksPacks },
				{ "EBloodwebNodeContentType::IridiscentShards", (int64)EBloodwebNodeContentType::IridiscentShards },
				{ "EBloodwebNodeContentType::AuricCells", (int64)EBloodwebNodeContentType::AuricCells },
				{ "EBloodwebNodeContentType::SuperChests", (int64)EBloodwebNodeContentType::SuperChests },
				{ "EBloodwebNodeContentType::CosmeticItems", (int64)EBloodwebNodeContentType::CosmeticItems },
				{ "EBloodwebNodeContentType::Bloodpoints", (int64)EBloodwebNodeContentType::Bloodpoints },
				{ "EBloodwebNodeContentType::FreeTicket", (int64)EBloodwebNodeContentType::FreeTicket },
				{ "EBloodwebNodeContentType::EntityBox", (int64)EBloodwebNodeContentType::EntityBox },
				{ "EBloodwebNodeContentType::Count", (int64)EBloodwebNodeContentType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddOn.Name", "EBloodwebNodeContentType::AddOn" },
				{ "AuricCells.Name", "EBloodwebNodeContentType::AuricCells" },
				{ "Bloodpoints.Name", "EBloodwebNodeContentType::Bloodpoints" },
				{ "BlueprintType", "true" },
				{ "Chests.Name", "EBloodwebNodeContentType::Chests" },
				{ "CosmeticItems.Name", "EBloodwebNodeContentType::CosmeticItems" },
				{ "Count.Name", "EBloodwebNodeContentType::Count" },
				{ "Empty.Name", "EBloodwebNodeContentType::Empty" },
				{ "EntityBox.Name", "EBloodwebNodeContentType::EntityBox" },
				{ "FreeTicket.Name", "EBloodwebNodeContentType::FreeTicket" },
				{ "IridiscentShards.Name", "EBloodwebNodeContentType::IridiscentShards" },
				{ "Items.Name", "EBloodwebNodeContentType::Items" },
				{ "ModuleRelativePath", "Public/EBloodwebNodeContentType.h" },
				{ "Offerings.Name", "EBloodwebNodeContentType::Offerings" },
				{ "PerkBuffs_Do_Not_Use_Deprecated.Name", "EBloodwebNodeContentType::PerkBuffs_Do_Not_Use_Deprecated" },
				{ "Perks.Name", "EBloodwebNodeContentType::Perks" },
				{ "PerksPacks.Name", "EBloodwebNodeContentType::PerksPacks" },
				{ "SuperChests.Name", "EBloodwebNodeContentType::SuperChests" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EBloodwebNodeContentType",
				"EBloodwebNodeContentType",
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
