// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/MaxEventCountQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaxEventCountQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UMaxEventCountQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UMaxEventCountQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UMaxEventCountQEEvaluator::execOnDecrementEventCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDecrementEventCount(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaxEventCountQEEvaluator::execOnIncrementEventCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIncrementEventCount(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaxEventCountQEEvaluator::execOnStopEventCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopEventCount(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UMaxEventCountQEEvaluator::StaticRegisterNativesUMaxEventCountQEEvaluator()
	{
		UClass* Class = UMaxEventCountQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDecrementEventCount", &UMaxEventCountQEEvaluator::execOnDecrementEventCount },
			{ "OnIncrementEventCount", &UMaxEventCountQEEvaluator::execOnIncrementEventCount },
			{ "OnStopEventCount", &UMaxEventCountQEEvaluator::execOnStopEventCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics
	{
		struct MaxEventCountQEEvaluator_eventOnDecrementEventCount_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnDecrementEventCount_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnDecrementEventCount_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxEventCountQEEvaluator, nullptr, "OnDecrementEventCount", nullptr, nullptr, sizeof(MaxEventCountQEEvaluator_eventOnDecrementEventCount_Parms), Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics
	{
		struct MaxEventCountQEEvaluator_eventOnIncrementEventCount_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnIncrementEventCount_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnIncrementEventCount_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxEventCountQEEvaluator, nullptr, "OnIncrementEventCount", nullptr, nullptr, sizeof(MaxEventCountQEEvaluator_eventOnIncrementEventCount_Parms), Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics
	{
		struct MaxEventCountQEEvaluator_eventOnStopEventCount_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnStopEventCount_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaxEventCountQEEvaluator_eventOnStopEventCount_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxEventCountQEEvaluator, nullptr, "OnStopEventCount", nullptr, nullptr, sizeof(MaxEventCountQEEvaluator_eventOnStopEventCount_Parms), Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaxEventCountQEEvaluator_NoRegister()
	{
		return UMaxEventCountQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stopEventCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stopEventCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stopEventCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decrementEventCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__decrementEventCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__decrementEventCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__incrementEventCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__incrementEventCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__incrementEventCount_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnDecrementEventCount, "OnDecrementEventCount" }, // 3104186829
		{ &Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnIncrementEventCount, "OnIncrementEventCount" }, // 4081816923
		{ &Z_Construct_UFunction_UMaxEventCountQEEvaluator_OnStopEventCount, "OnStopEventCount" }, // 2124637594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaxEventCountQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount_MetaData[] = {
		{ "Category", "MaxEventCountQEEvaluator" },
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount = { "_stopEventCount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaxEventCountQEEvaluator, _stopEventCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount_Inner = { "_stopEventCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount_MetaData[] = {
		{ "Category", "MaxEventCountQEEvaluator" },
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount = { "_decrementEventCount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaxEventCountQEEvaluator, _decrementEventCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount_Inner = { "_decrementEventCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount_MetaData[] = {
		{ "Category", "MaxEventCountQEEvaluator" },
		{ "ModuleRelativePath", "Public/MaxEventCountQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount = { "_incrementEventCount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaxEventCountQEEvaluator, _incrementEventCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount_Inner = { "_incrementEventCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__stopEventCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__decrementEventCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::NewProp__incrementEventCount_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaxEventCountQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::ClassParams = {
		&UMaxEventCountQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaxEventCountQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaxEventCountQEEvaluator, 711704563);
	template<> ARCHIVES_API UClass* StaticClass<UMaxEventCountQEEvaluator>()
	{
		return UMaxEventCountQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaxEventCountQEEvaluator(Z_Construct_UClass_UMaxEventCountQEEvaluator, &UMaxEventCountQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UMaxEventCountQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaxEventCountQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
