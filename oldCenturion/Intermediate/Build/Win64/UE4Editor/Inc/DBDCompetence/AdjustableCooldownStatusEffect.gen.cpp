// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/AdjustableCooldownStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdjustableCooldownStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAdjustableCooldownStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAdjustableCooldownStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UAdjustableCooldownStatusEffect::StaticRegisterNativesUAdjustableCooldownStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UAdjustableCooldownStatusEffect_NoRegister()
	{
		return UAdjustableCooldownStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownModifierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownModifierType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdjustableCooldownStatusEffect.h" },
		{ "ModuleRelativePath", "Public/AdjustableCooldownStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::NewProp_CooldownModifierType_MetaData[] = {
		{ "Category", "AdjustableCooldownStatusEffect" },
		{ "ModuleRelativePath", "Public/AdjustableCooldownStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::NewProp_CooldownModifierType = { "CooldownModifierType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdjustableCooldownStatusEffect, CooldownModifierType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::NewProp_CooldownModifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::NewProp_CooldownModifierType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::NewProp_CooldownModifierType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdjustableCooldownStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::ClassParams = {
		&UAdjustableCooldownStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdjustableCooldownStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdjustableCooldownStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdjustableCooldownStatusEffect, 1265939810);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAdjustableCooldownStatusEffect>()
	{
		return UAdjustableCooldownStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdjustableCooldownStatusEffect(Z_Construct_UClass_UAdjustableCooldownStatusEffect, &UAdjustableCooldownStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAdjustableCooldownStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdjustableCooldownStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
