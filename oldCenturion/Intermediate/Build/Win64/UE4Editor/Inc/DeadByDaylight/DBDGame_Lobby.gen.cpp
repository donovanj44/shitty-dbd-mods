// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGame_Lobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGame_Lobby() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Lobby_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Lobby();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UIdentityValidation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_AddBotToLobby)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedCharacter);
		P_GET_PROPERTY(FStrProperty,Z_Param_item);
		P_GET_PROPERTY(FStrProperty,Z_Param_addon1);
		P_GET_PROPERTY(FStrProperty,Z_Param_addon2);
		P_GET_PROPERTY(FStrProperty,Z_Param_offering);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk1);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk2);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk3);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk4);
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_AddBotToLobby(Z_Param_selectedCharacter,Z_Param_item,Z_Param_addon1,Z_Param_addon2,Z_Param_offering,Z_Param_perk1,Z_Param_perk2,Z_Param_perk3,Z_Param_perk4,Z_Param_rank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_AddBotToLobbyByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_selectedCharacter);
		P_GET_PROPERTY(FStrProperty,Z_Param_item);
		P_GET_PROPERTY(FStrProperty,Z_Param_addon1);
		P_GET_PROPERTY(FStrProperty,Z_Param_addon2);
		P_GET_PROPERTY(FStrProperty,Z_Param_offering);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk1);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk2);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk3);
		P_GET_PROPERTY(FStrProperty,Z_Param_perk4);
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_AddBotToLobbyByName(Z_Param_selectedCharacter,Z_Param_item,Z_Param_addon1,Z_Param_addon2,Z_Param_offering,Z_Param_perk1,Z_Param_perk2,Z_Param_perk3,Z_Param_perk4,Z_Param_rank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_AddBotToLobbyNoLoadout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_AddBotToLobbyNoLoadout(Z_Param_selectedCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_AddBotToLobbyNoLoadoutByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_selectedCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_AddBotToLobbyNoLoadoutByName(Z_Param_selectedCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_FillLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_FillLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_FillLobbyWithBotsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_selectedKiller);
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_FillLobbyWithBotsByName(Z_Param_selectedKiller,Z_Param_rank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGame_Lobby::execDBD_RemoveBotByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_botIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_RemoveBotByIndex(Z_Param_botIndex);
		P_NATIVE_END;
	}
	void ADBDGame_Lobby::StaticRegisterNativesADBDGame_Lobby()
	{
		UClass* Class = ADBDGame_Lobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_AddBotToLobby", &ADBDGame_Lobby::execDBD_AddBotToLobby },
			{ "DBD_AddBotToLobbyByName", &ADBDGame_Lobby::execDBD_AddBotToLobbyByName },
			{ "DBD_AddBotToLobbyNoLoadout", &ADBDGame_Lobby::execDBD_AddBotToLobbyNoLoadout },
			{ "DBD_AddBotToLobbyNoLoadoutByName", &ADBDGame_Lobby::execDBD_AddBotToLobbyNoLoadoutByName },
			{ "DBD_FillLobby", &ADBDGame_Lobby::execDBD_FillLobby },
			{ "DBD_FillLobbyWithBotsByName", &ADBDGame_Lobby::execDBD_FillLobbyWithBotsByName },
			{ "DBD_RemoveBotByIndex", &ADBDGame_Lobby::execDBD_RemoveBotByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics
	{
		struct DBDGame_Lobby_eventDBD_AddBotToLobby_Parms
		{
			int32 selectedCharacter;
			FString item;
			FString addon1;
			FString addon2;
			FString offering;
			FString perk1;
			FString perk2;
			FString perk3;
			FString perk4;
			int32 rank;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_offering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, rank), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk4 = { "perk4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, perk4), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk3 = { "perk3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, perk3), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk2 = { "perk2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, perk2), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk1 = { "perk1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, perk1), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_offering_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_offering = { "offering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, offering), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_offering_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_offering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon2 = { "addon2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, addon2), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon1 = { "addon1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, addon1), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, item), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_selectedCharacter = { "selectedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms, selectedCharacter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_perk1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_offering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_addon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::NewProp_selectedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_AddBotToLobby", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_AddBotToLobby_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics
	{
		struct DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms
		{
			FString selectedCharacter;
			FString item;
			FString addon1;
			FString addon2;
			FString offering;
			FString perk1;
			FString perk2;
			FString perk3;
			FString perk4;
			int32 rank;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_perk1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_offering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_selectedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, rank), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk4 = { "perk4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, perk4), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk3 = { "perk3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, perk3), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk2 = { "perk2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, perk2), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk1 = { "perk1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, perk1), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_offering_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_offering = { "offering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, offering), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_offering_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_offering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon2 = { "addon2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, addon2), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon1 = { "addon1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, addon1), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, item), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_selectedCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_selectedCharacter = { "selectedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms, selectedCharacter), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_selectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_selectedCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_perk1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_offering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_addon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::NewProp_selectedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_AddBotToLobbyByName", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_AddBotToLobbyByName_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics
	{
		struct DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadout_Parms
		{
			int32 selectedCharacter;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::NewProp_selectedCharacter = { "selectedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadout_Parms, selectedCharacter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::NewProp_selectedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_AddBotToLobbyNoLoadout", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadout_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics
	{
		struct DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadoutByName_Parms
		{
			FString selectedCharacter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_selectedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::NewProp_selectedCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::NewProp_selectedCharacter = { "selectedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadoutByName_Parms, selectedCharacter), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::NewProp_selectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::NewProp_selectedCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::NewProp_selectedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_AddBotToLobbyNoLoadoutByName", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_AddBotToLobbyNoLoadoutByName_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_FillLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics
	{
		struct DBDGame_Lobby_eventDBD_FillLobbyWithBotsByName_Parms
		{
			FString selectedKiller;
			int32 rank;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_selectedKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_FillLobbyWithBotsByName_Parms, rank), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_selectedKiller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_selectedKiller = { "selectedKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_FillLobbyWithBotsByName_Parms, selectedKiller), METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_selectedKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_selectedKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::NewProp_selectedKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_FillLobbyWithBotsByName", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_FillLobbyWithBotsByName_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics
	{
		struct DBDGame_Lobby_eventDBD_RemoveBotByIndex_Parms
		{
			int32 botIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_botIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::NewProp_botIndex = { "botIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGame_Lobby_eventDBD_RemoveBotByIndex_Parms, botIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::NewProp_botIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGame_Lobby, nullptr, "DBD_RemoveBotByIndex", nullptr, nullptr, sizeof(DBDGame_Lobby_eventDBD_RemoveBotByIndex_Parms), Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDGame_Lobby_NoRegister()
	{
		return ADBDGame_Lobby::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGame_Lobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__identityValidation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__identityValidation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGame_Lobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDGame_Lobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobby, "DBD_AddBotToLobby" }, // 4069301204
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyByName, "DBD_AddBotToLobbyByName" }, // 3746864179
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadout, "DBD_AddBotToLobbyNoLoadout" }, // 1083043182
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_AddBotToLobbyNoLoadoutByName, "DBD_AddBotToLobbyNoLoadoutByName" }, // 946382742
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobby, "DBD_FillLobby" }, // 3368716022
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_FillLobbyWithBotsByName, "DBD_FillLobbyWithBotsByName" }, // 435741579
		{ &Z_Construct_UFunction_ADBDGame_Lobby_DBD_RemoveBotByIndex, "DBD_RemoveBotByIndex" }, // 3051958711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Lobby_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDGame_Lobby.h" },
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Lobby_Statics::NewProp__identityValidation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGame_Lobby_Statics::NewProp__identityValidation = { "_identityValidation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Lobby, _identityValidation), Z_Construct_UClass_UIdentityValidation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Lobby_Statics::NewProp__identityValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Lobby_Statics::NewProp__identityValidation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDGame_Lobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Lobby_Statics::NewProp__identityValidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGame_Lobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGame_Lobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGame_Lobby_Statics::ClassParams = {
		&ADBDGame_Lobby::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDGame_Lobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Lobby_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Lobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Lobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGame_Lobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGame_Lobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGame_Lobby, 2519257457);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGame_Lobby>()
	{
		return ADBDGame_Lobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGame_Lobby(Z_Construct_UClass_ADBDGame_Lobby, &ADBDGame_Lobby::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGame_Lobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGame_Lobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
