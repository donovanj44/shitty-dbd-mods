// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/NearKillerQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearKillerQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UNearKillerQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearKillerQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	DEFINE_FUNCTION(UNearKillerQEEvaluator::execOnRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UNearKillerQEEvaluator::StaticRegisterNativesUNearKillerQEEvaluator()
	{
		UClass* Class = UNearKillerQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRangeChanged", &UNearKillerQEEvaluator::execOnRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics
	{
		struct NearKillerQEEvaluator_eventOnRangeChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((NearKillerQEEvaluator_eventOnRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NearKillerQEEvaluator_eventOnRangeChanged_Parms), &Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearKillerQEEvaluator, nullptr, "OnRangeChanged", nullptr, nullptr, sizeof(NearKillerQEEvaluator_eventOnRangeChanged_Parms), Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNearKillerQEEvaluator_NoRegister()
	{
		return UNearKillerQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UNearKillerQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearKillerQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearKillerQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearKillerQEEvaluator_OnRangeChanged, "OnRangeChanged" }, // 2236015456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearKillerQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NearKillerQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/NearKillerQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearKillerQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearKillerQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNearKillerQEEvaluator_Statics::ClassParams = {
		&UNearKillerQEEvaluator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearKillerQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearKillerQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearKillerQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNearKillerQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNearKillerQEEvaluator, 1746663226);
	template<> ARCHIVES_API UClass* StaticClass<UNearKillerQEEvaluator>()
	{
		return UNearKillerQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNearKillerQEEvaluator(Z_Construct_UClass_UNearKillerQEEvaluator, &UNearKillerQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UNearKillerQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearKillerQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
