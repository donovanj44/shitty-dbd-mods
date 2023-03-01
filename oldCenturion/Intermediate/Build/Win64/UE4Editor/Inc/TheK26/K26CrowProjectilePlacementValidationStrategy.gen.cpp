// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26CrowProjectilePlacementValidationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26CrowProjectilePlacementValidationStrategy() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	void UK26CrowProjectilePlacementValidationStrategy::StaticRegisterNativesUK26CrowProjectilePlacementValidationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_NoRegister()
	{
		return UK26CrowProjectilePlacementValidationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URestrictedPlacementAreaStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26CrowProjectilePlacementValidationStrategy.h" },
		{ "ModuleRelativePath", "Public/K26CrowProjectilePlacementValidationStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26CrowProjectilePlacementValidationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::ClassParams = {
		&UK26CrowProjectilePlacementValidationStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26CrowProjectilePlacementValidationStrategy, 2524014811);
	template<> THEK26_API UClass* StaticClass<UK26CrowProjectilePlacementValidationStrategy>()
	{
		return UK26CrowProjectilePlacementValidationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26CrowProjectilePlacementValidationStrategy(Z_Construct_UClass_UK26CrowProjectilePlacementValidationStrategy, &UK26CrowProjectilePlacementValidationStrategy::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26CrowProjectilePlacementValidationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26CrowProjectilePlacementValidationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
