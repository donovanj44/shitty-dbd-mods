// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/MultiSceneComponentPointProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiSceneComponentPointProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UMultiSceneComponentPointProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UMultiSceneComponentPointProvider();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void UMultiSceneComponentPointProvider::StaticRegisterNativesUMultiSceneComponentPointProvider()
	{
	}
	UClass* Z_Construct_UClass_UMultiSceneComponentPointProvider_NoRegister()
	{
		return UMultiSceneComponentPointProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sceneComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__sceneComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sceneComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sceneReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__sceneReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__sceneReferences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointsProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiSceneComponentPointProvider.h" },
		{ "ModuleRelativePath", "Public/MultiSceneComponentPointProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiSceneComponentPointProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents = { "_sceneComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiSceneComponentPointProvider, _sceneComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents_Inner = { "_sceneComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences_MetaData[] = {
		{ "Category", "MultiSceneComponentPointProvider" },
		{ "ModuleRelativePath", "Public/MultiSceneComponentPointProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences = { "_sceneReferences", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiSceneComponentPointProvider, _sceneReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences_Inner = { "_sceneReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::NewProp__sceneReferences_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSceneComponentPointProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::ClassParams = {
		&UMultiSceneComponentPointProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiSceneComponentPointProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiSceneComponentPointProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiSceneComponentPointProvider, 2273773146);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UMultiSceneComponentPointProvider>()
	{
		return UMultiSceneComponentPointProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiSceneComponentPointProvider(Z_Construct_UClass_UMultiSceneComponentPointProvider, &UMultiSceneComponentPointProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UMultiSceneComponentPointProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSceneComponentPointProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
