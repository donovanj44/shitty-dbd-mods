// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsHighestLevelAndClosestOriginatingEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsHighestLevelAndClosestOriginatingEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsHighestLevelAndClosestOriginatingEffect::execOnStatusEffectAddedOrRemoved)
	{
		P_GET_OBJECT(UStatusEffect,Z_Param_effect);
		P_GET_UBOOL(Z_Param_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatusEffectAddedOrRemoved(Z_Param_effect,Z_Param_valid);
		P_NATIVE_END;
	}
	void UIsHighestLevelAndClosestOriginatingEffect::StaticRegisterNativesUIsHighestLevelAndClosestOriginatingEffect()
	{
		UClass* Class = UIsHighestLevelAndClosestOriginatingEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStatusEffectAddedOrRemoved", &UIsHighestLevelAndClosestOriginatingEffect::execOnStatusEffectAddedOrRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics
	{
		struct IsHighestLevelAndClosestOriginatingEffect_eventOnStatusEffectAddedOrRemoved_Parms
		{
			UStatusEffect* effect;
			bool valid;
		};
		static void NewProp_valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_valid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((IsHighestLevelAndClosestOriginatingEffect_eventOnStatusEffectAddedOrRemoved_Parms*)Obj)->valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsHighestLevelAndClosestOriginatingEffect_eventOnStatusEffectAddedOrRemoved_Parms), &Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsHighestLevelAndClosestOriginatingEffect_eventOnStatusEffectAddedOrRemoved_Parms, effect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsHighestLevelAndClosestOriginatingEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect, nullptr, "OnStatusEffectAddedOrRemoved", nullptr, nullptr, sizeof(IsHighestLevelAndClosestOriginatingEffect_eventOnStatusEffectAddedOrRemoved_Parms), Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_NoRegister()
	{
		return UIsHighestLevelAndClosestOriginatingEffect::StaticClass();
	}
	struct Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__applicableEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__applicableEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__applicableEffects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved, "OnStatusEffectAddedOrRemoved" }, // 2758552571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsHighestLevelAndClosestOriginatingEffect.h" },
		{ "ModuleRelativePath", "Public/IsHighestLevelAndClosestOriginatingEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsHighestLevelAndClosestOriginatingEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects = { "_applicableEffects", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsHighestLevelAndClosestOriginatingEffect, _applicableEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects_Inner = { "_applicableEffects", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::NewProp__applicableEffects_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsHighestLevelAndClosestOriginatingEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::ClassParams = {
		&UIsHighestLevelAndClosestOriginatingEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsHighestLevelAndClosestOriginatingEffect, 896216934);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsHighestLevelAndClosestOriginatingEffect>()
	{
		return UIsHighestLevelAndClosestOriginatingEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsHighestLevelAndClosestOriginatingEffect(Z_Construct_UClass_UIsHighestLevelAndClosestOriginatingEffect, &UIsHighestLevelAndClosestOriginatingEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsHighestLevelAndClosestOriginatingEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsHighestLevelAndClosestOriginatingEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
