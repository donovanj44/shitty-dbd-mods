// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/GateBlockerEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGateBlockerEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UGateBlockerEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UGateBlockerEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UGateBlockerEffect::execRemoveCantEscapeFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCantEscapeFlag();
		P_NATIVE_END;
	}
	void UGateBlockerEffect::StaticRegisterNativesUGateBlockerEffect()
	{
		UClass* Class = UGateBlockerEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveCantEscapeFlag", &UGateBlockerEffect::execRemoveCantEscapeFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGateBlockerEffect, nullptr, "RemoveCantEscapeFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGateBlockerEffect_NoRegister()
	{
		return UGateBlockerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UGateBlockerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockGateLingeringTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__blockGateLingeringTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGateBlockerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGateBlockerEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGateBlockerEffect_RemoveCantEscapeFlag, "RemoveCantEscapeFlag" }, // 3466142930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGateBlockerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GateBlockerEffect.h" },
		{ "ModuleRelativePath", "Public/GateBlockerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGateBlockerEffect_Statics::NewProp__blockGateLingeringTime_MetaData[] = {
		{ "Category", "GateBlockerEffect" },
		{ "ModuleRelativePath", "Public/GateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGateBlockerEffect_Statics::NewProp__blockGateLingeringTime = { "_blockGateLingeringTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGateBlockerEffect, _blockGateLingeringTime), METADATA_PARAMS(Z_Construct_UClass_UGateBlockerEffect_Statics::NewProp__blockGateLingeringTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGateBlockerEffect_Statics::NewProp__blockGateLingeringTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGateBlockerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGateBlockerEffect_Statics::NewProp__blockGateLingeringTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGateBlockerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGateBlockerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGateBlockerEffect_Statics::ClassParams = {
		&UGateBlockerEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGateBlockerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGateBlockerEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGateBlockerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGateBlockerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGateBlockerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGateBlockerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGateBlockerEffect, 1475561425);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UGateBlockerEffect>()
	{
		return UGateBlockerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGateBlockerEffect(Z_Construct_UClass_UGateBlockerEffect, &UGateBlockerEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UGateBlockerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGateBlockerEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
