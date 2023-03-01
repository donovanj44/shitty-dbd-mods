// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/ChainAttachedGateBlockerEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainAttachedGateBlockerEffect() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UChainAttachedGateBlockerEffect_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UChainAttachedGateBlockerEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UGateBlockerEffect();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UChainAttachedGateBlockerEffect::execOnSurvivorDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldState);
		P_GET_ENUM(ECamperDamageState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorDamageStateChanged(ECamperDamageState(Z_Param_oldState),ECamperDamageState(Z_Param_newState));
		P_NATIVE_END;
	}
	void UChainAttachedGateBlockerEffect::StaticRegisterNativesUChainAttachedGateBlockerEffect()
	{
		UClass* Class = UChainAttachedGateBlockerEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSurvivorDamageStateChanged", &UChainAttachedGateBlockerEffect::execOnSurvivorDamageStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics
	{
		struct ChainAttachedGateBlockerEffect_eventOnSurvivorDamageStateChanged_Parms
		{
			ECamperDamageState oldState;
			ECamperDamageState newState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChainAttachedGateBlockerEffect_eventOnSurvivorDamageStateChanged_Parms, newState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChainAttachedGateBlockerEffect_eventOnSurvivorDamageStateChanged_Parms, oldState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChainAttachedGateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChainAttachedGateBlockerEffect, nullptr, "OnSurvivorDamageStateChanged", nullptr, nullptr, sizeof(ChainAttachedGateBlockerEffect_eventOnSurvivorDamageStateChanged_Parms), Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChainAttachedGateBlockerEffect_NoRegister()
	{
		return UChainAttachedGateBlockerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockGateLingeringTimeDyingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blockGateLingeringTimeDyingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGateBlockerEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged, "OnSurvivorDamageStateChanged" }, // 3504216406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChainAttachedGateBlockerEffect.h" },
		{ "ModuleRelativePath", "Public/ChainAttachedGateBlockerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::NewProp__blockGateLingeringTimeDyingState_MetaData[] = {
		{ "Category", "ChainAttachedGateBlockerEffect" },
		{ "ModuleRelativePath", "Public/ChainAttachedGateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::NewProp__blockGateLingeringTimeDyingState = { "_blockGateLingeringTimeDyingState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainAttachedGateBlockerEffect, _blockGateLingeringTimeDyingState), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::NewProp__blockGateLingeringTimeDyingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::NewProp__blockGateLingeringTimeDyingState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::NewProp__blockGateLingeringTimeDyingState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainAttachedGateBlockerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::ClassParams = {
		&UChainAttachedGateBlockerEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainAttachedGateBlockerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainAttachedGateBlockerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainAttachedGateBlockerEffect, 2398616480);
	template<> THEK25_API UClass* StaticClass<UChainAttachedGateBlockerEffect>()
	{
		return UChainAttachedGateBlockerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainAttachedGateBlockerEffect(Z_Construct_UClass_UChainAttachedGateBlockerEffect, &UChainAttachedGateBlockerEffect::StaticClass, TEXT("/Script/TheK25"), TEXT("UChainAttachedGateBlockerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainAttachedGateBlockerEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
