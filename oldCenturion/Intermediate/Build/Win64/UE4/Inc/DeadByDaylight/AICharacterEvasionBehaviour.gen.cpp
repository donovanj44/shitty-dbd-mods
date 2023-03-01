// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterEvasionBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterEvasionBehaviour() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterEvasionBehaviour_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterEvasionBehaviour();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterEvasionBehaviourData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterEvasionBehaviour::execEscapeDestinationReached)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EscapeDestinationReached(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAICharacterEvasionBehaviour::StaticRegisterNativesUAICharacterEvasionBehaviour()
	{
		UClass* Class = UAICharacterEvasionBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EscapeDestinationReached", &UAICharacterEvasionBehaviour::execEscapeDestinationReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics
	{
		struct AICharacterEvasionBehaviour_eventEscapeDestinationReached_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterEvasionBehaviour_eventEscapeDestinationReached_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterEvasionBehaviour_eventEscapeDestinationReached_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterEvasionBehaviour, nullptr, "EscapeDestinationReached", nullptr, nullptr, sizeof(AICharacterEvasionBehaviour_eventEscapeDestinationReached_Parms), Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterEvasionBehaviour_NoRegister()
	{
		return UAICharacterEvasionBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterEvasionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterEvasionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentEscapePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentEscapePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preyAIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__preyAIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__prey_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__prey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterEvasionBehaviour_EscapeDestinationReached, "EscapeDestinationReached" }, // 1471591796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterEvasionBehaviour.h" },
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__characterEvasionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__characterEvasionData = { "_characterEvasionData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEvasionBehaviour, _characterEvasionData), Z_Construct_UClass_UCharacterEvasionBehaviourData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__characterEvasionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__characterEvasionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__currentEscapePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__currentEscapePoint = { "_currentEscapePoint", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEvasionBehaviour, _currentEscapePoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__currentEscapePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__currentEscapePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__preyAIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__preyAIController = { "_preyAIController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEvasionBehaviour, _preyAIController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__preyAIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__preyAIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__prey_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterEvasionBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__prey = { "_prey", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterEvasionBehaviour, _prey), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__prey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__prey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__characterEvasionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__currentEscapePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__preyAIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::NewProp__prey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterEvasionBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::ClassParams = {
		&UAICharacterEvasionBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterEvasionBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterEvasionBehaviour, 81241095);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterEvasionBehaviour>()
	{
		return UAICharacterEvasionBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterEvasionBehaviour(Z_Construct_UClass_UAICharacterEvasionBehaviour, &UAICharacterEvasionBehaviour::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterEvasionBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterEvasionBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
