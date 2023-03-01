// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/SoulGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulGuard() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_USoulGuard_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_USoulGuard();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCamperHealResult();
// End Cross Module References
	DEFINE_FUNCTION(USoulGuard::execAuthority_OnSurvivorHealed)
	{
		P_GET_STRUCT_REF(FCamperHealResult,Z_Param_Out_healResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorHealed(Z_Param_Out_healResult);
		P_NATIVE_END;
	}
	static FName NAME_USoulGuard_Authority_ShowOnKOPreventedFX = FName(TEXT("Authority_ShowOnKOPreventedFX"));
	void USoulGuard::Authority_ShowOnKOPreventedFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_USoulGuard_Authority_ShowOnKOPreventedFX),NULL);
	}
	void USoulGuard::StaticRegisterNativesUSoulGuard()
	{
		UClass* Class = USoulGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorHealed", &USoulGuard::execAuthority_OnSurvivorHealed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics
	{
		struct SoulGuard_eventAuthority_OnSurvivorHealed_Parms
		{
			FCamperHealResult healResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_healResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::NewProp_healResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::NewProp_healResult = { "healResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulGuard_eventAuthority_OnSurvivorHealed_Parms, healResult), Z_Construct_UScriptStruct_FCamperHealResult, METADATA_PARAMS(Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::NewProp_healResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::NewProp_healResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::NewProp_healResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulGuard, nullptr, "Authority_OnSurvivorHealed", nullptr, nullptr, sizeof(SoulGuard_eventAuthority_OnSurvivorHealed_Parms), Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulGuard, nullptr, "Authority_ShowOnKOPreventedFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoulGuard_NoRegister()
	{
		return USoulGuard::StaticClass();
	}
	struct Z_Construct_UClass_USoulGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enduranceEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__enduranceEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recover_MetaData[];
#endif
		static void NewProp__recover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__recover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownLevels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoulGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoulGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoulGuard_Authority_OnSurvivorHealed, "Authority_OnSurvivorHealed" }, // 3582256672
		{ &Z_Construct_UFunction_USoulGuard_Authority_ShowOnKOPreventedFX, "Authority_ShowOnKOPreventedFX" }, // 3692403421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulGuard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoulGuard.h" },
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulGuard_Statics::NewProp__enduranceEffectDuration_MetaData[] = {
		{ "Category", "SoulGuard" },
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoulGuard_Statics::NewProp__enduranceEffectDuration = { "_enduranceEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_enduranceEffectDuration, USoulGuard), STRUCT_OFFSET(USoulGuard, _enduranceEffectDuration), METADATA_PARAMS(Z_Construct_UClass_USoulGuard_Statics::NewProp__enduranceEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulGuard_Statics::NewProp__enduranceEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulGuard_Statics::NewProp__recover_MetaData[] = {
		{ "Category", "SoulGuard" },
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
	void Z_Construct_UClass_USoulGuard_Statics::NewProp__recover_SetBit(void* Obj)
	{
		((USoulGuard*)Obj)->_recover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoulGuard_Statics::NewProp__recover = { "_recover", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoulGuard), &Z_Construct_UClass_USoulGuard_Statics::NewProp__recover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoulGuard_Statics::NewProp__recover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulGuard_Statics::NewProp__recover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulGuard_Statics::NewProp__cooldownLevels_MetaData[] = {
		{ "Category", "SoulGuard" },
		{ "ModuleRelativePath", "Public/SoulGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoulGuard_Statics::NewProp__cooldownLevels = { "_cooldownLevels", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownLevels, USoulGuard), STRUCT_OFFSET(USoulGuard, _cooldownLevels), METADATA_PARAMS(Z_Construct_UClass_USoulGuard_Statics::NewProp__cooldownLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulGuard_Statics::NewProp__cooldownLevels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGuard_Statics::NewProp__enduranceEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGuard_Statics::NewProp__recover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGuard_Statics::NewProp__cooldownLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoulGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoulGuard_Statics::ClassParams = {
		&USoulGuard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoulGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoulGuard_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USoulGuard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoulGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoulGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoulGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoulGuard, 3401088744);
	template<> THEEXECUTIONER_API UClass* StaticClass<USoulGuard>()
	{
		return USoulGuard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoulGuard(Z_Construct_UClass_USoulGuard, &USoulGuard::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("USoulGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoulGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
