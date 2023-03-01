// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/FireHarpoonRifleInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireHarpoonRifleInteraction() {}
// Cross Module References
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UFireHarpoonRifleInteraction_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UFireHarpoonRifleInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEGUNSLINGER_API UEnum* Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleAimingInteractionSubState();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProjectile_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger, nullptr, "FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger, nullptr, "FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFireHarpoonRifleInteraction::execServer_HandleMissShotScores)
	{
		P_GET_TARRAY(ADBDPlayer*,Z_Param_nearMissedPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleMissShotScores_Validate(Z_Param_nearMissedPlayers))
		{
			RPC_ValidateFailed(TEXT("Server_HandleMissShotScores_Validate"));
			return;
		}
		P_THIS->Server_HandleMissShotScores_Implementation(Z_Param_nearMissedPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFireHarpoonRifleInteraction::execServer_SetAimingSubstate)
	{
		P_GET_ENUM(EFireHarpoonRifleAimingInteractionSubState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetAimingSubstate_Implementation(EFireHarpoonRifleAimingInteractionSubState(Z_Param_newState));
		P_NATIVE_END;
	}
	static FName NAME_UFireHarpoonRifleInteraction_Server_HandleMissShotScores = FName(TEXT("Server_HandleMissShotScores"));
	void UFireHarpoonRifleInteraction::Server_HandleMissShotScores(TArray<ADBDPlayer*> const& nearMissedPlayers)
	{
		FireHarpoonRifleInteraction_eventServer_HandleMissShotScores_Parms Parms;
		Parms.nearMissedPlayers=nearMissedPlayers;
		ProcessEvent(FindFunctionChecked(NAME_UFireHarpoonRifleInteraction_Server_HandleMissShotScores),&Parms);
	}
	static FName NAME_UFireHarpoonRifleInteraction_Server_SetAimingSubstate = FName(TEXT("Server_SetAimingSubstate"));
	void UFireHarpoonRifleInteraction::Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState newState)
	{
		FireHarpoonRifleInteraction_eventServer_SetAimingSubstate_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_UFireHarpoonRifleInteraction_Server_SetAimingSubstate),&Parms);
	}
	void UFireHarpoonRifleInteraction::StaticRegisterNativesUFireHarpoonRifleInteraction()
	{
		UClass* Class = UFireHarpoonRifleInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_HandleMissShotScores", &UFireHarpoonRifleInteraction::execServer_HandleMissShotScores },
			{ "Server_SetAimingSubstate", &UFireHarpoonRifleInteraction::execServer_SetAimingSubstate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nearMissedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nearMissedPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nearMissedPlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers = { "nearMissedPlayers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireHarpoonRifleInteraction_eventServer_HandleMissShotScores_Parms, nearMissedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers_Inner = { "nearMissedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::NewProp_nearMissedPlayers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireHarpoonRifleInteraction, nullptr, "Server_HandleMissShotScores", nullptr, nullptr, sizeof(FireHarpoonRifleInteraction_eventServer_HandleMissShotScores_Parms), Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FireHarpoonRifleInteraction_eventServer_SetAimingSubstate_Parms, newState), Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleAimingInteractionSubState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireHarpoonRifleInteraction, nullptr, "Server_SetAimingSubstate", nullptr, nullptr, sizeof(FireHarpoonRifleInteraction_eventServer_SetAimingSubstate_Parms), Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFireHarpoonRifleInteraction_NoRegister()
	{
		return UFireHarpoonRifleInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successShotDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successShotDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nearMissShotMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nearMissShotMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missShotCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__missShotCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__missMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__longRangeShotMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__longRangeShotMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireRotationScaleAdjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireRotationScaleAdjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireRotationScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireRotationScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightRotationScaleAdjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightRotationScaleAdjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightGamepadYawCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimDownSightGamepadYawCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightGamepadPitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimDownSightGamepadPitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightGamepadYawScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightGamepadYawScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightGamepadPitchScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightGamepadPitchScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightMouseYawScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightMouseYawScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightMousePitchScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightMousePitchScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDownSightDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimDownSightDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__harpoon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__harpoon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimingSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__aimingSubState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__aimingSubState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFireHarpoon_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFireHarpoon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_HandleMissShotScores, "Server_HandleMissShotScores" }, // 331003690
		{ &Z_Construct_UFunction_UFireHarpoonRifleInteraction_Server_SetAimingSubstate, "Server_SetAimingSubstate" }, // 1437554689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FireHarpoonRifleInteraction.h" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successShotDuration_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successShotDuration = { "_successShotDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _successShotDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successShotDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successShotDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__nearMissShotMaxDistance_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__nearMissShotMaxDistance = { "_nearMissShotMaxDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _nearMissShotMaxDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__nearMissShotMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__nearMissShotMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missShotCooldownDuration_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missShotCooldownDuration = { "_missShotCooldownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _missShotCooldownDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missShotCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missShotCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missMovementSpeedMultiplier = { "_missMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _missMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successMovementSpeedMultiplier = { "_successMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _successMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__longRangeShotMinDistance_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__longRangeShotMinDistance = { "_longRangeShotMinDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _longRangeShotMinDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__longRangeShotMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__longRangeShotMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireMovementSpeedMultiplier = { "_fireMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireMovementSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleAdjustmentTime_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleAdjustmentTime = { "_fireRotationScaleAdjustmentTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireRotationScaleAdjustmentTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleAdjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleAdjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleMultiplier = { "_fireRotationScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireRotationScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireDuration_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireDuration = { "_fireDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMovementSpeedMultiplier = { "_aimDownSightMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMovementSpeedMultiplier), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightRotationScaleAdjustmentTime_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightRotationScaleAdjustmentTime = { "_aimDownSightRotationScaleAdjustmentTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightRotationScaleAdjustmentTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightRotationScaleAdjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightRotationScaleAdjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawCurve_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawCurve = { "_aimDownSightGamepadYawCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadYawCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchCurve_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchCurve = { "_aimDownSightGamepadPitchCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadPitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawScaleMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawScaleMultiplier = { "_aimDownSightGamepadYawScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadYawScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchScaleMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchScaleMultiplier = { "_aimDownSightGamepadPitchScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadPitchScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMouseYawScaleMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMouseYawScaleMultiplier = { "_aimDownSightMouseYawScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMouseYawScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMouseYawScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMouseYawScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMousePitchScaleMultiplier_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMousePitchScaleMultiplier = { "_aimDownSightMousePitchScaleMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMousePitchScaleMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMousePitchScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMousePitchScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightZoom_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightZoom = { "_aimDownSightZoom", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightZoom), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightDuration_MetaData[] = {
		{ "Category", "FireHarpoonRifleInteraction" },
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightDuration = { "_aimDownSightDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__collector_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__collector = { "_collector", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__collector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__harpoon_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__harpoon = { "_harpoon", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _harpoon), Z_Construct_UClass_AHarpoonProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__harpoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__harpoon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState = { "_aimingSubState", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimingSubState), Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleAimingInteractionSubState, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnHitPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnHitPlayer = { "OnHitPlayer", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, OnHitPlayer), Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnHitPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnHitPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnFireHarpoon_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireHarpoonRifleInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnFireHarpoon = { "OnFireHarpoon", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFireHarpoonRifleInteraction, OnFireHarpoon), Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnFireHarpoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnFireHarpoon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successShotDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__nearMissShotMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missShotCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__missMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__successMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__longRangeShotMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleAdjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireRotationScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__fireDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightRotationScaleAdjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadYawScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightGamepadPitchScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMouseYawScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightMousePitchScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimDownSightDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__collector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__harpoon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp__aimingSubState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnHitPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::NewProp_OnFireHarpoon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireHarpoonRifleInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::ClassParams = {
		&UFireHarpoonRifleInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireHarpoonRifleInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireHarpoonRifleInteraction, 4069421075);
	template<> THEGUNSLINGER_API UClass* StaticClass<UFireHarpoonRifleInteraction>()
	{
		return UFireHarpoonRifleInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireHarpoonRifleInteraction(Z_Construct_UClass_UFireHarpoonRifleInteraction, &UFireHarpoonRifleInteraction::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UFireHarpoonRifleInteraction"), false, nullptr, nullptr, nullptr);

	void UFireHarpoonRifleInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__aimingSubState(TEXT("_aimingSubState"));

		const bool bIsValid = true
			&& Name__aimingSubState == ClassReps[(int32)ENetFields_Private::_aimingSubState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFireHarpoonRifleInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireHarpoonRifleInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
