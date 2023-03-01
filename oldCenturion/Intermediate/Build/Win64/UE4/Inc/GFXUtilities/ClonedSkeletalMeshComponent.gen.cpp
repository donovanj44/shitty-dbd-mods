// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/ClonedSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClonedSkeletalMeshComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedSkeletalMeshComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
// End Cross Module References
	void UClonedSkeletalMeshComponent::StaticRegisterNativesUClonedSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UClonedSkeletalMeshComponent_NoRegister()
	{
		return UClonedSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "ClonedSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/ClonedSkeletalMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClonedSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::ClassParams = {
		&UClonedSkeletalMeshComponent::StaticClass,
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
		0x00B010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClonedSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClonedSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClonedSkeletalMeshComponent, 4227385128);
	template<> GFXUTILITIES_API UClass* StaticClass<UClonedSkeletalMeshComponent>()
	{
		return UClonedSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClonedSkeletalMeshComponent(Z_Construct_UClass_UClonedSkeletalMeshComponent, &UClonedSkeletalMeshComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UClonedSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClonedSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
