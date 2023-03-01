// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/GlyphInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlyphInteraction() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UGlyphInteraction_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UGlyphInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UGlyphInteraction::StaticRegisterNativesUGlyphInteraction()
	{
	}
	UClass* Z_Construct_UClass_UGlyphInteraction_NoRegister()
	{
		return UGlyphInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGlyphInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlyphInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GlyphInteraction.h" },
		{ "ModuleRelativePath", "Public/GlyphInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlyphInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlyphInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlyphInteraction_Statics::ClassParams = {
		&UGlyphInteraction::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGlyphInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlyphInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlyphInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlyphInteraction, 318934333);
	template<> ARCHIVES_API UClass* StaticClass<UGlyphInteraction>()
	{
		return UGlyphInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlyphInteraction(Z_Construct_UClass_UGlyphInteraction, &UGlyphInteraction::StaticClass, TEXT("/Script/Archives"), TEXT("UGlyphInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlyphInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
