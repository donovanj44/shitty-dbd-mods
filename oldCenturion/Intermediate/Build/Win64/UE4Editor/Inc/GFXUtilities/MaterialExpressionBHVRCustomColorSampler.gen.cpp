// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialExpressionBHVRCustomColorSampler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBHVRCustomColorSampler() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
// End Cross Module References
	void UMaterialExpressionBHVRCustomColorSampler::StaticRegisterNativesUMaterialExpressionBHVRCustomColorSampler()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_NoRegister()
	{
		return UMaterialExpressionBHVRCustomColorSampler::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionBHVRCustomColorSampler.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionBHVRCustomColorSampler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBHVRCustomColorSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::ClassParams = {
		&UMaterialExpressionBHVRCustomColorSampler::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionBHVRCustomColorSampler, 602449299);
	template<> GFXUTILITIES_API UClass* StaticClass<UMaterialExpressionBHVRCustomColorSampler>()
	{
		return UMaterialExpressionBHVRCustomColorSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBHVRCustomColorSampler(Z_Construct_UClass_UMaterialExpressionBHVRCustomColorSampler, &UMaterialExpressionBHVRCustomColorSampler::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UMaterialExpressionBHVRCustomColorSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBHVRCustomColorSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
