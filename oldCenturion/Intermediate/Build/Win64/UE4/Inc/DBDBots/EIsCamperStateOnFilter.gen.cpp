// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EIsCamperStateOnFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIsCamperStateOnFilter() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EIsCamperStateOnFilter();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EIsCamperStateOnFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EIsCamperStateOnFilter, Z_Construct_UPackage__Script_DBDBots(), TEXT("EIsCamperStateOnFilter"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EIsCamperStateOnFilter>()
	{
		return EIsCamperStateOnFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIsCamperStateOnFilter(EIsCamperStateOnFilter_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EIsCamperStateOnFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EIsCamperStateOnFilter_Hash() { return 2224915549U; }
	UEnum* Z_Construct_UEnum_DBDBots_EIsCamperStateOnFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIsCamperStateOnFilter"), 0, Get_Z_Construct_UEnum_DBDBots_EIsCamperStateOnFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIsCamperStateOnFilter::OnBlackboardKey", (int64)EIsCamperStateOnFilter::OnBlackboardKey },
				{ "EIsCamperStateOnFilter::OnOthersThanSelf", (int64)EIsCamperStateOnFilter::OnOthersThanSelf },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EIsCamperStateOnFilter.h" },
				{ "OnBlackboardKey.Name", "EIsCamperStateOnFilter::OnBlackboardKey" },
				{ "OnOthersThanSelf.Name", "EIsCamperStateOnFilter::OnOthersThanSelf" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EIsCamperStateOnFilter",
				"EIsCamperStateOnFilter",
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
