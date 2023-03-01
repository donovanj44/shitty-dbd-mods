// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/BaseLingeringStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLingeringStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UBaseLingeringStatusEffect::execAuthority_ActivateEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ActivateEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLingeringStatusEffect::execAuthority_DeactivateEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DeactivateEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseLingeringStatusEffect::execSetLingerDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lingerDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLingerDuration(Z_Param_lingerDuration);
		P_NATIVE_END;
	}
	void UBaseLingeringStatusEffect::StaticRegisterNativesUBaseLingeringStatusEffect()
	{
		UClass* Class = UBaseLingeringStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ActivateEffect", &UBaseLingeringStatusEffect::execAuthority_ActivateEffect },
			{ "Authority_DeactivateEffect", &UBaseLingeringStatusEffect::execAuthority_DeactivateEffect },
			{ "SetLingerDuration", &UBaseLingeringStatusEffect::execSetLingerDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLingeringStatusEffect, nullptr, "Authority_ActivateEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLingeringStatusEffect, nullptr, "Authority_DeactivateEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics
	{
		struct BaseLingeringStatusEffect_eventSetLingerDuration_Parms
		{
			float lingerDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lingerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration = { "lingerDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLingeringStatusEffect_eventSetLingerDuration_Parms, lingerDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseLingeringStatusEffect, nullptr, "SetLingerDuration", nullptr, nullptr, sizeof(BaseLingeringStatusEffect_eventSetLingerDuration_Parms), Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseLingeringStatusEffect_NoRegister()
	{
		return UBaseLingeringStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLingeringStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lingerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_ActivateEffect, "Authority_ActivateEffect" }, // 3470935242
		{ &Z_Construct_UFunction_UBaseLingeringStatusEffect_Authority_DeactivateEffect, "Authority_DeactivateEffect" }, // 1363982750
		{ &Z_Construct_UFunction_UBaseLingeringStatusEffect_SetLingerDuration, "SetLingerDuration" }, // 2545757128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLingeringStatusEffect.h" },
		{ "ModuleRelativePath", "Public/BaseLingeringStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "BaseLingeringStatusEffect" },
		{ "ModuleRelativePath", "Public/BaseLingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLingeringStatusEffect, _lingerDuration), METADATA_PARAMS(Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::NewProp__lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::NewProp__lingerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLingeringStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::ClassParams = {
		&UBaseLingeringStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLingeringStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseLingeringStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseLingeringStatusEffect, 3355760647);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBaseLingeringStatusEffect>()
	{
		return UBaseLingeringStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseLingeringStatusEffect(Z_Construct_UClass_UBaseLingeringStatusEffect, &UBaseLingeringStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBaseLingeringStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLingeringStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
