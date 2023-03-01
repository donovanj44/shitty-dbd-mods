// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PossessionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessionComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UPossessionComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPossessionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPossessionComponent::execClient_StartStateMachineDriverChangeProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_StartStateMachineDriverChangeProcess_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execIsDormant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDormant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execIsPossessed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossessed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execMulticast_NotifyPossessionDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_NotifyPossessionDone_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execMulticast_StartPossessionOf)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_playerToPossess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartPossessionOf_Implementation(Z_Param_playerToPossess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execServer_NotifyPossessionDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifyPossessionDone_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_NotifyPossessionDone_Validate"));
			return;
		}
		P_THIS->Server_NotifyPossessionDone_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPossessionComponent::execServer_StartPossessionOf)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_playerToPossess);
		P_GET_UBOOL(Z_Param_shouldStartBeingPossessedInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartPossessionOf_Validate(Z_Param_playerToPossess,Z_Param_shouldStartBeingPossessedInteraction))
		{
			RPC_ValidateFailed(TEXT("Server_StartPossessionOf_Validate"));
			return;
		}
		P_THIS->Server_StartPossessionOf_Implementation(Z_Param_playerToPossess,Z_Param_shouldStartBeingPossessedInteraction);
		P_NATIVE_END;
	}
	static FName NAME_UPossessionComponent_Client_StartStateMachineDriverChangeProcess = FName(TEXT("Client_StartStateMachineDriverChangeProcess"));
	void UPossessionComponent::Client_StartStateMachineDriverChangeProcess()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Client_StartStateMachineDriverChangeProcess),NULL);
	}
	static FName NAME_UPossessionComponent_Cosmetic_OnControlledChanged = FName(TEXT("Cosmetic_OnControlledChanged"));
	void UPossessionComponent::Cosmetic_OnControlledChanged(ADBDPlayer* player, bool isControlled)
	{
		PossessionComponent_eventCosmetic_OnControlledChanged_Parms Parms;
		Parms.player=player;
		Parms.isControlled=isControlled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Cosmetic_OnControlledChanged),&Parms);
	}
	static FName NAME_UPossessionComponent_CosmeticLocal_OnControlled = FName(TEXT("CosmeticLocal_OnControlled"));
	void UPossessionComponent::CosmeticLocal_OnControlled(ADBDPlayer* player)
	{
		PossessionComponent_eventCosmeticLocal_OnControlled_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_CosmeticLocal_OnControlled),&Parms);
	}
	static FName NAME_UPossessionComponent_CosmeticLocal_OnUncontrolled = FName(TEXT("CosmeticLocal_OnUncontrolled"));
	void UPossessionComponent::CosmeticLocal_OnUncontrolled(ADBDPlayer* player)
	{
		PossessionComponent_eventCosmeticLocal_OnUncontrolled_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_CosmeticLocal_OnUncontrolled),&Parms);
	}
	static FName NAME_UPossessionComponent_Multicast_NotifyPossessionDone = FName(TEXT("Multicast_NotifyPossessionDone"));
	void UPossessionComponent::Multicast_NotifyPossessionDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Multicast_NotifyPossessionDone),NULL);
	}
	static FName NAME_UPossessionComponent_Multicast_StartPossessionOf = FName(TEXT("Multicast_StartPossessionOf"));
	void UPossessionComponent::Multicast_StartPossessionOf(ADBDPlayer* playerToPossess)
	{
		PossessionComponent_eventMulticast_StartPossessionOf_Parms Parms;
		Parms.playerToPossess=playerToPossess;
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Multicast_StartPossessionOf),&Parms);
	}
	static FName NAME_UPossessionComponent_Server_NotifyPossessionDone = FName(TEXT("Server_NotifyPossessionDone"));
	void UPossessionComponent::Server_NotifyPossessionDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Server_NotifyPossessionDone),NULL);
	}
	static FName NAME_UPossessionComponent_Server_StartPossessionOf = FName(TEXT("Server_StartPossessionOf"));
	void UPossessionComponent::Server_StartPossessionOf(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction)
	{
		PossessionComponent_eventServer_StartPossessionOf_Parms Parms;
		Parms.playerToPossess=playerToPossess;
		Parms.shouldStartBeingPossessedInteraction=shouldStartBeingPossessedInteraction ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPossessionComponent_Server_StartPossessionOf),&Parms);
	}
	void UPossessionComponent::StaticRegisterNativesUPossessionComponent()
	{
		UClass* Class = UPossessionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_StartStateMachineDriverChangeProcess", &UPossessionComponent::execClient_StartStateMachineDriverChangeProcess },
			{ "IsDormant", &UPossessionComponent::execIsDormant },
			{ "IsPossessed", &UPossessionComponent::execIsPossessed },
			{ "Multicast_NotifyPossessionDone", &UPossessionComponent::execMulticast_NotifyPossessionDone },
			{ "Multicast_StartPossessionOf", &UPossessionComponent::execMulticast_StartPossessionOf },
			{ "OnLevelReadyToPlay", &UPossessionComponent::execOnLevelReadyToPlay },
			{ "Server_NotifyPossessionDone", &UPossessionComponent::execServer_NotifyPossessionDone },
			{ "Server_StartPossessionOf", &UPossessionComponent::execServer_StartPossessionOf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Client_StartStateMachineDriverChangeProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics
	{
		static void NewProp_isControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isControlled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_isControlled_SetBit(void* Obj)
	{
		((PossessionComponent_eventCosmetic_OnControlledChanged_Parms*)Obj)->isControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_isControlled = { "isControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PossessionComponent_eventCosmetic_OnControlledChanged_Parms), &Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_isControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessionComponent_eventCosmetic_OnControlledChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_isControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Cosmetic_OnControlledChanged", nullptr, nullptr, sizeof(PossessionComponent_eventCosmetic_OnControlledChanged_Parms), Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessionComponent_eventCosmeticLocal_OnControlled_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "CosmeticLocal_OnControlled", nullptr, nullptr, sizeof(PossessionComponent_eventCosmeticLocal_OnControlled_Parms), Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessionComponent_eventCosmeticLocal_OnUncontrolled_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "CosmeticLocal_OnUncontrolled", nullptr, nullptr, sizeof(PossessionComponent_eventCosmeticLocal_OnUncontrolled_Parms), Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics
	{
		struct PossessionComponent_eventIsDormant_Parms
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
	void Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PossessionComponent_eventIsDormant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PossessionComponent_eventIsDormant_Parms), &Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "IsDormant", nullptr, nullptr, sizeof(PossessionComponent_eventIsDormant_Parms), Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_IsDormant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_IsDormant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics
	{
		struct PossessionComponent_eventIsPossessed_Parms
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
	void Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PossessionComponent_eventIsPossessed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PossessionComponent_eventIsPossessed_Parms), &Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "IsPossessed", nullptr, nullptr, sizeof(PossessionComponent_eventIsPossessed_Parms), Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_IsPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_IsPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Multicast_NotifyPossessionDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToPossess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::NewProp_playerToPossess = { "playerToPossess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessionComponent_eventMulticast_StartPossessionOf_Parms, playerToPossess), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::NewProp_playerToPossess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Multicast_StartPossessionOf", nullptr, nullptr, sizeof(PossessionComponent_eventMulticast_StartPossessionOf_Parms), Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Server_NotifyPossessionDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics
	{
		static void NewProp_shouldStartBeingPossessedInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldStartBeingPossessedInteraction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToPossess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_shouldStartBeingPossessedInteraction_SetBit(void* Obj)
	{
		((PossessionComponent_eventServer_StartPossessionOf_Parms*)Obj)->shouldStartBeingPossessedInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_shouldStartBeingPossessedInteraction = { "shouldStartBeingPossessedInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PossessionComponent_eventServer_StartPossessionOf_Parms), &Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_shouldStartBeingPossessedInteraction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_playerToPossess = { "playerToPossess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PossessionComponent_eventServer_StartPossessionOf_Parms, playerToPossess), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_shouldStartBeingPossessedInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::NewProp_playerToPossess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPossessionComponent, nullptr, "Server_StartPossessionOf", nullptr, nullptr, sizeof(PossessionComponent_eventServer_StartPossessionOf_Parms), Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPossessionComponent_NoRegister()
	{
		return UPossessionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPossessionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emptyController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__emptyController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startPossessed_MetaData[];
#endif
		static void NewProp__startPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__startPossessed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPossessionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPossessionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPossessionComponent_Client_StartStateMachineDriverChangeProcess, "Client_StartStateMachineDriverChangeProcess" }, // 1613641727
		{ &Z_Construct_UFunction_UPossessionComponent_Cosmetic_OnControlledChanged, "Cosmetic_OnControlledChanged" }, // 1268549545
		{ &Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnControlled, "CosmeticLocal_OnControlled" }, // 2905247827
		{ &Z_Construct_UFunction_UPossessionComponent_CosmeticLocal_OnUncontrolled, "CosmeticLocal_OnUncontrolled" }, // 3590108698
		{ &Z_Construct_UFunction_UPossessionComponent_IsDormant, "IsDormant" }, // 3301458337
		{ &Z_Construct_UFunction_UPossessionComponent_IsPossessed, "IsPossessed" }, // 1961003139
		{ &Z_Construct_UFunction_UPossessionComponent_Multicast_NotifyPossessionDone, "Multicast_NotifyPossessionDone" }, // 3623872978
		{ &Z_Construct_UFunction_UPossessionComponent_Multicast_StartPossessionOf, "Multicast_StartPossessionOf" }, // 732169843
		{ &Z_Construct_UFunction_UPossessionComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 940898939
		{ &Z_Construct_UFunction_UPossessionComponent_Server_NotifyPossessionDone, "Server_NotifyPossessionDone" }, // 1059668936
		{ &Z_Construct_UFunction_UPossessionComponent_Server_StartPossessionOf, "Server_StartPossessionOf" }, // 3677491314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PossessionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessionComponent_Statics::NewProp__emptyController_MetaData[] = {
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPossessionComponent_Statics::NewProp__emptyController = { "_emptyController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPossessionComponent, _emptyController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPossessionComponent_Statics::NewProp__emptyController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessionComponent_Statics::NewProp__emptyController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed_MetaData[] = {
		{ "Category", "PossessionComponent" },
		{ "ModuleRelativePath", "Public/PossessionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed_SetBit(void* Obj)
	{
		((UPossessionComponent*)Obj)->_startPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed = { "_startPossessed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPossessionComponent), &Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPossessionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPossessionComponent_Statics::NewProp__emptyController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPossessionComponent_Statics::NewProp__startPossessed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPossessionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossessionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPossessionComponent_Statics::ClassParams = {
		&UPossessionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPossessionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPossessionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPossessionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPossessionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPossessionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPossessionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPossessionComponent, 2105783694);
	template<> THETWINS_API UClass* StaticClass<UPossessionComponent>()
	{
		return UPossessionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPossessionComponent(Z_Construct_UClass_UPossessionComponent, &UPossessionComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPossessionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPossessionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
