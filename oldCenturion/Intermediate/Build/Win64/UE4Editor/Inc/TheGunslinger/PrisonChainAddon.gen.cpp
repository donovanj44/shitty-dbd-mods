// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/PrisonChainAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrisonChainAddon() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UPrisonChainAddon_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UPrisonChainAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UPrisonChainAddon::StaticRegisterNativesUPrisonChainAddon()
	{
	}
	UClass* Z_Construct_UClass_UPrisonChainAddon_NoRegister()
	{
		return UPrisonChainAddon::StaticClass();
	}
	struct Z_Construct_UClass_UPrisonChainAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tensionChargeModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__tensionChargeModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTensionCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxTensionCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrisonChainAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrisonChainAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PrisonChainAddon.h" },
		{ "ModuleRelativePath", "Public/PrisonChainAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__tensionChargeModifier_MetaData[] = {
		{ "Category", "PrisonChainAddon" },
		{ "ModuleRelativePath", "Public/PrisonChainAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__tensionChargeModifier = { "_tensionChargeModifier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrisonChainAddon, _tensionChargeModifier), METADATA_PARAMS(Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__tensionChargeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__tensionChargeModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__maxTensionCharge_MetaData[] = {
		{ "Category", "PrisonChainAddon" },
		{ "ModuleRelativePath", "Public/PrisonChainAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__maxTensionCharge = { "_maxTensionCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrisonChainAddon, _maxTensionCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__maxTensionCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__maxTensionCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrisonChainAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__tensionChargeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrisonChainAddon_Statics::NewProp__maxTensionCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrisonChainAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrisonChainAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrisonChainAddon_Statics::ClassParams = {
		&UPrisonChainAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrisonChainAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrisonChainAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPrisonChainAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrisonChainAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrisonChainAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrisonChainAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrisonChainAddon, 4127942579);
	template<> THEGUNSLINGER_API UClass* StaticClass<UPrisonChainAddon>()
	{
		return UPrisonChainAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrisonChainAddon(Z_Construct_UClass_UPrisonChainAddon, &UPrisonChainAddon::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UPrisonChainAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrisonChainAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
