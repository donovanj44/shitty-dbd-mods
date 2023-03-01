// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RegionFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegionFinder() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URegionFinder_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URegionFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRegion();
// End Cross Module References
	void URegionFinder::StaticRegisterNativesURegionFinder()
	{
	}
	UClass* Z_Construct_UClass_URegionFinder_NoRegister()
	{
		return URegionFinder::StaticClass();
	}
	struct Z_Construct_UClass_URegionFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Regions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Regions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Regions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URegionFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RegionFinder.h" },
		{ "ModuleRelativePath", "Public/RegionFinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionFinder_Statics::NewProp_Timeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/RegionFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URegionFinder_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionFinder, Timeout), METADATA_PARAMS(Z_Construct_UClass_URegionFinder_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionFinder_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions_MetaData[] = {
		{ "Category", "RegionFinder" },
		{ "ModuleRelativePath", "Public/RegionFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions = { "Regions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionFinder, Regions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions_Inner = { "Regions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRegion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URegionFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionFinder_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionFinder_Statics::NewProp_Regions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URegionFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegionFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URegionFinder_Statics::ClassParams = {
		&URegionFinder::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URegionFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URegionFinder_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_URegionFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URegionFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URegionFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URegionFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URegionFinder, 1667052669);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URegionFinder>()
	{
		return URegionFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URegionFinder(Z_Construct_UClass_URegionFinder, &URegionFinder::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URegionFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URegionFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
