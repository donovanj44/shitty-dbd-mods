// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttack() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttack_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttack();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackSubstateRequestResult();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAttackableComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSubstate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDAttackTargetTracker();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatProperty();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDetectionZone();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAttack::execClient_ReceiveAttackSubstateRequestResult)
	{
		P_GET_STRUCT(FAttackSubstateRequestResult,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ReceiveAttackSubstateRequestResult_Implementation(Z_Param_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execClient_ReceiveHitResult)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_GET_UBOOL(Z_Param_isValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ReceiveHitResult_Implementation(Z_Param_target,Z_Param_isValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execMulticast_ClearTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ClearTargets_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execMulticast_HitAttackableComponent)
	{
		P_GET_OBJECT(UAttackableComponent,Z_Param_attackableComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_HitAttackableComponent_Validate(Z_Param_attackableComponent))
		{
			RPC_ValidateFailed(TEXT("Multicast_HitAttackableComponent_Validate"));
			return;
		}
		P_THIS->Multicast_HitAttackableComponent_Implementation(Z_Param_attackableComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execMulticast_HitTarget)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HitTarget_Implementation(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execMulticast_RequestStateChange)
	{
		P_GET_ENUM(EAttackSubstate,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RequestStateChange_Implementation(EAttackSubstate(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execServer_ClearTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ClearTargets_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_ClearTargets_Validate"));
			return;
		}
		P_THIS->Server_ClearTargets_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execServer_HitAttackableComponent)
	{
		P_GET_OBJECT(UAttackableComponent,Z_Param_attackableComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HitAttackableComponent_Validate(Z_Param_attackableComponent))
		{
			RPC_ValidateFailed(TEXT("Server_HitAttackableComponent_Validate"));
			return;
		}
		P_THIS->Server_HitAttackableComponent_Implementation(Z_Param_attackableComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execServer_HitTarget)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetLocationTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HitTarget_Validate(Z_Param_target,Z_Param_targetLocationTimestamp))
		{
			RPC_ValidateFailed(TEXT("Server_HitTarget_Validate"));
			return;
		}
		P_THIS->Server_HitTarget_Implementation(Z_Param_target,Z_Param_targetLocationTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAttack::execServer_RequestStateChange)
	{
		P_GET_ENUM(EAttackSubstate,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestStateChange_Validate(EAttackSubstate(Z_Param_state)))
		{
			RPC_ValidateFailed(TEXT("Server_RequestStateChange_Validate"));
			return;
		}
		P_THIS->Server_RequestStateChange_Implementation(EAttackSubstate(Z_Param_state));
		P_NATIVE_END;
	}
	static FName NAME_UDBDAttack_Client_ReceiveAttackSubstateRequestResult = FName(TEXT("Client_ReceiveAttackSubstateRequestResult"));
	void UDBDAttack::Client_ReceiveAttackSubstateRequestResult(const FAttackSubstateRequestResult result)
	{
		DBDAttack_eventClient_ReceiveAttackSubstateRequestResult_Parms Parms;
		Parms.result=result;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Client_ReceiveAttackSubstateRequestResult),&Parms);
	}
	static FName NAME_UDBDAttack_Client_ReceiveHitResult = FName(TEXT("Client_ReceiveHitResult"));
	void UDBDAttack::Client_ReceiveHitResult(ADBDPlayer* target, bool isValid)
	{
		DBDAttack_eventClient_ReceiveHitResult_Parms Parms;
		Parms.target=target;
		Parms.isValid=isValid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Client_ReceiveHitResult),&Parms);
	}
	static FName NAME_UDBDAttack_Multicast_ClearTargets = FName(TEXT("Multicast_ClearTargets"));
	void UDBDAttack::Multicast_ClearTargets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Multicast_ClearTargets),NULL);
	}
	static FName NAME_UDBDAttack_Multicast_HitAttackableComponent = FName(TEXT("Multicast_HitAttackableComponent"));
	void UDBDAttack::Multicast_HitAttackableComponent(UAttackableComponent* attackableComponent)
	{
		DBDAttack_eventMulticast_HitAttackableComponent_Parms Parms;
		Parms.attackableComponent=attackableComponent;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Multicast_HitAttackableComponent),&Parms);
	}
	static FName NAME_UDBDAttack_Multicast_HitTarget = FName(TEXT("Multicast_HitTarget"));
	void UDBDAttack::Multicast_HitTarget(ADBDPlayer* target)
	{
		DBDAttack_eventMulticast_HitTarget_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Multicast_HitTarget),&Parms);
	}
	static FName NAME_UDBDAttack_Multicast_RequestStateChange = FName(TEXT("Multicast_RequestStateChange"));
	void UDBDAttack::Multicast_RequestStateChange(const EAttackSubstate state)
	{
		DBDAttack_eventMulticast_RequestStateChange_Parms Parms;
		Parms.state=state;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Multicast_RequestStateChange),&Parms);
	}
	static FName NAME_UDBDAttack_Server_ClearTargets = FName(TEXT("Server_ClearTargets"));
	void UDBDAttack::Server_ClearTargets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Server_ClearTargets),NULL);
	}
	static FName NAME_UDBDAttack_Server_HitAttackableComponent = FName(TEXT("Server_HitAttackableComponent"));
	void UDBDAttack::Server_HitAttackableComponent(UAttackableComponent* attackableComponent)
	{
		DBDAttack_eventServer_HitAttackableComponent_Parms Parms;
		Parms.attackableComponent=attackableComponent;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Server_HitAttackableComponent),&Parms);
	}
	static FName NAME_UDBDAttack_Server_HitTarget = FName(TEXT("Server_HitTarget"));
	void UDBDAttack::Server_HitTarget(ADBDPlayer* target, const float targetLocationTimestamp)
	{
		DBDAttack_eventServer_HitTarget_Parms Parms;
		Parms.target=target;
		Parms.targetLocationTimestamp=targetLocationTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Server_HitTarget),&Parms);
	}
	static FName NAME_UDBDAttack_Server_RequestStateChange = FName(TEXT("Server_RequestStateChange"));
	void UDBDAttack::Server_RequestStateChange(const EAttackSubstate state)
	{
		DBDAttack_eventServer_RequestStateChange_Parms Parms;
		Parms.state=state;
		ProcessEvent(FindFunctionChecked(NAME_UDBDAttack_Server_RequestStateChange),&Parms);
	}
	void UDBDAttack::StaticRegisterNativesUDBDAttack()
	{
		UClass* Class = UDBDAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ReceiveAttackSubstateRequestResult", &UDBDAttack::execClient_ReceiveAttackSubstateRequestResult },
			{ "Client_ReceiveHitResult", &UDBDAttack::execClient_ReceiveHitResult },
			{ "Multicast_ClearTargets", &UDBDAttack::execMulticast_ClearTargets },
			{ "Multicast_HitAttackableComponent", &UDBDAttack::execMulticast_HitAttackableComponent },
			{ "Multicast_HitTarget", &UDBDAttack::execMulticast_HitTarget },
			{ "Multicast_RequestStateChange", &UDBDAttack::execMulticast_RequestStateChange },
			{ "Server_ClearTargets", &UDBDAttack::execServer_ClearTargets },
			{ "Server_HitAttackableComponent", &UDBDAttack::execServer_HitAttackableComponent },
			{ "Server_HitTarget", &UDBDAttack::execServer_HitTarget },
			{ "Server_RequestStateChange", &UDBDAttack::execServer_RequestStateChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventClient_ReceiveAttackSubstateRequestResult_Parms, result), Z_Construct_UScriptStruct_FAttackSubstateRequestResult, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Client_ReceiveAttackSubstateRequestResult", nullptr, nullptr, sizeof(DBDAttack_eventClient_ReceiveAttackSubstateRequestResult_Parms), Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics
	{
		static void NewProp_isValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isValid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_isValid_SetBit(void* Obj)
	{
		((DBDAttack_eventClient_ReceiveHitResult_Parms*)Obj)->isValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_isValid = { "isValid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAttack_eventClient_ReceiveHitResult_Parms), &Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_isValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventClient_ReceiveHitResult_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_isValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Client_ReceiveHitResult", nullptr, nullptr, sizeof(DBDAttack_eventClient_ReceiveHitResult_Parms), Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Multicast_ClearTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attackableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::NewProp_attackableComponent = { "attackableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventMulticast_HitAttackableComponent_Parms, attackableComponent), Z_Construct_UClass_UAttackableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::NewProp_attackableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Multicast_HitAttackableComponent", nullptr, nullptr, sizeof(DBDAttack_eventMulticast_HitAttackableComponent_Parms), Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventMulticast_HitTarget_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Multicast_HitTarget", nullptr, nullptr, sizeof(DBDAttack_eventMulticast_HitTarget_Parms), Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventMulticast_RequestStateChange_Parms, state), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Multicast_RequestStateChange", nullptr, nullptr, sizeof(DBDAttack_eventMulticast_RequestStateChange_Parms), Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Server_ClearTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Server_ClearTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Server_ClearTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attackableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::NewProp_attackableComponent = { "attackableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventServer_HitAttackableComponent_Parms, attackableComponent), Z_Construct_UClass_UAttackableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::NewProp_attackableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::NewProp_attackableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Server_HitAttackableComponent", nullptr, nullptr, sizeof(DBDAttack_eventServer_HitAttackableComponent_Parms), Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetLocationTimestamp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_targetLocationTimestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_targetLocationTimestamp = { "targetLocationTimestamp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventServer_HitTarget_Parms, targetLocationTimestamp), METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_targetLocationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_targetLocationTimestamp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventServer_HitTarget_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_targetLocationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Server_HitTarget", nullptr, nullptr, sizeof(DBDAttack_eventServer_HitTarget_Parms), Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Server_HitTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Server_HitTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAttack_eventServer_RequestStateChange_Parms, state), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAttack, nullptr, "Server_RequestStateChange", nullptr, nullptr, sizeof(DBDAttack_eventServer_RequestStateChange_Parms), Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAttack_NoRegister()
	{
		return UDBDAttack::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidationConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__hitValidationConfigName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__hitValidationConfigName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetsAwaitingServerValidation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__targetsAwaitingServerValidation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetsAwaitingServerValidation_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hitTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hitTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__states_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__states;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__states_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__states_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__states_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localAlreadyHitTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__localAlreadyHitTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localAlreadyHitTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__stateClasses;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__stateClasses_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__stateClasses_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__stateClasses_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obstructionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__obstructionZone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__obstructionZone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lockZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__lockZone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__lockZone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__damageZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__damageZone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__damageZone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useMontage_MetaData[];
#endif
		static void NewProp__useMontage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAttack_Client_ReceiveAttackSubstateRequestResult, "Client_ReceiveAttackSubstateRequestResult" }, // 1410627355
		{ &Z_Construct_UFunction_UDBDAttack_Client_ReceiveHitResult, "Client_ReceiveHitResult" }, // 1766460828
		{ &Z_Construct_UFunction_UDBDAttack_Multicast_ClearTargets, "Multicast_ClearTargets" }, // 468275493
		{ &Z_Construct_UFunction_UDBDAttack_Multicast_HitAttackableComponent, "Multicast_HitAttackableComponent" }, // 191209278
		{ &Z_Construct_UFunction_UDBDAttack_Multicast_HitTarget, "Multicast_HitTarget" }, // 634886012
		{ &Z_Construct_UFunction_UDBDAttack_Multicast_RequestStateChange, "Multicast_RequestStateChange" }, // 1020559257
		{ &Z_Construct_UFunction_UDBDAttack_Server_ClearTargets, "Server_ClearTargets" }, // 1457281335
		{ &Z_Construct_UFunction_UDBDAttack_Server_HitAttackableComponent, "Server_HitAttackableComponent" }, // 2645225557
		{ &Z_Construct_UFunction_UDBDAttack_Server_HitTarget, "Server_HitTarget" }, // 2949286224
		{ &Z_Construct_UFunction_UDBDAttack_Server_RequestStateChange, "Server_RequestStateChange" }, // 2265307948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAttack.h" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName = { "_hitValidationConfigName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _hitValidationConfigName), Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation = { "_targetsAwaitingServerValidation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _targetsAwaitingServerValidation), METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation_ElementProp = { "_targetsAwaitingServerValidation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets = { "_hitTargets", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _hitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets_Inner = { "_hitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__states = { "_states", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _states), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_Key_KeyProp = { "_states_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_ValueProp = { "_states", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDBDAttackSubstate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets = { "_localAlreadyHitTargets", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _localAlreadyHitTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets_Inner = { "_localAlreadyHitTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses = { "_stateClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _stateClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_Key_KeyProp = { "_stateClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_ValueProp = { "_stateClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDBDAttackSubstate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetTracker_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetTracker = { "_targetTracker", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _targetTracker), Z_Construct_UScriptStruct_FDBDAttackTargetTracker, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__maxAccelerationMultiplier_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__maxAccelerationMultiplier = { "_maxAccelerationMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _maxAccelerationMultiplier), Z_Construct_UScriptStruct_FStatProperty, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__maxAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__maxAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone = { "_obstructionZone", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _obstructionZone), Z_Construct_UEnum_DBDSharedTypes_EDetectionZone, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone = { "_lockZone", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _lockZone), Z_Construct_UEnum_DBDSharedTypes_EDetectionZone, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone = { "_damageZone", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _damageZone), Z_Construct_UEnum_DBDSharedTypes_EDetectionZone, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	void Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage_SetBit(void* Obj)
	{
		((UDBDAttack*)Obj)->_useMontage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage = { "_useMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDAttack), &Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType_MetaData[] = {
		{ "Category", "DBDAttack" },
		{ "ModuleRelativePath", "Public/DBDAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType = { "_attackType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttack, _attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitValidationConfigName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetsAwaitingServerValidation_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__hitTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__states,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__states_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__localAlreadyHitTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__stateClasses_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__targetTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__maxAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__obstructionZone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__lockZone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__damageZone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__useMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttack_Statics::NewProp__attackType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttack_Statics::ClassParams = {
		&UDBDAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttack, 4238827427);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttack>()
	{
		return UDBDAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttack(Z_Construct_UClass_UDBDAttack, &UDBDAttack::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
