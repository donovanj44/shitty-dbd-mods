// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_FindInteractable_StatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_FindInteractable_StatusEffect() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindInteractable();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UAISkill_FindInteractable_StatusEffect::StaticRegisterNativesUAISkill_FindInteractable_StatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_NoRegister()
	{
		return UAISkill_FindInteractable_StatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertCondition_MetaData[];
#endif
		static void NewProp_InvertCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredPerkFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredPerkFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_FindInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_FindInteractable_StatusEffect.h" },
		{ "ModuleRelativePath", "Public/AISkill_FindInteractable_StatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition_MetaData[] = {
		{ "Category", "AISkill_FindInteractable_StatusEffect" },
		{ "ModuleRelativePath", "Public/AISkill_FindInteractable_StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition_SetBit(void* Obj)
	{
		((UAISkill_FindInteractable_StatusEffect*)Obj)->InvertCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition = { "InvertCondition", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_FindInteractable_StatusEffect), &Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_RequiredPerkFlag_MetaData[] = {
		{ "Category", "AISkill_FindInteractable_StatusEffect" },
		{ "ModuleRelativePath", "Public/AISkill_FindInteractable_StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_RequiredPerkFlag = { "RequiredPerkFlag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_FindInteractable_StatusEffect, RequiredPerkFlag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_RequiredPerkFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_RequiredPerkFlag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_InvertCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::NewProp_RequiredPerkFlag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_FindInteractable_StatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::ClassParams = {
		&UAISkill_FindInteractable_StatusEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_FindInteractable_StatusEffect, 1840200822);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_FindInteractable_StatusEffect>()
	{
		return UAISkill_FindInteractable_StatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_FindInteractable_StatusEffect(Z_Construct_UClass_UAISkill_FindInteractable_StatusEffect, &UAISkill_FindInteractable_StatusEffect::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_FindInteractable_StatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_FindInteractable_StatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif