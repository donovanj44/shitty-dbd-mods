// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLobbyJoinedWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLobbyJoinedWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyJoinedWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyJoinedWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfoData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReadyStatusData();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLobbyJoinedWidget::execHandleLeaveButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeaveButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UUMGLobbyJoinedWidget_AddPlayerInfo = FName(TEXT("AddPlayerInfo"));
	void UUMGLobbyJoinedWidget::AddPlayerInfo(int32 playerId, FPlayerInfoData const& playerInfoData, bool isPlayerReady, TArray<FInventorySlotData> const& loadoutData)
	{
		UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms Parms;
		Parms.playerId=playerId;
		Parms.playerInfoData=playerInfoData;
		Parms.isPlayerReady=isPlayerReady ? true : false;
		Parms.loadoutData=loadoutData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_AddPlayerInfo),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_RemovePlayersInfo = FName(TEXT("RemovePlayersInfo"));
	void UUMGLobbyJoinedWidget::RemovePlayersInfo(int32 playerId)
	{
		UMGLobbyJoinedWidget_eventRemovePlayersInfo_Parms Parms;
		Parms.playerId=playerId;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_RemovePlayersInfo),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer = FName(TEXT("SetLoadoutDataForLocalPlayer"));
	void UUMGLobbyJoinedWidget::SetLoadoutDataForLocalPlayer(TArray<FInventorySlotData> const& loadoutData, bool usingMatchRules, bool perkSlotsLockedByAdmin, bool isSlasher)
	{
		UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms Parms;
		Parms.loadoutData=loadoutData;
		Parms.usingMatchRules=usingMatchRules ? true : false;
		Parms.perkSlotsLockedByAdmin=perkSlotsLockedByAdmin ? true : false;
		Parms.isSlasher=isSlasher ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_SetLobbyTimer = FName(TEXT("SetLobbyTimer"));
	void UUMGLobbyJoinedWidget::SetLobbyTimer(int32 seconds)
	{
		UMGLobbyJoinedWidget_eventSetLobbyTimer_Parms Parms;
		Parms.seconds=seconds;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_SetLobbyTimer),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_SetLocalPlayerInfo = FName(TEXT("SetLocalPlayerInfo"));
	void UUMGLobbyJoinedWidget::SetLocalPlayerInfo(FPlayerInfoData const& playerInfoData)
	{
		UMGLobbyJoinedWidget_eventSetLocalPlayerInfo_Parms Parms;
		Parms.playerInfoData=playerInfoData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_SetLocalPlayerInfo),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_SetReadyStatus = FName(TEXT("SetReadyStatus"));
	void UUMGLobbyJoinedWidget::SetReadyStatus(TArray<FPlayerReadyStatusData> const& playersReadyStatusData)
	{
		UMGLobbyJoinedWidget_eventSetReadyStatus_Parms Parms;
		Parms.playersReadyStatusData=playersReadyStatusData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_SetReadyStatus),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_SetWidgetsVisibility = FName(TEXT("SetWidgetsVisibility"));
	void UUMGLobbyJoinedWidget::SetWidgetsVisibility(bool widgetsVisibilty)
	{
		UMGLobbyJoinedWidget_eventSetWidgetsVisibility_Parms Parms;
		Parms.widgetsVisibilty=widgetsVisibilty ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_SetWidgetsVisibility),&Parms);
	}
	static FName NAME_UUMGLobbyJoinedWidget_UpdatePlayersLatency = FName(TEXT("UpdatePlayersLatency"));
	void UUMGLobbyJoinedWidget::UpdatePlayersLatency(TMap<int32,float> const& playersLatency, bool isHost)
	{
		UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms Parms;
		Parms.playersLatency=playersLatency;
		Parms.isHost=isHost ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyJoinedWidget_UpdatePlayersLatency),&Parms);
	}
	void UUMGLobbyJoinedWidget::StaticRegisterNativesUUMGLobbyJoinedWidget()
	{
		UClass* Class = UUMGLobbyJoinedWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLeaveButtonClicked", &UUMGLobbyJoinedWidget::execHandleLeaveButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loadoutData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loadoutData_Inner;
		static void NewProp_isPlayerReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayerReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInfoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerInfoData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData = { "loadoutData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms, loadoutData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData_Inner = { "loadoutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_isPlayerReady_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms*)Obj)->isPlayerReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_isPlayerReady = { "isPlayerReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_isPlayerReady_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerInfoData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerInfoData = { "playerInfoData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms, playerInfoData), Z_Construct_UScriptStruct_FPlayerInfoData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerInfoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerInfoData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_loadoutData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_isPlayerReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerInfoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "AddPlayerInfo", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "HandleLeaveButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventRemovePlayersInfo_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "RemovePlayersInfo", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventRemovePlayersInfo_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics
	{
		static void NewProp_isSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlasher;
		static void NewProp_perkSlotsLockedByAdmin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_perkSlotsLockedByAdmin;
		static void NewProp_usingMatchRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_usingMatchRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loadoutData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loadoutData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_isSlasher_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms*)Obj)->isSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_isSlasher = { "isSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_isSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_perkSlotsLockedByAdmin_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms*)Obj)->perkSlotsLockedByAdmin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_perkSlotsLockedByAdmin = { "perkSlotsLockedByAdmin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_perkSlotsLockedByAdmin_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_usingMatchRules_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms*)Obj)->usingMatchRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_usingMatchRules = { "usingMatchRules", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_usingMatchRules_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData = { "loadoutData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms, loadoutData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData_Inner = { "loadoutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_isSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_perkSlotsLockedByAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_usingMatchRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::NewProp_loadoutData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "SetLoadoutDataForLocalPlayer", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventSetLobbyTimer_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "SetLobbyTimer", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventSetLobbyTimer_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInfoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerInfoData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::NewProp_playerInfoData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::NewProp_playerInfoData = { "playerInfoData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventSetLocalPlayerInfo_Parms, playerInfoData), Z_Construct_UScriptStruct_FPlayerInfoData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::NewProp_playerInfoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::NewProp_playerInfoData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::NewProp_playerInfoData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "SetLocalPlayerInfo", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventSetLocalPlayerInfo_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playersReadyStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playersReadyStatusData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playersReadyStatusData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData = { "playersReadyStatusData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventSetReadyStatus_Parms, playersReadyStatusData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData_Inner = { "playersReadyStatusData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerReadyStatusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::NewProp_playersReadyStatusData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "SetReadyStatus", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventSetReadyStatus_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetsVisibilty_MetaData[];
#endif
		static void NewProp_widgetsVisibilty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_widgetsVisibilty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventSetWidgetsVisibility_Parms*)Obj)->widgetsVisibilty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty = { "widgetsVisibilty", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventSetWidgetsVisibility_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::NewProp_widgetsVisibilty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "SetWidgetsVisibility", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventSetWidgetsVisibility_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics
	{
		static void NewProp_isHost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playersLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_playersLatency;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playersLatency_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playersLatency_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_isHost_SetBit(void* Obj)
	{
		((UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms*)Obj)->isHost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_isHost = { "isHost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms), &Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_isHost_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency = { "playersLatency", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms, playersLatency), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_Key_KeyProp = { "playersLatency_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_ValueProp = { "playersLatency", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_isHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::NewProp_playersLatency_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyJoinedWidget, nullptr, "UpdatePlayersLatency", nullptr, nullptr, sizeof(UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms), Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLobbyJoinedWidget_NoRegister()
	{
		return UUMGLobbyJoinedWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandButtonsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommandButtonsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextToBeReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextToBeReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextWaitingPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextWaitingPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPlayerNotReadyYet_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextPlayerNotReadyYet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextLeaveLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextLeaveLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerIsSlasher_MetaData[];
#endif
		static void NewProp_LocalPlayerIsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalPlayerIsSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_AddPlayerInfo, "AddPlayerInfo" }, // 3048350482
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_HandleLeaveButtonClicked, "HandleLeaveButtonClicked" }, // 963584633
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_RemovePlayersInfo, "RemovePlayersInfo" }, // 4242527118
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLoadoutDataForLocalPlayer, "SetLoadoutDataForLocalPlayer" }, // 3973788425
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLobbyTimer, "SetLobbyTimer" }, // 157130512
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetLocalPlayerInfo, "SetLocalPlayerInfo" }, // 4125677939
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetReadyStatus, "SetReadyStatus" }, // 3046900345
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_SetWidgetsVisibility, "SetWidgetsVisibility" }, // 2124202200
		{ &Z_Construct_UFunction_UUMGLobbyJoinedWidget_UpdatePlayersLatency, "UpdatePlayersLatency" }, // 1878474569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLobbyJoinedWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_CommandButtonsContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_CommandButtonsContainer = { "CommandButtonsContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyJoinedWidget, CommandButtonsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_CommandButtonsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_CommandButtonsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextToBeReady_MetaData[] = {
		{ "Category", "UMGLobbyJoinedWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextToBeReady = { "TextToBeReady", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextToBeReady), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextToBeReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextToBeReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextWaitingPlayers_MetaData[] = {
		{ "Category", "UMGLobbyJoinedWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextWaitingPlayers = { "TextWaitingPlayers", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextWaitingPlayers), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextWaitingPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextWaitingPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextPlayerNotReadyYet_MetaData[] = {
		{ "Category", "UMGLobbyJoinedWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextPlayerNotReadyYet = { "TextPlayerNotReadyYet", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextPlayerNotReadyYet), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextPlayerNotReadyYet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextPlayerNotReadyYet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextLeaveLobby_MetaData[] = {
		{ "Category", "UMGLobbyJoinedWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextLeaveLobby = { "TextLeaveLobby", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextLeaveLobby), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextLeaveLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextLeaveLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher_MetaData[] = {
		{ "Category", "UMGLobbyJoinedWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyJoinedWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher_SetBit(void* Obj)
	{
		((UUMGLobbyJoinedWidget*)Obj)->LocalPlayerIsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher = { "LocalPlayerIsSlasher", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGLobbyJoinedWidget), &Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_CommandButtonsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextToBeReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextWaitingPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextPlayerNotReadyYet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_TextLeaveLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::NewProp_LocalPlayerIsSlasher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLobbyJoinedWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::ClassParams = {
		&UUMGLobbyJoinedWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLobbyJoinedWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLobbyJoinedWidget, 3215480174);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLobbyJoinedWidget>()
	{
		return UUMGLobbyJoinedWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLobbyJoinedWidget(Z_Construct_UClass_UUMGLobbyJoinedWidget, &UUMGLobbyJoinedWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLobbyJoinedWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLobbyJoinedWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
