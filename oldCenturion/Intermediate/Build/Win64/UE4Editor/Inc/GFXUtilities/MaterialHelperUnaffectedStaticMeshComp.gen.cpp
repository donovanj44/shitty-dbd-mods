// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialHelperUnaffectedStaticMeshComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialHelperUnaffectedStaticMeshComp() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
// End Cross Module References
	void UMaterialHelperUnaffectedStaticMeshComp::StaticRegisterNativesUMaterialHelperUnaffectedStaticMeshComp()
	{
	}
	UClass* Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_NoRegister()
	{
		return UMaterialHelperUnaffectedStaticMeshComp::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MaterialHelperUnaffectedStaticMeshComp.h" },
		{ "ModuleRelativePath", "Public/MaterialHelperUnaffectedStaticMeshComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialHelperUnaffectedStaticMeshComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::ClassParams = {
		&UMaterialHelperUnaffectedStaticMeshComp::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialHelperUnaffectedStaticMeshComp, 966671975);
	template<> GFXUTILITIES_API UClass* StaticClass<UMaterialHelperUnaffectedStaticMeshComp>()
	{
		return UMaterialHelperUnaffectedStaticMeshComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialHelperUnaffectedStaticMeshComp(Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp, &UMaterialHelperUnaffectedStaticMeshComp::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UMaterialHelperUnaffectedStaticMeshComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialHelperUnaffectedStaticMeshComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
