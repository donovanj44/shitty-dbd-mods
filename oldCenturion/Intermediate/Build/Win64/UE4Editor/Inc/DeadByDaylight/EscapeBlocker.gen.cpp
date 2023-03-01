// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeBlocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeBlocker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeBlocker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeBlocker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEscapeBlocker::execOnPlayerDetectionZoneBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDetectionZoneBeginOverlap(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeBlocker::execOnPlayerDetectionZoneEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDetectionZoneEndOverlap(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeBlocker::execSetCamperBlocker)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_camperBlocker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCamperBlocker(Z_Param_camperBlocker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeBlocker::execSetPlayerDetectionZone)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_playerDetectionZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerDetectionZone(Z_Param_playerDetectionZone);
		P_NATIVE_END;
	}
	static FName NAME_AEscapeBlocker_ActivatePlayerBlockerFX = FName(TEXT("ActivatePlayerBlockerFX"));
	void AEscapeBlocker::ActivatePlayerBlockerFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeBlocker_ActivatePlayerBlockerFX),NULL);
	}
	static FName NAME_AEscapeBlocker_DeactivatePlayerBlockerFX = FName(TEXT("DeactivatePlayerBlockerFX"));
	void AEscapeBlocker::DeactivatePlayerBlockerFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeBlocker_DeactivatePlayerBlockerFX),NULL);
	}
	void AEscapeBlocker::StaticRegisterNativesAEscapeBlocker()
	{
		UClass* Class = AEscapeBlocker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerDetectionZoneBeginOverlap", &AEscapeBlocker::execOnPlayerDetectionZoneBeginOverlap },
			{ "OnPlayerDetectionZoneEndOverlap", &AEscapeBlocker::execOnPlayerDetectionZoneEndOverlap },
			{ "SetCamperBlocker", &AEscapeBlocker::execSetCamperBlocker },
			{ "SetPlayerDetectionZone", &AEscapeBlocker::execSetPlayerDetectionZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "ActivatePlayerBlockerFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "DeactivatePlayerBlockerFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics
	{
		struct EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms), &Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "OnPlayerDetectionZoneBeginOverlap", nullptr, nullptr, sizeof(EscapeBlocker_eventOnPlayerDetectionZoneBeginOverlap_Parms), Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics
	{
		struct EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "OnPlayerDetectionZoneEndOverlap", nullptr, nullptr, sizeof(EscapeBlocker_eventOnPlayerDetectionZoneEndOverlap_Parms), Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics
	{
		struct EscapeBlocker_eventSetCamperBlocker_Parms
		{
			UBoxComponent* camperBlocker;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camperBlocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperBlocker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::NewProp_camperBlocker_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::NewProp_camperBlocker = { "camperBlocker", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventSetCamperBlocker_Parms, camperBlocker), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::NewProp_camperBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::NewProp_camperBlocker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::NewProp_camperBlocker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "SetCamperBlocker", nullptr, nullptr, sizeof(EscapeBlocker_eventSetCamperBlocker_Parms), Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics
	{
		struct EscapeBlocker_eventSetPlayerDetectionZone_Parms
		{
			UBoxComponent* playerDetectionZone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerDetectionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerDetectionZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::NewProp_playerDetectionZone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::NewProp_playerDetectionZone = { "playerDetectionZone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeBlocker_eventSetPlayerDetectionZone_Parms, playerDetectionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::NewProp_playerDetectionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::NewProp_playerDetectionZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::NewProp_playerDetectionZone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeBlocker, nullptr, "SetPlayerDetectionZone", nullptr, nullptr, sizeof(EscapeBlocker_eventSetPlayerDetectionZone_Parms), Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEscapeBlocker_NoRegister()
	{
		return AEscapeBlocker::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeBlocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerDetectionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerDetectionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperBlocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperBlocker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeBlocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEscapeBlocker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEscapeBlocker_ActivatePlayerBlockerFX, "ActivatePlayerBlockerFX" }, // 4141665114
		{ &Z_Construct_UFunction_AEscapeBlocker_DeactivatePlayerBlockerFX, "DeactivatePlayerBlockerFX" }, // 601111600
		{ &Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneBeginOverlap, "OnPlayerDetectionZoneBeginOverlap" }, // 4168716047
		{ &Z_Construct_UFunction_AEscapeBlocker_OnPlayerDetectionZoneEndOverlap, "OnPlayerDetectionZoneEndOverlap" }, // 1921499168
		{ &Z_Construct_UFunction_AEscapeBlocker_SetCamperBlocker, "SetCamperBlocker" }, // 949790672
		{ &Z_Construct_UFunction_AEscapeBlocker_SetPlayerDetectionZone, "SetPlayerDetectionZone" }, // 4253371902
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeBlocker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscapeBlocker.h" },
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__playerDetectionZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__playerDetectionZone = { "_playerDetectionZone", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeBlocker, _playerDetectionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__playerDetectionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__playerDetectionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__camperBlocker_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeBlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__camperBlocker = { "_camperBlocker", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeBlocker, _camperBlocker), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__camperBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__camperBlocker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscapeBlocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__playerDetectionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeBlocker_Statics::NewProp__camperBlocker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeBlocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeBlocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeBlocker_Statics::ClassParams = {
		&AEscapeBlocker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEscapeBlocker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeBlocker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeBlocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeBlocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeBlocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeBlocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeBlocker, 1044604459);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEscapeBlocker>()
	{
		return AEscapeBlocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeBlocker(Z_Construct_UClass_AEscapeBlocker, &AEscapeBlocker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEscapeBlocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeBlocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
