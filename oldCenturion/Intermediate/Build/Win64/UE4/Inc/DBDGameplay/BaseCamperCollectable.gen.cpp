// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/BaseCamperCollectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCamperCollectable() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ABaseCamperCollectable_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ABaseCamperCollectable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorCollectableOutlineUpdateStrategy_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCollectItemInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UDropItemInteraction_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister();
// End Cross Module References
	void ABaseCamperCollectable::StaticRegisterNativesABaseCamperCollectable()
	{
	}
	UClass* Z_Construct_UClass_ABaseCamperCollectable_NoRegister()
	{
		return ABaseCamperCollectable::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCamperCollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorCollectableOutlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorCollectableOutlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__materialHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__infectablePrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__infectablePrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collectInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dropInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dropInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectableInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collectableInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCamperCollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCamperCollectable.h" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__survivorCollectableOutlineUpdateStrategy_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__survivorCollectableOutlineUpdateStrategy = { "_survivorCollectableOutlineUpdateStrategy", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _survivorCollectableOutlineUpdateStrategy), Z_Construct_UClass_USurvivorCollectableOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__survivorCollectableOutlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__survivorCollectableOutlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__materialHelper_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__materialHelper = { "_materialHelper", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _materialHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__materialHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__materialHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__infectablePrimitive_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__infectablePrimitive = { "_infectablePrimitive", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _infectablePrimitive), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__infectablePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__infectablePrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectInteraction_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectInteraction = { "_collectInteraction", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _collectInteraction), Z_Construct_UClass_UCollectItemInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__dropInteraction_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__dropInteraction = { "_dropInteraction", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _dropInteraction), Z_Construct_UClass_UDropItemInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__dropInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__dropInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectableInteractor_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectableInteractor = { "_collectableInteractor", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _collectableInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectableInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectableInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__interactable_MetaData[] = {
		{ "Category", "BaseCamperCollectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCamperCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__interactable = { "_interactable", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCamperCollectable, _interactable), Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCamperCollectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__survivorCollectableOutlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__materialHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__infectablePrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__dropInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__collectableInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCamperCollectable_Statics::NewProp__interactable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCamperCollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCamperCollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseCamperCollectable_Statics::ClassParams = {
		&ABaseCamperCollectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseCamperCollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCamperCollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCamperCollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCamperCollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseCamperCollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCamperCollectable, 208282446);
	template<> DBDGAMEPLAY_API UClass* StaticClass<ABaseCamperCollectable>()
	{
		return ABaseCamperCollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCamperCollectable(Z_Construct_UClass_ABaseCamperCollectable, &ABaseCamperCollectable::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("ABaseCamperCollectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCamperCollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
