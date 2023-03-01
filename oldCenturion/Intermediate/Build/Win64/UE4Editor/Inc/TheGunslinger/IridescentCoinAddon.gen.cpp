// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/IridescentCoinAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIridescentCoinAddon() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UIridescentCoinAddon_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UIridescentCoinAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	void UIridescentCoinAddon::StaticRegisterNativesUIridescentCoinAddon()
	{
	}
	UClass* Z_Construct_UClass_UIridescentCoinAddon_NoRegister()
	{
		return UIridescentCoinAddon::StaticClass();
	}
	struct Z_Construct_UClass_UIridescentCoinAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exposedStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exposedStatusEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIridescentCoinAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentCoinAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IridescentCoinAddon.h" },
		{ "ModuleRelativePath", "Public/IridescentCoinAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentCoinAddon_Statics::NewProp__exposedStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IridescentCoinAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIridescentCoinAddon_Statics::NewProp__exposedStatusEffect = { "_exposedStatusEffect", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIridescentCoinAddon, _exposedStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIridescentCoinAddon_Statics::NewProp__exposedStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentCoinAddon_Statics::NewProp__exposedStatusEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIridescentCoinAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIridescentCoinAddon_Statics::NewProp__exposedStatusEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIridescentCoinAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIridescentCoinAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIridescentCoinAddon_Statics::ClassParams = {
		&UIridescentCoinAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIridescentCoinAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentCoinAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIridescentCoinAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentCoinAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIridescentCoinAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIridescentCoinAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIridescentCoinAddon, 3458756106);
	template<> THEGUNSLINGER_API UClass* StaticClass<UIridescentCoinAddon>()
	{
		return UIridescentCoinAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIridescentCoinAddon(Z_Construct_UClass_UIridescentCoinAddon, &UIridescentCoinAddon::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UIridescentCoinAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIridescentCoinAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
