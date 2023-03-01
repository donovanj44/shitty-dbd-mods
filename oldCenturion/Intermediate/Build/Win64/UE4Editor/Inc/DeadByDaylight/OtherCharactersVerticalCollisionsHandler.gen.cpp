// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OtherCharactersVerticalCollisionsHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtherCharactersVerticalCollisionsHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOtherCharactersVerticalCollisionsHandler::execInitializeOverlapDetection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeOverlapDetection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOtherCharactersVerticalCollisionsHandler::execOnPawnDetectorOverlapEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetectorOverlapEnter(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOtherCharactersVerticalCollisionsHandler::execOnPawnDetectorOverlapExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetectorOverlapExit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOtherCharactersVerticalCollisionsHandler::execSetPawnDetector)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pawnDetector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnDetector(Z_Param_pawnDetector);
		P_NATIVE_END;
	}
	void UOtherCharactersVerticalCollisionsHandler::StaticRegisterNativesUOtherCharactersVerticalCollisionsHandler()
	{
		UClass* Class = UOtherCharactersVerticalCollisionsHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeOverlapDetection", &UOtherCharactersVerticalCollisionsHandler::execInitializeOverlapDetection },
			{ "OnPawnDetectorOverlapEnter", &UOtherCharactersVerticalCollisionsHandler::execOnPawnDetectorOverlapEnter },
			{ "OnPawnDetectorOverlapExit", &UOtherCharactersVerticalCollisionsHandler::execOnPawnDetectorOverlapExit },
			{ "SetPawnDetector", &UOtherCharactersVerticalCollisionsHandler::execSetPawnDetector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler, nullptr, "InitializeOverlapDetection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics
	{
		struct OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms), &Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler, nullptr, "OnPawnDetectorOverlapEnter", nullptr, nullptr, sizeof(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapEnter_Parms), Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics
	{
		struct OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler, nullptr, "OnPawnDetectorOverlapExit", nullptr, nullptr, sizeof(OtherCharactersVerticalCollisionsHandler_eventOnPawnDetectorOverlapExit_Parms), Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics
	{
		struct OtherCharactersVerticalCollisionsHandler_eventSetPawnDetector_Parms
		{
			UCapsuleComponent* pawnDetector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnDetector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::NewProp_pawnDetector = { "pawnDetector", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OtherCharactersVerticalCollisionsHandler_eventSetPawnDetector_Parms, pawnDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::NewProp_pawnDetector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler, nullptr, "SetPawnDetector", nullptr, nullptr, sizeof(OtherCharactersVerticalCollisionsHandler_eventSetPawnDetector_Parms), Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_NoRegister()
	{
		return UOtherCharactersVerticalCollisionsHandler::StaticClass();
	}
	struct Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pawnDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawnDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__overlappingActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoreBelowActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ignoreBelowActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoreBelowActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_InitializeOverlapDetection, "InitializeOverlapDetection" }, // 4175147557
		{ &Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapEnter, "OnPawnDetectorOverlapEnter" }, // 2025178701
		{ &Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_OnPawnDetectorOverlapExit, "OnPawnDetectorOverlapExit" }, // 3169769851
		{ &Z_Construct_UFunction_UOtherCharactersVerticalCollisionsHandler_SetPawnDetector, "SetPawnDetector" }, // 202548540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OtherCharactersVerticalCollisionsHandler.h" },
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__pawnDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__pawnDetector = { "_pawnDetector", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _pawnDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__pawnDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__pawnDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors = { "_overlappingActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _overlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors_Inner = { "_overlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/OtherCharactersVerticalCollisionsHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors = { "_ignoreBelowActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _ignoreBelowActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors_Inner = { "_ignoreBelowActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__pawnDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__overlappingActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::NewProp__ignoreBelowActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOtherCharactersVerticalCollisionsHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::ClassParams = {
		&UOtherCharactersVerticalCollisionsHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOtherCharactersVerticalCollisionsHandler, 3722013579);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOtherCharactersVerticalCollisionsHandler>()
	{
		return UOtherCharactersVerticalCollisionsHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOtherCharactersVerticalCollisionsHandler(Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler, &UOtherCharactersVerticalCollisionsHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOtherCharactersVerticalCollisionsHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOtherCharactersVerticalCollisionsHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
