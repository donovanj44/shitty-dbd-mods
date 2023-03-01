// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/SurvivorHookSameTimeQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorHookSameTimeQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorHookSameTimeQEEvaluator::execOnSurvivorHooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorHooked(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorHookSameTimeQEEvaluator::execOnSurvivorUnhooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorUnhooked(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void USurvivorHookSameTimeQEEvaluator::StaticRegisterNativesUSurvivorHookSameTimeQEEvaluator()
	{
		UClass* Class = USurvivorHookSameTimeQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSurvivorHooked", &USurvivorHookSameTimeQEEvaluator::execOnSurvivorHooked },
			{ "OnSurvivorUnhooked", &USurvivorHookSameTimeQEEvaluator::execOnSurvivorUnhooked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics
	{
		struct SurvivorHookSameTimeQEEvaluator_eventOnSurvivorHooked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorHooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorHooked_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorHookSameTimeQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator, nullptr, "OnSurvivorHooked", nullptr, nullptr, sizeof(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorHooked_Parms), Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics
	{
		struct SurvivorHookSameTimeQEEvaluator_eventOnSurvivorUnhooked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorUnhooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorUnhooked_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorHookSameTimeQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator, nullptr, "OnSurvivorUnhooked", nullptr, nullptr, sizeof(SurvivorHookSameTimeQEEvaluator_eventOnSurvivorUnhooked_Parms), Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_NoRegister()
	{
		return USurvivorHookSameTimeQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked, "OnSurvivorHooked" }, // 3022927135
		{ &Z_Construct_UFunction_USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked, "OnSurvivorUnhooked" }, // 1680077857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorHookSameTimeQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/SurvivorHookSameTimeQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorHookSameTimeQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::ClassParams = {
		&USurvivorHookSameTimeQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorHookSameTimeQEEvaluator, 1175460184);
	template<> ARCHIVES_API UClass* StaticClass<USurvivorHookSameTimeQEEvaluator>()
	{
		return USurvivorHookSameTimeQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorHookSameTimeQEEvaluator(Z_Construct_UClass_USurvivorHookSameTimeQEEvaluator, &USurvivorHookSameTimeQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("USurvivorHookSameTimeQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorHookSameTimeQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
