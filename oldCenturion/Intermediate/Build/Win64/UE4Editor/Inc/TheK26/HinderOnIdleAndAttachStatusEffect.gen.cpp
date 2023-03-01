// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/HinderOnIdleAndAttachStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHinderOnIdleAndAttachStatusEffect() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULingeringStateTagStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UHinderOnIdleAndAttachStatusEffect::StaticRegisterNativesUHinderOnIdleAndAttachStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_NoRegister()
	{
		return UHinderOnIdleAndAttachStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCrowAttachStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__onCrowAttachStateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULingeringStateTagStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HinderOnIdleAndAttachStatusEffect.h" },
		{ "ModuleRelativePath", "Public/HinderOnIdleAndAttachStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData[] = {
		{ "Category", "HinderOnIdleAndAttachStatusEffect" },
		{ "ModuleRelativePath", "Public/HinderOnIdleAndAttachStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag = { "_onCrowAttachStateTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHinderOnIdleAndAttachStatusEffect, _onCrowAttachStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::NewProp__onCrowAttachStateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHinderOnIdleAndAttachStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::ClassParams = {
		&UHinderOnIdleAndAttachStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHinderOnIdleAndAttachStatusEffect, 1627093057);
	template<> THEK26_API UClass* StaticClass<UHinderOnIdleAndAttachStatusEffect>()
	{
		return UHinderOnIdleAndAttachStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHinderOnIdleAndAttachStatusEffect(Z_Construct_UClass_UHinderOnIdleAndAttachStatusEffect, &UHinderOnIdleAndAttachStatusEffect::StaticClass, TEXT("/Script/TheK26"), TEXT("UHinderOnIdleAndAttachStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHinderOnIdleAndAttachStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
