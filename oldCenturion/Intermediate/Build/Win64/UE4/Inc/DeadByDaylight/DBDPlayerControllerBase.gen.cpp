// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerControllerBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerControllerBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execCallConsoleCmdOnServer_Server)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_commandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->CallConsoleCmdOnServer_Server_Validate(Z_Param_commandLine))
		{
			RPC_ValidateFailed(TEXT("CallConsoleCmdOnServer_Server_Validate"));
			return;
		}
		P_THIS->CallConsoleCmdOnServer_Server_Implementation(Z_Param_commandLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_EACMessageFromServer)
	{
		P_GET_TARRAY(uint8,Z_Param_message);
		P_GET_PROPERTY(FUInt32Property,Z_Param_messageLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_EACMessageFromServer_Implementation(Z_Param_message,Z_Param_messageLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_FinishedPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_FinishedPlaying_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_GameEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_GameEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_RequestPlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RequestPlayerProfile_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_SendLogs)
	{
		P_GET_TARRAY(FString,Z_Param_ensures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SendLogs_Implementation(Z_Param_ensures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_SendServerAuthentication)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_authServerTicket);
		P_GET_PROPERTY(FUInt64Property,Z_Param_steamID);
		P_GET_PROPERTY(FUInt32Property,Z_Param_ticketLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_SendServerAuthentication_Validate(Z_Param_authServerTicket,Z_Param_steamID,Z_Param_ticketLength))
		{
			RPC_ValidateFailed(TEXT("Client_SendServerAuthentication_Validate"));
			return;
		}
		P_THIS->Client_SendServerAuthentication_Implementation(Z_Param_authServerTicket,Z_Param_steamID,Z_Param_ticketLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_SendWarning)
	{
		P_GET_UBOOL(Z_Param_penaltyStarts);
		P_GET_PROPERTY(FFloatProperty,Z_Param_seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SendWarning_Implementation(Z_Param_penaltyStarts,Z_Param_seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execClient_ValidateServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ValidateServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_BuildFromMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_map);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BuildFromMap(Z_Param_map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_BuildFromPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BuildFromPlayerCount(Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_BuildFromPremadeMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_map);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BuildFromPremadeMap(Z_Param_map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_BuildFromSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BuildFromSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_BuildFromTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_matrixX);
		P_GET_PROPERTY(FIntProperty,Z_Param_matrixY);
		P_GET_PROPERTY(FIntProperty,Z_Param_rotation);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BuildFromTile(Z_Param_matrixX,Z_Param_matrixY,Z_Param_rotation,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_DebugSendChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_DebugSendChatMessage(Z_Param_msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_FillAllScoreCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_FillAllScoreCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_FillScoreCategory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_FillScoreCategory(Z_Param_category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_FireTestScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_category);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_FireTestScore(Z_Param_category,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesFuture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetCurrentCharacterPrestigeDatesFuture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetCurrentCharacterPrestigeDatesNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesPast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetCurrentCharacterPrestigeDatesPast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execDBD_UpdateLocalStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_UpdateLocalStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_commandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server(Z_Param_commandLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer_EACMessageFromClient)
	{
		P_GET_TARRAY(uint8,Z_Param_message);
		P_GET_PROPERTY(FUInt32Property,Z_Param_messageLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EACMessageFromClient_Validate(Z_Param_message,Z_Param_messageLength))
		{
			RPC_ValidateFailed(TEXT("Server_EACMessageFromClient_Validate"));
			return;
		}
		P_THIS->Server_EACMessageFromClient_Implementation(Z_Param_message,Z_Param_messageLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer_ReceivePlayerProfile)
	{
		P_GET_STRUCT(FPlayerSavedProfileDataShared,Z_Param_savedProfileData);
		P_GET_STRUCT(FPlayerLoadoutData,Z_Param_playerLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ReceivePlayerProfile_Validate(Z_Param_savedProfileData,Z_Param_playerLoadout))
		{
			RPC_ValidateFailed(TEXT("Server_ReceivePlayerProfile_Validate"));
			return;
		}
		P_THIS->Server_ReceivePlayerProfile_Implementation(Z_Param_savedProfileData,Z_Param_playerLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer_SendClientAuthentication)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_authClientTicket);
		P_GET_PROPERTY(FUInt64Property,Z_Param_steamID);
		P_GET_PROPERTY(FUInt32Property,Z_Param_ticketLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendClientAuthentication_Validate(Z_Param_authClientTicket,Z_Param_steamID,Z_Param_ticketLength))
		{
			RPC_ValidateFailed(TEXT("Server_SendClientAuthentication_Validate"));
			return;
		}
		P_THIS->Server_SendClientAuthentication_Implementation(Z_Param_authClientTicket,Z_Param_steamID,Z_Param_ticketLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer_SendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendMessage_Validate(Z_Param_message))
		{
			RPC_ValidateFailed(TEXT("Server_SendMessage_Validate"));
			return;
		}
		P_THIS->Server_SendMessage_Implementation(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerControllerBase::execServer_UpdateReplicatedPips)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pipsToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_UpdateReplicatedPips_Validate(Z_Param_pipsToAdd))
		{
			RPC_ValidateFailed(TEXT("Server_UpdateReplicatedPips_Validate"));
			return;
		}
		P_THIS->Server_UpdateReplicatedPips_Implementation(Z_Param_pipsToAdd);
		P_NATIVE_END;
	}
	static FName NAME_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server = FName(TEXT("CallConsoleCmdOnServer_Server"));
	void ADBDPlayerControllerBase::CallConsoleCmdOnServer_Server(const FString& commandLine)
	{
		DBDPlayerControllerBase_eventCallConsoleCmdOnServer_Server_Parms Parms;
		Parms.commandLine=commandLine;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_EACMessageFromServer = FName(TEXT("Client_EACMessageFromServer"));
	void ADBDPlayerControllerBase::Client_EACMessageFromServer(TArray<uint8> const& message, uint32 messageLength)
	{
		DBDPlayerControllerBase_eventClient_EACMessageFromServer_Parms Parms;
		Parms.message=message;
		Parms.messageLength=messageLength;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_EACMessageFromServer),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_FinishedPlaying = FName(TEXT("Client_FinishedPlaying"));
	void ADBDPlayerControllerBase::Client_FinishedPlaying()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_FinishedPlaying),NULL);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_GameEnded = FName(TEXT("Client_GameEnded"));
	void ADBDPlayerControllerBase::Client_GameEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_GameEnded),NULL);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_RequestPlayerProfile = FName(TEXT("Client_RequestPlayerProfile"));
	void ADBDPlayerControllerBase::Client_RequestPlayerProfile()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_RequestPlayerProfile),NULL);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_SendLogs = FName(TEXT("Client_SendLogs"));
	void ADBDPlayerControllerBase::Client_SendLogs(TArray<FString> const& ensures)
	{
		DBDPlayerControllerBase_eventClient_SendLogs_Parms Parms;
		Parms.ensures=ensures;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_SendLogs),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_SendServerAuthentication = FName(TEXT("Client_SendServerAuthentication"));
	void ADBDPlayerControllerBase::Client_SendServerAuthentication(const FString& authServerTicket, uint64 steamID, uint32 ticketLength)
	{
		DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms Parms;
		Parms.authServerTicket=authServerTicket;
		Parms.steamID=steamID;
		Parms.ticketLength=ticketLength;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_SendServerAuthentication),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_SendWarning = FName(TEXT("Client_SendWarning"));
	void ADBDPlayerControllerBase::Client_SendWarning(bool penaltyStarts, float seconds)
	{
		DBDPlayerControllerBase_eventClient_SendWarning_Parms Parms;
		Parms.penaltyStarts=penaltyStarts ? true : false;
		Parms.seconds=seconds;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_SendWarning),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Client_ValidateServer = FName(TEXT("Client_ValidateServer"));
	void ADBDPlayerControllerBase::Client_ValidateServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Client_ValidateServer),NULL);
	}
	static FName NAME_ADBDPlayerControllerBase_Server_EACMessageFromClient = FName(TEXT("Server_EACMessageFromClient"));
	void ADBDPlayerControllerBase::Server_EACMessageFromClient(TArray<uint8> const& message, uint32 messageLength)
	{
		DBDPlayerControllerBase_eventServer_EACMessageFromClient_Parms Parms;
		Parms.message=message;
		Parms.messageLength=messageLength;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Server_EACMessageFromClient),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Server_ReceivePlayerProfile = FName(TEXT("Server_ReceivePlayerProfile"));
	void ADBDPlayerControllerBase::Server_ReceivePlayerProfile(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout)
	{
		DBDPlayerControllerBase_eventServer_ReceivePlayerProfile_Parms Parms;
		Parms.savedProfileData=savedProfileData;
		Parms.playerLoadout=playerLoadout;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Server_ReceivePlayerProfile),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Server_SendClientAuthentication = FName(TEXT("Server_SendClientAuthentication"));
	void ADBDPlayerControllerBase::Server_SendClientAuthentication(const FString& authClientTicket, uint64 steamID, uint32 ticketLength)
	{
		DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms Parms;
		Parms.authClientTicket=authClientTicket;
		Parms.steamID=steamID;
		Parms.ticketLength=ticketLength;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Server_SendClientAuthentication),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Server_SendMessage = FName(TEXT("Server_SendMessage"));
	void ADBDPlayerControllerBase::Server_SendMessage(const FString& message)
	{
		DBDPlayerControllerBase_eventServer_SendMessage_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Server_SendMessage),&Parms);
	}
	static FName NAME_ADBDPlayerControllerBase_Server_UpdateReplicatedPips = FName(TEXT("Server_UpdateReplicatedPips"));
	void ADBDPlayerControllerBase::Server_UpdateReplicatedPips(int32 pipsToAdd)
	{
		DBDPlayerControllerBase_eventServer_UpdateReplicatedPips_Parms Parms;
		Parms.pipsToAdd=pipsToAdd;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerControllerBase_Server_UpdateReplicatedPips),&Parms);
	}
	void ADBDPlayerControllerBase::StaticRegisterNativesADBDPlayerControllerBase()
	{
		UClass* Class = ADBDPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallConsoleCmdOnServer_Server", &ADBDPlayerControllerBase::execCallConsoleCmdOnServer_Server },
			{ "Client_EACMessageFromServer", &ADBDPlayerControllerBase::execClient_EACMessageFromServer },
			{ "Client_FinishedPlaying", &ADBDPlayerControllerBase::execClient_FinishedPlaying },
			{ "Client_GameEnded", &ADBDPlayerControllerBase::execClient_GameEnded },
			{ "Client_RequestPlayerProfile", &ADBDPlayerControllerBase::execClient_RequestPlayerProfile },
			{ "Client_SendLogs", &ADBDPlayerControllerBase::execClient_SendLogs },
			{ "Client_SendServerAuthentication", &ADBDPlayerControllerBase::execClient_SendServerAuthentication },
			{ "Client_SendWarning", &ADBDPlayerControllerBase::execClient_SendWarning },
			{ "Client_ValidateServer", &ADBDPlayerControllerBase::execClient_ValidateServer },
			{ "DBD_BuildFromMap", &ADBDPlayerControllerBase::execDBD_BuildFromMap },
			{ "DBD_BuildFromPlayerCount", &ADBDPlayerControllerBase::execDBD_BuildFromPlayerCount },
			{ "DBD_BuildFromPremadeMap", &ADBDPlayerControllerBase::execDBD_BuildFromPremadeMap },
			{ "DBD_BuildFromSeed", &ADBDPlayerControllerBase::execDBD_BuildFromSeed },
			{ "DBD_BuildFromTile", &ADBDPlayerControllerBase::execDBD_BuildFromTile },
			{ "DBD_DebugSendChatMessage", &ADBDPlayerControllerBase::execDBD_DebugSendChatMessage },
			{ "DBD_FillAllScoreCategories", &ADBDPlayerControllerBase::execDBD_FillAllScoreCategories },
			{ "DBD_FillScoreCategory", &ADBDPlayerControllerBase::execDBD_FillScoreCategory },
			{ "DBD_FireTestScore", &ADBDPlayerControllerBase::execDBD_FireTestScore },
			{ "DBD_SetCurrentCharacterPrestigeDatesFuture", &ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesFuture },
			{ "DBD_SetCurrentCharacterPrestigeDatesNow", &ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesNow },
			{ "DBD_SetCurrentCharacterPrestigeDatesPast", &ADBDPlayerControllerBase::execDBD_SetCurrentCharacterPrestigeDatesPast },
			{ "DBD_UpdateLocalStats", &ADBDPlayerControllerBase::execDBD_UpdateLocalStats },
			{ "Server", &ADBDPlayerControllerBase::execServer },
			{ "Server_EACMessageFromClient", &ADBDPlayerControllerBase::execServer_EACMessageFromClient },
			{ "Server_ReceivePlayerProfile", &ADBDPlayerControllerBase::execServer_ReceivePlayerProfile },
			{ "Server_SendClientAuthentication", &ADBDPlayerControllerBase::execServer_SendClientAuthentication },
			{ "Server_SendMessage", &ADBDPlayerControllerBase::execServer_SendMessage },
			{ "Server_UpdateReplicatedPips", &ADBDPlayerControllerBase::execServer_UpdateReplicatedPips },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commandLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_commandLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::NewProp_commandLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::NewProp_commandLine = { "commandLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventCallConsoleCmdOnServer_Server_Parms, commandLine), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::NewProp_commandLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::NewProp_commandLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::NewProp_commandLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "CallConsoleCmdOnServer_Server", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventCallConsoleCmdOnServer_Server_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_messageLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_message_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_messageLength = { "messageLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_EACMessageFromServer_Parms, messageLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_EACMessageFromServer_Parms, message), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message_Inner = { "message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_messageLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::NewProp_message_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_EACMessageFromServer", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventClient_EACMessageFromServer_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_FinishedPlaying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_GameEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_RequestPlayerProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ensures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ensures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ensures_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures = { "ensures", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_SendLogs_Parms, ensures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures_Inner = { "ensures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::NewProp_ensures_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_SendLogs", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventClient_SendLogs_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ticketLength;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_steamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authServerTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authServerTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_ticketLength = { "ticketLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms, ticketLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_authServerTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_authServerTicket = { "authServerTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms, authServerTicket), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_authServerTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_authServerTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_ticketLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::NewProp_authServerTicket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_SendServerAuthentication", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_seconds;
		static void NewProp_penaltyStarts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_penaltyStarts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventClient_SendWarning_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_penaltyStarts_SetBit(void* Obj)
	{
		((DBDPlayerControllerBase_eventClient_SendWarning_Parms*)Obj)->penaltyStarts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_penaltyStarts = { "penaltyStarts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerControllerBase_eventClient_SendWarning_Parms), &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_penaltyStarts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::NewProp_penaltyStarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_SendWarning", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventClient_SendWarning_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Client_ValidateServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_BuildFromMap_Parms
		{
			FString map;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::NewProp_map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromMap_Parms, map), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::NewProp_map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::NewProp_map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::NewProp_map,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_BuildFromMap", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_BuildFromMap_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_BuildFromPlayerCount_Parms
		{
			int32 count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromPlayerCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_BuildFromPlayerCount", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_BuildFromPlayerCount_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_BuildFromPremadeMap_Parms
		{
			FString map;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::NewProp_map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromPremadeMap_Parms, map), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::NewProp_map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::NewProp_map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::NewProp_map,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_BuildFromPremadeMap", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_BuildFromPremadeMap_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_BuildFromSeed_Parms
		{
			int32 seed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromSeed_Parms, seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_BuildFromSeed", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_BuildFromSeed_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms
		{
			int32 matrixX;
			int32 matrixY;
			int32 rotation;
			FString name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_matrixY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_matrixX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms, rotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_matrixY = { "matrixY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms, matrixY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_matrixX = { "matrixX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms, matrixX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_matrixY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::NewProp_matrixX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_BuildFromTile", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_BuildFromTile_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_DebugSendChatMessage_Parms
		{
			FString msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_DebugSendChatMessage_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_DebugSendChatMessage", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_DebugSendChatMessage_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_FillAllScoreCategories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_FillScoreCategory_Parms
		{
			int32 category;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_FillScoreCategory_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_FillScoreCategory", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_FillScoreCategory_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics
	{
		struct DBDPlayerControllerBase_eventDBD_FireTestScore_Parms
		{
			int32 category;
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_FireTestScore_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventDBD_FireTestScore_Parms, category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_FireTestScore", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventDBD_FireTestScore_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_SetCurrentCharacterPrestigeDatesFuture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_SetCurrentCharacterPrestigeDatesNow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_SetCurrentCharacterPrestigeDatesPast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "DBD_UpdateLocalStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics
	{
		struct DBDPlayerControllerBase_eventServer_Parms
		{
			FString commandLine;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commandLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_commandLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::NewProp_commandLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::NewProp_commandLine = { "commandLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_Parms, commandLine), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::NewProp_commandLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::NewProp_commandLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::NewProp_commandLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_messageLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_message_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_messageLength = { "messageLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_EACMessageFromClient_Parms, messageLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_EACMessageFromClient_Parms, message), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message_Inner = { "message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_messageLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::NewProp_message_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server_EACMessageFromClient", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_EACMessageFromClient_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerLoadout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_savedProfileData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::NewProp_playerLoadout = { "playerLoadout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_ReceivePlayerProfile_Parms, playerLoadout), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::NewProp_savedProfileData = { "savedProfileData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_ReceivePlayerProfile_Parms, savedProfileData), Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::NewProp_playerLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::NewProp_savedProfileData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server_ReceivePlayerProfile", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_ReceivePlayerProfile_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ticketLength;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_steamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authClientTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_authClientTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_ticketLength = { "ticketLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms, ticketLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_authClientTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_authClientTicket = { "authClientTicket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms, authClientTicket), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_authClientTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_authClientTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_ticketLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::NewProp_authClientTicket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server_SendClientAuthentication", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_SendMessage_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server_SendMessage", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_SendMessage_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pipsToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::NewProp_pipsToAdd = { "pipsToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerControllerBase_eventServer_UpdateReplicatedPips_Parms, pipsToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::NewProp_pipsToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerControllerBase, nullptr, "Server_UpdateReplicatedPips", nullptr, nullptr, sizeof(DBDPlayerControllerBase_eventServer_UpdateReplicatedPips_Parms), Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDPlayerControllerBase_NoRegister()
	{
		return ADBDPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mainCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server, "CallConsoleCmdOnServer_Server" }, // 2635586002
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_EACMessageFromServer, "Client_EACMessageFromServer" }, // 519647079
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_FinishedPlaying, "Client_FinishedPlaying" }, // 380439222
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_GameEnded, "Client_GameEnded" }, // 4278946603
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_RequestPlayerProfile, "Client_RequestPlayerProfile" }, // 4137239868
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendLogs, "Client_SendLogs" }, // 2156580504
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendServerAuthentication, "Client_SendServerAuthentication" }, // 988221384
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_SendWarning, "Client_SendWarning" }, // 4150574819
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Client_ValidateServer, "Client_ValidateServer" }, // 1074380688
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromMap, "DBD_BuildFromMap" }, // 885666437
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPlayerCount, "DBD_BuildFromPlayerCount" }, // 1570350070
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromPremadeMap, "DBD_BuildFromPremadeMap" }, // 2424342805
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromSeed, "DBD_BuildFromSeed" }, // 512605553
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_BuildFromTile, "DBD_BuildFromTile" }, // 486269922
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_DebugSendChatMessage, "DBD_DebugSendChatMessage" }, // 867397667
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillAllScoreCategories, "DBD_FillAllScoreCategories" }, // 303144548
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FillScoreCategory, "DBD_FillScoreCategory" }, // 1732815698
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_FireTestScore, "DBD_FireTestScore" }, // 3046859374
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture, "DBD_SetCurrentCharacterPrestigeDatesFuture" }, // 32283149
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow, "DBD_SetCurrentCharacterPrestigeDatesNow" }, // 1085649817
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast, "DBD_SetCurrentCharacterPrestigeDatesPast" }, // 630856654
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_DBD_UpdateLocalStats, "DBD_UpdateLocalStats" }, // 2750776236
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server, "Server" }, // 3898635369
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server_EACMessageFromClient, "Server_EACMessageFromClient" }, // 2036937977
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server_ReceivePlayerProfile, "Server_ReceivePlayerProfile" }, // 1419856830
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendClientAuthentication, "Server_SendClientAuthentication" }, // 3999066183
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server_SendMessage, "Server_SendMessage" }, // 3260415357
		{ &Z_Construct_UFunction_ADBDPlayerControllerBase_Server_UpdateReplicatedPips, "Server_UpdateReplicatedPips" }, // 3123050122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerControllerBase_Statics::NewProp__mainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerControllerBase_Statics::NewProp__mainCharacter = { "_mainCharacter", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerControllerBase, _mainCharacter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerControllerBase_Statics::NewProp__mainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerControllerBase_Statics::NewProp__mainCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerControllerBase_Statics::NewProp__mainCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerControllerBase_Statics::ClassParams = {
		&ADBDPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDPlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerControllerBase, 3823921023);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerControllerBase>()
	{
		return ADBDPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerControllerBase(Z_Construct_UClass_ADBDPlayerControllerBase, &ADBDPlayerControllerBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerControllerBase"), false, nullptr, nullptr, nullptr);

	void ADBDPlayerControllerBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__mainCharacter(TEXT("_mainCharacter"));

		const bool bIsValid = true
			&& Name__mainCharacter == ClassReps[(int32)ENetFields_Private::_mainCharacter].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADBDPlayerControllerBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
