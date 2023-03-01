// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HexPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexPerk() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTotemBoundPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
// End Cross Module References
	DEFINE_FUNCTION(UHexPerk::execAuthority_RevealCurseToAllSurvivors)
	{
		P_GET_UBOOL(Z_Param_revealed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RevealCurseToAllSurvivors(Z_Param_revealed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execAuthority_SetCurseRevealedToPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_revealed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetCurseRevealedToPlayer(Z_Param_player,Z_Param_revealed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execIsCurseRevealedToPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurseRevealedToPlayer(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execOnHexPerkGameplayEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_gameplayEventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHexPerkGameplayEvent(EDBDScoreTypes(Z_Param_gameplayEventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execOnRep_PlayersWhoKnowCurse)
	{
		P_GET_TARRAY(ADBDPlayer*,Z_Param_oldPlayersWhoKnowCurse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayersWhoKnowCurse(Z_Param_oldPlayersWhoKnowCurse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execReceiveGameplayEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_gameplayEventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveGameplayEvent_Implementation(EDBDScoreTypes(Z_Param_gameplayEventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHexPerk::execUpdateCursedStatusViewOnLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCursedStatusViewOnLocalPlayer();
		P_NATIVE_END;
	}
	static FName NAME_UHexPerk_Authority_Reactivate_BP = FName(TEXT("Authority_Reactivate_BP"));
	void UHexPerk::Authority_Reactivate_BP(ATotem* totem)
	{
		HexPerk_eventAuthority_Reactivate_BP_Parms Parms;
		Parms.totem=totem;
		ProcessEvent(FindFunctionChecked(NAME_UHexPerk_Authority_Reactivate_BP),&Parms);
	}
	static FName NAME_UHexPerk_ReceiveGameplayEvent = FName(TEXT("ReceiveGameplayEvent"));
	void UHexPerk::ReceiveGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target)
	{
		HexPerk_eventReceiveGameplayEvent_Parms Parms;
		Parms.gameplayEventType=gameplayEventType;
		Parms.amount=amount;
		Parms.instigator=instigator;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UHexPerk_ReceiveGameplayEvent),&Parms);
	}
	void UHexPerk::StaticRegisterNativesUHexPerk()
	{
		UClass* Class = UHexPerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_RevealCurseToAllSurvivors", &UHexPerk::execAuthority_RevealCurseToAllSurvivors },
			{ "Authority_SetCurseRevealedToPlayer", &UHexPerk::execAuthority_SetCurseRevealedToPlayer },
			{ "IsCurseRevealedToPlayer", &UHexPerk::execIsCurseRevealedToPlayer },
			{ "OnHexPerkGameplayEvent", &UHexPerk::execOnHexPerkGameplayEvent },
			{ "OnRep_PlayersWhoKnowCurse", &UHexPerk::execOnRep_PlayersWhoKnowCurse },
			{ "ReceiveGameplayEvent", &UHexPerk::execReceiveGameplayEvent },
			{ "UpdateCursedStatusViewOnLocalPlayer", &UHexPerk::execUpdateCursedStatusViewOnLocalPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_totem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::NewProp_totem = { "totem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventAuthority_Reactivate_BP_Parms, totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::NewProp_totem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "Authority_Reactivate_BP", nullptr, nullptr, sizeof(HexPerk_eventAuthority_Reactivate_BP_Parms), Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics
	{
		struct HexPerk_eventAuthority_RevealCurseToAllSurvivors_Parms
		{
			bool revealed;
		};
		static void NewProp_revealed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_revealed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::NewProp_revealed_SetBit(void* Obj)
	{
		((HexPerk_eventAuthority_RevealCurseToAllSurvivors_Parms*)Obj)->revealed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::NewProp_revealed = { "revealed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HexPerk_eventAuthority_RevealCurseToAllSurvivors_Parms), &Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::NewProp_revealed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::NewProp_revealed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "Authority_RevealCurseToAllSurvivors", nullptr, nullptr, sizeof(HexPerk_eventAuthority_RevealCurseToAllSurvivors_Parms), Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics
	{
		struct HexPerk_eventAuthority_SetCurseRevealedToPlayer_Parms
		{
			ADBDPlayer* player;
			bool revealed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_revealed_MetaData[];
#endif
		static void NewProp_revealed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_revealed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed_SetBit(void* Obj)
	{
		((HexPerk_eventAuthority_SetCurseRevealedToPlayer_Parms*)Obj)->revealed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed = { "revealed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HexPerk_eventAuthority_SetCurseRevealedToPlayer_Parms), &Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventAuthority_SetCurseRevealedToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_revealed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "Authority_SetCurseRevealedToPlayer", nullptr, nullptr, sizeof(HexPerk_eventAuthority_SetCurseRevealedToPlayer_Parms), Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics
	{
		struct HexPerk_eventIsCurseRevealedToPlayer_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HexPerk_eventIsCurseRevealedToPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HexPerk_eventIsCurseRevealedToPlayer_Parms), &Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventIsCurseRevealedToPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "IsCurseRevealedToPlayer", nullptr, nullptr, sizeof(HexPerk_eventIsCurseRevealedToPlayer_Parms), Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics
	{
		struct HexPerk_eventOnHexPerkGameplayEvent_Parms
		{
			EDBDScoreTypes gameplayEventType;
			float amount;
			AActor* instigator;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventOnHexPerkGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventOnHexPerkGameplayEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventOnHexPerkGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_gameplayEventType = { "gameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventOnHexPerkGameplayEvent_Parms, gameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_gameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_gameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::NewProp_gameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "OnHexPerkGameplayEvent", nullptr, nullptr, sizeof(HexPerk_eventOnHexPerkGameplayEvent_Parms), Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics
	{
		struct HexPerk_eventOnRep_PlayersWhoKnowCurse_Parms
		{
			TArray<ADBDPlayer*> oldPlayersWhoKnowCurse;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldPlayersWhoKnowCurse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_oldPlayersWhoKnowCurse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldPlayersWhoKnowCurse_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse = { "oldPlayersWhoKnowCurse", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventOnRep_PlayersWhoKnowCurse_Parms, oldPlayersWhoKnowCurse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse_Inner = { "oldPlayersWhoKnowCurse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::NewProp_oldPlayersWhoKnowCurse_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "OnRep_PlayersWhoKnowCurse", nullptr, nullptr, sizeof(HexPerk_eventOnRep_PlayersWhoKnowCurse_Parms), Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventReceiveGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventReceiveGameplayEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventReceiveGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_gameplayEventType = { "gameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HexPerk_eventReceiveGameplayEvent_Parms, gameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_gameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_gameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::NewProp_gameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "ReceiveGameplayEvent", nullptr, nullptr, sizeof(HexPerk_eventReceiveGameplayEvent_Parms), Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexPerk, nullptr, "UpdateCursedStatusViewOnLocalPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHexPerk_NoRegister()
	{
		return UHexPerk::StaticClass();
	}
	struct Z_Construct_UClass_UHexPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersWhoKnowCurse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playersWhoKnowCurse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersWhoKnowCurse_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTotemBoundPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHexPerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHexPerk_Authority_Reactivate_BP, "Authority_Reactivate_BP" }, // 4245298665
		{ &Z_Construct_UFunction_UHexPerk_Authority_RevealCurseToAllSurvivors, "Authority_RevealCurseToAllSurvivors" }, // 2588584817
		{ &Z_Construct_UFunction_UHexPerk_Authority_SetCurseRevealedToPlayer, "Authority_SetCurseRevealedToPlayer" }, // 16083451
		{ &Z_Construct_UFunction_UHexPerk_IsCurseRevealedToPlayer, "IsCurseRevealedToPlayer" }, // 2532539654
		{ &Z_Construct_UFunction_UHexPerk_OnHexPerkGameplayEvent, "OnHexPerkGameplayEvent" }, // 333436474
		{ &Z_Construct_UFunction_UHexPerk_OnRep_PlayersWhoKnowCurse, "OnRep_PlayersWhoKnowCurse" }, // 1652329882
		{ &Z_Construct_UFunction_UHexPerk_ReceiveGameplayEvent, "ReceiveGameplayEvent" }, // 3880974821
		{ &Z_Construct_UFunction_UHexPerk_UpdateCursedStatusViewOnLocalPlayer, "UpdateCursedStatusViewOnLocalPlayer" }, // 2958987133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexPerk.h" },
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse_MetaData[] = {
		{ "ModuleRelativePath", "Public/HexPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse = { "_playersWhoKnowCurse", "OnRep_PlayersWhoKnowCurse", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexPerk, _playersWhoKnowCurse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse_Inner = { "_playersWhoKnowCurse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexPerk_Statics::NewProp__playersWhoKnowCurse_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexPerk_Statics::ClassParams = {
		&UHexPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHexPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexPerk_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexPerk, 4237506237);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHexPerk>()
	{
		return UHexPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexPerk(Z_Construct_UClass_UHexPerk, &UHexPerk::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHexPerk"), false, nullptr, nullptr, nullptr);

	void UHexPerk::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__playersWhoKnowCurse(TEXT("_playersWhoKnowCurse"));

		const bool bIsValid = true
			&& Name__playersWhoKnowCurse == ClassReps[(int32)ENetFields_Private::_playersWhoKnowCurse].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHexPerk"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
