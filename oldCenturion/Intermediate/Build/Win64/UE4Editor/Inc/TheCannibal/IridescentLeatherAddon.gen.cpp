// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/IridescentLeatherAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIridescentLeatherAddon() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UIridescentLeatherAddon_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UIridescentLeatherAddon();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawHitEventAddon();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UIridescentLeatherAddon::StaticRegisterNativesUIridescentLeatherAddon()
	{
	}
	UClass* Z_Construct_UClass_UIridescentLeatherAddon_NoRegister()
	{
		return UIridescentLeatherAddon::StaticClass();
	}
	struct Z_Construct_UClass_UIridescentLeatherAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIridescentLeatherAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCannibalChainsawHitEventAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentLeatherAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IridescentLeatherAddon.h" },
		{ "ModuleRelativePath", "Public/IridescentLeatherAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIridescentLeatherAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIridescentLeatherAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIridescentLeatherAddon_Statics::ClassParams = {
		&UIridescentLeatherAddon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIridescentLeatherAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentLeatherAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIridescentLeatherAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIridescentLeatherAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIridescentLeatherAddon, 2963565354);
	template<> THECANNIBAL_API UClass* StaticClass<UIridescentLeatherAddon>()
	{
		return UIridescentLeatherAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIridescentLeatherAddon(Z_Construct_UClass_UIridescentLeatherAddon, &UIridescentLeatherAddon::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UIridescentLeatherAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIridescentLeatherAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
