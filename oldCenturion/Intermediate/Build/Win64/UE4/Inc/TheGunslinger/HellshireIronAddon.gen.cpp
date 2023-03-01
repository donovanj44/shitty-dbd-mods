// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HellshireIronAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHellshireIronAddon() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHellshireIronAddon_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHellshireIronAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	void UHellshireIronAddon::StaticRegisterNativesUHellshireIronAddon()
	{
	}
	UClass* Z_Construct_UClass_UHellshireIronAddon_NoRegister()
	{
		return UHellshireIronAddon::StaticClass();
	}
	struct Z_Construct_UClass_UHellshireIronAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undetectableDurationPostHarpoon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__undetectableDurationPostHarpoon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHellshireIronAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHellshireIronAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HellshireIronAddon.h" },
		{ "ModuleRelativePath", "Public/HellshireIronAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__statusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HellshireIronAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__statusEffect = { "_statusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHellshireIronAddon, _statusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__statusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__statusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__undetectableDurationPostHarpoon_MetaData[] = {
		{ "Category", "HellshireIronAddon" },
		{ "ModuleRelativePath", "Public/HellshireIronAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__undetectableDurationPostHarpoon = { "_undetectableDurationPostHarpoon", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHellshireIronAddon, _undetectableDurationPostHarpoon), METADATA_PARAMS(Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__undetectableDurationPostHarpoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__undetectableDurationPostHarpoon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHellshireIronAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__statusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHellshireIronAddon_Statics::NewProp__undetectableDurationPostHarpoon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHellshireIronAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHellshireIronAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHellshireIronAddon_Statics::ClassParams = {
		&UHellshireIronAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHellshireIronAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHellshireIronAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHellshireIronAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHellshireIronAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHellshireIronAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHellshireIronAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHellshireIronAddon, 4066888423);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHellshireIronAddon>()
	{
		return UHellshireIronAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHellshireIronAddon(Z_Construct_UClass_UHellshireIronAddon, &UHellshireIronAddon::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHellshireIronAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHellshireIronAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
