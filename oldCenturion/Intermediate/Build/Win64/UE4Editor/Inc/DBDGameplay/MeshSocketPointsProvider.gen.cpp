// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/MeshSocketPointsProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSocketPointsProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UMeshSocketPointsProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UMeshSocketPointsProvider();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void UMeshSocketPointsProvider::StaticRegisterNativesUMeshSocketPointsProvider()
	{
	}
	UClass* Z_Construct_UClass_UMeshSocketPointsProvider_NoRegister()
	{
		return UMeshSocketPointsProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSocketPointsProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__sockets;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__meshReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSocketPointsProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointsProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSocketPointsProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSocketPointsProvider.h" },
		{ "ModuleRelativePath", "Public/MeshSocketPointsProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets_MetaData[] = {
		{ "Category", "MeshSocketPointsProvider" },
		{ "ModuleRelativePath", "Public/MeshSocketPointsProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets = { "_sockets", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSocketPointsProvider, _sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets_Inner = { "_sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshSocketPointsProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSocketPointsProvider, _mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__meshReference_MetaData[] = {
		{ "Category", "MeshSocketPointsProvider" },
		{ "ModuleRelativePath", "Public/MeshSocketPointsProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__meshReference = { "_meshReference", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSocketPointsProvider, _meshReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__meshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__meshReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSocketPointsProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSocketPointsProvider_Statics::NewProp__meshReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSocketPointsProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSocketPointsProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshSocketPointsProvider_Statics::ClassParams = {
		&UMeshSocketPointsProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSocketPointsProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSocketPointsProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSocketPointsProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshSocketPointsProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSocketPointsProvider, 1471513145);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UMeshSocketPointsProvider>()
	{
		return UMeshSocketPointsProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSocketPointsProvider(Z_Construct_UClass_UMeshSocketPointsProvider, &UMeshSocketPointsProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UMeshSocketPointsProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSocketPointsProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
