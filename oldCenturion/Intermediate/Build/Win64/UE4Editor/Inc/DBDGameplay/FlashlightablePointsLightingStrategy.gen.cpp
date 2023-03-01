// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FlashlightablePointsLightingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightablePointsLightingStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightablePointsLightingStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightablePointsLightingStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableLightingStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider_NoRegister();
// End Cross Module References
	void UFlashlightablePointsLightingStrategy::StaticRegisterNativesUFlashlightablePointsLightingStrategy()
	{
	}
	UClass* Z_Construct_UClass_UFlashlightablePointsLightingStrategy_NoRegister()
	{
		return UFlashlightablePointsLightingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__impactPointDistanceError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__impactPointDistanceError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pointsProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pointsProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlashlightableLightingStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlashlightablePointsLightingStrategy.h" },
		{ "ModuleRelativePath", "Public/FlashlightablePointsLightingStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__impactPointDistanceError_MetaData[] = {
		{ "Category", "FlashlightablePointsLightingStrategy" },
		{ "ModuleRelativePath", "Public/FlashlightablePointsLightingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__impactPointDistanceError = { "_impactPointDistanceError", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightablePointsLightingStrategy, _impactPointDistanceError), METADATA_PARAMS(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__impactPointDistanceError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__impactPointDistanceError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__pointsProvider_MetaData[] = {
		{ "Category", "FlashlightablePointsLightingStrategy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightablePointsLightingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__pointsProvider = { "_pointsProvider", nullptr, (EPropertyFlags)0x0022080002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightablePointsLightingStrategy, _pointsProvider), Z_Construct_UClass_UPointsProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__pointsProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__pointsProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__impactPointDistanceError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::NewProp__pointsProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightablePointsLightingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::ClassParams = {
		&UFlashlightablePointsLightingStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashlightablePointsLightingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashlightablePointsLightingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashlightablePointsLightingStrategy, 1244126998);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFlashlightablePointsLightingStrategy>()
	{
		return UFlashlightablePointsLightingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashlightablePointsLightingStrategy(Z_Construct_UClass_UFlashlightablePointsLightingStrategy, &UFlashlightablePointsLightingStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFlashlightablePointsLightingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightablePointsLightingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
