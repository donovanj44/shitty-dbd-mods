// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EGameplayModifierSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameplayModifierSource() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EGameplayModifierSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EGameplayModifierSource"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameplayModifierSource>()
	{
		return EGameplayModifierSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayModifierSource(EGameplayModifierSource_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EGameplayModifierSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource_Hash() { return 1942103119U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayModifierSource"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EGameplayModifierSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayModifierSource::VE_Perk", (int64)EGameplayModifierSource::VE_Perk },
				{ "EGameplayModifierSource::VE_StatusEffect", (int64)EGameplayModifierSource::VE_StatusEffect },
				{ "EGameplayModifierSource::VE_Item", (int64)EGameplayModifierSource::VE_Item },
				{ "EGameplayModifierSource::VE_ItemAddon", (int64)EGameplayModifierSource::VE_ItemAddon },
				{ "EGameplayModifierSource::VE_All", (int64)EGameplayModifierSource::VE_All },
				{ "EGameplayModifierSource::VE_PerkOrStatusEffect", (int64)EGameplayModifierSource::VE_PerkOrStatusEffect },
				{ "EGameplayModifierSource::VE_PerkStatusOrAddon", (int64)EGameplayModifierSource::VE_PerkStatusOrAddon },
				{ "EGameplayModifierSource::VE_MAX", (int64)EGameplayModifierSource::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EGameplayModifierSource.h" },
				{ "VE_All.Name", "EGameplayModifierSource::VE_All" },
				{ "VE_Item.Name", "EGameplayModifierSource::VE_Item" },
				{ "VE_ItemAddon.Name", "EGameplayModifierSource::VE_ItemAddon" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EGameplayModifierSource::VE_MAX" },
				{ "VE_Perk.Name", "EGameplayModifierSource::VE_Perk" },
				{ "VE_PerkOrStatusEffect.Name", "EGameplayModifierSource::VE_PerkOrStatusEffect" },
				{ "VE_PerkStatusOrAddon.Name", "EGameplayModifierSource::VE_PerkStatusOrAddon" },
				{ "VE_StatusEffect.Name", "EGameplayModifierSource::VE_StatusEffect" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EGameplayModifierSource",
				"EGameplayModifierSource",
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
