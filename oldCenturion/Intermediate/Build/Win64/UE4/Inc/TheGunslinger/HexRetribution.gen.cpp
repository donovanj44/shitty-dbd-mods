// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HexRetribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexRetribution() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHexRetribution_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHexRetribution();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UHexRetribution::StaticRegisterNativesUHexRetribution()
	{
	}
	UClass* Z_Construct_UClass_UHexRetribution_NoRegister()
	{
		return UHexRetribution::StaticClass();
	}
	struct Z_Construct_UClass_UHexRetribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obliviousDurationByLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__obliviousDurationByLevels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexRetribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexRetribution_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexRetribution.h" },
		{ "ModuleRelativePath", "Public/HexRetribution.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexRetribution_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "Category", "HexRetribution" },
		{ "ModuleRelativePath", "Public/HexRetribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexRetribution_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexRetribution, _auraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UHexRetribution_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexRetribution_Statics::NewProp__auraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexRetribution_Statics::NewProp__obliviousDurationByLevels_MetaData[] = {
		{ "Category", "HexRetribution" },
		{ "ModuleRelativePath", "Public/HexRetribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexRetribution_Statics::NewProp__obliviousDurationByLevels = { "_obliviousDurationByLevels", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_obliviousDurationByLevels, UHexRetribution), STRUCT_OFFSET(UHexRetribution, _obliviousDurationByLevels), METADATA_PARAMS(Z_Construct_UClass_UHexRetribution_Statics::NewProp__obliviousDurationByLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexRetribution_Statics::NewProp__obliviousDurationByLevels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexRetribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexRetribution_Statics::NewProp__auraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexRetribution_Statics::NewProp__obliviousDurationByLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexRetribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexRetribution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexRetribution_Statics::ClassParams = {
		&UHexRetribution::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHexRetribution_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexRetribution_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexRetribution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexRetribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexRetribution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexRetribution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexRetribution, 229815470);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHexRetribution>()
	{
		return UHexRetribution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexRetribution(Z_Construct_UClass_UHexRetribution, &UHexRetribution::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHexRetribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexRetribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
