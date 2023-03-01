// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterBehaviourInteractWithActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBehaviourInteractWithActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterBehaviourInteractWithActor::execOnMovementFinished)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementFinished(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAICharacterBehaviourInteractWithActor::StaticRegisterNativesUAICharacterBehaviourInteractWithActor()
	{
		UClass* Class = UAICharacterBehaviourInteractWithActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovementFinished", &UAICharacterBehaviourInteractWithActor::execOnMovementFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics
	{
		struct AICharacterBehaviourInteractWithActor_eventOnMovementFinished_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActor_eventOnMovementFinished_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActor_eventOnMovementFinished_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActor, nullptr, "OnMovementFinished", nullptr, nullptr, sizeof(AICharacterBehaviourInteractWithActor_eventOnMovementFinished_Parms), Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_NoRegister()
	{
		return UAICharacterBehaviourInteractWithActor::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviourData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviourData;
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
	UObject* (*const Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterBehaviourInteractWithActor_OnMovementFinished, "OnMovementFinished" }, // 2042432583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterBehaviourInteractWithActor.h" },
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__behaviourData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__behaviourData = { "_behaviourData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterBehaviourInteractWithActor, _behaviourData), Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__behaviourData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__behaviourData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayerController = { "_aiPlayerController", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterBehaviourInteractWithActor, _aiPlayerController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayer = { "_aiPlayer", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterBehaviourInteractWithActor, _aiPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__behaviourData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::NewProp__aiPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterBehaviourInteractWithActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::ClassParams = {
		&UAICharacterBehaviourInteractWithActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterBehaviourInteractWithActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterBehaviourInteractWithActor, 3410764578);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterBehaviourInteractWithActor>()
	{
		return UAICharacterBehaviourInteractWithActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterBehaviourInteractWithActor(Z_Construct_UClass_UAICharacterBehaviourInteractWithActor, &UAICharacterBehaviourInteractWithActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterBehaviourInteractWithActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterBehaviourInteractWithActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
