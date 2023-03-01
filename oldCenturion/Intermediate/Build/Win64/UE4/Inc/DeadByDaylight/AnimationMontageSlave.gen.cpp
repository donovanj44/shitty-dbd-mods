// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AnimationMontageSlave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMontageSlave() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationMontageSlave::execOnMontageStarted)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_id);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStarted(Z_Param_id,Z_Param_rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMontageSlave::execOnMontageStopped)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStopped(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMontageSlave::execSetLeader)
	{
		P_GET_OBJECT(UMontagePlayer,Z_Param_leader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeader(Z_Param_leader);
		P_NATIVE_END;
	}
	void UAnimationMontageSlave::StaticRegisterNativesUAnimationMontageSlave()
	{
		UClass* Class = UAnimationMontageSlave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageStarted", &UAnimationMontageSlave::execOnMontageStarted },
			{ "OnMontageStopped", &UAnimationMontageSlave::execOnMontageStopped },
			{ "SetLeader", &UAnimationMontageSlave::execSetLeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics
	{
		struct AnimationMontageSlave_eventOnMontageStarted_Parms
		{
			FAnimationMontageDescriptor id;
			float rate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMontageSlave_eventOnMontageStarted_Parms, rate), METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMontageSlave_eventOnMontageStarted_Parms, id), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationMontageSlave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMontageSlave, nullptr, "OnMontageStarted", nullptr, nullptr, sizeof(AnimationMontageSlave_eventOnMontageStarted_Parms), Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics
	{
		struct AnimationMontageSlave_eventOnMontageStopped_Parms
		{
			FAnimationMontageDescriptor id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMontageSlave_eventOnMontageStopped_Parms, id), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationMontageSlave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMontageSlave, nullptr, "OnMontageStopped", nullptr, nullptr, sizeof(AnimationMontageSlave_eventOnMontageStopped_Parms), Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics
	{
		struct AnimationMontageSlave_eventSetLeader_Parms
		{
			UMontagePlayer* leader;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::NewProp_leader_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::NewProp_leader = { "leader", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMontageSlave_eventSetLeader_Parms, leader), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::NewProp_leader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::NewProp_leader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::NewProp_leader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationMontageSlave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMontageSlave, nullptr, "SetLeader", nullptr, nullptr, sizeof(AnimationMontageSlave_eventSetLeader_Parms), Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMontageSlave_SetLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMontageSlave_SetLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister()
	{
		return UAnimationMontageSlave::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationMontageSlave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationMontageSlave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationMontageSlave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStarted, "OnMontageStarted" }, // 212820574
		{ &Z_Construct_UFunction_UAnimationMontageSlave_OnMontageStopped, "OnMontageStopped" }, // 3246022908
		{ &Z_Construct_UFunction_UAnimationMontageSlave_SetLeader, "SetLeader" }, // 1918302304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMontageSlave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationMontageSlave.h" },
		{ "ModuleRelativePath", "Public/AnimationMontageSlave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationMontageSlave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationMontageSlave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationMontageSlave_Statics::ClassParams = {
		&UAnimationMontageSlave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationMontageSlave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMontageSlave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationMontageSlave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationMontageSlave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationMontageSlave, 2856599152);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAnimationMontageSlave>()
	{
		return UAnimationMontageSlave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationMontageSlave(Z_Construct_UClass_UAnimationMontageSlave, &UAnimationMontageSlave::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAnimationMontageSlave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationMontageSlave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
