// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/BaseProjectileReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProjectileReplicationComponent() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactInfo();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
// End Cross Module References
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execClient_LaunchRefusedByServer)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_LaunchRefusedByServer_Implementation(Z_Param_projectile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execClient_ReceiveDetectPlayerValidation)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ReceiveDetectPlayerValidation_Implementation(Z_Param_projectile,Z_Param_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execMulticast_DetectImpact)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DetectImpact_Implementation(Z_Param_projectile,Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execMulticast_DetectPlayer)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DetectPlayer_Implementation(Z_Param_projectile,Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execMulticast_OnLaunch)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnLaunch_Implementation(Z_Param_projectile,Z_Param_launchInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execMulticast_OnLaunchWithImpact)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnLaunchWithImpact_Implementation(Z_Param_projectile,Z_Param_launchInfo,Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execMulticast_SendAuthorityDetectPlayer)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SendAuthorityDetectPlayer_Implementation(Z_Param_projectile,Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileReplicationComponent::execServer_TryDetectPlayer)
	{
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_projectileLocation);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_projectileRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetLocationTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TryDetectPlayer_Validate(Z_Param_projectile,Z_Param_impactInfo,Z_Param_projectileLocation,Z_Param_projectileRotation,Z_Param_targetLocationTimestamp))
		{
			RPC_ValidateFailed(TEXT("Server_TryDetectPlayer_Validate"));
			return;
		}
		P_THIS->Server_TryDetectPlayer_Implementation(Z_Param_projectile,Z_Param_impactInfo,Z_Param_projectileLocation,Z_Param_projectileRotation,Z_Param_targetLocationTimestamp);
		P_NATIVE_END;
	}
	static FName NAME_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer = FName(TEXT("Client_LaunchRefusedByServer"));
	void UBaseProjectileReplicationComponent::Client_LaunchRefusedByServer(ABaseProjectile* projectile)
	{
		BaseProjectileReplicationComponent_eventClient_LaunchRefusedByServer_Parms Parms;
		Parms.projectile=projectile;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation = FName(TEXT("Client_ReceiveDetectPlayerValidation"));
	void UBaseProjectileReplicationComponent::Client_ReceiveDetectPlayerValidation(ABaseProjectile* projectile, bool success)
	{
		BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms Parms;
		Parms.projectile=projectile;
		Parms.success=success ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Multicast_DetectImpact = FName(TEXT("Multicast_DetectImpact"));
	void UBaseProjectileReplicationComponent::Multicast_DetectImpact(ABaseProjectile* projectile, FImpactInfo impactInfo)
	{
		BaseProjectileReplicationComponent_eventMulticast_DetectImpact_Parms Parms;
		Parms.projectile=projectile;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Multicast_DetectImpact),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Multicast_DetectPlayer = FName(TEXT("Multicast_DetectPlayer"));
	void UBaseProjectileReplicationComponent::Multicast_DetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo)
	{
		BaseProjectileReplicationComponent_eventMulticast_DetectPlayer_Parms Parms;
		Parms.projectile=projectile;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Multicast_DetectPlayer),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Multicast_OnLaunch = FName(TEXT("Multicast_OnLaunch"));
	void UBaseProjectileReplicationComponent::Multicast_OnLaunch(ABaseProjectile* projectile, FLaunchInfo launchInfo)
	{
		BaseProjectileReplicationComponent_eventMulticast_OnLaunch_Parms Parms;
		Parms.projectile=projectile;
		Parms.launchInfo=launchInfo;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Multicast_OnLaunch),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact = FName(TEXT("Multicast_OnLaunchWithImpact"));
	void UBaseProjectileReplicationComponent::Multicast_OnLaunchWithImpact(ABaseProjectile* projectile, FLaunchInfo launchInfo, FImpactInfo impactInfo)
	{
		BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms Parms;
		Parms.projectile=projectile;
		Parms.launchInfo=launchInfo;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer = FName(TEXT("Multicast_SendAuthorityDetectPlayer"));
	void UBaseProjectileReplicationComponent::Multicast_SendAuthorityDetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo)
	{
		BaseProjectileReplicationComponent_eventMulticast_SendAuthorityDetectPlayer_Parms Parms;
		Parms.projectile=projectile;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer),&Parms);
	}
	static FName NAME_UBaseProjectileReplicationComponent_Server_TryDetectPlayer = FName(TEXT("Server_TryDetectPlayer"));
	void UBaseProjectileReplicationComponent::Server_TryDetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp)
	{
		BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms Parms;
		Parms.projectile=projectile;
		Parms.impactInfo=impactInfo;
		Parms.projectileLocation=projectileLocation;
		Parms.projectileRotation=projectileRotation;
		Parms.targetLocationTimestamp=targetLocationTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileReplicationComponent_Server_TryDetectPlayer),&Parms);
	}
	void UBaseProjectileReplicationComponent::StaticRegisterNativesUBaseProjectileReplicationComponent()
	{
		UClass* Class = UBaseProjectileReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_LaunchRefusedByServer", &UBaseProjectileReplicationComponent::execClient_LaunchRefusedByServer },
			{ "Client_ReceiveDetectPlayerValidation", &UBaseProjectileReplicationComponent::execClient_ReceiveDetectPlayerValidation },
			{ "Multicast_DetectImpact", &UBaseProjectileReplicationComponent::execMulticast_DetectImpact },
			{ "Multicast_DetectPlayer", &UBaseProjectileReplicationComponent::execMulticast_DetectPlayer },
			{ "Multicast_OnLaunch", &UBaseProjectileReplicationComponent::execMulticast_OnLaunch },
			{ "Multicast_OnLaunchWithImpact", &UBaseProjectileReplicationComponent::execMulticast_OnLaunchWithImpact },
			{ "Multicast_SendAuthorityDetectPlayer", &UBaseProjectileReplicationComponent::execMulticast_SendAuthorityDetectPlayer },
			{ "Server_TryDetectPlayer", &UBaseProjectileReplicationComponent::execServer_TryDetectPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventClient_LaunchRefusedByServer_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Client_LaunchRefusedByServer", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventClient_LaunchRefusedByServer_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics
	{
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_success_SetBit(void* Obj)
	{
		((BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms), &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Client_ReceiveDetectPlayerValidation", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_DetectImpact_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_DetectImpact_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Multicast_DetectImpact", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventMulticast_DetectImpact_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_DetectPlayer_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_DetectPlayer_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Multicast_DetectPlayer", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventMulticast_DetectPlayer_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_OnLaunch_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_OnLaunch_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::NewProp_launchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Multicast_OnLaunch", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventMulticast_OnLaunch_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_launchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Multicast_OnLaunchWithImpact", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_SendAuthorityDetectPlayer_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventMulticast_SendAuthorityDetectPlayer_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Multicast_SendAuthorityDetectPlayer", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventMulticast_SendAuthorityDetectPlayer_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetLocationTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_projectileRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_projectileLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_targetLocationTimestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_targetLocationTimestamp = { "targetLocationTimestamp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms, targetLocationTimestamp), METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_targetLocationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_targetLocationTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileRotation = { "projectileRotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms, projectileRotation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileLocation = { "projectileLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms, projectileLocation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_targetLocationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileReplicationComponent, nullptr, "Server_TryDetectPlayer", nullptr, nullptr, sizeof(BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms), Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister()
	{
		return UBaseProjectileReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer, "Client_LaunchRefusedByServer" }, // 707116399
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation, "Client_ReceiveDetectPlayerValidation" }, // 883575644
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectImpact, "Multicast_DetectImpact" }, // 1713974806
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_DetectPlayer, "Multicast_DetectPlayer" }, // 1687673296
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunch, "Multicast_OnLaunch" }, // 3448813758
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact, "Multicast_OnLaunchWithImpact" }, // 4241107195
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer, "Multicast_SendAuthorityDetectPlayer" }, // 1114436158
		{ &Z_Construct_UFunction_UBaseProjectileReplicationComponent_Server_TryDetectPlayer, "Server_TryDetectPlayer" }, // 3012851826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseProjectileReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/BaseProjectileReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseProjectileReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::ClassParams = {
		&UBaseProjectileReplicationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseProjectileReplicationComponent, 1155642557);
	template<> PROJECTILE_API UClass* StaticClass<UBaseProjectileReplicationComponent>()
	{
		return UBaseProjectileReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseProjectileReplicationComponent(Z_Construct_UClass_UBaseProjectileReplicationComponent, &UBaseProjectileReplicationComponent::StaticClass, TEXT("/Script/Projectile"), TEXT("UBaseProjectileReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseProjectileReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
