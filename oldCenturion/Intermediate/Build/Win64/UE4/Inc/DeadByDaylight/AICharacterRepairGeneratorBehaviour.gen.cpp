// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterRepairGeneratorBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterRepairGeneratorBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterRepairGeneratorBehaviour::execOnGeneratorRepairedEventHandler)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEventHandler(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterRepairGeneratorBehaviour::execOnMovementFinished)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementFinished(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAICharacterRepairGeneratorBehaviour::StaticRegisterNativesUAICharacterRepairGeneratorBehaviour()
	{
		UClass* Class = UAICharacterRepairGeneratorBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGeneratorRepairedEventHandler", &UAICharacterRepairGeneratorBehaviour::execOnGeneratorRepairedEventHandler },
			{ "OnMovementFinished", &UAICharacterRepairGeneratorBehaviour::execOnMovementFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics
	{
		struct AICharacterRepairGeneratorBehaviour_eventOnGeneratorRepairedEventHandler_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((AICharacterRepairGeneratorBehaviour_eventOnGeneratorRepairedEventHandler_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AICharacterRepairGeneratorBehaviour_eventOnGeneratorRepairedEventHandler_Parms), &Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour, nullptr, "OnGeneratorRepairedEventHandler", nullptr, nullptr, sizeof(AICharacterRepairGeneratorBehaviour_eventOnGeneratorRepairedEventHandler_Parms), Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics
	{
		struct AICharacterRepairGeneratorBehaviour_eventOnMovementFinished_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterRepairGeneratorBehaviour_eventOnMovementFinished_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterRepairGeneratorBehaviour_eventOnMovementFinished_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour, nullptr, "OnMovementFinished", nullptr, nullptr, sizeof(AICharacterRepairGeneratorBehaviour_eventOnMovementFinished_Parms), Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_NoRegister()
	{
		return UAICharacterRepairGeneratorBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterRepairGeneratorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterRepairGeneratorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnGeneratorRepairedEventHandler, "OnGeneratorRepairedEventHandler" }, // 4169813578
		{ &Z_Construct_UFunction_UAICharacterRepairGeneratorBehaviour_OnMovementFinished, "OnMovementFinished" }, // 204280509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterRepairGeneratorBehaviour.h" },
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__characterRepairGeneratorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__characterRepairGeneratorData = { "_characterRepairGeneratorData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviour, _characterRepairGeneratorData), Z_Construct_UClass_UAICharacterRepairGeneratorBehaviourData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__characterRepairGeneratorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__characterRepairGeneratorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__targetInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__targetInteractor = { "_targetInteractor", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviour, _targetInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__targetInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__targetInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayerController = { "_aiPlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviour, _aiPlayerController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterRepairGeneratorBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayer = { "_aiPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterRepairGeneratorBehaviour, _aiPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__characterRepairGeneratorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__targetInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::NewProp__aiPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterRepairGeneratorBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::ClassParams = {
		&UAICharacterRepairGeneratorBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterRepairGeneratorBehaviour, 702038698);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterRepairGeneratorBehaviour>()
	{
		return UAICharacterRepairGeneratorBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterRepairGeneratorBehaviour(Z_Construct_UClass_UAICharacterRepairGeneratorBehaviour, &UAICharacterRepairGeneratorBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterRepairGeneratorBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterRepairGeneratorBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
