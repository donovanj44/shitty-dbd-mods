// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIHealAllyBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHealAllyBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIHealAllyBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIHealAllyBehaviour();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIHealAllyBehaviourData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIHealAllyBehaviour::execInit)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_character);
		P_GET_OBJECT(UAICharacterBehaviourData,Z_Param_behaviourData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_character,Z_Param_behaviourData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIHealAllyBehaviour::execTargetPositionReached)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetPositionReached(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAIHealAllyBehaviour::StaticRegisterNativesUAIHealAllyBehaviour()
	{
		UClass* Class = UAIHealAllyBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAIHealAllyBehaviour::execInit },
			{ "TargetPositionReached", &UAIHealAllyBehaviour::execTargetPositionReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics
	{
		struct AIHealAllyBehaviour_eventInit_Parms
		{
			ADBDPlayer* character;
			UAICharacterBehaviourData* behaviourData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_behaviourData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::NewProp_behaviourData = { "behaviourData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIHealAllyBehaviour_eventInit_Parms, behaviourData), Z_Construct_UClass_UAICharacterBehaviourData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIHealAllyBehaviour_eventInit_Parms, character), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::NewProp_behaviourData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIHealAllyBehaviour, nullptr, "Init", nullptr, nullptr, sizeof(AIHealAllyBehaviour_eventInit_Parms), Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIHealAllyBehaviour_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIHealAllyBehaviour_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics
	{
		struct AIHealAllyBehaviour_eventTargetPositionReached_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIHealAllyBehaviour_eventTargetPositionReached_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIHealAllyBehaviour_eventTargetPositionReached_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIHealAllyBehaviour, nullptr, "TargetPositionReached", nullptr, nullptr, sizeof(AIHealAllyBehaviour_eventTargetPositionReached_Parms), Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIHealAllyBehaviour_NoRegister()
	{
		return UAIHealAllyBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAIHealAllyBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviourData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviourData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIHealAllyBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIHealAllyBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIHealAllyBehaviour_Init, "Init" }, // 1094678887
		{ &Z_Construct_UFunction_UAIHealAllyBehaviour_TargetPositionReached, "TargetPositionReached" }, // 4007548517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIHealAllyBehaviour.h" },
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiPlayer = { "_aiPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIHealAllyBehaviour, _aiPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiController = { "_aiController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIHealAllyBehaviour, _aiController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__behaviourData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__behaviourData = { "_behaviourData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIHealAllyBehaviour, _behaviourData), Z_Construct_UClass_UAIHealAllyBehaviourData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__behaviourData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__behaviourData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIHealAllyBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__aiController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIHealAllyBehaviour_Statics::NewProp__behaviourData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIHealAllyBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIHealAllyBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIHealAllyBehaviour_Statics::ClassParams = {
		&UAIHealAllyBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIHealAllyBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIHealAllyBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIHealAllyBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIHealAllyBehaviour, 3523793256);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIHealAllyBehaviour>()
	{
		return UAIHealAllyBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIHealAllyBehaviour(Z_Construct_UClass_UAIHealAllyBehaviour, &UAIHealAllyBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIHealAllyBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIHealAllyBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
