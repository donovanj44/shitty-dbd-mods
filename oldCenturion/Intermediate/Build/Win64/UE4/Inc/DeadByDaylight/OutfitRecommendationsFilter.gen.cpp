// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutfitRecommendationsFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutfitRecommendationsFilter() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutfitRecommendationsFilter_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutfitRecommendationsFilter();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecommendationsFilter();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UOutfitRecommendationsFilter::StaticRegisterNativesUOutfitRecommendationsFilter()
	{
	}
	UClass* Z_Construct_UClass_UOutfitRecommendationsFilter_NoRegister()
	{
		return UOutfitRecommendationsFilter::StaticClass();
	}
	struct Z_Construct_UClass_UOutfitRecommendationsFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URecommendationsFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OutfitRecommendationsFilter.h" },
		{ "ModuleRelativePath", "Public/OutfitRecommendationsFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutfitRecommendationsFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::ClassParams = {
		&UOutfitRecommendationsFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutfitRecommendationsFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOutfitRecommendationsFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOutfitRecommendationsFilter, 1815638157);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOutfitRecommendationsFilter>()
	{
		return UOutfitRecommendationsFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOutfitRecommendationsFilter(Z_Construct_UClass_UOutfitRecommendationsFilter, &UOutfitRecommendationsFilter::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOutfitRecommendationsFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutfitRecommendationsFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
