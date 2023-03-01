// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GhostStealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostStealthComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGhostStealthState();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStealthComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkerComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterSightableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AScreenIndicatorWorldMarker_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGhostStealthComponentLocal_OnStealthCancelledByPlayer_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGhostStealthComponentLocal_OnStealthCancelledByPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGhostStealthComponentLocal_OnStealthCancelledByPlayer_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms
		{
			bool isBeingSpot;
		};
		static void NewProp_isBeingSpot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingSpot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::NewProp_isBeingSpot_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms*)Obj)->isBeingSpot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::NewProp_isBeingSpot = { "isBeingSpot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::NewProp_isBeingSpot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::NewProp_isBeingSpot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms
		{
			bool isStealth;
		};
		static void NewProp_isStealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::NewProp_isStealth_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms*)Obj)->isStealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::NewProp_isStealth = { "isStealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::NewProp_isStealth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::NewProp_isStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GhostStealthComponentOnIsStealthChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGhostStealthComponentOnStealthStateChanged_Parms
		{
			EGhostStealthState stealthState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_stealthState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_stealthState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::NewProp_stealthState = { "stealthState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGhostStealthComponentOnStealthStateChanged_Parms, stealthState), Z_Construct_UEnum_DeadByDaylight_EGhostStealthState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::NewProp_stealthState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::NewProp_stealthState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::NewProp_stealthState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GhostStealthComponentOnStealthStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnStealthStateChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventGhostStealthComponentOnSuccessfulAttackInStealth_Parms
		{
			ADBDPlayer* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventGhostStealthComponentOnSuccessfulAttackInStealth_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventGhostStealthComponentOnSuccessfulAttackInStealth_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execAuthority_TryActivateStealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TryActivateStealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execClient_OnPlayerSpottedKiller)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_OnPlayerSpottedKiller_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execClient_SpawnMarkerOnCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SpawnMarkerOnCharacter_Implementation(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execGetStealthChargePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStealthChargePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execGetStealthState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGhostStealthState*)Z_Param__Result=P_THIS->GetStealthState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execIsStealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execIsStealthReadyToActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStealthReadyToActivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execMulticast_BroadcastOnSuccessfulAttackInStealth)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BroadcastOnSuccessfulAttackInStealth_Implementation(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execOnRep_StealthState)
	{
		P_GET_ENUM(EGhostStealthState,Z_Param_previousState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StealthState(EGhostStealthState(Z_Param_previousState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGhostStealthComponent::execSetRedStainVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRedStainVisibility(Z_Param_visible);
		P_NATIVE_END;
	}
	static FName NAME_UGhostStealthComponent_Client_OnPlayerSpottedKiller = FName(TEXT("Client_OnPlayerSpottedKiller"));
	void UGhostStealthComponent::Client_OnPlayerSpottedKiller(ADBDPlayer* player)
	{
		GhostStealthComponent_eventClient_OnPlayerSpottedKiller_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UGhostStealthComponent_Client_OnPlayerSpottedKiller),&Parms);
	}
	static FName NAME_UGhostStealthComponent_Client_SpawnMarkerOnCharacter = FName(TEXT("Client_SpawnMarkerOnCharacter"));
	void UGhostStealthComponent::Client_SpawnMarkerOnCharacter(ACharacter* character)
	{
		GhostStealthComponent_eventClient_SpawnMarkerOnCharacter_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UGhostStealthComponent_Client_SpawnMarkerOnCharacter),&Parms);
	}
	static FName NAME_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth = FName(TEXT("Multicast_BroadcastOnSuccessfulAttackInStealth"));
	void UGhostStealthComponent::Multicast_BroadcastOnSuccessfulAttackInStealth(ADBDPlayer* target)
	{
		GhostStealthComponent_eventMulticast_BroadcastOnSuccessfulAttackInStealth_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth),&Parms);
	}
	void UGhostStealthComponent::StaticRegisterNativesUGhostStealthComponent()
	{
		UClass* Class = UGhostStealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_TryActivateStealth", &UGhostStealthComponent::execAuthority_TryActivateStealth },
			{ "Client_OnPlayerSpottedKiller", &UGhostStealthComponent::execClient_OnPlayerSpottedKiller },
			{ "Client_SpawnMarkerOnCharacter", &UGhostStealthComponent::execClient_SpawnMarkerOnCharacter },
			{ "GetStealthChargePercent", &UGhostStealthComponent::execGetStealthChargePercent },
			{ "GetStealthState", &UGhostStealthComponent::execGetStealthState },
			{ "IsStealth", &UGhostStealthComponent::execIsStealth },
			{ "IsStealthReadyToActivate", &UGhostStealthComponent::execIsStealthReadyToActivate },
			{ "Multicast_BroadcastOnSuccessfulAttackInStealth", &UGhostStealthComponent::execMulticast_BroadcastOnSuccessfulAttackInStealth },
			{ "OnRep_StealthState", &UGhostStealthComponent::execOnRep_StealthState },
			{ "SetRedStainVisibility", &UGhostStealthComponent::execSetRedStainVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "Authority_TryActivateStealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventClient_OnPlayerSpottedKiller_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "Client_OnPlayerSpottedKiller", nullptr, nullptr, sizeof(GhostStealthComponent_eventClient_OnPlayerSpottedKiller_Parms), Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventClient_SpawnMarkerOnCharacter_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "Client_SpawnMarkerOnCharacter", nullptr, nullptr, sizeof(GhostStealthComponent_eventClient_SpawnMarkerOnCharacter_Parms), Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics
	{
		struct GhostStealthComponent_eventGetStealthChargePercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventGetStealthChargePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "GetStealthChargePercent", nullptr, nullptr, sizeof(GhostStealthComponent_eventGetStealthChargePercent_Parms), Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics
	{
		struct GhostStealthComponent_eventGetStealthState_Parms
		{
			EGhostStealthState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventGetStealthState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EGhostStealthState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "GetStealthState", nullptr, nullptr, sizeof(GhostStealthComponent_eventGetStealthState_Parms), Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_GetStealthState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_GetStealthState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics
	{
		struct GhostStealthComponent_eventIsStealth_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GhostStealthComponent_eventIsStealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostStealthComponent_eventIsStealth_Parms), &Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "IsStealth", nullptr, nullptr, sizeof(GhostStealthComponent_eventIsStealth_Parms), Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_IsStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_IsStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics
	{
		struct GhostStealthComponent_eventIsStealthReadyToActivate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GhostStealthComponent_eventIsStealthReadyToActivate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostStealthComponent_eventIsStealthReadyToActivate_Parms), &Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "IsStealthReadyToActivate", nullptr, nullptr, sizeof(GhostStealthComponent_eventIsStealthReadyToActivate_Parms), Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventMulticast_BroadcastOnSuccessfulAttackInStealth_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "Multicast_BroadcastOnSuccessfulAttackInStealth", nullptr, nullptr, sizeof(GhostStealthComponent_eventMulticast_BroadcastOnSuccessfulAttackInStealth_Parms), Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics
	{
		struct GhostStealthComponent_eventOnRep_StealthState_Parms
		{
			EGhostStealthState previousState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::NewProp_previousState = { "previousState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostStealthComponent_eventOnRep_StealthState_Parms, previousState), Z_Construct_UEnum_DeadByDaylight_EGhostStealthState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::NewProp_previousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::NewProp_previousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::NewProp_previousState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "OnRep_StealthState", nullptr, nullptr, sizeof(GhostStealthComponent_eventOnRep_StealthState_Parms), Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics
	{
		struct GhostStealthComponent_eventSetRedStainVisibility_Parms
		{
			bool visible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visible_MetaData[];
#endif
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((GhostStealthComponent_eventSetRedStainVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GhostStealthComponent_eventSetRedStainVisibility_Parms), &Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostStealthComponent, nullptr, "SetRedStainVisibility", nullptr, nullptr, sizeof(GhostStealthComponent_eventSetRedStainVisibility_Parms), Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGhostStealthComponent_NoRegister()
	{
		return UGhostStealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGhostStealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stalkerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sightableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sightableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useKillerInstinctWhenSpotted_MetaData[];
#endif
		static void NewProp__useKillerInstinctWhenSpotted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useKillerInstinctWhenSpotted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__markerMaxAngleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__markerMaxAngleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__markers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__markers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__markers_Key_KeyProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__markers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stealthState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__stealthState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__stealthState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Local_OnStealthCancelledByPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Local_OnStealthCancelledByPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsBeingSpotChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsBeingSpotChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsStealthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsStealthChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStealthStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStealthStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccessfulAttackInStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccessfulAttackInStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostStealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGhostStealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGhostStealthComponent_Authority_TryActivateStealth, "Authority_TryActivateStealth" }, // 2108356059
		{ &Z_Construct_UFunction_UGhostStealthComponent_Client_OnPlayerSpottedKiller, "Client_OnPlayerSpottedKiller" }, // 862696563
		{ &Z_Construct_UFunction_UGhostStealthComponent_Client_SpawnMarkerOnCharacter, "Client_SpawnMarkerOnCharacter" }, // 1489210504
		{ &Z_Construct_UFunction_UGhostStealthComponent_GetStealthChargePercent, "GetStealthChargePercent" }, // 2125717815
		{ &Z_Construct_UFunction_UGhostStealthComponent_GetStealthState, "GetStealthState" }, // 635191857
		{ &Z_Construct_UFunction_UGhostStealthComponent_IsStealth, "IsStealth" }, // 2560359210
		{ &Z_Construct_UFunction_UGhostStealthComponent_IsStealthReadyToActivate, "IsStealthReadyToActivate" }, // 2978337557
		{ &Z_Construct_UFunction_UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth, "Multicast_BroadcastOnSuccessfulAttackInStealth" }, // 314543867
		{ &Z_Construct_UFunction_UGhostStealthComponent_OnRep_StealthState, "OnRep_StealthState" }, // 3244416443
		{ &Z_Construct_UFunction_UGhostStealthComponent_SetRedStainVisibility, "SetRedStainVisibility" }, // 2647633827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GhostStealthComponent.h" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stalkerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stalkerComponent = { "_stalkerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _stalkerComponent), Z_Construct_UClass_UStalkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stalkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stalkerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__sightableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__sightableComponent = { "_sightableComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _sightableComponent), Z_Construct_UClass_UCharacterSightableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__sightableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__sightableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted_MetaData[] = {
		{ "Category", "GhostStealthComponent" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted_SetBit(void* Obj)
	{
		((UGhostStealthComponent*)Obj)->_useKillerInstinctWhenSpotted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted = { "_useKillerInstinctWhenSpotted", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGhostStealthComponent), &Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markerMaxAngleOffset_MetaData[] = {
		{ "Category", "GhostStealthComponent" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markerMaxAngleOffset = { "_markerMaxAngleOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _markerMaxAngleOffset), METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markerMaxAngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markerMaxAngleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers = { "_markers", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _markers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_Key_KeyProp = { "_markers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_ValueProp = { "_markers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AScreenIndicatorWorldMarker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__cooldownTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__cooldownTimer = { "_cooldownTimer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _cooldownTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__cooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__cooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState = { "_stealthState", "OnRep_StealthState", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, _stealthState), Z_Construct_UEnum_DeadByDaylight_EGhostStealthState, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_Local_OnStealthCancelledByPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_Local_OnStealthCancelledByPlayer = { "Local_OnStealthCancelledByPlayer", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, Local_OnStealthCancelledByPlayer), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentLocal_OnStealthCancelledByPlayer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_Local_OnStealthCancelledByPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_Local_OnStealthCancelledByPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsBeingSpotChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsBeingSpotChanged = { "OnIsBeingSpotChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, OnIsBeingSpotChanged), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsBeingSpotChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsBeingSpotChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsBeingSpotChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsStealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsStealthChanged = { "OnIsStealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, OnIsStealthChanged), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnIsStealthChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsStealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsStealthChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnStealthStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnStealthStateChanged = { "OnStealthStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, OnStealthStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnStealthStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnStealthStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnStealthStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnSuccessfulAttackInStealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnSuccessfulAttackInStealth = { "OnSuccessfulAttackInStealth", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGhostStealthComponent, OnSuccessfulAttackInStealth), Z_Construct_UDelegateFunction_DeadByDaylight_GhostStealthComponentOnSuccessfulAttackInStealth__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnSuccessfulAttackInStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnSuccessfulAttackInStealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGhostStealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stalkerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__sightableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__useKillerInstinctWhenSpotted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markerMaxAngleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__markers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__cooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp__stealthState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_Local_OnStealthCancelledByPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsBeingSpotChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnIsStealthChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnStealthStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGhostStealthComponent_Statics::NewProp_OnSuccessfulAttackInStealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostStealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostStealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGhostStealthComponent_Statics::ClassParams = {
		&UGhostStealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGhostStealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGhostStealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostStealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostStealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGhostStealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGhostStealthComponent, 1974697736);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGhostStealthComponent>()
	{
		return UGhostStealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGhostStealthComponent(Z_Construct_UClass_UGhostStealthComponent, &UGhostStealthComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGhostStealthComponent"), false, nullptr, nullptr, nullptr);

	void UGhostStealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__stealthState(TEXT("_stealthState"));

		const bool bIsValid = true
			&& Name__stealthState == ClassReps[(int32)ENetFields_Private::_stealthState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGhostStealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostStealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
