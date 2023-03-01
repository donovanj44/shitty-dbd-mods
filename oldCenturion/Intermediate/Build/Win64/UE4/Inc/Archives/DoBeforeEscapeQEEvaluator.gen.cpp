// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/DoBeforeEscapeQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoBeforeEscapeQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UDoBeforeEscapeQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UDoBeforeEscapeQEEvaluator::execOnEscaped)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscaped(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UDoBeforeEscapeQEEvaluator::StaticRegisterNativesUDoBeforeEscapeQEEvaluator()
	{
		UClass* Class = UDoBeforeEscapeQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEscaped", &UDoBeforeEscapeQEEvaluator::execOnEscaped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics
	{
		struct DoBeforeEscapeQEEvaluator_eventOnEscaped_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoBeforeEscapeQEEvaluator_eventOnEscaped_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoBeforeEscapeQEEvaluator_eventOnEscaped_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoBeforeEscapeQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoBeforeEscapeQEEvaluator, nullptr, "OnEscaped", nullptr, nullptr, sizeof(DoBeforeEscapeQEEvaluator_eventOnEscaped_Parms), Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_NoRegister()
	{
		return UDoBeforeEscapeQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoBeforeEscapeQEEvaluator_OnEscaped, "OnEscaped" }, // 1253920656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoBeforeEscapeQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/DoBeforeEscapeQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoBeforeEscapeQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::ClassParams = {
		&UDoBeforeEscapeQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoBeforeEscapeQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoBeforeEscapeQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoBeforeEscapeQEEvaluator, 271949422);
	template<> ARCHIVES_API UClass* StaticClass<UDoBeforeEscapeQEEvaluator>()
	{
		return UDoBeforeEscapeQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoBeforeEscapeQEEvaluator(Z_Construct_UClass_UDoBeforeEscapeQEEvaluator, &UDoBeforeEscapeQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UDoBeforeEscapeQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoBeforeEscapeQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
