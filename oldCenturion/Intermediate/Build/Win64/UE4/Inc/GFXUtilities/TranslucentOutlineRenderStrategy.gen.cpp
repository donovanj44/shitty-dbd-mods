// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/TranslucentOutlineRenderStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslucentOutlineRenderStrategy() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UTranslucentOutlineRenderStrategy_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UTranslucentOutlineRenderStrategy();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBaseOutlineRenderStrategy();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UTranslucentOutlineRenderStrategy::StaticRegisterNativesUTranslucentOutlineRenderStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTranslucentOutlineRenderStrategy_NoRegister()
	{
		return UTranslucentOutlineRenderStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replacementMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__replacementMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__replacementMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseOutlineRenderStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TranslucentOutlineRenderStrategy.h" },
		{ "ModuleRelativePath", "Public/TranslucentOutlineRenderStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/TranslucentOutlineRenderStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials = { "_replacementMaterials", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslucentOutlineRenderStrategy, _replacementMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials_Inner = { "_replacementMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::NewProp__replacementMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslucentOutlineRenderStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::ClassParams = {
		&UTranslucentOutlineRenderStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslucentOutlineRenderStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranslucentOutlineRenderStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranslucentOutlineRenderStrategy, 2836945609);
	template<> GFXUTILITIES_API UClass* StaticClass<UTranslucentOutlineRenderStrategy>()
	{
		return UTranslucentOutlineRenderStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranslucentOutlineRenderStrategy(Z_Construct_UClass_UTranslucentOutlineRenderStrategy, &UTranslucentOutlineRenderStrategy::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UTranslucentOutlineRenderStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslucentOutlineRenderStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
