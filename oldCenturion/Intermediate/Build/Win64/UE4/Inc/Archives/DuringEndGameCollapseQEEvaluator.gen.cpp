// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/DuringEndGameCollapseQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDuringEndGameCollapseQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UDuringEndGameCollapseQEEvaluator::execOnEndGameCollapseStart)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGameCollapseStart(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UDuringEndGameCollapseQEEvaluator::StaticRegisterNativesUDuringEndGameCollapseQEEvaluator()
	{
		UClass* Class = UDuringEndGameCollapseQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndGameCollapseStart", &UDuringEndGameCollapseQEEvaluator::execOnEndGameCollapseStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics
	{
		struct DuringEndGameCollapseQEEvaluator_eventOnEndGameCollapseStart_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DuringEndGameCollapseQEEvaluator_eventOnEndGameCollapseStart_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DuringEndGameCollapseQEEvaluator_eventOnEndGameCollapseStart_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DuringEndGameCollapseQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator, nullptr, "OnEndGameCollapseStart", nullptr, nullptr, sizeof(DuringEndGameCollapseQEEvaluator_eventOnEndGameCollapseStart_Parms), Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_NoRegister()
	{
		return UDuringEndGameCollapseQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart, "OnEndGameCollapseStart" }, // 3233794519
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DuringEndGameCollapseQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/DuringEndGameCollapseQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDuringEndGameCollapseQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::ClassParams = {
		&UDuringEndGameCollapseQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDuringEndGameCollapseQEEvaluator, 981348867);
	template<> ARCHIVES_API UClass* StaticClass<UDuringEndGameCollapseQEEvaluator>()
	{
		return UDuringEndGameCollapseQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDuringEndGameCollapseQEEvaluator(Z_Construct_UClass_UDuringEndGameCollapseQEEvaluator, &UDuringEndGameCollapseQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UDuringEndGameCollapseQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDuringEndGameCollapseQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
