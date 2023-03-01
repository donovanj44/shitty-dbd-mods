// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapAtlas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapAtlas() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
// End Cross Module References
	void UGMAdaptiveShadowMapAtlas::StaticRegisterNativesUGMAdaptiveShadowMapAtlas()
	{
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister()
	{
		return UGMAdaptiveShadowMapAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapAtlas.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapAtlas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapAtlas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::ClassParams = {
		&UGMAdaptiveShadowMapAtlas::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapAtlas, 334960561);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapAtlas>()
	{
		return UGMAdaptiveShadowMapAtlas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapAtlas(Z_Construct_UClass_UGMAdaptiveShadowMapAtlas, &UGMAdaptiveShadowMapAtlas::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapAtlas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapAtlas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
