// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AuthoritativeMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthoritativeMovementComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAuthoritativeMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAuthoritativeMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAuthoritativeMovementComponent::execOnPawnDetectorOverlapEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetectorOverlapEnter(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthoritativeMovementComponent::execOnPawnDetectorOverlapExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetectorOverlapExit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthoritativeMovementComponent::execOnRep_AuthoritativeIgnoreOverlapCharacters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AuthoritativeIgnoreOverlapCharacters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthoritativeMovementComponent::execSetPawnDetector)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pawnDetector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnDetector(Z_Param_pawnDetector);
		P_NATIVE_END;
	}
	void UAuthoritativeMovementComponent::StaticRegisterNativesUAuthoritativeMovementComponent()
	{
		UClass* Class = UAuthoritativeMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetectorOverlapEnter", &UAuthoritativeMovementComponent::execOnPawnDetectorOverlapEnter },
			{ "OnPawnDetectorOverlapExit", &UAuthoritativeMovementComponent::execOnPawnDetectorOverlapExit },
			{ "OnRep_AuthoritativeIgnoreOverlapCharacters", &UAuthoritativeMovementComponent::execOnRep_AuthoritativeIgnoreOverlapCharacters },
			{ "SetPawnDetector", &UAuthoritativeMovementComponent::execSetPawnDetector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics
	{
		struct AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms), &Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeMovementComponent, nullptr, "OnPawnDetectorOverlapEnter", nullptr, nullptr, sizeof(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapEnter_Parms), Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics
	{
		struct AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeMovementComponent, nullptr, "OnPawnDetectorOverlapExit", nullptr, nullptr, sizeof(AuthoritativeMovementComponent_eventOnPawnDetectorOverlapExit_Parms), Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeMovementComponent, nullptr, "OnRep_AuthoritativeIgnoreOverlapCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics
	{
		struct AuthoritativeMovementComponent_eventSetPawnDetector_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::NewProp_pawnDetector = { "pawnDetector", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeMovementComponent_eventSetPawnDetector_Parms, pawnDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::NewProp_pawnDetector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::NewProp_pawnDetector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeMovementComponent, nullptr, "SetPawnDetector", nullptr, nullptr, sizeof(AuthoritativeMovementComponent_eventSetPawnDetector_Parms), Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthoritativeMovementComponent_NoRegister()
	{
		return UAuthoritativeMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuthoritativeMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previousAuthoritativeIgnoreOverlapCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__previousAuthoritativeIgnoreOverlapCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__previousAuthoritativeIgnoreOverlapCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authoritativeIgnoreOverlapCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__authoritativeIgnoreOverlapCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__authoritativeIgnoreOverlapCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pawnDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawnDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stopIgnoreCharacterOnEndOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stopIgnoreCharacterOnEndOverlap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stopIgnoreCharacterOnEndOverlap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charactersToPush_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__charactersToPush;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__charactersToPush_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter, "OnPawnDetectorOverlapEnter" }, // 736115843
		{ &Z_Construct_UFunction_UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit, "OnPawnDetectorOverlapExit" }, // 1022470626
		{ &Z_Construct_UFunction_UAuthoritativeMovementComponent_OnRep_AuthoritativeIgnoreOverlapCharacters, "OnRep_AuthoritativeIgnoreOverlapCharacters" }, // 136129896
		{ &Z_Construct_UFunction_UAuthoritativeMovementComponent_SetPawnDetector, "SetPawnDetector" }, // 2909822283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuthoritativeMovementComponent.h" },
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters = { "_previousAuthoritativeIgnoreOverlapCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeMovementComponent, _previousAuthoritativeIgnoreOverlapCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters_Inner = { "_previousAuthoritativeIgnoreOverlapCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters = { "_authoritativeIgnoreOverlapCharacters", "OnRep_AuthoritativeIgnoreOverlapCharacters", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeMovementComponent, _authoritativeIgnoreOverlapCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters_Inner = { "_authoritativeIgnoreOverlapCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__pawnDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__pawnDetector = { "_pawnDetector", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeMovementComponent, _pawnDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__pawnDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__pawnDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap = { "_stopIgnoreCharacterOnEndOverlap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeMovementComponent, _stopIgnoreCharacterOnEndOverlap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap_Inner = { "_stopIgnoreCharacterOnEndOverlap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush = { "_charactersToPush", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeMovementComponent, _charactersToPush), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush_Inner = { "_charactersToPush", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__previousAuthoritativeIgnoreOverlapCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__authoritativeIgnoreOverlapCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__pawnDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__stopIgnoreCharacterOnEndOverlap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::NewProp__charactersToPush_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthoritativeMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::ClassParams = {
		&UAuthoritativeMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthoritativeMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthoritativeMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthoritativeMovementComponent, 4072491703);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAuthoritativeMovementComponent>()
	{
		return UAuthoritativeMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthoritativeMovementComponent(Z_Construct_UClass_UAuthoritativeMovementComponent, &UAuthoritativeMovementComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAuthoritativeMovementComponent"), false, nullptr, nullptr, nullptr);

	void UAuthoritativeMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__authoritativeIgnoreOverlapCharacters(TEXT("_authoritativeIgnoreOverlapCharacters"));

		const bool bIsValid = true
			&& Name__authoritativeIgnoreOverlapCharacters == ClassReps[(int32)ENetFields_Private::_authoritativeIgnoreOverlapCharacters].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuthoritativeMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthoritativeMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
