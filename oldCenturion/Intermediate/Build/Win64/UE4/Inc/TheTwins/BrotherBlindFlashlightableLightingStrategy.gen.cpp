// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/BrotherBlindFlashlightableLightingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrotherBlindFlashlightableLightingStrategy() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UBlindFlashlightableLightingStrategy();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UBrotherBlindFlashlightableLightingStrategy::StaticRegisterNativesUBrotherBlindFlashlightableLightingStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_NoRegister()
	{
		return UBrotherBlindFlashlightableLightingStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlindFlashlightableLightingStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BrotherBlindFlashlightableLightingStrategy.h" },
		{ "ModuleRelativePath", "Public/BrotherBlindFlashlightableLightingStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrotherBlindFlashlightableLightingStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::ClassParams = {
		&UBrotherBlindFlashlightableLightingStrategy::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrotherBlindFlashlightableLightingStrategy, 353391576);
	template<> THETWINS_API UClass* StaticClass<UBrotherBlindFlashlightableLightingStrategy>()
	{
		return UBrotherBlindFlashlightableLightingStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrotherBlindFlashlightableLightingStrategy(Z_Construct_UClass_UBrotherBlindFlashlightableLightingStrategy, &UBrotherBlindFlashlightableLightingStrategy::StaticClass, TEXT("/Script/TheTwins"), TEXT("UBrotherBlindFlashlightableLightingStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrotherBlindFlashlightableLightingStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
