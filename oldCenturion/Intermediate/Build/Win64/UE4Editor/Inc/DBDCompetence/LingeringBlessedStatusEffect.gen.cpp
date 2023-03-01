// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/LingeringBlessedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLingeringBlessedStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULingeringBlessedStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ULingeringBlessedStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBlessedStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(ULingeringBlessedStatusEffect::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULingeringBlessedStatusEffect::execSetLingerDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lingerDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLingerDuration(Z_Param_lingerDuration);
		P_NATIVE_END;
	}
	void ULingeringBlessedStatusEffect::StaticRegisterNativesULingeringBlessedStatusEffect()
	{
		UClass* Class = ULingeringBlessedStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInRangeChanged", &ULingeringBlessedStatusEffect::execAuthority_OnInRangeChanged },
			{ "SetLingerDuration", &ULingeringBlessedStatusEffect::execSetLingerDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics
	{
		struct LingeringBlessedStatusEffect_eventAuthority_OnInRangeChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((LingeringBlessedStatusEffect_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LingeringBlessedStatusEffect_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LingeringBlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULingeringBlessedStatusEffect, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(LingeringBlessedStatusEffect_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics
	{
		struct LingeringBlessedStatusEffect_eventSetLingerDuration_Parms
		{
			float lingerDuration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lingerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration = { "lingerDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LingeringBlessedStatusEffect_eventSetLingerDuration_Parms, lingerDuration), METADATA_PARAMS(Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::NewProp_lingerDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LingeringBlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULingeringBlessedStatusEffect, nullptr, "SetLingerDuration", nullptr, nullptr, sizeof(LingeringBlessedStatusEffect_eventSetLingerDuration_Parms), Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULingeringBlessedStatusEffect_NoRegister()
	{
		return ULingeringBlessedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics
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
	UObject* (*const Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlessedStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULingeringBlessedStatusEffect_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 3025052243
		{ &Z_Construct_UFunction_ULingeringBlessedStatusEffect_SetLingerDuration, "SetLingerDuration" }, // 3278012747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LingeringBlessedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/LingeringBlessedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "LingeringBlessedStatusEffect" },
		{ "ModuleRelativePath", "Public/LingeringBlessedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULingeringBlessedStatusEffect, _lingerDuration), METADATA_PARAMS(Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::NewProp__lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::NewProp__lingerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULingeringBlessedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::ClassParams = {
		&ULingeringBlessedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULingeringBlessedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULingeringBlessedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULingeringBlessedStatusEffect, 1800605624);
	template<> DBDCOMPETENCE_API UClass* StaticClass<ULingeringBlessedStatusEffect>()
	{
		return ULingeringBlessedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULingeringBlessedStatusEffect(Z_Construct_UClass_ULingeringBlessedStatusEffect, &ULingeringBlessedStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("ULingeringBlessedStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULingeringBlessedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
