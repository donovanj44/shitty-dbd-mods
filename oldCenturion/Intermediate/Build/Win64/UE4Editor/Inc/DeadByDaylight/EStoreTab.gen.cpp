// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EStoreTab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreTab() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStoreTab();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EStoreTab_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EStoreTab, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EStoreTab"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStoreTab>()
	{
		return EStoreTab_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreTab(EStoreTab_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EStoreTab"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EStoreTab_Hash() { return 2153552287U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EStoreTab()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreTab"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EStoreTab_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreTab::Featured", (int64)EStoreTab::Featured },
				{ "EStoreTab::Characters", (int64)EStoreTab::Characters },
				{ "EStoreTab::Currency", (int64)EStoreTab::Currency },
				{ "EStoreTab::ShrineOfSecrets", (int64)EStoreTab::ShrineOfSecrets },
				{ "EStoreTab::TabCount", (int64)EStoreTab::TabCount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Characters.Name", "EStoreTab::Characters" },
				{ "Currency.Name", "EStoreTab::Currency" },
				{ "Featured.Name", "EStoreTab::Featured" },
				{ "ModuleRelativePath", "Public/EStoreTab.h" },
				{ "ShrineOfSecrets.Name", "EStoreTab::ShrineOfSecrets" },
				{ "TabCount.Name", "EStoreTab::TabCount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EStoreTab",
				"EStoreTab",
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
