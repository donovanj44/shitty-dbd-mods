// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ActivatableExhaustedEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatableExhaustedEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UExhaustedEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UActivatableExhaustedEffect::execAuthority_OnHookCamper)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEvent);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHookCamper(Z_Param_gameEvent,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableExhaustedEffect::execAuthority_Start)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Start(Z_Param_duration);
		P_NATIVE_END;
	}
	void UActivatableExhaustedEffect::StaticRegisterNativesUActivatableExhaustedEffect()
	{
		UClass* Class = UActivatableExhaustedEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnHookCamper", &UActivatableExhaustedEffect::execAuthority_OnHookCamper },
			{ "Authority_Start", &UActivatableExhaustedEffect::execAuthority_Start },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics
	{
		struct ActivatableExhaustedEffect_eventAuthority_OnHookCamper_Parms
		{
			FGameplayTag gameEvent;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableExhaustedEffect_eventAuthority_OnHookCamper_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEvent = { "gameEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableExhaustedEffect_eventAuthority_OnHookCamper_Parms, gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::NewProp_gameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableExhaustedEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableExhaustedEffect, nullptr, "Authority_OnHookCamper", nullptr, nullptr, sizeof(ActivatableExhaustedEffect_eventAuthority_OnHookCamper_Parms), Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics
	{
		struct ActivatableExhaustedEffect_eventAuthority_Start_Parms
		{
			float duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableExhaustedEffect_eventAuthority_Start_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::NewProp_duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableExhaustedEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableExhaustedEffect, nullptr, "Authority_Start", nullptr, nullptr, sizeof(ActivatableExhaustedEffect_eventAuthority_Start_Parms), Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister()
	{
		return UActivatableExhaustedEffect::StaticClass();
	}
	struct Z_Construct_UClass_UActivatableExhaustedEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatableExhaustedEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExhaustedEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivatableExhaustedEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_OnHookCamper, "Authority_OnHookCamper" }, // 1993883945
		{ &Z_Construct_UFunction_UActivatableExhaustedEffect_Authority_Start, "Authority_Start" }, // 2408821562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableExhaustedEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActivatableExhaustedEffect.h" },
		{ "ModuleRelativePath", "Public/ActivatableExhaustedEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatableExhaustedEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableExhaustedEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatableExhaustedEffect_Statics::ClassParams = {
		&UActivatableExhaustedEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivatableExhaustedEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableExhaustedEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatableExhaustedEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatableExhaustedEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatableExhaustedEffect, 4224215128);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UActivatableExhaustedEffect>()
	{
		return UActivatableExhaustedEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatableExhaustedEffect(Z_Construct_UClass_UActivatableExhaustedEffect, &UActivatableExhaustedEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UActivatableExhaustedEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableExhaustedEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
