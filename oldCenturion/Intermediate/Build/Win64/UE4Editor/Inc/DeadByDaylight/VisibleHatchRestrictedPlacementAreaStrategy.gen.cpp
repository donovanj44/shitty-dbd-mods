// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VisibleHatchRestrictedPlacementAreaStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibleHatchRestrictedPlacementAreaStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UVisibleHatchRestrictedPlacementAreaStrategy::StaticRegisterNativesUVisibleHatchRestrictedPlacementAreaStrategy()
	{
	}
	UClass* Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_NoRegister()
	{
		return UVisibleHatchRestrictedPlacementAreaStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URestrictedPlacementAreaStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisibleHatchRestrictedPlacementAreaStrategy.h" },
		{ "ModuleRelativePath", "Public/VisibleHatchRestrictedPlacementAreaStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisibleHatchRestrictedPlacementAreaStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::ClassParams = {
		&UVisibleHatchRestrictedPlacementAreaStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisibleHatchRestrictedPlacementAreaStrategy, 1195804558);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UVisibleHatchRestrictedPlacementAreaStrategy>()
	{
		return UVisibleHatchRestrictedPlacementAreaStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisibleHatchRestrictedPlacementAreaStrategy(Z_Construct_UClass_UVisibleHatchRestrictedPlacementAreaStrategy, &UVisibleHatchRestrictedPlacementAreaStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UVisibleHatchRestrictedPlacementAreaStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisibleHatchRestrictedPlacementAreaStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
