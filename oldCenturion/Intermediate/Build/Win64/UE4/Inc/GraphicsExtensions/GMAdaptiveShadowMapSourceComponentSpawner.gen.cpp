// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapSourceComponentSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapSourceComponentSpawner() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
// End Cross Module References
	void AGMAdaptiveShadowMapSourceComponentSpawner::StaticRegisterNativesAGMAdaptiveShadowMapSourceComponentSpawner()
	{
	}
	UClass* Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_NoRegister()
	{
		return AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewOnly_MetaData[];
#endif
		static void NewProp_bPreviewOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPreGeneratedLevelPerSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPreGeneratedLevelPerSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLevelPerSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLevelPerSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveLightFunctionMaterialOnLights_MetaData[];
#endif
		static void NewProp_bRemoveLightFunctionMaterialOnLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveLightFunctionMaterialOnLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveCastForCinematicOnlyFlagOnLights_MetaData[];
#endif
		static void NewProp_bRemoveCastForCinematicOnlyFlagOnLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveCastForCinematicOnlyFlagOnLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateASMSourceComponentOnBeginPlay_MetaData[];
#endif
		static void NewProp_bCreateASMSourceComponentOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateASMSourceComponentOnBeginPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMAdaptiveShadowMapSourceComponentSpawner.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly_SetBit(void* Obj)
	{
		((AGMAdaptiveShadowMapSourceComponentSpawner*)Obj)->bPreviewOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly = { "bPreviewOnly", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMAdaptiveShadowMapSourceComponentSpawner), &Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumPreGeneratedLevelPerSource_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumPreGeneratedLevelPerSource = { "NumPreGeneratedLevelPerSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMAdaptiveShadowMapSourceComponentSpawner, NumPreGeneratedLevelPerSource), METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumPreGeneratedLevelPerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumPreGeneratedLevelPerSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumLevelPerSource_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumLevelPerSource = { "NumLevelPerSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMAdaptiveShadowMapSourceComponentSpawner, NumLevelPerSource), METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumLevelPerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumLevelPerSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights_SetBit(void* Obj)
	{
		((AGMAdaptiveShadowMapSourceComponentSpawner*)Obj)->bRemoveLightFunctionMaterialOnLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights = { "bRemoveLightFunctionMaterialOnLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMAdaptiveShadowMapSourceComponentSpawner), &Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights_SetBit(void* Obj)
	{
		((AGMAdaptiveShadowMapSourceComponentSpawner*)Obj)->bRemoveCastForCinematicOnlyFlagOnLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights = { "bRemoveCastForCinematicOnlyFlagOnLights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMAdaptiveShadowMapSourceComponentSpawner), &Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponentSpawner" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponentSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay_SetBit(void* Obj)
	{
		((AGMAdaptiveShadowMapSourceComponentSpawner*)Obj)->bCreateASMSourceComponentOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay = { "bCreateASMSourceComponentOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMAdaptiveShadowMapSourceComponentSpawner), &Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bPreviewOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumPreGeneratedLevelPerSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_NumLevelPerSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveLightFunctionMaterialOnLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bRemoveCastForCinematicOnlyFlagOnLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::NewProp_bCreateASMSourceComponentOnBeginPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMAdaptiveShadowMapSourceComponentSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::ClassParams = {
		&AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMAdaptiveShadowMapSourceComponentSpawner, 3069723226);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<AGMAdaptiveShadowMapSourceComponentSpawner>()
	{
		return AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMAdaptiveShadowMapSourceComponentSpawner(Z_Construct_UClass_AGMAdaptiveShadowMapSourceComponentSpawner, &AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("AGMAdaptiveShadowMapSourceComponentSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMAdaptiveShadowMapSourceComponentSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
