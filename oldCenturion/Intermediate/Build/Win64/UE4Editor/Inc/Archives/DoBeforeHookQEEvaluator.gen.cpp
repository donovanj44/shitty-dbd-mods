// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/DoBeforeHookQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoBeforeHookQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UDoBeforeHookQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UDoBeforeHookQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UDoBeforeHookQEEvaluator::execOnHooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHooked(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UDoBeforeHookQEEvaluator::StaticRegisterNativesUDoBeforeHookQEEvaluator()
	{
		UClass* Class = UDoBeforeHookQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHooked", &UDoBeforeHookQEEvaluator::execOnHooked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics
	{
		struct DoBeforeHookQEEvaluator_eventOnHooked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoBeforeHookQEEvaluator_eventOnHooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoBeforeHookQEEvaluator_eventOnHooked_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoBeforeHookQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoBeforeHookQEEvaluator, nullptr, "OnHooked", nullptr, nullptr, sizeof(DoBeforeHookQEEvaluator_eventOnHooked_Parms), Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoBeforeHookQEEvaluator_NoRegister()
	{
		return UDoBeforeHookQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoBeforeHookQEEvaluator_OnHooked, "OnHooked" }, // 2849176235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoBeforeHookQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/DoBeforeHookQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoBeforeHookQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::ClassParams = {
		&UDoBeforeHookQEEvaluator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoBeforeHookQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoBeforeHookQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoBeforeHookQEEvaluator, 3260616015);
	template<> ARCHIVES_API UClass* StaticClass<UDoBeforeHookQEEvaluator>()
	{
		return UDoBeforeHookQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoBeforeHookQEEvaluator(Z_Construct_UClass_UDoBeforeHookQEEvaluator, &UDoBeforeHookQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UDoBeforeHookQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoBeforeHookQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
