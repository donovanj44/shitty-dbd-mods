// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/TracingConeFlashlightableLightingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracingConeFlashlightableLightingStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableLightingStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UTracingConeFlashlightableLightingStrategy::StaticRegisterNativesUTracingConeFlashlightableLightingStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_NoRegister()
	{
		return UTracingConeFlashlightableLightingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aroundConeCircleTraceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__aroundConeCircleTraceCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlashlightableLightingStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TracingConeFlashlightableLightingStrategy.h" },
		{ "ModuleRelativePath", "Public/TracingConeFlashlightableLightingStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::NewProp__aroundConeCircleTraceCount_MetaData[] = {
		{ "Category", "TracingConeFlashlightableLightingStrategy" },
		{ "ModuleRelativePath", "Public/TracingConeFlashlightableLightingStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::NewProp__aroundConeCircleTraceCount = { "_aroundConeCircleTraceCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTracingConeFlashlightableLightingStrategy, _aroundConeCircleTraceCount), METADATA_PARAMS(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::NewProp__aroundConeCircleTraceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::NewProp__aroundConeCircleTraceCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::NewProp__aroundConeCircleTraceCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTracingConeFlashlightableLightingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::ClassParams = {
		&UTracingConeFlashlightableLightingStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTracingConeFlashlightableLightingStrategy, 1195278389);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UTracingConeFlashlightableLightingStrategy>()
	{
		return UTracingConeFlashlightableLightingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTracingConeFlashlightableLightingStrategy(Z_Construct_UClass_UTracingConeFlashlightableLightingStrategy, &UTracingConeFlashlightableLightingStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UTracingConeFlashlightableLightingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTracingConeFlashlightableLightingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
