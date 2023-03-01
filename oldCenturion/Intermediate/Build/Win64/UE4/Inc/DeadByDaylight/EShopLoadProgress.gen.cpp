// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EShopLoadProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEShopLoadProgress() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EShopLoadProgress();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EShopLoadProgress_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EShopLoadProgress, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EShopLoadProgress"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EShopLoadProgress>()
	{
		return EShopLoadProgress_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShopLoadProgress(EShopLoadProgress_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EShopLoadProgress"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EShopLoadProgress_Hash() { return 639786687U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EShopLoadProgress()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShopLoadProgress"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EShopLoadProgress_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShopLoadProgress::None", (int64)EShopLoadProgress::None },
				{ "EShopLoadProgress::LoadCatalog", (int64)EShopLoadProgress::LoadCatalog },
				{ "EShopLoadProgress::LoadCurrencyPacks", (int64)EShopLoadProgress::LoadCurrencyPacks },
				{ "EShopLoadProgress::PlatformStoreCatalog", (int64)EShopLoadProgress::PlatformStoreCatalog },
				{ "EShopLoadProgress::Inventory", (int64)EShopLoadProgress::Inventory },
				{ "EShopLoadProgress::Wallet", (int64)EShopLoadProgress::Wallet },
				{ "EShopLoadProgress::FeaturedPageContent", (int64)EShopLoadProgress::FeaturedPageContent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FeaturedPageContent.Name", "EShopLoadProgress::FeaturedPageContent" },
				{ "Inventory.Name", "EShopLoadProgress::Inventory" },
				{ "LoadCatalog.Name", "EShopLoadProgress::LoadCatalog" },
				{ "LoadCurrencyPacks.Name", "EShopLoadProgress::LoadCurrencyPacks" },
				{ "ModuleRelativePath", "Public/EShopLoadProgress.h" },
				{ "None.Name", "EShopLoadProgress::None" },
				{ "PlatformStoreCatalog.Name", "EShopLoadProgress::PlatformStoreCatalog" },
				{ "Wallet.Name", "EShopLoadProgress::Wallet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EShopLoadProgress",
				"EShopLoadProgress",
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
