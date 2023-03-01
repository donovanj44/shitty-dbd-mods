// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EFindInteractableCamperFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFindInteractableCamperFilter() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableCamperFilter();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EFindInteractableCamperFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EFindInteractableCamperFilter, Z_Construct_UPackage__Script_DBDBots(), TEXT("EFindInteractableCamperFilter"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractableCamperFilter>()
	{
		return EFindInteractableCamperFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindInteractableCamperFilter(EFindInteractableCamperFilter_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EFindInteractableCamperFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EFindInteractableCamperFilter_Hash() { return 870926585U; }
	UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableCamperFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindInteractableCamperFilter"), 0, Get_Z_Construct_UEnum_DBDBots_EFindInteractableCamperFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindInteractableCamperFilter::Crawling", (int64)EFindInteractableCamperFilter::Crawling },
				{ "EFindInteractableCamperFilter::Standing", (int64)EFindInteractableCamperFilter::Standing },
				{ "EFindInteractableCamperFilter::GiveHelp", (int64)EFindInteractableCamperFilter::GiveHelp },
				{ "EFindInteractableCamperFilter::RequestHelp", (int64)EFindInteractableCamperFilter::RequestHelp },
				{ "EFindInteractableCamperFilter::RescuableBeingCarried", (int64)EFindInteractableCamperFilter::RescuableBeingCarried },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Crawling.Name", "EFindInteractableCamperFilter::Crawling" },
				{ "GiveHelp.Name", "EFindInteractableCamperFilter::GiveHelp" },
				{ "ModuleRelativePath", "Public/EFindInteractableCamperFilter.h" },
				{ "RequestHelp.Name", "EFindInteractableCamperFilter::RequestHelp" },
				{ "RescuableBeingCarried.Name", "EFindInteractableCamperFilter::RescuableBeingCarried" },
				{ "Standing.Name", "EFindInteractableCamperFilter::Standing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EFindInteractableCamperFilter",
				"EFindInteractableCamperFilter",
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
