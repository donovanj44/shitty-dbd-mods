// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/BlindFlashlightableLightingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindFlashlightableLightingStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightablePointsLightingStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UBlindFlashlightableLightingStrategy::StaticRegisterNativesUBlindFlashlightableLightingStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy_NoRegister()
	{
		return UBlindFlashlightableLightingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlashlightablePointsLightingStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlindFlashlightableLightingStrategy.h" },
		{ "ModuleRelativePath", "Public/BlindFlashlightableLightingStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlindFlashlightableLightingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::ClassParams = {
		&UBlindFlashlightableLightingStrategy::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlindFlashlightableLightingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlindFlashlightableLightingStrategy, 2593676679);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UBlindFlashlightableLightingStrategy>()
	{
		return UBlindFlashlightableLightingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlindFlashlightableLightingStrategy(Z_Construct_UClass_UBlindFlashlightableLightingStrategy, &UBlindFlashlightableLightingStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UBlindFlashlightableLightingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlindFlashlightableLightingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
