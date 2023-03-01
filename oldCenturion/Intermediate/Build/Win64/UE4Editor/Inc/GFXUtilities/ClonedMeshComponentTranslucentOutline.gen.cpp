// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/ClonedMeshComponentTranslucentOutline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClonedMeshComponentTranslucentOutline() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedMeshComponentTranslucentOutline();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
// End Cross Module References
	void UClonedMeshComponentTranslucentOutline::StaticRegisterNativesUClonedMeshComponentTranslucentOutline()
	{
	}
	UClass* Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_NoRegister()
	{
		return UClonedMeshComponentTranslucentOutline::StaticClass();
	}
	struct Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClonedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ClonedMeshComponentTranslucentOutline.h" },
		{ "ModuleRelativePath", "Public/ClonedMeshComponentTranslucentOutline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClonedMeshComponentTranslucentOutline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::ClassParams = {
		&UClonedMeshComponentTranslucentOutline::StaticClass,
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
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClonedMeshComponentTranslucentOutline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClonedMeshComponentTranslucentOutline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClonedMeshComponentTranslucentOutline, 1437394099);
	template<> GFXUTILITIES_API UClass* StaticClass<UClonedMeshComponentTranslucentOutline>()
	{
		return UClonedMeshComponentTranslucentOutline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClonedMeshComponentTranslucentOutline(Z_Construct_UClass_UClonedMeshComponentTranslucentOutline, &UClonedMeshComponentTranslucentOutline::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UClonedMeshComponentTranslucentOutline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClonedMeshComponentTranslucentOutline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
