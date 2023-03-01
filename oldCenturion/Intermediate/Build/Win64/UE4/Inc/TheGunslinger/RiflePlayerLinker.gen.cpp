// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/RiflePlayerLinker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiflePlayerLinker() {}
// Cross Module References
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URiflePlayerLinker_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URiflePlayerLinker();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics
	{
		struct _Script_TheGunslinger_eventRiflePlayerLinkerOnLinkedPlayerSet_Parms
		{
			ADBDPlayer* linkedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_linkedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::NewProp_linkedPlayer = { "linkedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TheGunslinger_eventRiflePlayerLinkerOnLinkedPlayerSet_Parms, linkedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::NewProp_linkedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger, nullptr, "RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheGunslinger_eventRiflePlayerLinkerOnLinkedPlayerSet_Parms), Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execClient_OnAuthorityTensionBreakChain)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_OnAuthorityTensionBreakChain_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execGetLinkedPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetLinkedPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execGetLinkOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetLinkOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execMulticast_Link)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_linkedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Link_Implementation(Z_Param_linkedPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execMulticast_Unlink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Unlink_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URiflePlayerLinker::execServer_OnClientConfirmTensionBreakChain)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnClientConfirmTensionBreakChain_Validate(Z_Param_player))
		{
			RPC_ValidateFailed(TEXT("Server_OnClientConfirmTensionBreakChain_Validate"));
			return;
		}
		P_THIS->Server_OnClientConfirmTensionBreakChain_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain = FName(TEXT("Client_OnAuthorityTensionBreakChain"));
	void URiflePlayerLinker::Client_OnAuthorityTensionBreakChain(ADBDPlayer* player)
	{
		RiflePlayerLinker_eventClient_OnAuthorityTensionBreakChain_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain),&Parms);
	}
	static FName NAME_URiflePlayerLinker_Multicast_Link = FName(TEXT("Multicast_Link"));
	void URiflePlayerLinker::Multicast_Link(ADBDPlayer* linkedPlayer)
	{
		RiflePlayerLinker_eventMulticast_Link_Parms Parms;
		Parms.linkedPlayer=linkedPlayer;
		ProcessEvent(FindFunctionChecked(NAME_URiflePlayerLinker_Multicast_Link),&Parms);
	}
	static FName NAME_URiflePlayerLinker_Multicast_Unlink = FName(TEXT("Multicast_Unlink"));
	void URiflePlayerLinker::Multicast_Unlink()
	{
		ProcessEvent(FindFunctionChecked(NAME_URiflePlayerLinker_Multicast_Unlink),NULL);
	}
	static FName NAME_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain = FName(TEXT("Server_OnClientConfirmTensionBreakChain"));
	void URiflePlayerLinker::Server_OnClientConfirmTensionBreakChain(ADBDPlayer* player)
	{
		RiflePlayerLinker_eventServer_OnClientConfirmTensionBreakChain_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain),&Parms);
	}
	void URiflePlayerLinker::StaticRegisterNativesURiflePlayerLinker()
	{
		UClass* Class = URiflePlayerLinker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_OnAuthorityTensionBreakChain", &URiflePlayerLinker::execClient_OnAuthorityTensionBreakChain },
			{ "GetLinkedPlayer", &URiflePlayerLinker::execGetLinkedPlayer },
			{ "GetLinkOwner", &URiflePlayerLinker::execGetLinkOwner },
			{ "Multicast_Link", &URiflePlayerLinker::execMulticast_Link },
			{ "Multicast_Unlink", &URiflePlayerLinker::execMulticast_Unlink },
			{ "Server_OnClientConfirmTensionBreakChain", &URiflePlayerLinker::execServer_OnClientConfirmTensionBreakChain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RiflePlayerLinker_eventClient_OnAuthorityTensionBreakChain_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "Client_OnAuthorityTensionBreakChain", nullptr, nullptr, sizeof(RiflePlayerLinker_eventClient_OnAuthorityTensionBreakChain_Parms), Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics
	{
		struct RiflePlayerLinker_eventGetLinkedPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RiflePlayerLinker_eventGetLinkedPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "GetLinkedPlayer", nullptr, nullptr, sizeof(RiflePlayerLinker_eventGetLinkedPlayer_Parms), Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics
	{
		struct RiflePlayerLinker_eventGetLinkOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RiflePlayerLinker_eventGetLinkOwner_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "GetLinkOwner", nullptr, nullptr, sizeof(RiflePlayerLinker_eventGetLinkOwner_Parms), Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_linkedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::NewProp_linkedPlayer = { "linkedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RiflePlayerLinker_eventMulticast_Link_Parms, linkedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::NewProp_linkedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "Multicast_Link", nullptr, nullptr, sizeof(RiflePlayerLinker_eventMulticast_Link_Parms), Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "Multicast_Unlink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RiflePlayerLinker_eventServer_OnClientConfirmTensionBreakChain_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URiflePlayerLinker, nullptr, "Server_OnClientConfirmTensionBreakChain", nullptr, nullptr, sizeof(RiflePlayerLinker_eventServer_OnClientConfirmTensionBreakChain_Parms), Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URiflePlayerLinker_NoRegister()
	{
		return URiflePlayerLinker::StaticClass();
	}
	struct Z_Construct_UClass_URiflePlayerLinker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementAccelerationTreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__movementAccelerationTreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementLinkReductionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__movementLinkReductionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breakFreeCloseRangeMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__breakFreeCloseRangeMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumLinkLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minimumLinkLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__elasticLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__elasticLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__desiredLinkLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__desiredLinkLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedPlayerDuringAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkedPlayerDuringAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLinkedPlayerSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLinkedPlayerSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URiflePlayerLinker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URiflePlayerLinker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URiflePlayerLinker_Client_OnAuthorityTensionBreakChain, "Client_OnAuthorityTensionBreakChain" }, // 4189096136
		{ &Z_Construct_UFunction_URiflePlayerLinker_GetLinkedPlayer, "GetLinkedPlayer" }, // 3813016212
		{ &Z_Construct_UFunction_URiflePlayerLinker_GetLinkOwner, "GetLinkOwner" }, // 4234150697
		{ &Z_Construct_UFunction_URiflePlayerLinker_Multicast_Link, "Multicast_Link" }, // 2390045013
		{ &Z_Construct_UFunction_URiflePlayerLinker_Multicast_Unlink, "Multicast_Unlink" }, // 2495726806
		{ &Z_Construct_UFunction_URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain, "Server_OnClientConfirmTensionBreakChain" }, // 1070426220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RiflePlayerLinker.h" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementAccelerationTreshold_MetaData[] = {
		{ "Category", "RiflePlayerLinker" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementAccelerationTreshold = { "_movementAccelerationTreshold", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _movementAccelerationTreshold), METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementAccelerationTreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementAccelerationTreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementLinkReductionThreshold_MetaData[] = {
		{ "Category", "RiflePlayerLinker" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementLinkReductionThreshold = { "_movementLinkReductionThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _movementLinkReductionThreshold), METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementLinkReductionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementLinkReductionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__breakFreeCloseRangeMaxDistance_MetaData[] = {
		{ "Category", "RiflePlayerLinker" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__breakFreeCloseRangeMaxDistance = { "_breakFreeCloseRangeMaxDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _breakFreeCloseRangeMaxDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__breakFreeCloseRangeMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__breakFreeCloseRangeMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__minimumLinkLength_MetaData[] = {
		{ "Category", "RiflePlayerLinker" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__minimumLinkLength = { "_minimumLinkLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _minimumLinkLength), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__minimumLinkLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__minimumLinkLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__elasticLength_MetaData[] = {
		{ "Category", "RiflePlayerLinker" },
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__elasticLength = { "_elasticLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _elasticLength), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__elasticLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__elasticLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__desiredLinkLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__desiredLinkLength = { "_desiredLinkLength", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _desiredLinkLength), METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__desiredLinkLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__desiredLinkLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkOwner = { "_linkOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _linkOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayerDuringAttack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayerDuringAttack = { "_linkedPlayerDuringAttack", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _linkedPlayerDuringAttack), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayerDuringAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayerDuringAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayer = { "_linkedPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, _linkedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp_OnLinkedPlayerSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/RiflePlayerLinker.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp_OnLinkedPlayerSet = { "OnLinkedPlayerSet", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URiflePlayerLinker, OnLinkedPlayerSet), Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp_OnLinkedPlayerSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp_OnLinkedPlayerSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URiflePlayerLinker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementAccelerationTreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__movementLinkReductionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__breakFreeCloseRangeMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__minimumLinkLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__elasticLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__desiredLinkLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayerDuringAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp__linkedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URiflePlayerLinker_Statics::NewProp_OnLinkedPlayerSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URiflePlayerLinker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiflePlayerLinker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URiflePlayerLinker_Statics::ClassParams = {
		&URiflePlayerLinker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URiflePlayerLinker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URiflePlayerLinker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URiflePlayerLinker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URiflePlayerLinker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URiflePlayerLinker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URiflePlayerLinker, 740127537);
	template<> THEGUNSLINGER_API UClass* StaticClass<URiflePlayerLinker>()
	{
		return URiflePlayerLinker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URiflePlayerLinker(Z_Construct_UClass_URiflePlayerLinker, &URiflePlayerLinker::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("URiflePlayerLinker"), false, nullptr, nullptr, nullptr);

	void URiflePlayerLinker::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__desiredLinkLength(TEXT("_desiredLinkLength"));

		const bool bIsValid = true
			&& Name__desiredLinkLength == ClassReps[(int32)ENetFields_Private::_desiredLinkLength].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URiflePlayerLinker"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URiflePlayerLinker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
