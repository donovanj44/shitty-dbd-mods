// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/IridescentBrickAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIridescentBrickAddon() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UIridescentBrickAddon_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UIridescentBrickAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	void UIridescentBrickAddon::StaticRegisterNativesUIridescentBrickAddon()
	{
	}
	UClass* Z_Construct_UClass_UIridescentBrickAddon_NoRegister()
	{
		return UIridescentBrickAddon::StaticClass();
	}
	struct Z_Construct_UClass_UIridescentBrickAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undetectableStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__undetectableStatusEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIridescentBrickAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentBrickAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IridescentBrickAddon.h" },
		{ "ModuleRelativePath", "Public/IridescentBrickAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIridescentBrickAddon_Statics::NewProp__undetectableStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IridescentBrickAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIridescentBrickAddon_Statics::NewProp__undetectableStatusEffect = { "_undetectableStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIridescentBrickAddon, _undetectableStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIridescentBrickAddon_Statics::NewProp__undetectableStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentBrickAddon_Statics::NewProp__undetectableStatusEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIridescentBrickAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIridescentBrickAddon_Statics::NewProp__undetectableStatusEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIridescentBrickAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIridescentBrickAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIridescentBrickAddon_Statics::ClassParams = {
		&UIridescentBrickAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIridescentBrickAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentBrickAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIridescentBrickAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIridescentBrickAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIridescentBrickAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIridescentBrickAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIridescentBrickAddon, 449858577);
	template<> THEHILLBILLY_API UClass* StaticClass<UIridescentBrickAddon>()
	{
		return UIridescentBrickAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIridescentBrickAddon(Z_Construct_UClass_UIridescentBrickAddon, &UIridescentBrickAddon::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UIridescentBrickAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIridescentBrickAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
