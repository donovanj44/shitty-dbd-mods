// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EIsInteractionAvailableOnFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIsInteractionAvailableOnFilter() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EIsInteractionAvailableOnFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter, Z_Construct_UPackage__Script_DBDBots(), TEXT("EIsInteractionAvailableOnFilter"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EIsInteractionAvailableOnFilter>()
	{
		return EIsInteractionAvailableOnFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIsInteractionAvailableOnFilter(EIsInteractionAvailableOnFilter_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EIsInteractionAvailableOnFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter_Hash() { return 3498883505U; }
	UEnum* Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIsInteractionAvailableOnFilter"), 0, Get_Z_Construct_UEnum_DBDBots_EIsInteractionAvailableOnFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIsInteractionAvailableOnFilter::Self", (int64)EIsInteractionAvailableOnFilter::Self },
				{ "EIsInteractionAvailableOnFilter::AnyFriend", (int64)EIsInteractionAvailableOnFilter::AnyFriend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyFriend.Name", "EIsInteractionAvailableOnFilter::AnyFriend" },
				{ "ModuleRelativePath", "Public/EIsInteractionAvailableOnFilter.h" },
				{ "Self.Name", "EIsInteractionAvailableOnFilter::Self" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EIsInteractionAvailableOnFilter",
				"EIsInteractionAvailableOnFilter",
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
