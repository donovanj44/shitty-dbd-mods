// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerController_Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerController_Menu() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerController_Menu_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerController_Menu();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerControllerBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGamePresetData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerDataSync();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
// End Cross Module References
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execAuthority_SetPlayerReady)
	{
		P_GET_UBOOL(Z_Param_isReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetPlayerReady(Z_Param_isReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execAuthority_TogglePlayerReadyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TogglePlayerReadyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_GamePresetDataFromClient)
	{
		P_GET_STRUCT(FGamePresetData,Z_Param_gameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_GamePresetDataFromClient_Validate(Z_Param_gameState))
		{
			RPC_ValidateFailed(TEXT("Server_GamePresetDataFromClient_Validate"));
			return;
		}
		P_THIS->Server_GamePresetDataFromClient_Implementation(Z_Param_gameState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetCharacterData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_GET_STRUCT(FPlayerDataSync,Z_Param_playerDataSync);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetCharacterData_Validate(Z_Param_characterIndex,Z_Param_playerDataSync))
		{
			RPC_ValidateFailed(TEXT("Server_SetCharacterData_Validate"));
			return;
		}
		P_THIS->Server_SetCharacterData_Implementation(Z_Param_characterIndex,Z_Param_playerDataSync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetCharacterLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_prestigeLevel);
		P_GET_UBOOL(Z_Param_callOnRep);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetCharacterLevel_Validate(Z_Param_characterLevel,Z_Param_prestigeLevel,Z_Param_callOnRep))
		{
			RPC_ValidateFailed(TEXT("Server_SetCharacterLevel_Validate"));
			return;
		}
		P_THIS->Server_SetCharacterLevel_Implementation(Z_Param_characterLevel,Z_Param_prestigeLevel,Z_Param_callOnRep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetCustomizationCharm)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_charmId);
		P_GET_PROPERTY(FInt8Property,Z_Param_slotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetCustomizationCharm_Validate(Z_Param_charmId,Z_Param_slotIndex))
		{
			RPC_ValidateFailed(TEXT("Server_SetCustomizationCharm_Validate"));
			return;
		}
		P_THIS->Server_SetCustomizationCharm_Implementation(Z_Param_charmId,Z_Param_slotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetCustomizationMeshes)
	{
		P_GET_TARRAY(FName,Z_Param_itemIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetCustomizationMeshes_Validate(Z_Param_itemIds))
		{
			RPC_ValidateFailed(TEXT("Server_SetCustomizationMeshes_Validate"));
			return;
		}
		P_THIS->Server_SetCustomizationMeshes_Implementation(Z_Param_itemIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetEquipedPerks)
	{
		P_GET_TARRAY(FName,Z_Param_perkIds);
		P_GET_TARRAY(int32,Z_Param_perkLevels);
		P_GET_UBOOL(Z_Param_callOnRep);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetEquipedPerks_Validate(Z_Param_perkIds,Z_Param_perkLevels,Z_Param_callOnRep))
		{
			RPC_ValidateFailed(TEXT("Server_SetEquipedPerks_Validate"));
			return;
		}
		P_THIS->Server_SetEquipedPerks_Implementation(Z_Param_perkIds,Z_Param_perkLevels,Z_Param_callOnRep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetPlayerLoadout)
	{
		P_GET_STRUCT(FPlayerLoadoutData,Z_Param_desiredLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetPlayerLoadout_Validate(Z_Param_desiredLoadout))
		{
			RPC_ValidateFailed(TEXT("Server_SetPlayerLoadout_Validate"));
			return;
		}
		P_THIS->Server_SetPlayerLoadout_Implementation(Z_Param_desiredLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetPlayerReady)
	{
		P_GET_UBOOL(Z_Param_isReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetPlayerReady_Validate(Z_Param_isReady))
		{
			RPC_ValidateFailed(TEXT("Server_SetPlayerReady_Validate"));
			return;
		}
		P_THIS->Server_SetPlayerReady_Implementation(Z_Param_isReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execServer_SetReadyToTravel)
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
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execSetPlayerReady)
	{
		P_GET_UBOOL(Z_Param_isReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerReady(Z_Param_isReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerController_Menu::execTogglePlayerReadyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePlayerReadyState();
		P_NATIVE_END;
	}
	static FName NAME_ADBDPlayerController_Menu_Server_GamePresetDataFromClient = FName(TEXT("Server_GamePresetDataFromClient"));
	void ADBDPlayerController_Menu::Server_GamePresetDataFromClient(FGamePresetData const& gameState)
	{
		DBDPlayerController_Menu_eventServer_GamePresetDataFromClient_Parms Parms;
		Parms.gameState=gameState;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_GamePresetDataFromClient),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetCharacterData = FName(TEXT("Server_SetCharacterData"));
	void ADBDPlayerController_Menu::Server_SetCharacterData(int32 characterIndex, FPlayerDataSync const& playerDataSync)
	{
		DBDPlayerController_Menu_eventServer_SetCharacterData_Parms Parms;
		Parms.characterIndex=characterIndex;
		Parms.playerDataSync=playerDataSync;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetCharacterData),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetCharacterLevel = FName(TEXT("Server_SetCharacterLevel"));
	void ADBDPlayerController_Menu::Server_SetCharacterLevel(int32 characterLevel, int32 prestigeLevel, bool callOnRep)
	{
		DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms Parms;
		Parms.characterLevel=characterLevel;
		Parms.prestigeLevel=prestigeLevel;
		Parms.callOnRep=callOnRep ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetCharacterLevel),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetCustomizationCharm = FName(TEXT("Server_SetCustomizationCharm"));
	void ADBDPlayerController_Menu::Server_SetCustomizationCharm(FName charmId, int8 slotIndex)
	{
		DBDPlayerController_Menu_eventServer_SetCustomizationCharm_Parms Parms;
		Parms.charmId=charmId;
		Parms.slotIndex=slotIndex;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetCustomizationCharm),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetCustomizationMeshes = FName(TEXT("Server_SetCustomizationMeshes"));
	void ADBDPlayerController_Menu::Server_SetCustomizationMeshes(TArray<FName> const& itemIds)
	{
		DBDPlayerController_Menu_eventServer_SetCustomizationMeshes_Parms Parms;
		Parms.itemIds=itemIds;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetCustomizationMeshes),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetEquipedPerks = FName(TEXT("Server_SetEquipedPerks"));
	void ADBDPlayerController_Menu::Server_SetEquipedPerks(TArray<FName> const& perkIds, TArray<int32> const& perkLevels, bool callOnRep)
	{
		DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms Parms;
		Parms.perkIds=perkIds;
		Parms.perkLevels=perkLevels;
		Parms.callOnRep=callOnRep ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetEquipedPerks),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetPlayerLoadout = FName(TEXT("Server_SetPlayerLoadout"));
	void ADBDPlayerController_Menu::Server_SetPlayerLoadout(FPlayerLoadoutData desiredLoadout)
	{
		DBDPlayerController_Menu_eventServer_SetPlayerLoadout_Parms Parms;
		Parms.desiredLoadout=desiredLoadout;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetPlayerLoadout),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetPlayerReady = FName(TEXT("Server_SetPlayerReady"));
	void ADBDPlayerController_Menu::Server_SetPlayerReady(bool isReady)
	{
		DBDPlayerController_Menu_eventServer_SetPlayerReady_Parms Parms;
		Parms.isReady=isReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetPlayerReady),&Parms);
	}
	static FName NAME_ADBDPlayerController_Menu_Server_SetReadyToTravel = FName(TEXT("Server_SetReadyToTravel"));
	void ADBDPlayerController_Menu::Server_SetReadyToTravel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerController_Menu_Server_SetReadyToTravel),NULL);
	}
	void ADBDPlayerController_Menu::StaticRegisterNativesADBDPlayerController_Menu()
	{
		UClass* Class = ADBDPlayerController_Menu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SetPlayerReady", &ADBDPlayerController_Menu::execAuthority_SetPlayerReady },
			{ "Authority_TogglePlayerReadyState", &ADBDPlayerController_Menu::execAuthority_TogglePlayerReadyState },
			{ "Server_GamePresetDataFromClient", &ADBDPlayerController_Menu::execServer_GamePresetDataFromClient },
			{ "Server_SetCharacterData", &ADBDPlayerController_Menu::execServer_SetCharacterData },
			{ "Server_SetCharacterLevel", &ADBDPlayerController_Menu::execServer_SetCharacterLevel },
			{ "Server_SetCustomizationCharm", &ADBDPlayerController_Menu::execServer_SetCustomizationCharm },
			{ "Server_SetCustomizationMeshes", &ADBDPlayerController_Menu::execServer_SetCustomizationMeshes },
			{ "Server_SetEquipedPerks", &ADBDPlayerController_Menu::execServer_SetEquipedPerks },
			{ "Server_SetPlayerLoadout", &ADBDPlayerController_Menu::execServer_SetPlayerLoadout },
			{ "Server_SetPlayerReady", &ADBDPlayerController_Menu::execServer_SetPlayerReady },
			{ "Server_SetReadyToTravel", &ADBDPlayerController_Menu::execServer_SetReadyToTravel },
			{ "SetPlayerReady", &ADBDPlayerController_Menu::execSetPlayerReady },
			{ "TogglePlayerReadyState", &ADBDPlayerController_Menu::execTogglePlayerReadyState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics
	{
		struct DBDPlayerController_Menu_eventAuthority_SetPlayerReady_Parms
		{
			bool isReady;
		};
		static void NewProp_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::NewProp_isReady_SetBit(void* Obj)
	{
		((DBDPlayerController_Menu_eventAuthority_SetPlayerReady_Parms*)Obj)->isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::NewProp_isReady = { "isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_Menu_eventAuthority_SetPlayerReady_Parms), &Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::NewProp_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::NewProp_isReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Authority_SetPlayerReady", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventAuthority_SetPlayerReady_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Authority_TogglePlayerReadyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::NewProp_gameState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::NewProp_gameState = { "gameState", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_GamePresetDataFromClient_Parms, gameState), Z_Construct_UScriptStruct_FGamePresetData, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::NewProp_gameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::NewProp_gameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::NewProp_gameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_GamePresetDataFromClient", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_GamePresetDataFromClient_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerDataSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerDataSync;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_playerDataSync_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_playerDataSync = { "playerDataSync", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCharacterData_Parms, playerDataSync), Z_Construct_UScriptStruct_FPlayerDataSync, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_playerDataSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_playerDataSync_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCharacterData_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_playerDataSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetCharacterData", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetCharacterData_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics
	{
		static void NewProp_callOnRep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_callOnRep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_prestigeLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_callOnRep_SetBit(void* Obj)
	{
		((DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms*)Obj)->callOnRep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_callOnRep = { "callOnRep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms), &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_callOnRep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_prestigeLevel = { "prestigeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms, prestigeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_characterLevel = { "characterLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms, characterLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_callOnRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_prestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::NewProp_characterLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetCharacterLevel", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_charmId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCustomizationCharm_Parms, slotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::NewProp_charmId = { "charmId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCustomizationCharm_Parms, charmId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::NewProp_slotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::NewProp_charmId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetCustomizationCharm", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetCustomizationCharm_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds = { "itemIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetCustomizationMeshes_Parms, itemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds_Inner = { "itemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::NewProp_itemIds_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetCustomizationMeshes", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetCustomizationMeshes_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics
	{
		static void NewProp_callOnRep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_callOnRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_perkLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_perkLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_perkIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_perkIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_callOnRep_SetBit(void* Obj)
	{
		((DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms*)Obj)->callOnRep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_callOnRep = { "callOnRep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms), &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_callOnRep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels = { "perkLevels", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms, perkLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels_Inner = { "perkLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds = { "perkIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms, perkIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds_Inner = { "perkIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_callOnRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::NewProp_perkIds_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetEquipedPerks", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_desiredLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::NewProp_desiredLoadout = { "desiredLoadout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerController_Menu_eventServer_SetPlayerLoadout_Parms, desiredLoadout), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::NewProp_desiredLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetPlayerLoadout", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetPlayerLoadout_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics
	{
		static void NewProp_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::NewProp_isReady_SetBit(void* Obj)
	{
		((DBDPlayerController_Menu_eventServer_SetPlayerReady_Parms*)Obj)->isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::NewProp_isReady = { "isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_Menu_eventServer_SetPlayerReady_Parms), &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::NewProp_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::NewProp_isReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetPlayerReady", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventServer_SetPlayerReady_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "Server_SetReadyToTravel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics
	{
		struct DBDPlayerController_Menu_eventSetPlayerReady_Parms
		{
			bool isReady;
		};
		static void NewProp_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::NewProp_isReady_SetBit(void* Obj)
	{
		((DBDPlayerController_Menu_eventSetPlayerReady_Parms*)Obj)->isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::NewProp_isReady = { "isReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerController_Menu_eventSetPlayerReady_Parms), &Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::NewProp_isReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::NewProp_isReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "SetPlayerReady", nullptr, nullptr, sizeof(DBDPlayerController_Menu_eventSetPlayerReady_Parms), Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerController_Menu, nullptr, "TogglePlayerReadyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDPlayerController_Menu_NoRegister()
	{
		return ADBDPlayerController_Menu::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerController_Menu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerController_Menu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDPlayerController_Menu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_SetPlayerReady, "Authority_SetPlayerReady" }, // 3163060882
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Authority_TogglePlayerReadyState, "Authority_TogglePlayerReadyState" }, // 1521041126
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_GamePresetDataFromClient, "Server_GamePresetDataFromClient" }, // 586188413
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterData, "Server_SetCharacterData" }, // 4036807056
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCharacterLevel, "Server_SetCharacterLevel" }, // 3412168117
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationCharm, "Server_SetCustomizationCharm" }, // 2077966169
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetCustomizationMeshes, "Server_SetCustomizationMeshes" }, // 2897141067
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetEquipedPerks, "Server_SetEquipedPerks" }, // 3814040788
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerLoadout, "Server_SetPlayerLoadout" }, // 3589932049
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetPlayerReady, "Server_SetPlayerReady" }, // 1652830385
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_Server_SetReadyToTravel, "Server_SetReadyToTravel" }, // 1121310721
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_SetPlayerReady, "SetPlayerReady" }, // 3967549071
		{ &Z_Construct_UFunction_ADBDPlayerController_Menu_TogglePlayerReadyState, "TogglePlayerReadyState" }, // 1914788356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerController_Menu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerController_Menu.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerController_Menu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerController_Menu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerController_Menu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerController_Menu_Statics::ClassParams = {
		&ADBDPlayerController_Menu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerController_Menu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerController_Menu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerController_Menu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerController_Menu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerController_Menu, 747274707);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerController_Menu>()
	{
		return ADBDPlayerController_Menu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerController_Menu(Z_Construct_UClass_ADBDPlayerController_Menu, &ADBDPlayerController_Menu::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerController_Menu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerController_Menu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
