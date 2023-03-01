// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapSourceDirectional.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapSourceDirectional() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
// End Cross Module References
	void UGMAdaptiveShadowMapSourceDirectional::StaticRegisterNativesUGMAdaptiveShadowMapSourceDirectional()
	{
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_NoRegister()
	{
		return UGMAdaptiveShadowMapSourceDirectional::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__directionalLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__directionalLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGMAdaptiveShadowMapSource,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapSourceDirectional.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceDirectional.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::NewProp__directionalLightComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceDirectional.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::NewProp__directionalLightComponent = { "_directionalLightComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceDirectional, _directionalLightComponent), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::NewProp__directionalLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::NewProp__directionalLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::NewProp__directionalLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapSourceDirectional>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::ClassParams = {
		&UGMAdaptiveShadowMapSourceDirectional::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapSourceDirectional, 648930825);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapSourceDirectional>()
	{
		return UGMAdaptiveShadowMapSourceDirectional::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapSourceDirectional(Z_Construct_UClass_UGMAdaptiveShadowMapSourceDirectional, &UGMAdaptiveShadowMapSourceDirectional::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapSourceDirectional"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapSourceDirectional);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
