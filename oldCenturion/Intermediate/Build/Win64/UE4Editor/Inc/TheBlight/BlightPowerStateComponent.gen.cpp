// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateComponent() {}
// Cross Module References
	THEBLIGHT_API UFunction* Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateComponent_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState_NoRegister();
	THEBLIGHT_API UEnum* Z_Construct_UEnum_TheBlight_EWallGrabState();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics
	{
		struct _Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms
		{
			ADBDPlayer* collidingPlayer;
			FVector collisionLocation;
			FVector collisionNormal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collisionNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collisionLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collidingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collisionNormal = { "collisionNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms, collisionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collisionLocation = { "collisionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms, collisionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collidingPlayer = { "collidingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms, collidingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collisionNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collisionLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::NewProp_collidingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheBlight, nullptr, "BlightPowerStateComponentOnPowerCollided__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms), Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execCanDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetCurrentPowerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlightPowerState**)Z_Param__Result=P_THIS->GetCurrentPowerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetDashTokensRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetDashTokensRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetLookAngleDegrees)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookAngleDegrees();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetPowerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWallGrabState*)Z_Param__Result=P_THIS->GetPowerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetPowerStateByEnum)
	{
		P_GET_ENUM(EWallGrabState,Z_Param_stateEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlightPowerState**)Z_Param__Result=P_THIS->GetPowerStateByEnum(EWallGrabState(Z_Param_stateEnum));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetStateTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStateTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetStateTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimerObject**)Z_Param__Result=P_THIS->GetStateTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execGetStateTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStateTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execMulticast_SetWallGrabState)
	{
		P_GET_ENUM(EWallGrabState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetWallGrabState_Validate(EWallGrabState(Z_Param_newState)))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetWallGrabState_Validate"));
			return;
		}
		P_THIS->Multicast_SetWallGrabState_Implementation(EWallGrabState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execOnRep_DashTokens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DashTokens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execOnRep_StateTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StateTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execResetDashTokens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDashTokens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlightPowerStateComponent::execServer_SetWallGrabState)
	{
		P_GET_ENUM(EWallGrabState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetWallGrabState_Validate(EWallGrabState(Z_Param_newState)))
		{
			RPC_ValidateFailed(TEXT("Server_SetWallGrabState_Validate"));
			return;
		}
		P_THIS->Server_SetWallGrabState_Implementation(EWallGrabState(Z_Param_newState));
		P_NATIVE_END;
	}
	static FName NAME_UBlightPowerStateComponent_Multicast_SetWallGrabState = FName(TEXT("Multicast_SetWallGrabState"));
	void UBlightPowerStateComponent::Multicast_SetWallGrabState(const EWallGrabState newState)
	{
		BlightPowerStateComponent_eventMulticast_SetWallGrabState_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_UBlightPowerStateComponent_Multicast_SetWallGrabState),&Parms);
	}
	static FName NAME_UBlightPowerStateComponent_Server_SetWallGrabState = FName(TEXT("Server_SetWallGrabState"));
	void UBlightPowerStateComponent::Server_SetWallGrabState(const EWallGrabState newState)
	{
		BlightPowerStateComponent_eventServer_SetWallGrabState_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_UBlightPowerStateComponent_Server_SetWallGrabState),&Parms);
	}
	void UBlightPowerStateComponent::StaticRegisterNativesUBlightPowerStateComponent()
	{
		UClass* Class = UBlightPowerStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDash", &UBlightPowerStateComponent::execCanDash },
			{ "GetCurrentPowerState", &UBlightPowerStateComponent::execGetCurrentPowerState },
			{ "GetDashTokensRemaining", &UBlightPowerStateComponent::execGetDashTokensRemaining },
			{ "GetLookAngleDegrees", &UBlightPowerStateComponent::execGetLookAngleDegrees },
			{ "GetPowerState", &UBlightPowerStateComponent::execGetPowerState },
			{ "GetPowerStateByEnum", &UBlightPowerStateComponent::execGetPowerStateByEnum },
			{ "GetStateTimeElapsed", &UBlightPowerStateComponent::execGetStateTimeElapsed },
			{ "GetStateTimer", &UBlightPowerStateComponent::execGetStateTimer },
			{ "GetStateTimeRemaining", &UBlightPowerStateComponent::execGetStateTimeRemaining },
			{ "Multicast_SetWallGrabState", &UBlightPowerStateComponent::execMulticast_SetWallGrabState },
			{ "OnLevelReadyToPlay", &UBlightPowerStateComponent::execOnLevelReadyToPlay },
			{ "OnRep_DashTokens", &UBlightPowerStateComponent::execOnRep_DashTokens },
			{ "OnRep_StateTimer", &UBlightPowerStateComponent::execOnRep_StateTimer },
			{ "ResetDashTokens", &UBlightPowerStateComponent::execResetDashTokens },
			{ "Server_SetWallGrabState", &UBlightPowerStateComponent::execServer_SetWallGrabState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics
	{
		struct BlightPowerStateComponent_eventCanDash_Parms
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
	void Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlightPowerStateComponent_eventCanDash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlightPowerStateComponent_eventCanDash_Parms), &Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "CanDash", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventCanDash_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_CanDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_CanDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics
	{
		struct BlightPowerStateComponent_eventGetCurrentPowerState_Parms
		{
			UBlightPowerState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetCurrentPowerState_Parms, ReturnValue), Z_Construct_UClass_UBlightPowerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetCurrentPowerState", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetCurrentPowerState_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics
	{
		struct BlightPowerStateComponent_eventGetDashTokensRemaining_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetDashTokensRemaining_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetDashTokensRemaining", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetDashTokensRemaining_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics
	{
		struct BlightPowerStateComponent_eventGetLookAngleDegrees_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetLookAngleDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetLookAngleDegrees", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetLookAngleDegrees_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics
	{
		struct BlightPowerStateComponent_eventGetPowerState_Parms
		{
			EWallGrabState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetPowerState_Parms, ReturnValue), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetPowerState", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetPowerState_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics
	{
		struct BlightPowerStateComponent_eventGetPowerStateByEnum_Parms
		{
			EWallGrabState stateEnum;
			UBlightPowerState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_stateEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_stateEnum_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetPowerStateByEnum_Parms, ReturnValue), Z_Construct_UClass_UBlightPowerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum = { "stateEnum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetPowerStateByEnum_Parms, stateEnum), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::NewProp_stateEnum_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetPowerStateByEnum", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetPowerStateByEnum_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics
	{
		struct BlightPowerStateComponent_eventGetStateTimeElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetStateTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetStateTimeElapsed", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetStateTimeElapsed_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics
	{
		struct BlightPowerStateComponent_eventGetStateTimer_Parms
		{
			UTimerObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetStateTimer_Parms, ReturnValue), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetStateTimer", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetStateTimer_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics
	{
		struct BlightPowerStateComponent_eventGetStateTimeRemaining_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventGetStateTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "GetStateTimeRemaining", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventGetStateTimeRemaining_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventMulticast_SetWallGrabState_Parms, newState), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "Multicast_SetWallGrabState", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventMulticast_SetWallGrabState_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "OnRep_DashTokens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "OnRep_StateTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "ResetDashTokens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPowerStateComponent_eventServer_SetWallGrabState_Parms, newState), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightPowerStateComponent, nullptr, "Server_SetWallGrabState", nullptr, nullptr, sizeof(BlightPowerStateComponent_eventServer_SetWallGrabState_Parms), Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlightPowerStateComponent_NoRegister()
	{
		return UBlightPowerStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tokenChargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tokenChargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumDashTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumDashTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__dashTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentBlightPowerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentBlightPowerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__blightPowerStates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerInteractionDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__powerInteractionDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightLethalDashDodgeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightLethalDashDodgeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canDashCheckCollisionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__canDashCheckCollisionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canDashCheckCollisionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__canDashCheckCollisionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canDashCheckCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__canDashCheckCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStateClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__blightPowerStateClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__blightPowerStateClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPowerCollided_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerCollided;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlightPowerStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_CanDash, "CanDash" }, // 1408298816
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetCurrentPowerState, "GetCurrentPowerState" }, // 649735272
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetDashTokensRemaining, "GetDashTokensRemaining" }, // 3697353351
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetLookAngleDegrees, "GetLookAngleDegrees" }, // 3306471643
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerState, "GetPowerState" }, // 61964126
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetPowerStateByEnum, "GetPowerStateByEnum" }, // 2934182086
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeElapsed, "GetStateTimeElapsed" }, // 4106018732
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimer, "GetStateTimer" }, // 970829975
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_GetStateTimeRemaining, "GetStateTimeRemaining" }, // 3850750763
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_Multicast_SetWallGrabState, "Multicast_SetWallGrabState" }, // 1811755227
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2479803298
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_DashTokens, "OnRep_DashTokens" }, // 3803453506
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_OnRep_StateTimer, "OnRep_StateTimer" }, // 3957384022
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_ResetDashTokens, "ResetDashTokens" }, // 2520903647
		{ &Z_Construct_UFunction_UBlightPowerStateComponent_Server_SetWallGrabState, "Server_SetWallGrabState" }, // 3599296188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlightPowerStateComponent.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__tokenChargeRate_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__tokenChargeRate = { "_tokenChargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _tokenChargeRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__tokenChargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__tokenChargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__maximumDashTokens_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__maximumDashTokens = { "_maximumDashTokens", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _maximumDashTokens), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__maximumDashTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__maximumDashTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__dashTokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__dashTokens = { "_dashTokens", "OnRep_DashTokens", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _dashTokens), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__dashTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__dashTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__currentBlightPowerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__currentBlightPowerState = { "_currentBlightPowerState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _currentBlightPowerState), Z_Construct_UClass_UBlightPowerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__currentBlightPowerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__currentBlightPowerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates = { "_blightPowerStates", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _blightPowerStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates_Inner = { "_blightPowerStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlightPowerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__stateTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__stateTimer = { "_stateTimer", "OnRep_StateTimer", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _stateTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__stateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__stateTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__powerInteractionDefinition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__powerInteractionDefinition = { "_powerInteractionDefinition", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _powerInteractionDefinition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__powerInteractionDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__powerInteractionDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightLethalDashDodgeRadius_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightLethalDashDodgeRadius = { "_blightLethalDashDodgeRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _blightLethalDashDodgeRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightLethalDashDodgeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightLethalDashDodgeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRange_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRange = { "_canDashCheckCollisionRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionHeight_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionHeight = { "_canDashCheckCollisionHeight", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionHeight), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRadius_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRadius = { "_canDashCheckCollisionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses_MetaData[] = {
		{ "Category", "BlightPowerStateComponent" },
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses = { "_blightPowerStateClasses", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, _blightPowerStateClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses_Inner = { "_blightPowerStateClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlightPowerState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp_OnPowerCollided_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlightPowerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp_OnPowerCollided = { "OnPowerCollided", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightPowerStateComponent, OnPowerCollided), Z_Construct_UDelegateFunction_TheBlight_BlightPowerStateComponentOnPowerCollided__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp_OnPowerCollided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp_OnPowerCollided_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightPowerStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__tokenChargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__maximumDashTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__dashTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__currentBlightPowerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__stateTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__powerInteractionDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightLethalDashDodgeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__canDashCheckCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp__blightPowerStateClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightPowerStateComponent_Statics::NewProp_OnPowerCollided,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlightPowerStateInterface_NoRegister, (int32)VTABLE_OFFSET(UBlightPowerStateComponent, IBlightPowerStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateComponent_Statics::ClassParams = {
		&UBlightPowerStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlightPowerStateComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateComponent, 4194556026);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateComponent>()
	{
		return UBlightPowerStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateComponent(Z_Construct_UClass_UBlightPowerStateComponent, &UBlightPowerStateComponent::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateComponent"), false, nullptr, nullptr, nullptr);

	void UBlightPowerStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__stateTimer(TEXT("_stateTimer"));
		static const FName Name__dashTokens(TEXT("_dashTokens"));

		const bool bIsValid = true
			&& Name__stateTimer == ClassReps[(int32)ENetFields_Private::_stateTimer].Property->GetFName()
			&& Name__dashTokens == ClassReps[(int32)ENetFields_Private::_dashTokens].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlightPowerStateComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
