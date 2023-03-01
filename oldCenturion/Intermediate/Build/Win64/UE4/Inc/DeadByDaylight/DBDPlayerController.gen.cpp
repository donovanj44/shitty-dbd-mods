// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerController();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerControllerBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBaseInputHandler_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_ANetworkFenceActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDPlayerControllerOnPawnLeavingGame_Parms
		{
			ADBDPlayer* leavingPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leavingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::NewProp_leavingPlayer = { "leavingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerControllerOnPawnLeavingGame_Parms, leavingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::NewProp_leavingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerControllerOnPawnLeavingGame__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDPlayerControllerOnPawnLeavingGame_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execActivateAI)
	{
		P_GET_UBOOL(Z_Param_activate);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAI(Z_Param_activate,Z_Param_playerRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execClient_SetSpectatorMode)
	{
		P_GET_UBOOL(Z_Param_on);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetSpectatorMode_Implementation(Z_Param_on);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execClient_SetSpectatorModeInEditor)
	{
		P_GET_UBOOL(Z_Param_on);
		P_GET_OBJECT(ADBDPlayerState,Z_Param_spectatingPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetSpectatorModeInEditor_Implementation(Z_Param_on,Z_Param_spectatingPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execClient_SpectateAI)
	{
		P_GET_OBJECT(APawn,Z_Param_aiPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SpectateAI_Implementation(Z_Param_aiPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execGetAIPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetAIPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execGetControlledPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetControlledPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execGetSpectatedPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetSpectatedPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execGetSpectatedPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayerState**)Z_Param__Result=P_THIS->GetSpectatedPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execImplementRunLockMechanic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImplementRunLockMechanic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execIsSpectating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpectating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execMobileJoystickInput_Pressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_joystickIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MobileJoystickInput_Pressed(Z_Param_joystickIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execOnRep_Fence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Fence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_ActivateAI)
	{
		P_GET_UBOOL(Z_Param_activate);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ActivateAI_Validate(Z_Param_activate,Z_Param_playerRank))
		{
			RPC_ValidateFailed(TEXT("Server_ActivateAI_Validate"));
			return;
		}
		P_THIS->Server_ActivateAI_Implementation(Z_Param_activate,Z_Param_playerRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_ActivateAIAll)
	{
		P_GET_UBOOL(Z_Param_activate);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerRank);
		P_GET_PROPERTY(FInt8Property,Z_Param_playerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ActivateAIAll_Validate(Z_Param_activate,Z_Param_playerRank,Z_Param_playerRole))
		{
			RPC_ValidateFailed(TEXT("Server_ActivateAIAll_Validate"));
			return;
		}
		P_THIS->Server_ActivateAIAll_Implementation(Z_Param_activate,Z_Param_playerRank,Z_Param_playerRole);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_DebugSend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_DebugSend_Validate(Z_Param_data))
		{
			RPC_ValidateFailed(TEXT("Server_DebugSend_Validate"));
			return;
		}
		P_THIS->Server_DebugSend_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_LeaveGame)
	{
		P_GET_UBOOL(Z_Param_joiningLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_LeaveGame_Validate(Z_Param_joiningLobby))
		{
			RPC_ValidateFailed(TEXT("Server_LeaveGame_Validate"));
			return;
		}
		P_THIS->Server_LeaveGame_Implementation(Z_Param_joiningLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_RequestEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestEndGame_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RequestEndGame_Validate"));
			return;
		}
		P_THIS->Server_RequestEndGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_SetHasMoveInputThisFrame)
	{
		P_GET_UBOOL(Z_Param_hasMoveInputThisFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetHasMoveInputThisFrame_Validate(Z_Param_hasMoveInputThisFrame))
		{
			RPC_ValidateFailed(TEXT("Server_SetHasMoveInputThisFrame_Validate"));
			return;
		}
		P_THIS->Server_SetHasMoveInputThisFrame_Implementation(Z_Param_hasMoveInputThisFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_SetReadyToTravel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetReadyToTravel_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_SetReadyToTravel_Validate"));
			return;
		}
		P_THIS->Server_SetReadyToTravel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_SetSpectatorMode)
	{
		P_GET_UBOOL(Z_Param_on);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSpectatorMode_Validate(Z_Param_on))
		{
			RPC_ValidateFailed(TEXT("Server_SetSpectatorMode_Validate"));
			return;
		}
		P_THIS->Server_SetSpectatorMode_Implementation(Z_Param_on);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServer_SetSpectatorModeInEditor)
	{
		P_GET_UBOOL(Z_Param_on);
		P_GET_OBJECT(ADBDPlayerState,Z_Param_spectatingPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSpectatorModeInEditor_Validate(Z_Param_on,Z_Param_spectatingPlayerState))
		{
			RPC_ValidateFailed(TEXT("Server_SetSpectatorModeInEditor_Validate"));
			return;
		}
		P_THIS->Server_SetSpectatorModeInEditor_Implementation(Z_Param_on,Z_Param_spectatingPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execServerViewPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerViewPlayer_Validate(Z_Param_playerName))
		{
			RPC_ValidateFailed(TEXT("ServerViewPlayer_Validate"));
			return;
		}
		P_THIS->ServerViewPlayer_Implementation(Z_Param_playerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController::execSetShouldMoveInputReplicateToServer)
	{
		P_GET_UBOOL(Z_Param_shouldReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldMoveInputReplicateToServer(Z_Param_shouldReplicate);
		P_NATIVE_END;
	}
	static FName NAME_ADBDPlayerController_Client_SetSpectatorMode = FName(TEXT("Client_SetSpectatorMode"));
	void ADBDPlayerController::Client_SetSpectatorMode(bool on)
	{
		DBDPlayerController_eventClient_SetSpectatorMode_Parms Parms;
		Parms.on=on ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Client_SetSpectatorMode),&Parms);
	}
	static FName NAME_ADBDPlayerController_Client_SetSpectatorModeInEditor = FName(TEXT("Client_SetSpectatorModeInEditor"));
	void ADBDPlayerController::Client_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState)
	{
		DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms Parms;
		Parms.on=on ? true : false;
		Parms.spectatingPlayerState=spectatingPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Client_SetSpectatorModeInEditor),&Parms);
	}
	static FName NAME_ADBDPlayerController_Client_SpectateAI = FName(TEXT("Client_SpectateAI"));
	void ADBDPlayerController::Client_SpectateAI(APawn* aiPawn)
	{
		DBDPlayerController_eventClient_SpectateAI_Parms Parms;
		Parms.aiPawn=aiPawn;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Client_SpectateAI),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_ActivateAI = FName(TEXT("Server_ActivateAI"));
	void ADBDPlayerController::Server_ActivateAI(bool activate, int32 playerRank)
	{
		DBDPlayerController_eventServer_ActivateAI_Parms Parms;
		Parms.activate=activate ? true : false;
		Parms.playerRank=playerRank;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_ActivateAI),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_ActivateAIAll = FName(TEXT("Server_ActivateAIAll"));
	void ADBDPlayerController::Server_ActivateAIAll(bool activate, int32 playerRank, int8 playerRole)
	{
		DBDPlayerController_eventServer_ActivateAIAll_Parms Parms;
		Parms.activate=activate ? true : false;
		Parms.playerRank=playerRank;
		Parms.playerRole=playerRole;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_ActivateAIAll),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_DebugSend = FName(TEXT("Server_DebugSend"));
	void ADBDPlayerController::Server_DebugSend(const FString& data)
	{
		DBDPlayerController_eventServer_DebugSend_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_DebugSend),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_LeaveGame = FName(TEXT("Server_LeaveGame"));
	void ADBDPlayerController::Server_LeaveGame(bool joiningLobby)
	{
		DBDPlayerController_eventServer_LeaveGame_Parms Parms;
		Parms.joiningLobby=joiningLobby ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_LeaveGame),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_RequestEndGame = FName(TEXT("Server_RequestEndGame"));
	void ADBDPlayerController::Server_RequestEndGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_RequestEndGame),NULL);
	}
	static FName NAME_ADBDPlayerController_Server_SetHasMoveInputThisFrame = FName(TEXT("Server_SetHasMoveInputThisFrame"));
	void ADBDPlayerController::Server_SetHasMoveInputThisFrame(bool hasMoveInputThisFrame)
	{
		DBDPlayerController_eventServer_SetHasMoveInputThisFrame_Parms Parms;
		Parms.hasMoveInputThisFrame=hasMoveInputThisFrame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_SetHasMoveInputThisFrame),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_SetReadyToTravel = FName(TEXT("Server_SetReadyToTravel"));
	void ADBDPlayerController::Server_SetReadyToTravel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_SetReadyToTravel),NULL);
	}
	static FName NAME_ADBDPlayerController_Server_SetSpectatorMode = FName(TEXT("Server_SetSpectatorMode"));
	void ADBDPlayerController::Server_SetSpectatorMode(bool on)
	{
		DBDPlayerController_eventServer_SetSpectatorMode_Parms Parms;
		Parms.on=on ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_SetSpectatorMode),&Parms);
	}
	static FName NAME_ADBDPlayerController_Server_SetSpectatorModeInEditor = FName(TEXT("Server_SetSpectatorModeInEditor"));
	void ADBDPlayerController::Server_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState)
	{
		DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms Parms;
		Parms.on=on ? true : false;
		Parms.spectatingPlayerState=spectatingPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Server_SetSpectatorModeInEditor),&Parms);
	}
	static FName NAME_ADBDPlayerController_ServerViewPlayer = FName(TEXT("ServerViewPlayer"));
	void ADBDPlayerController::ServerViewPlayer(const FString& playerName)
	{
		DBDPlayerController_eventServerViewPlayer_Parms Parms;
		Parms.playerName=playerName;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_ServerViewPlayer),&Parms);
	}
	void ADBDPlayerController::StaticRegisterNativesADBDPlayerController()
	{
		UClass* Class = ADBDPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAI", &ADBDPlayerController::execActivateAI },
			{ "Client_SetSpectatorMode", &ADBDPlayerController::execClient_SetSpectatorMode },
			{ "Client_SetSpectatorModeInEditor", &ADBDPlayerController::execClient_SetSpectatorModeInEditor },
			{ "Client_SpectateAI", &ADBDPlayerController::execClient_SpectateAI },
			{ "GetAIPawn", &ADBDPlayerController::execGetAIPawn },
			{ "GetControlledPlayer", &ADBDPlayerController::execGetControlledPlayer },
			{ "GetSpectatedPlayer", &ADBDPlayerController::execGetSpectatedPlayer },
			{ "GetSpectatedPlayerState", &ADBDPlayerController::execGetSpectatedPlayerState },
			{ "ImplementRunLockMechanic", &ADBDPlayerController::execImplementRunLockMechanic },
			{ "IsSpectating", &ADBDPlayerController::execIsSpectating },
			{ "MobileJoystickInput_Pressed", &ADBDPlayerController::execMobileJoystickInput_Pressed },
			{ "OnRep_Fence", &ADBDPlayerController::execOnRep_Fence },
			{ "Server_ActivateAI", &ADBDPlayerController::execServer_ActivateAI },
			{ "Server_ActivateAIAll", &ADBDPlayerController::execServer_ActivateAIAll },
			{ "Server_DebugSend", &ADBDPlayerController::execServer_DebugSend },
			{ "Server_LeaveGame", &ADBDPlayerController::execServer_LeaveGame },
			{ "Server_RequestEndGame", &ADBDPlayerController::execServer_RequestEndGame },
			{ "Server_SetHasMoveInputThisFrame", &ADBDPlayerController::execServer_SetHasMoveInputThisFrame },
			{ "Server_SetReadyToTravel", &ADBDPlayerController::execServer_SetReadyToTravel },
			{ "Server_SetSpectatorMode", &ADBDPlayerController::execServer_SetSpectatorMode },
			{ "Server_SetSpectatorModeInEditor", &ADBDPlayerController::execServer_SetSpectatorModeInEditor },
			{ "ServerViewPlayer", &ADBDPlayerController::execServerViewPlayer },
			{ "SetShouldMoveInputReplicateToServer", &ADBDPlayerController::execSetShouldMoveInputReplicateToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics
	{
		struct DBDPlayerController_eventActivateAI_Parms
		{
			bool activate;
			int32 playerRank;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerRank;
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_playerRank = { "playerRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventActivateAI_Parms, playerRank), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((DBDPlayerController_eventActivateAI_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventActivateAI_Parms), &Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_playerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "ActivateAI", nullptr, nullptr, sizeof(DBDPlayerController_eventActivateAI_Parms), Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_ActivateAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_ActivateAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics
	{
		static void NewProp_on_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::NewProp_on_SetBit(void* Obj)
	{
		((DBDPlayerController_eventClient_SetSpectatorMode_Parms*)Obj)->on = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventClient_SetSpectatorMode_Parms), &Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::NewProp_on_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Client_SetSpectatorMode", nullptr, nullptr, sizeof(DBDPlayerController_eventClient_SetSpectatorMode_Parms), Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spectatingPlayerState;
		static void NewProp_on_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_spectatingPlayerState = { "spectatingPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms, spectatingPlayerState), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_on_SetBit(void* Obj)
	{
		((DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms*)Obj)->on = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms), &Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_on_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_spectatingPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Client_SetSpectatorModeInEditor", nullptr, nullptr, sizeof(DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms), Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aiPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::NewProp_aiPawn = { "aiPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventClient_SpectateAI_Parms, aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::NewProp_aiPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Client_SpectateAI", nullptr, nullptr, sizeof(DBDPlayerController_eventClient_SpectateAI_Parms), Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics
	{
		struct DBDPlayerController_eventGetAIPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventGetAIPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "GetAIPawn", nullptr, nullptr, sizeof(DBDPlayerController_eventGetAIPawn_Parms), Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_GetAIPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_GetAIPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics
	{
		struct DBDPlayerController_eventGetControlledPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventGetControlledPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "GetControlledPlayer", nullptr, nullptr, sizeof(DBDPlayerController_eventGetControlledPlayer_Parms), Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics
	{
		struct DBDPlayerController_eventGetSpectatedPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventGetSpectatedPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "GetSpectatedPlayer", nullptr, nullptr, sizeof(DBDPlayerController_eventGetSpectatedPlayer_Parms), Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics
	{
		struct DBDPlayerController_eventGetSpectatedPlayerState_Parms
		{
			ADBDPlayerState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventGetSpectatedPlayerState_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "GetSpectatedPlayerState", nullptr, nullptr, sizeof(DBDPlayerController_eventGetSpectatedPlayerState_Parms), Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "ImplementRunLockMechanic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics
	{
		struct DBDPlayerController_eventIsSpectating_Parms
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
	void Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerController_eventIsSpectating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventIsSpectating_Parms), &Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "IsSpectating", nullptr, nullptr, sizeof(DBDPlayerController_eventIsSpectating_Parms), Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_IsSpectating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_IsSpectating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics
	{
		struct DBDPlayerController_eventMobileJoystickInput_Pressed_Parms
		{
			int32 joystickIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_joystickIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerController_eventMobileJoystickInput_Pressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventMobileJoystickInput_Pressed_Parms), &Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_joystickIndex = { "joystickIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventMobileJoystickInput_Pressed_Parms, joystickIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::NewProp_joystickIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "MobileJoystickInput_Pressed", nullptr, nullptr, sizeof(DBDPlayerController_eventMobileJoystickInput_Pressed_Parms), Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "OnRep_Fence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerRank;
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_playerRank = { "playerRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServer_ActivateAI_Parms, playerRank), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_ActivateAI_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_ActivateAI_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_playerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_ActivateAI", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_ActivateAI_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerRank;
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServer_ActivateAIAll_Parms, playerRole), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_playerRank = { "playerRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServer_ActivateAIAll_Parms, playerRank), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_ActivateAIAll_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_ActivateAIAll_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_playerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_ActivateAIAll", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_ActivateAIAll_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServer_DebugSend_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_DebugSend", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_DebugSend_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics
	{
		static void NewProp_joiningLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_joiningLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::NewProp_joiningLobby_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_LeaveGame_Parms*)Obj)->joiningLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::NewProp_joiningLobby = { "joiningLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_LeaveGame_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::NewProp_joiningLobby_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::NewProp_joiningLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_LeaveGame", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_LeaveGame_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_RequestEndGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics
	{
		static void NewProp_hasMoveInputThisFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasMoveInputThisFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::NewProp_hasMoveInputThisFrame_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_SetHasMoveInputThisFrame_Parms*)Obj)->hasMoveInputThisFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::NewProp_hasMoveInputThisFrame = { "hasMoveInputThisFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_SetHasMoveInputThisFrame_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::NewProp_hasMoveInputThisFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::NewProp_hasMoveInputThisFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_SetHasMoveInputThisFrame", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_SetHasMoveInputThisFrame_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_SetReadyToTravel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics
	{
		static void NewProp_on_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::NewProp_on_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_SetSpectatorMode_Parms*)Obj)->on = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_SetSpectatorMode_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::NewProp_on_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_SetSpectatorMode", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_SetSpectatorMode_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spectatingPlayerState;
		static void NewProp_on_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_spectatingPlayerState = { "spectatingPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms, spectatingPlayerState), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_on_SetBit(void* Obj)
	{
		((DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms*)Obj)->on = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms), &Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_on_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_spectatingPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "Server_SetSpectatorModeInEditor", nullptr, nullptr, sizeof(DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms), Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_eventServerViewPlayer_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::NewProp_playerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "ServerViewPlayer", nullptr, nullptr, sizeof(DBDPlayerController_eventServerViewPlayer_Parms), Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics
	{
		struct DBDPlayerController_eventSetShouldMoveInputReplicateToServer_Parms
		{
			bool shouldReplicate;
		};
		static void NewProp_shouldReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldReplicate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::NewProp_shouldReplicate_SetBit(void* Obj)
	{
		((DBDPlayerController_eventSetShouldMoveInputReplicateToServer_Parms*)Obj)->shouldReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::NewProp_shouldReplicate = { "shouldReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_eventSetShouldMoveInputReplicateToServer_Parms), &Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::NewProp_shouldReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::NewProp_shouldReplicate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController, nullptr, "SetShouldMoveInputReplicateToServer", nullptr, nullptr, sizeof(DBDPlayerController_eventSetShouldMoveInputReplicateToServer_Parms), Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDPlayerController_NoRegister()
	{
		return ADBDPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controllerGameRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__controllerGameRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__controllerGameRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__theFence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__theFence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocallyObservedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocallyObservedChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPawnLeavingGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnLeavingGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDPlayerController_ActivateAI, "ActivateAI" }, // 3198268997
		{ &Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorMode, "Client_SetSpectatorMode" }, // 3782710283
		{ &Z_Construct_UFunction_ADBDPlayerController_Client_SetSpectatorModeInEditor, "Client_SetSpectatorModeInEditor" }, // 3360445514
		{ &Z_Construct_UFunction_ADBDPlayerController_Client_SpectateAI, "Client_SpectateAI" }, // 4257522592
		{ &Z_Construct_UFunction_ADBDPlayerController_GetAIPawn, "GetAIPawn" }, // 1688696963
		{ &Z_Construct_UFunction_ADBDPlayerController_GetControlledPlayer, "GetControlledPlayer" }, // 1980312643
		{ &Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayer, "GetSpectatedPlayer" }, // 1094817120
		{ &Z_Construct_UFunction_ADBDPlayerController_GetSpectatedPlayerState, "GetSpectatedPlayerState" }, // 2613486995
		{ &Z_Construct_UFunction_ADBDPlayerController_ImplementRunLockMechanic, "ImplementRunLockMechanic" }, // 465388614
		{ &Z_Construct_UFunction_ADBDPlayerController_IsSpectating, "IsSpectating" }, // 2743666179
		{ &Z_Construct_UFunction_ADBDPlayerController_MobileJoystickInput_Pressed, "MobileJoystickInput_Pressed" }, // 416609598
		{ &Z_Construct_UFunction_ADBDPlayerController_OnRep_Fence, "OnRep_Fence" }, // 587117906
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAI, "Server_ActivateAI" }, // 4184438956
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_ActivateAIAll, "Server_ActivateAIAll" }, // 2163596197
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_DebugSend, "Server_DebugSend" }, // 548742314
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_LeaveGame, "Server_LeaveGame" }, // 287157345
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_RequestEndGame, "Server_RequestEndGame" }, // 3438777488
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_SetHasMoveInputThisFrame, "Server_SetHasMoveInputThisFrame" }, // 818112042
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_SetReadyToTravel, "Server_SetReadyToTravel" }, // 2747487163
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorMode, "Server_SetSpectatorMode" }, // 4049070310
		{ &Z_Construct_UFunction_ADBDPlayerController_Server_SetSpectatorModeInEditor, "Server_SetSpectatorModeInEditor" }, // 3501974637
		{ &Z_Construct_UFunction_ADBDPlayerController_ServerViewPlayer, "ServerViewPlayer" }, // 1470314467
		{ &Z_Construct_UFunction_ADBDPlayerController_SetShouldMoveInputReplicateToServer, "SetShouldMoveInputReplicateToServer" }, // 3920190800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerController.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole_MetaData[] = {
		{ "Category", "DBDPlayerController" },
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole = { "_controllerGameRole", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, _controllerGameRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__aiPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__aiPawn = { "_aiPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, _aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__aiPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__aiPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__inputHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__inputHandler = { "_inputHandler", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, _inputHandler), Z_Construct_UClass_UDBDBaseInputHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__inputHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__inputHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__theFence_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__theFence = { "_theFence", "OnRep_Fence", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, _theFence), Z_Construct_UClass_ANetworkFenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__theFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__theFence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnLocallyObservedChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnLocallyObservedChanged = { "OnLocallyObservedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, OnLocallyObservedChanged), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnLocallyObservedChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnLocallyObservedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnLocallyObservedChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnPawnLeavingGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnPawnLeavingGame = { "OnPawnLeavingGame", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerController, OnPawnLeavingGame), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerControllerOnPawnLeavingGame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnPawnLeavingGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnPawnLeavingGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__controllerGameRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__aiPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__inputHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp__theFence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnLocallyObservedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerController_Statics::NewProp_OnPawnLeavingGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerController_Statics::ClassParams = {
		&ADBDPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerController, 2137207721);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerController>()
	{
		return ADBDPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerController(Z_Construct_UClass_ADBDPlayerController, &ADBDPlayerController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerController"), false, nullptr, nullptr, nullptr);

	void ADBDPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__theFence(TEXT("_theFence"));

		const bool bIsValid = true
			&& Name__theFence == ClassReps[(int32)ENetFields_Private::_theFence].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADBDPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
