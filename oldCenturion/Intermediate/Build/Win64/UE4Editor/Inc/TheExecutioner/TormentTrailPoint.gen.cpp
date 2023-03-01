// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailPoint() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATormentTrailPoint::execGetTrailLocationAndTangeant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indexInTrail);
		P_GET_OBJECT(USplineComponent,Z_Param_splineComponent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outStartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outStartTangent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outEndLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outEndTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTrailLocationAndTangeant(Z_Param_indexInTrail,Z_Param_splineComponent,Z_Param_Out_outStartLocation,Z_Param_Out_outStartTangent,Z_Param_Out_outEndLocation,Z_Param_Out_outEndTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentTrailPoint::execMulticast_TriggerTrailPointDisappear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerTrailPointDisappear_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentTrailPoint::execOnAcquireChanged)
	{
		P_GET_UBOOL(Z_Param_acquired);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcquireChanged(Z_Param_acquired);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentTrailPoint::execServer_RemoveTrailPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RemoveTrailPoint_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RemoveTrailPoint_Validate"));
			return;
		}
		P_THIS->Server_RemoveTrailPoint_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATormentTrailPoint_ActivateCosmetic = FName(TEXT("ActivateCosmetic"));
	void ATormentTrailPoint::ActivateCosmetic(bool value)
	{
		TormentTrailPoint_eventActivateCosmetic_Parms Parms;
		Parms.value=value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailPoint_ActivateCosmetic),&Parms);
	}
	static FName NAME_ATormentTrailPoint_AddTrailCosmetic = FName(TEXT("AddTrailCosmetic"));
	void ATormentTrailPoint::AddTrailCosmetic(const USplineComponent* splineComponent, const uint8 indexInTrail)
	{
		TormentTrailPoint_eventAddTrailCosmetic_Parms Parms;
		Parms.splineComponent=splineComponent;
		Parms.indexInTrail=indexInTrail;
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailPoint_AddTrailCosmetic),&Parms);
	}
	static FName NAME_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear = FName(TEXT("Multicast_TriggerTrailPointDisappear"));
	void ATormentTrailPoint::Multicast_TriggerTrailPointDisappear()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear),NULL);
	}
	static FName NAME_ATormentTrailPoint_RefreshTrailPointCosmetic = FName(TEXT("RefreshTrailPointCosmetic"));
	void ATormentTrailPoint::RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason)
	{
		TormentTrailPoint_eventRefreshTrailPointCosmetic_Parms Parms;
		Parms.trailPointRefreshReason=trailPointRefreshReason;
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailPoint_RefreshTrailPointCosmetic),&Parms);
	}
	static FName NAME_ATormentTrailPoint_Server_RemoveTrailPoint = FName(TEXT("Server_RemoveTrailPoint"));
	void ATormentTrailPoint::Server_RemoveTrailPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailPoint_Server_RemoveTrailPoint),NULL);
	}
	void ATormentTrailPoint::StaticRegisterNativesATormentTrailPoint()
	{
		UClass* Class = ATormentTrailPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrailLocationAndTangeant", &ATormentTrailPoint::execGetTrailLocationAndTangeant },
			{ "Multicast_TriggerTrailPointDisappear", &ATormentTrailPoint::execMulticast_TriggerTrailPointDisappear },
			{ "OnAcquireChanged", &ATormentTrailPoint::execOnAcquireChanged },
			{ "Server_RemoveTrailPoint", &ATormentTrailPoint::execServer_RemoveTrailPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TormentTrailPoint_eventActivateCosmetic_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TormentTrailPoint_eventActivateCosmetic_Parms), &Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "ActivateCosmetic", nullptr, nullptr, sizeof(TormentTrailPoint_eventActivateCosmetic_Parms), Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexInTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_indexInTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_splineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_splineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_indexInTrail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_indexInTrail = { "indexInTrail", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventAddTrailCosmetic_Parms, indexInTrail), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_indexInTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_indexInTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_splineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_splineComponent = { "splineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventAddTrailCosmetic_Parms, splineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_splineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_splineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_indexInTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::NewProp_splineComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "AddTrailCosmetic", nullptr, nullptr, sizeof(TormentTrailPoint_eventAddTrailCosmetic_Parms), Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics
	{
		struct TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms
		{
			int32 indexInTrail;
			const USplineComponent* splineComponent;
			FVector outStartLocation;
			FVector outStartTangent;
			FVector outEndLocation;
			FVector outEndTangent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outEndTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outEndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outStartTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_splineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_splineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexInTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_indexInTrail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outEndTangent = { "outEndTangent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, outEndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outEndLocation = { "outEndLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, outEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outStartTangent = { "outStartTangent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, outStartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outStartLocation = { "outStartLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, outStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_splineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_splineComponent = { "splineComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, splineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_splineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_splineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_indexInTrail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_indexInTrail = { "indexInTrail", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms, indexInTrail), METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_indexInTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_indexInTrail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outEndTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outStartTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_outStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_splineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::NewProp_indexInTrail,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "GetTrailLocationAndTangeant", nullptr, nullptr, sizeof(TormentTrailPoint_eventGetTrailLocationAndTangeant_Parms), Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "Multicast_TriggerTrailPointDisappear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics
	{
		struct TormentTrailPoint_eventOnAcquireChanged_Parms
		{
			bool acquired;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acquired_MetaData[];
#endif
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((TormentTrailPoint_eventOnAcquireChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TormentTrailPoint_eventOnAcquireChanged_Parms), &Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "OnAcquireChanged", nullptr, nullptr, sizeof(TormentTrailPoint_eventOnAcquireChanged_Parms), Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_trailPointRefreshReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_trailPointRefreshReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::NewProp_trailPointRefreshReason = { "trailPointRefreshReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPoint_eventRefreshTrailPointCosmetic_Parms, trailPointRefreshReason), Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::NewProp_trailPointRefreshReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::NewProp_trailPointRefreshReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::NewProp_trailPointRefreshReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "RefreshTrailPointCosmetic", nullptr, nullptr, sizeof(TormentTrailPoint_eventRefreshTrailPointCosmetic_Parms), Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailPoint, nullptr, "Server_RemoveTrailPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister()
	{
		return ATormentTrailPoint::StaticClass();
	}
	struct Z_Construct_UClass_ATormentTrailPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splineMeshOverlapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__splineMeshOverlapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATormentTrailPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTormentTrailPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATormentTrailPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATormentTrailPoint_ActivateCosmetic, "ActivateCosmetic" }, // 2874606272
		{ &Z_Construct_UFunction_ATormentTrailPoint_AddTrailCosmetic, "AddTrailCosmetic" }, // 504767019
		{ &Z_Construct_UFunction_ATormentTrailPoint_GetTrailLocationAndTangeant, "GetTrailLocationAndTangeant" }, // 2575225192
		{ &Z_Construct_UFunction_ATormentTrailPoint_Multicast_TriggerTrailPointDisappear, "Multicast_TriggerTrailPointDisappear" }, // 3031261224
		{ &Z_Construct_UFunction_ATormentTrailPoint_OnAcquireChanged, "OnAcquireChanged" }, // 2270420228
		{ &Z_Construct_UFunction_ATormentTrailPoint_RefreshTrailPointCosmetic, "RefreshTrailPointCosmetic" }, // 1415986445
		{ &Z_Construct_UFunction_ATormentTrailPoint_Server_RemoveTrailPoint, "Server_RemoveTrailPoint" }, // 2343414099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentTrailPoint.h" },
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__splineMeshOverlapDistance_MetaData[] = {
		{ "Category", "TormentTrailPoint" },
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__splineMeshOverlapDistance = { "_splineMeshOverlapDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentTrailPoint, _splineMeshOverlapDistance), METADATA_PARAMS(Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__splineMeshOverlapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__splineMeshOverlapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__poolableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__poolableComponent = { "_poolableComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentTrailPoint, _poolableComponent), Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__poolableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__poolableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATormentTrailPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__splineMeshOverlapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentTrailPoint_Statics::NewProp__poolableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATormentTrailPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATormentTrailPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATormentTrailPoint_Statics::ClassParams = {
		&ATormentTrailPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATormentTrailPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATormentTrailPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATormentTrailPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATormentTrailPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATormentTrailPoint, 4069131372);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATormentTrailPoint>()
	{
		return ATormentTrailPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATormentTrailPoint(Z_Construct_UClass_ATormentTrailPoint, &ATormentTrailPoint::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATormentTrailPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATormentTrailPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
