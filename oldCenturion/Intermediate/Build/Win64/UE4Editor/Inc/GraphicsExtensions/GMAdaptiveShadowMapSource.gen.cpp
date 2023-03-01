// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapSource() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister();
// End Cross Module References
	void UGMAdaptiveShadowMapSource::StaticRegisterNativesUGMAdaptiveShadowMapSource()
	{
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister()
	{
		return UGMAdaptiveShadowMapSource::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapSource.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__lightComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__lightComponent = { "_lightComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSource, _lightComponent), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__lightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__lightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__atlas_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__atlas = { "_atlas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSource, _atlas), Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__atlas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__lightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::NewProp__atlas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::ClassParams = {
		&UGMAdaptiveShadowMapSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapSource, 904514060);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapSource>()
	{
		return UGMAdaptiveShadowMapSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapSource(Z_Construct_UClass_UGMAdaptiveShadowMapSource, &UGMAdaptiveShadowMapSource::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
