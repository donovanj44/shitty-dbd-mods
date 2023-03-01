// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsHighestTierOriginatingPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsHighestTierOriginatingPerk() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHighestTierOriginatingPerk_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHighestTierOriginatingPerk();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsHighestTierOriginatingPerk::execOnStatusEffectAddedOrRemoved)
	{
		P_GET_OBJECT(UStatusEffect,Z_Param_effect);
		P_GET_UBOOL(Z_Param_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatusEffectAddedOrRemoved(Z_Param_effect,Z_Param_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsHighestTierOriginatingPerk::execOnStatusEffectApplicableChanged)
	{
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_gameplayModifierContainer);
		P_GET_UBOOL(Z_Param_isApplicable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatusEffectApplicableChanged(Z_Param_gameplayModifierContainer,Z_Param_isApplicable);
		P_NATIVE_END;
	}
	void UIsHighestTierOriginatingPerk::StaticRegisterNativesUIsHighestTierOriginatingPerk()
	{
		UClass* Class = UIsHighestTierOriginatingPerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStatusEffectAddedOrRemoved", &UIsHighestTierOriginatingPerk::execOnStatusEffectAddedOrRemoved },
			{ "OnStatusEffectApplicableChanged", &UIsHighestTierOriginatingPerk::execOnStatusEffectApplicableChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics
	{
		struct IsHighestTierOriginatingPerk_eventOnStatusEffectAddedOrRemoved_Parms
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
	void Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((IsHighestTierOriginatingPerk_eventOnStatusEffectAddedOrRemoved_Parms*)Obj)->valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsHighestTierOriginatingPerk_eventOnStatusEffectAddedOrRemoved_Parms), &Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsHighestTierOriginatingPerk_eventOnStatusEffectAddedOrRemoved_Parms, effect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::NewProp_effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsHighestTierOriginatingPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsHighestTierOriginatingPerk, nullptr, "OnStatusEffectAddedOrRemoved", nullptr, nullptr, sizeof(IsHighestTierOriginatingPerk_eventOnStatusEffectAddedOrRemoved_Parms), Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics
	{
		struct IsHighestTierOriginatingPerk_eventOnStatusEffectApplicableChanged_Parms
		{
			UGameplayModifierContainer* gameplayModifierContainer;
			bool isApplicable;
		};
		static void NewProp_isApplicable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isApplicable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameplayModifierContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameplayModifierContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_isApplicable_SetBit(void* Obj)
	{
		((IsHighestTierOriginatingPerk_eventOnStatusEffectApplicableChanged_Parms*)Obj)->isApplicable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_isApplicable = { "isApplicable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsHighestTierOriginatingPerk_eventOnStatusEffectApplicableChanged_Parms), &Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_isApplicable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_gameplayModifierContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_gameplayModifierContainer = { "gameplayModifierContainer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsHighestTierOriginatingPerk_eventOnStatusEffectApplicableChanged_Parms, gameplayModifierContainer), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_gameplayModifierContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_gameplayModifierContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_isApplicable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::NewProp_gameplayModifierContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsHighestTierOriginatingPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsHighestTierOriginatingPerk, nullptr, "OnStatusEffectApplicableChanged", nullptr, nullptr, sizeof(IsHighestTierOriginatingPerk_eventOnStatusEffectApplicableChanged_Parms), Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsHighestTierOriginatingPerk_NoRegister()
	{
		return UIsHighestTierOriginatingPerk::StaticClass();
	}
	struct Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics
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
	UObject* (*const Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved, "OnStatusEffectAddedOrRemoved" }, // 4085045256
		{ &Z_Construct_UFunction_UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged, "OnStatusEffectApplicableChanged" }, // 1726295737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsHighestTierOriginatingPerk.h" },
		{ "ModuleRelativePath", "Public/IsHighestTierOriginatingPerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsHighestTierOriginatingPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects = { "_applicableEffects", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsHighestTierOriginatingPerk, _applicableEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects_Inner = { "_applicableEffects", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::NewProp__applicableEffects_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsHighestTierOriginatingPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::ClassParams = {
		&UIsHighestTierOriginatingPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsHighestTierOriginatingPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsHighestTierOriginatingPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsHighestTierOriginatingPerk, 1855451802);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsHighestTierOriginatingPerk>()
	{
		return UIsHighestTierOriginatingPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsHighestTierOriginatingPerk(Z_Construct_UClass_UIsHighestTierOriginatingPerk, &UIsHighestTierOriginatingPerk::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsHighestTierOriginatingPerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsHighestTierOriginatingPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
