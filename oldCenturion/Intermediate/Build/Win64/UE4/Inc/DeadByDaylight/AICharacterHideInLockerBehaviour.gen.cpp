// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterHideInLockerBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterHideInLockerBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviour();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterHideInLockerBehaviour::execOnMovementFinished)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementFinished(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAICharacterHideInLockerBehaviour::StaticRegisterNativesUAICharacterHideInLockerBehaviour()
	{
		UClass* Class = UAICharacterHideInLockerBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovementFinished", &UAICharacterHideInLockerBehaviour::execOnMovementFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics
	{
		struct AICharacterHideInLockerBehaviour_eventOnMovementFinished_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterHideInLockerBehaviour_eventOnMovementFinished_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterHideInLockerBehaviour_eventOnMovementFinished_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterHideInLockerBehaviour, nullptr, "OnMovementFinished", nullptr, nullptr, sizeof(AICharacterHideInLockerBehaviour_eventOnMovementFinished_Parms), Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviour_NoRegister()
	{
		return UAICharacterHideInLockerBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterHideInLockerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterHideInLockerData;
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
	UObject* (*const Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterHideInLockerBehaviour_OnMovementFinished, "OnMovementFinished" }, // 1089913560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterHideInLockerBehaviour.h" },
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__characterHideInLockerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__characterHideInLockerData = { "_characterHideInLockerData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterHideInLockerBehaviour, _characterHideInLockerData), Z_Construct_UClass_UAICharacterHideInLockerBehaviourData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__characterHideInLockerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__characterHideInLockerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayerController = { "_aiPlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterHideInLockerBehaviour, _aiPlayerController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterHideInLockerBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayer = { "_aiPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterHideInLockerBehaviour, _aiPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__characterHideInLockerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::NewProp__aiPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterHideInLockerBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::ClassParams = {
		&UAICharacterHideInLockerBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterHideInLockerBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterHideInLockerBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterHideInLockerBehaviour, 3220343298);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterHideInLockerBehaviour>()
	{
		return UAICharacterHideInLockerBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterHideInLockerBehaviour(Z_Construct_UClass_UAICharacterHideInLockerBehaviour, &UAICharacterHideInLockerBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterHideInLockerBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterHideInLockerBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
