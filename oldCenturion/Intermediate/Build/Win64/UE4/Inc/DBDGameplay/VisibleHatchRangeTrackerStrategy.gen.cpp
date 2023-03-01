// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/VisibleHatchRangeTrackerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibleHatchRangeTrackerStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UVisibleHatchRangeTrackerStrategy::StaticRegisterNativesUVisibleHatchRangeTrackerStrategy()
	{
	}
	UClass* Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_NoRegister()
	{
		return UVisibleHatchRangeTrackerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URangeToActorsTrackerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisibleHatchRangeTrackerStrategy.h" },
		{ "ModuleRelativePath", "Public/VisibleHatchRangeTrackerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisibleHatchRangeTrackerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::ClassParams = {
		&UVisibleHatchRangeTrackerStrategy::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisibleHatchRangeTrackerStrategy, 1190984882);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UVisibleHatchRangeTrackerStrategy>()
	{
		return UVisibleHatchRangeTrackerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisibleHatchRangeTrackerStrategy(Z_Construct_UClass_UVisibleHatchRangeTrackerStrategy, &UVisibleHatchRangeTrackerStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UVisibleHatchRangeTrackerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisibleHatchRangeTrackerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
