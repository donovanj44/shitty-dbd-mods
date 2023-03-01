// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/IridescentStone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIridescentStone() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UIridescentStone_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UIridescentStone();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
// End Cross Module References
	void UIridescentStone::StaticRegisterNativesUIridescentStone()
	{
	}
	UClass* Z_Construct_UClass_UIridescentStone_NoRegister()
	{
		return UIridescentStone::StaticClass();
	}
	struct Z_Construct_UClass_UIridescentStone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIridescentStone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentStone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IridescentStone.h" },
		{ "ModuleRelativePath", "Public/IridescentStone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIridescentStone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIridescentStone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIridescentStone_Statics::ClassParams = {
		&UIridescentStone::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIridescentStone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentStone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIridescentStone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIridescentStone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIridescentStone, 627859148);
	template<> THETRAPPER_API UClass* StaticClass<UIridescentStone>()
	{
		return UIridescentStone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIridescentStone(Z_Construct_UClass_UIridescentStone, &UIridescentStone::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UIridescentStone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIridescentStone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
