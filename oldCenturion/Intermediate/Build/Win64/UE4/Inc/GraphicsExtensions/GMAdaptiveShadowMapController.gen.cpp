// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapController() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapController_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister();
// End Cross Module References
	void UGMAdaptiveShadowMapController::StaticRegisterNativesUGMAdaptiveShadowMapController()
	{
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapController_NoRegister()
	{
		return UGMAdaptiveShadowMapController::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shadowMapSourceActivatedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__shadowMapSourceActivatedList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shadowMapSourceActivatedList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shadowMapSourceList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__shadowMapSourceList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__shadowMapSourceList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightFunctionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightFunctionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapController.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList = { "_shadowMapSourceActivatedList", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapController, _shadowMapSourceActivatedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList_Inner = { "_shadowMapSourceActivatedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList = { "_shadowMapSourceList", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapController, _shadowMapSourceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList_Inner = { "_shadowMapSourceList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGMAdaptiveShadowMapSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__lightFunctionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__lightFunctionMaterial = { "_lightFunctionMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapController, _lightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__lightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__lightFunctionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__atlas_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__atlas = { "_atlas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapController, _atlas), Z_Construct_UClass_UGMAdaptiveShadowMapAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__atlas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceActivatedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__shadowMapSourceList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__lightFunctionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::NewProp__atlas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::ClassParams = {
		&UGMAdaptiveShadowMapController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapController, 2971955739);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapController>()
	{
		return UGMAdaptiveShadowMapController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapController(Z_Construct_UClass_UGMAdaptiveShadowMapController, &UGMAdaptiveShadowMapController::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
