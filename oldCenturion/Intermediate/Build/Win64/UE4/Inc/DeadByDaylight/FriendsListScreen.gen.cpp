// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FriendsListScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsListScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendsListScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendsListScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UFriendsListScreen::execOnAcceptFriendInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcceptFriendInvite(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnBlockPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockPlayer(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnCancelFriendInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelFriendInvite(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnDeclineFriendInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeclineFriendInvite(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnPartyJoinRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartyJoinRequest(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnRemoveFriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveFriend(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnSearchForFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSearchForFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnSendPartyInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSendPartyInvite(Z_Param_friendId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnUnblockPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnblockPlayer(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendsListScreen::execOnViewProfile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnViewProfile(Z_Param_friendId);
		P_NATIVE_END;
	}
	void UFriendsListScreen::StaticRegisterNativesUFriendsListScreen()
	{
		UClass* Class = UFriendsListScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcceptFriendInvite", &UFriendsListScreen::execOnAcceptFriendInvite },
			{ "OnBlockPlayer", &UFriendsListScreen::execOnBlockPlayer },
			{ "OnCancelFriendInvite", &UFriendsListScreen::execOnCancelFriendInvite },
			{ "OnDeclineFriendInvite", &UFriendsListScreen::execOnDeclineFriendInvite },
			{ "OnPartyJoinRequest", &UFriendsListScreen::execOnPartyJoinRequest },
			{ "OnRemoveFriend", &UFriendsListScreen::execOnRemoveFriend },
			{ "OnSearchForFriend", &UFriendsListScreen::execOnSearchForFriend },
			{ "OnSendPartyInvite", &UFriendsListScreen::execOnSendPartyInvite },
			{ "OnUnblockPlayer", &UFriendsListScreen::execOnUnblockPlayer },
			{ "OnViewProfile", &UFriendsListScreen::execOnViewProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics
	{
		struct FriendsListScreen_eventOnAcceptFriendInvite_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnAcceptFriendInvite_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnAcceptFriendInvite", nullptr, nullptr, sizeof(FriendsListScreen_eventOnAcceptFriendInvite_Parms), Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics
	{
		struct FriendsListScreen_eventOnBlockPlayer_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnBlockPlayer_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnBlockPlayer", nullptr, nullptr, sizeof(FriendsListScreen_eventOnBlockPlayer_Parms), Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics
	{
		struct FriendsListScreen_eventOnCancelFriendInvite_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnCancelFriendInvite_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnCancelFriendInvite", nullptr, nullptr, sizeof(FriendsListScreen_eventOnCancelFriendInvite_Parms), Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics
	{
		struct FriendsListScreen_eventOnDeclineFriendInvite_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnDeclineFriendInvite_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnDeclineFriendInvite", nullptr, nullptr, sizeof(FriendsListScreen_eventOnDeclineFriendInvite_Parms), Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics
	{
		struct FriendsListScreen_eventOnPartyJoinRequest_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnPartyJoinRequest_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnPartyJoinRequest", nullptr, nullptr, sizeof(FriendsListScreen_eventOnPartyJoinRequest_Parms), Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics
	{
		struct FriendsListScreen_eventOnRemoveFriend_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnRemoveFriend_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnRemoveFriend", nullptr, nullptr, sizeof(FriendsListScreen_eventOnRemoveFriend_Parms), Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnSearchForFriend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics
	{
		struct FriendsListScreen_eventOnSendPartyInvite_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnSendPartyInvite_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnSendPartyInvite", nullptr, nullptr, sizeof(FriendsListScreen_eventOnSendPartyInvite_Parms), Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics
	{
		struct FriendsListScreen_eventOnUnblockPlayer_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnUnblockPlayer_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnUnblockPlayer", nullptr, nullptr, sizeof(FriendsListScreen_eventOnUnblockPlayer_Parms), Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics
	{
		struct FriendsListScreen_eventOnViewProfile_Parms
		{
			FString friendId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::NewProp_friendId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendsListScreen_eventOnViewProfile_Parms, friendId), METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::NewProp_friendId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::NewProp_friendId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::NewProp_friendId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendsListScreen, nullptr, "OnViewProfile", nullptr, nullptr, sizeof(FriendsListScreen_eventOnViewProfile_Parms), Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendsListScreen_OnViewProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendsListScreen_OnViewProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFriendsListScreen_NoRegister()
	{
		return UFriendsListScreen::StaticClass();
	}
	struct Z_Construct_UClass_UFriendsListScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendsListScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriendsListScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriendsListScreen_OnAcceptFriendInvite, "OnAcceptFriendInvite" }, // 117099601
		{ &Z_Construct_UFunction_UFriendsListScreen_OnBlockPlayer, "OnBlockPlayer" }, // 4272592696
		{ &Z_Construct_UFunction_UFriendsListScreen_OnCancelFriendInvite, "OnCancelFriendInvite" }, // 427292706
		{ &Z_Construct_UFunction_UFriendsListScreen_OnDeclineFriendInvite, "OnDeclineFriendInvite" }, // 1355294155
		{ &Z_Construct_UFunction_UFriendsListScreen_OnPartyJoinRequest, "OnPartyJoinRequest" }, // 3625050004
		{ &Z_Construct_UFunction_UFriendsListScreen_OnRemoveFriend, "OnRemoveFriend" }, // 4108335555
		{ &Z_Construct_UFunction_UFriendsListScreen_OnSearchForFriend, "OnSearchForFriend" }, // 3578714562
		{ &Z_Construct_UFunction_UFriendsListScreen_OnSendPartyInvite, "OnSendPartyInvite" }, // 2407517682
		{ &Z_Construct_UFunction_UFriendsListScreen_OnUnblockPlayer, "OnUnblockPlayer" }, // 2369191453
		{ &Z_Construct_UFunction_UFriendsListScreen_OnViewProfile, "OnViewProfile" }, // 1314863821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendsListScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FriendsListScreen.h" },
		{ "ModuleRelativePath", "Public/FriendsListScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendsListScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendsListScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendsListScreen_Statics::ClassParams = {
		&UFriendsListScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriendsListScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendsListScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendsListScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendsListScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendsListScreen, 2285083551);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFriendsListScreen>()
	{
		return UFriendsListScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendsListScreen(Z_Construct_UClass_UFriendsListScreen, &UFriendsListScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFriendsListScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendsListScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
