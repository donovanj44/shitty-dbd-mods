// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InGameAssetPreloaderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameAssetPreloaderComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
// End Cross Module References
	void UInGameAssetPreloaderComponent::StaticRegisterNativesUInGameAssetPreloaderComponent()
	{
	}
	UClass* Z_Construct_UClass_UInGameAssetPreloaderComponent_NoRegister()
	{
		return UInGameAssetPreloaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetGatherers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__assetGatherers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__assetGatherers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetGathererClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__assetGathererClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__assetGathererClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generalRegularAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__generalRegularAssets;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__generalRegularAssets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generalPrimaryAssetIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__generalPrimaryAssetIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generalPrimaryAssetIds_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InGameAssetPreloaderComponent.h" },
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers_MetaData[] = {
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers = { "_assetGatherers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAssetPreloaderComponent, _assetGatherers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers_Inner = { "_assetGatherers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInGameAssetPreloaderGatherer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses_MetaData[] = {
		{ "Category", "InGameAssetPreloaderComponent" },
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses = { "_assetGathererClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAssetPreloaderComponent, _assetGathererClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses_Inner = { "_assetGathererClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInGameAssetPreloaderGatherer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets_MetaData[] = {
		{ "Category", "InGameAssetPreloaderComponent" },
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets = { "_generalRegularAssets", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAssetPreloaderComponent, _generalRegularAssets), METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets_ElementProp = { "_generalRegularAssets", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds_MetaData[] = {
		{ "Category", "InGameAssetPreloaderComponent" },
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds = { "_generalPrimaryAssetIds", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAssetPreloaderComponent, _generalPrimaryAssetIds), METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds_ElementProp = { "_generalPrimaryAssetIds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGatherers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__assetGathererClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalRegularAssets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::NewProp__generalPrimaryAssetIds_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameAssetPreloaderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::ClassParams = {
		&UInGameAssetPreloaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameAssetPreloaderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameAssetPreloaderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameAssetPreloaderComponent, 3071991642);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInGameAssetPreloaderComponent>()
	{
		return UInGameAssetPreloaderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameAssetPreloaderComponent(Z_Construct_UClass_UInGameAssetPreloaderComponent, &UInGameAssetPreloaderComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInGameAssetPreloaderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameAssetPreloaderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
