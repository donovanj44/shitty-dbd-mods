// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MeshCloningFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshCloningFactory() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMeshCloningFactory_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMeshCloningFactory();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
// End Cross Module References
	void UMeshCloningFactory::StaticRegisterNativesUMeshCloningFactory()
	{
	}
	UClass* Z_Construct_UClass_UMeshCloningFactory_NoRegister()
	{
		return UMeshCloningFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMeshCloningFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshCloningFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBatchMeshCommands,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshCloningFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MeshCloningFactory.h" },
		{ "ModuleRelativePath", "Public/MeshCloningFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshCloningFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshCloningFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshCloningFactory_Statics::ClassParams = {
		&UMeshCloningFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B002ACu,
		METADATA_PARAMS(Z_Construct_UClass_UMeshCloningFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshCloningFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshCloningFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshCloningFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshCloningFactory, 1321838517);
	template<> GFXUTILITIES_API UClass* StaticClass<UMeshCloningFactory>()
	{
		return UMeshCloningFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshCloningFactory(Z_Construct_UClass_UMeshCloningFactory, &UMeshCloningFactory::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UMeshCloningFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshCloningFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
