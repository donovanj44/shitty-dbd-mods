// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/LingeringStateTagStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLingeringStateTagStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULingeringStateTagStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULingeringStateTagStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void ULingeringStateTagStatusEffect::StaticRegisterNativesULingeringStateTagStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_ULingeringStateTagStatusEffect_NoRegister()
	{
		return ULingeringStateTagStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ownerStateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLingeringStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LingeringStateTagStatusEffect.h" },
		{ "ModuleRelativePath", "Public/LingeringStateTagStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::NewProp__ownerStateTag_MetaData[] = {
		{ "Category", "LingeringStateTagStatusEffect" },
		{ "ModuleRelativePath", "Public/LingeringStateTagStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::NewProp__ownerStateTag = { "_ownerStateTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULingeringStateTagStatusEffect, _ownerStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::NewProp__ownerStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::NewProp__ownerStateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::NewProp__ownerStateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULingeringStateTagStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::ClassParams = {
		&ULingeringStateTagStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULingeringStateTagStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULingeringStateTagStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULingeringStateTagStatusEffect, 3557251187);
	template<> DBDCOMPETENCE_API UClass* StaticClass<ULingeringStateTagStatusEffect>()
	{
		return ULingeringStateTagStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULingeringStateTagStatusEffect(Z_Construct_UClass_ULingeringStateTagStatusEffect, &ULingeringStateTagStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("ULingeringStateTagStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULingeringStateTagStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
