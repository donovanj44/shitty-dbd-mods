// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavigationQueryFilter_Camper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter_Camper() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Camper_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Camper();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Player();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavigationQueryFilter_Camper::StaticRegisterNativesUNavigationQueryFilter_Camper()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Camper_NoRegister()
	{
		return UNavigationQueryFilter_Camper::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherInExcludeAreaCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlasherInExcludeAreaCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherAreaExcludeUnderRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlasherAreaExcludeUnderRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherInSightCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlasherInSightCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherAreaPenetrationCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlasherAreaPenetrationCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherAreaBoundsLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlasherAreaBoundsLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter_Player,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationQueryFilter_Camper.h" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInExcludeAreaCost_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Camper" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInExcludeAreaCost = { "SlasherInExcludeAreaCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Camper, SlasherInExcludeAreaCost), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInExcludeAreaCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInExcludeAreaCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaExcludeUnderRange_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Camper" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaExcludeUnderRange = { "SlasherAreaExcludeUnderRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Camper, SlasherAreaExcludeUnderRange), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaExcludeUnderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaExcludeUnderRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInSightCost_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Camper" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInSightCost = { "SlasherInSightCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Camper, SlasherInSightCost), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInSightCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInSightCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaPenetrationCost_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Camper" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaPenetrationCost = { "SlasherAreaPenetrationCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Camper, SlasherAreaPenetrationCost), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaPenetrationCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaPenetrationCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaBoundsLimit_MetaData[] = {
		{ "Category", "NavigationQueryFilter_Camper" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Camper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaBoundsLimit = { "SlasherAreaBoundsLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationQueryFilter_Camper, SlasherAreaBoundsLimit), METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaBoundsLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaBoundsLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInExcludeAreaCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaExcludeUnderRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherInSightCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaPenetrationCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::NewProp_SlasherAreaBoundsLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter_Camper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::ClassParams = {
		&UNavigationQueryFilter_Camper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Camper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationQueryFilter_Camper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationQueryFilter_Camper, 418775068);
	template<> DBDBOTS_API UClass* StaticClass<UNavigationQueryFilter_Camper>()
	{
		return UNavigationQueryFilter_Camper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter_Camper(Z_Construct_UClass_UNavigationQueryFilter_Camper, &UNavigationQueryFilter_Camper::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavigationQueryFilter_Camper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter_Camper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
