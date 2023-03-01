// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherAnimInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArmIKSensorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPhaseWalkingComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFrenzyComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvilWithinComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOniAttackType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargedAttackStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "SlasherAnimInstanceOnFootTrapped__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USlasherAnimInstance::execCallOnFootTrapped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnFootTrapped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlasherAnimInstance::execSetIsCrouched)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCrouched(Z_Param_value);
		P_NATIVE_END;
	}
	void USlasherAnimInstance::StaticRegisterNativesUSlasherAnimInstance()
	{
		UClass* Class = USlasherAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallOnFootTrapped", &USlasherAnimInstance::execCallOnFootTrapped },
			{ "SetIsCrouched", &USlasherAnimInstance::execSetIsCrouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherAnimInstance, nullptr, "CallOnFootTrapped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics
	{
		struct SlasherAnimInstance_eventSetIsCrouched_Parms
		{
			bool value;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SlasherAnimInstance_eventSetIsCrouched_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlasherAnimInstance_eventSetIsCrouched_Parms), &Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherAnimInstance, nullptr, "SetIsCrouched", nullptr, nullptr, sizeof(SlasherAnimInstance_eventSetIsCrouched_Parms), Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlasherAnimInstance_NoRegister()
	{
		return USlasherAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USlasherAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__armIKSensorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__armIKSensorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__phaseWalkingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__phaseWalkingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__frenzyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__frenzyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__evilWithinComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__evilWithinComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackSubstate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackSubstate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackSubstate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previousAttackSubstate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__previousAttackSubstate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__previousAttackSubstate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oniChargeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__oniChargeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oniAttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__oniAttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oniAttackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOniCharging_MetaData[];
#endif
		static void NewProp__isOniCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOniCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oniAttackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__oniAttackState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonChargingPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__demogorgonChargingPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDemogorgonCharging_MetaData[];
#endif
		static void NewProp__isDemogorgonCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDemogorgonCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonChargedAttackStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__demogorgonChargedAttackStateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonTeleportDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__demogorgonTeleportDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonPortalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__demogorgonPortalPlacerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVaultingToFallState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isVaultingToFallState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mySlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mySlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camOnAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__camOnAnimations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camOnAnimations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackSuccessAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__attackSuccessAnimations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attackSuccessAnimations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__meshRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rightClearFrontSpaceVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightClearFrontSpaceVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftClearFrontSpaceVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftClearFrontSpaceVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__directionSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__directionSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pelvisHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pelvisHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animTurning_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__animDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__validSlasher_MetaData[];
#endif
		static void NewProp__validSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__validSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonView_MetaData[];
#endif
		static void NewProp__firstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__firstPersonView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSpectator_MetaData[];
#endif
		static void NewProp__isSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVaultingToFall_MetaData[];
#endif
		static void NewProp__isVaultingToFall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVaultingToFall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAir_MetaData[];
#endif
		static void NewProp__isInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActivePhaseWalking_MetaData[];
#endif
		static void NewProp__isActivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isActivePhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPassivePhaseWalking_MetaData[];
#endif
		static void NewProp__isPassivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPassivePhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonCarryOffsetLookingDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstPersonCarryOffsetLookingDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonCarryOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstPersonCarryOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCarrying_MetaData[];
#endif
		static void NewProp__isCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRingingBell_MetaData[];
#endif
		static void NewProp__isRingingBell_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRingingBell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enableArmOverrideTier3_MetaData[];
#endif
		static void NewProp__enableArmOverrideTier3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__enableArmOverrideTier3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInParadise_MetaData[];
#endif
		static void NewProp__isInParadise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInParadise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFrenzyCD_MetaData[];
#endif
		static void NewProp__isFrenzyCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFrenzyCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFrenzy_MetaData[];
#endif
		static void NewProp__isFrenzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFrenzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAnyMontagePlaying_MetaData[];
#endif
		static void NewProp__isAnyMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAnyMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttacking_MetaData[];
#endif
		static void NewProp__isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCamOn_MetaData[];
#endif
		static void NewProp__isCamOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCamOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAttackSuccessMontagePlaying_MetaData[];
#endif
		static void NewProp__isAttackSuccessMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAttackSuccessMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRevvingChainsaw_MetaData[];
#endif
		static void NewProp__isRevvingChainsaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRevvingChainsaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrouched_MetaData[];
#endif
		static void NewProp__isCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFootTrapped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFootTrapped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlasherAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlasherAnimInstance_CallOnFootTrapped, "CallOnFootTrapped" }, // 1023010678
		{ &Z_Construct_UFunction_USlasherAnimInstance_SetIsCrouched, "SetIsCrouched" }, // 3975099381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SlasherAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__armIKSensorComponent = { "_armIKSensorComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _armIKSensorComponent), Z_Construct_UClass_UArmIKSensorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__armIKSensorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__phaseWalkingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__phaseWalkingComponent = { "_phaseWalkingComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _phaseWalkingComponent), Z_Construct_UClass_UPhaseWalkingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__phaseWalkingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__phaseWalkingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__frenzyComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__frenzyComponent = { "_frenzyComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _frenzyComponent), Z_Construct_UClass_UFrenzyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__frenzyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__frenzyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__evilWithinComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__evilWithinComponent = { "_evilWithinComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _evilWithinComponent), Z_Construct_UClass_UEvilWithinComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__evilWithinComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__evilWithinComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate = { "_attackSubstate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _attackSubstate), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate = { "_previousAttackSubstate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _previousAttackSubstate), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniChargeDuration_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniChargeDuration = { "_oniChargeDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _oniChargeDuration), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniChargeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniChargeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType = { "_oniAttackType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _oniAttackType), Z_Construct_UEnum_DeadByDaylight_EOniAttackType, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isOniCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging = { "_isOniCharging", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackState = { "_oniAttackState", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _oniAttackState), Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargingPercent_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargingPercent = { "_demogorgonChargingPercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _demogorgonChargingPercent), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargingPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargingPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isDemogorgonCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging = { "_isDemogorgonCharging", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargedAttackStateComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargedAttackStateComponent = { "_demogorgonChargedAttackStateComponent", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _demogorgonChargedAttackStateComponent), Z_Construct_UClass_UChargedAttackStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargedAttackStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargedAttackStateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonTeleportDuration_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonTeleportDuration = { "_demogorgonTeleportDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _demogorgonTeleportDuration), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonTeleportDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonTeleportDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonPortalPlacerState = { "_demogorgonPortalPlacerState", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _demogorgonPortalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType = { "_interactionType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _interactionType), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFallState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFallState = { "_isVaultingToFallState", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _isVaultingToFallState), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFallState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFallState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__mySlasher_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__mySlasher = { "_mySlasher", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _mySlasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__mySlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__mySlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations = { "_camOnAnimations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _camOnAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations_Inner = { "_camOnAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations = { "_attackSuccessAnimations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _attackSuccessAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations_Inner = { "_attackSuccessAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__meshRotation_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__meshRotation = { "_meshRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _meshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__meshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__meshRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftFootEffectorLocation = { "_leftFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _leftFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightFootEffectorLocation = { "_rightFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _rightFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__velocity_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__velocity = { "_velocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightClearFrontSpaceVector = { "_rightClearFrontSpaceVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _rightClearFrontSpaceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightClearFrontSpaceVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftClearFrontSpaceVector = { "_leftClearFrontSpaceVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _leftClearFrontSpaceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftClearFrontSpaceVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__directionSwitch_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__directionSwitch = { "_directionSwitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _directionSwitch), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__directionSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__directionSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__idleTime_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__idleTime = { "_idleTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _idleTime), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__idleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__idleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__pelvisHeight_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__pelvisHeight = { "_pelvisHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _pelvisHeight), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__pelvisHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__pelvisHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animYaw_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animYaw = { "_animYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _animYaw), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animTurning_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animTurning = { "_animTurning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _animTurning), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animPitch_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animPitch = { "_animPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _animPitch), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animSpeed_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animSpeed = { "_animSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _animSpeed), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animDirection_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animDirection = { "_animDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _animDirection), METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_validSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher = { "_validSlasher", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_firstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView = { "_firstPersonView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator = { "_isSpectator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isVaultingToFall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall = { "_isVaultingToFall", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir = { "_isInAir", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isActivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking = { "_isActivePhaseWalking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isPassivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking = { "_isPassivePhaseWalking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown = { "_firstPersonCarryOffsetLookingDown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _firstPersonCarryOffsetLookingDown), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffset = { "_firstPersonCarryOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, _firstPersonCarryOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying = { "_isCarrying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isRingingBell = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell = { "_isRingingBell", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_enableArmOverrideTier3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3 = { "_enableArmOverrideTier3", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isInParadise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise = { "_isInParadise", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isFrenzyCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD = { "_isFrenzyCD", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isFrenzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy = { "_isFrenzy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isAnyMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying = { "_isAnyMontagePlaying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking = { "_isAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isCamOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn = { "_isCamOn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isAttackSuccessMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying = { "_isAttackSuccessMontagePlaying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isRevvingChainsaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw = { "_isRevvingChainsaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched_MetaData[] = {
		{ "Category", "SlasherAnimInstance" },
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched_SetBit(void* Obj)
	{
		((USlasherAnimInstance*)Obj)->_isCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched = { "_isCrouched", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USlasherAnimInstance), &Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp_OnFootTrapped_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlasherAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp_OnFootTrapped = { "OnFootTrapped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlasherAnimInstance, OnFootTrapped), Z_Construct_UDelegateFunction_DeadByDaylight_SlasherAnimInstanceOnFootTrapped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp_OnFootTrapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp_OnFootTrapped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlasherAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__armIKSensorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__phaseWalkingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__frenzyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__evilWithinComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSubstate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__previousAttackSubstate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniChargeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isOniCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__oniAttackState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargingPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isDemogorgonCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonChargedAttackStateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonTeleportDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__demogorgonPortalPlacerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__interactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFallState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__mySlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__camOnAnimations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__attackSuccessAnimations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__meshRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__rightClearFrontSpaceVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__leftClearFrontSpaceVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__directionSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__idleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__pelvisHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__animDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__validSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isVaultingToFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isActivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isPassivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffsetLookingDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__firstPersonCarryOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRingingBell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__enableArmOverrideTier3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isInParadise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzyCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isFrenzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAnyMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCamOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isAttackSuccessMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isRevvingChainsaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp__isCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlasherAnimInstance_Statics::NewProp_OnFootTrapped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherAnimInstance_Statics::ClassParams = {
		&USlasherAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlasherAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USlasherAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherAnimInstance, 3271041852);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherAnimInstance>()
	{
		return USlasherAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherAnimInstance(Z_Construct_UClass_USlasherAnimInstance, &USlasherAnimInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
