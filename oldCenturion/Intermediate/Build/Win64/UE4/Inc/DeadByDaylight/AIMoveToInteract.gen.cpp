// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIMoveToInteract.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMoveToInteract() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToInteract_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToInteract();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIMoveToInteractData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIMoveToInteract::execInit)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_character);
		P_GET_OBJECT(UAICharacterBehaviourData,Z_Param_behaviourData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_character,Z_Param_behaviourData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMoveToInteract::execInteractionPointReached)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractionPointReached(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAIMoveToInteract::StaticRegisterNativesUAIMoveToInteract()
	{
		UClass* Class = UAIMoveToInteract::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAIMoveToInteract::execInit },
			{ "InteractionPointReached", &UAIMoveToInteract::execInteractionPointReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMoveToInteract_Init_Statics
	{
		struct AIMoveToInteract_eventInit_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::NewProp_behaviourData = { "behaviourData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteract_eventInit_Parms, behaviourData), Z_Construct_UClass_UAICharacterBehaviourData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteract_eventInit_Parms, character), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::NewProp_behaviourData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMoveToInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMoveToInteract, nullptr, "Init", nullptr, nullptr, sizeof(AIMoveToInteract_eventInit_Parms), Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMoveToInteract_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMoveToInteract_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics
	{
		struct AIMoveToInteract_eventInteractionPointReached_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteract_eventInteractionPointReached_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMoveToInteract_eventInteractionPointReached_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMoveToInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMoveToInteract, nullptr, "InteractionPointReached", nullptr, nullptr, sizeof(AIMoveToInteract_eventInteractionPointReached_Parms), Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMoveToInteract_NoRegister()
	{
		return UAIMoveToInteract::StaticClass();
	}
	struct Z_Construct_UClass_UAIMoveToInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiMoveToInteractData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiMoveToInteractData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMoveToInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMoveToInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMoveToInteract_Init, "Init" }, // 1321010281
		{ &Z_Construct_UFunction_UAIMoveToInteract_InteractionPointReached, "InteractionPointReached" }, // 1921029291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteract_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIMoveToInteract.h" },
		{ "ModuleRelativePath", "Public/AIMoveToInteract.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMoveToInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiController = { "_aiController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToInteract, _aiController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiMoveToInteractData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMoveToInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiMoveToInteractData = { "_aiMoveToInteractData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMoveToInteract, _aiMoveToInteractData), Z_Construct_UClass_UAIMoveToInteractData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiMoveToInteractData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiMoveToInteractData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMoveToInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMoveToInteract_Statics::NewProp__aiMoveToInteractData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMoveToInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMoveToInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMoveToInteract_Statics::ClassParams = {
		&UAIMoveToInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIMoveToInteract_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteract_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMoveToInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMoveToInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMoveToInteract()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMoveToInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMoveToInteract, 1866655360);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIMoveToInteract>()
	{
		return UAIMoveToInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMoveToInteract(Z_Construct_UClass_UAIMoveToInteract, &UAIMoveToInteract::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIMoveToInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMoveToInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
