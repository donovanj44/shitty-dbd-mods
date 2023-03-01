// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/LivingSurvivorsCountQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLivingSurvivorsCountQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULivingSurvivorsCountQEEvaluator::execOnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivorAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorAdded(Z_Param_survivorAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULivingSurvivorsCountQEEvaluator::execOnSurvivorRemoved)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivorRemoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorRemoved(Z_Param_survivorRemoved);
		P_NATIVE_END;
	}
	void ULivingSurvivorsCountQEEvaluator::StaticRegisterNativesULivingSurvivorsCountQEEvaluator()
	{
		UClass* Class = ULivingSurvivorsCountQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSurvivorAdded", &ULivingSurvivorsCountQEEvaluator::execOnSurvivorAdded },
			{ "OnSurvivorRemoved", &ULivingSurvivorsCountQEEvaluator::execOnSurvivorRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics
	{
		struct LivingSurvivorsCountQEEvaluator_eventOnSurvivorAdded_Parms
		{
			ACamperPlayer* survivorAdded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::NewProp_survivorAdded = { "survivorAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LivingSurvivorsCountQEEvaluator_eventOnSurvivorAdded_Parms, survivorAdded), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::NewProp_survivorAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LivingSurvivorsCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator, nullptr, "OnSurvivorAdded", nullptr, nullptr, sizeof(LivingSurvivorsCountQEEvaluator_eventOnSurvivorAdded_Parms), Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics
	{
		struct LivingSurvivorsCountQEEvaluator_eventOnSurvivorRemoved_Parms
		{
			ACamperPlayer* survivorRemoved;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::NewProp_survivorRemoved = { "survivorRemoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LivingSurvivorsCountQEEvaluator_eventOnSurvivorRemoved_Parms, survivorRemoved), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::NewProp_survivorRemoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LivingSurvivorsCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator, nullptr, "OnSurvivorRemoved", nullptr, nullptr, sizeof(LivingSurvivorsCountQEEvaluator_eventOnSurvivorRemoved_Parms), Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_NoRegister()
	{
		return ULivingSurvivorsCountQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded, "OnSurvivorAdded" }, // 2405643637
		{ &Z_Construct_UFunction_ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved, "OnSurvivorRemoved" }, // 355881746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LivingSurvivorsCountQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/LivingSurvivorsCountQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULivingSurvivorsCountQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::ClassParams = {
		&ULivingSurvivorsCountQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULivingSurvivorsCountQEEvaluator, 1316491283);
	template<> ARCHIVES_API UClass* StaticClass<ULivingSurvivorsCountQEEvaluator>()
	{
		return ULivingSurvivorsCountQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULivingSurvivorsCountQEEvaluator(Z_Construct_UClass_ULivingSurvivorsCountQEEvaluator, &ULivingSurvivorsCountQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("ULivingSurvivorsCountQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULivingSurvivorsCountQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
