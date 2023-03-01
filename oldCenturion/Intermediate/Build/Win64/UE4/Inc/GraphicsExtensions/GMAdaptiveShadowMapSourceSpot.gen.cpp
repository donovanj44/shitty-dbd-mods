// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapSourceSpot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapSourceSpot() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	void UGMAdaptiveShadowMapSourceSpot::StaticRegisterNativesUGMAdaptiveShadowMapSourceSpot()
	{
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_NoRegister()
	{
		return UGMAdaptiveShadowMapSourceSpot::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spotLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spotLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGMAdaptiveShadowMapSource,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapSourceSpot.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceSpot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::NewProp__spotLightComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceSpot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::NewProp__spotLightComponent = { "_spotLightComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceSpot, _spotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::NewProp__spotLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::NewProp__spotLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::NewProp__spotLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapSourceSpot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::ClassParams = {
		&UGMAdaptiveShadowMapSourceSpot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapSourceSpot, 86684886);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapSourceSpot>()
	{
		return UGMAdaptiveShadowMapSourceSpot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapSourceSpot(Z_Construct_UClass_UGMAdaptiveShadowMapSourceSpot, &UGMAdaptiveShadowMapSourceSpot::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapSourceSpot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapSourceSpot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
