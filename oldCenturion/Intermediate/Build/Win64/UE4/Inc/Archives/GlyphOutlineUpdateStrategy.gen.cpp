// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/GlyphOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlyphOutlineUpdateStrategy() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UGlyphOutlineUpdateStrategy_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UGlyphOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UGlyphOutlineUpdateStrategy::StaticRegisterNativesUGlyphOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UGlyphOutlineUpdateStrategy_NoRegister()
	{
		return UGlyphOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GlyphOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/GlyphOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlyphOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::ClassParams = {
		&UGlyphOutlineUpdateStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlyphOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlyphOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlyphOutlineUpdateStrategy, 2025867206);
	template<> ARCHIVES_API UClass* StaticClass<UGlyphOutlineUpdateStrategy>()
	{
		return UGlyphOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlyphOutlineUpdateStrategy(Z_Construct_UClass_UGlyphOutlineUpdateStrategy, &UGlyphOutlineUpdateStrategy::StaticClass, TEXT("/Script/Archives"), TEXT("UGlyphOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlyphOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
