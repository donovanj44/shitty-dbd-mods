// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/ChainKillerMovementStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainKillerMovementStatusEffect() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainKillerMovementStatusEffect_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainKillerMovementStatusEffect();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UChainPlayerMovementStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UChainKillerMovementStatusEffect::StaticRegisterNativesUChainKillerMovementStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UChainKillerMovementStatusEffect_NoRegister()
	{
		return UChainKillerMovementStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backwardMovementAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__backwardMovementAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__backwardMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__backwardMovementSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainPlayerMovementStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChainKillerMovementStatusEffect.h" },
		{ "ModuleRelativePath", "Public/ChainKillerMovementStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementAngle_MetaData[] = {
		{ "Category", "ChainKillerMovementStatusEffect" },
		{ "ModuleRelativePath", "Public/ChainKillerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementAngle = { "_backwardMovementAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainKillerMovementStatusEffect, _backwardMovementAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "ChainKillerMovementStatusEffect" },
		{ "ModuleRelativePath", "Public/ChainKillerMovementStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementSpeedMultiplier = { "_backwardMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainKillerMovementStatusEffect, _backwardMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::NewProp__backwardMovementSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainKillerMovementStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::ClassParams = {
		&UChainKillerMovementStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainKillerMovementStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainKillerMovementStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainKillerMovementStatusEffect, 65900121);
	template<> THEGUNSLINGER_API UClass* StaticClass<UChainKillerMovementStatusEffect>()
	{
		return UChainKillerMovementStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainKillerMovementStatusEffect(Z_Construct_UClass_UChainKillerMovementStatusEffect, &UChainKillerMovementStatusEffect::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UChainKillerMovementStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainKillerMovementStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
