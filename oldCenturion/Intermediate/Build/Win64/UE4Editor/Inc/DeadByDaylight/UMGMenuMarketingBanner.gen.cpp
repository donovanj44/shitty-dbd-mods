// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGMenuMarketingBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGMenuMarketingBanner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMenuMarketingBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMenuMarketingBanner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMenuBaseBanner();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UUMGMenuMarketingBanner::StaticRegisterNativesUUMGMenuMarketingBanner()
	{
	}
	UClass* Z_Construct_UClass_UUMGMenuMarketingBanner_NoRegister()
	{
		return UUMGMenuMarketingBanner::StaticClass();
	}
	struct Z_Construct_UClass_UUMGMenuMarketingBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGMenuBaseBanner,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGMenuMarketingBanner.h" },
		{ "ModuleRelativePath", "Public/UMGMenuMarketingBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::NewProp_SubTitle_MetaData[] = {
		{ "Category", "UMGMenuMarketingBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMenuMarketingBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::NewProp_SubTitle = { "SubTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMenuMarketingBanner, SubTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::NewProp_SubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::NewProp_SubTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::NewProp_SubTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGMenuMarketingBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::ClassParams = {
		&UUMGMenuMarketingBanner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGMenuMarketingBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGMenuMarketingBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGMenuMarketingBanner, 602408431);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGMenuMarketingBanner>()
	{
		return UUMGMenuMarketingBanner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGMenuMarketingBanner(Z_Construct_UClass_UUMGMenuMarketingBanner, &UUMGMenuMarketingBanner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGMenuMarketingBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGMenuMarketingBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
