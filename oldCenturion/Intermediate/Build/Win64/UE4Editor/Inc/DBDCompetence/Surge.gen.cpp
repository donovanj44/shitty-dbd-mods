// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Surge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurge() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USurge_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USurge();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurge::execClient_TriggerEffects)
	{
		P_GET_TARRAY(AGenerator*,Z_Param_generators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_TriggerEffects_Implementation(Z_Param_generators);
		P_NATIVE_END;
	}
	static FName NAME_USurge_Client_TriggerEffects = FName(TEXT("Client_TriggerEffects"));
	void USurge::Client_TriggerEffects(TArray<AGenerator*> const& generators)
	{
		Surge_eventClient_TriggerEffects_Parms Parms;
		Parms.generators=generators;
		ProcessEvent(FindFunctionChecked(NAME_USurge_Client_TriggerEffects),&Parms);
	}
	void USurge::StaticRegisterNativesUSurge()
	{
		UClass* Class = USurge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_TriggerEffects", &USurge::execClient_TriggerEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_generators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators = { "generators", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Surge_eventClient_TriggerEffects_Parms, generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators_Inner = { "generators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::NewProp_generators_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurge, nullptr, "Client_TriggerEffects", nullptr, nullptr, sizeof(Surge_eventClient_TriggerEffects_Parms), Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurge_Client_TriggerEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurge_Client_TriggerEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurge_NoRegister()
	{
		return USurge::StaticClass();
	}
	struct Z_Construct_UClass_USurge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useTerrorRadiusInsteadOfFixedDistance_MetaData[];
#endif
		static void NewProp__useTerrorRadiusInsteadOfFixedDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useTerrorRadiusInsteadOfFixedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasCooldown_MetaData[];
#endif
		static void NewProp__hasCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__instantRegression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__instantRegression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zoneRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__zoneRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurge_Client_TriggerEffects, "Client_TriggerEffects" }, // 2425880562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Surge.h" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance_MetaData[] = {
		{ "Category", "Surge" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	void Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance_SetBit(void* Obj)
	{
		((USurge*)Obj)->_useTerrorRadiusInsteadOfFixedDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance = { "_useTerrorRadiusInsteadOfFixedDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurge), &Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown_MetaData[] = {
		{ "Category", "Surge" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	void Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown_SetBit(void* Obj)
	{
		((USurge*)Obj)->_hasCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown = { "_hasCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurge), &Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "Surge" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurge_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, USurge), STRUCT_OFFSET(USurge, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::NewProp__cooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::NewProp__instantRegression_MetaData[] = {
		{ "Category", "Surge" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurge_Statics::NewProp__instantRegression = { "_instantRegression", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_instantRegression, USurge), STRUCT_OFFSET(USurge, _instantRegression), METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::NewProp__instantRegression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::NewProp__instantRegression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurge_Statics::NewProp__zoneRadius_MetaData[] = {
		{ "Category", "Surge" },
		{ "ModuleRelativePath", "Public/Surge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurge_Statics::NewProp__zoneRadius = { "_zoneRadius", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_zoneRadius, USurge), STRUCT_OFFSET(USurge, _zoneRadius), METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::NewProp__zoneRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::NewProp__zoneRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurge_Statics::NewProp__useTerrorRadiusInsteadOfFixedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurge_Statics::NewProp__hasCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurge_Statics::NewProp__cooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurge_Statics::NewProp__instantRegression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurge_Statics::NewProp__zoneRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurge_Statics::ClassParams = {
		&USurge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurge, 2555259447);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USurge>()
	{
		return USurge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurge(Z_Construct_UClass_USurge, &USurge::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USurge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
