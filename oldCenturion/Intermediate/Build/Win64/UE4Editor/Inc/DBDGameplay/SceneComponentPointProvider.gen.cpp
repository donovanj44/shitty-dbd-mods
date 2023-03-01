// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/SceneComponentPointProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneComponentPointProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USceneComponentPointProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USceneComponentPointProvider();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void USceneComponentPointProvider::StaticRegisterNativesUSceneComponentPointProvider()
	{
	}
	UClass* Z_Construct_UClass_USceneComponentPointProvider_NoRegister()
	{
		return USceneComponentPointProvider::StaticClass();
	}
	struct Z_Construct_UClass_USceneComponentPointProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sceneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__sceneReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneComponentPointProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointsProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponentPointProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneComponentPointProvider.h" },
		{ "ModuleRelativePath", "Public/SceneComponentPointProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SceneComponentPointProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneComponent = { "_sceneComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneComponentPointProvider, _sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneReference_MetaData[] = {
		{ "Category", "SceneComponentPointProvider" },
		{ "ModuleRelativePath", "Public/SceneComponentPointProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneReference = { "_sceneReference", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneComponentPointProvider, _sceneReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneComponentPointProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponentPointProvider_Statics::NewProp__sceneReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneComponentPointProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneComponentPointProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneComponentPointProvider_Statics::ClassParams = {
		&USceneComponentPointProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneComponentPointProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentPointProvider_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneComponentPointProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentPointProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneComponentPointProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneComponentPointProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneComponentPointProvider, 169732502);
	template<> DBDGAMEPLAY_API UClass* StaticClass<USceneComponentPointProvider>()
	{
		return USceneComponentPointProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneComponentPointProvider(Z_Construct_UClass_USceneComponentPointProvider, &USceneComponentPointProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("USceneComponentPointProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneComponentPointProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
