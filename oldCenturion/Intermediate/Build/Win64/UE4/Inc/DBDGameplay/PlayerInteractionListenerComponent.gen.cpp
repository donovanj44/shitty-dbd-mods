// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PlayerInteractionListenerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteractionListenerComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerInteractionListenerComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerInteractionListenerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics
	{
		struct _Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms
		{
			ADBDPlayer* Player;
			FGameplayTag interactionSemantic;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::NewProp_interactionSemantic = { "interactionSemantic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms, interactionSemantic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms, Player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::NewProp_interactionSemantic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDGameplay, nullptr, "PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms), Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayerInteractionListenerComponent::execListenToInteractionEnd)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_interactionSemantic);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_interactionDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToInteractionEnd(Z_Param_player,Z_Param_Out_interactionSemantic,FPlayerInteractionListenerComponentInteractionDelegate(Z_Param_Out_interactionDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInteractionListenerComponent::execListenToInteractionStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_interactionSemantic);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_interactionDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToInteractionStart(Z_Param_player,Z_Param_Out_interactionSemantic,FPlayerInteractionListenerComponentInteractionDelegate(Z_Param_Out_interactionDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInteractionListenerComponent::execOnActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestroyed(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInteractionListenerComponent::execUnlistenToInteractionEnd)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_interactionSemantic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToInteractionEnd(Z_Param_player,Z_Param_Out_interactionSemantic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInteractionListenerComponent::execUnlistenToInteractionStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_interactionSemantic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToInteractionStart(Z_Param_player,Z_Param_Out_interactionSemantic);
		P_NATIVE_END;
	}
	void UPlayerInteractionListenerComponent::StaticRegisterNativesUPlayerInteractionListenerComponent()
	{
		UClass* Class = UPlayerInteractionListenerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenToInteractionEnd", &UPlayerInteractionListenerComponent::execListenToInteractionEnd },
			{ "ListenToInteractionStart", &UPlayerInteractionListenerComponent::execListenToInteractionStart },
			{ "OnActorDestroyed", &UPlayerInteractionListenerComponent::execOnActorDestroyed },
			{ "UnlistenToInteractionEnd", &UPlayerInteractionListenerComponent::execUnlistenToInteractionEnd },
			{ "UnlistenToInteractionStart", &UPlayerInteractionListenerComponent::execUnlistenToInteractionStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics
	{
		struct PlayerInteractionListenerComponent_eventListenToInteractionEnd_Parms
		{
			ADBDPlayer* player;
			FGameplayTag interactionSemantic;
			FScriptDelegate interactionDelegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_interactionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionDelegate = { "interactionDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionEnd_Parms, interactionDelegate), Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionSemantic = { "interactionSemantic", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionEnd_Parms, interactionSemantic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionEnd_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_interactionSemantic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionListenerComponent, nullptr, "ListenToInteractionEnd", nullptr, nullptr, sizeof(PlayerInteractionListenerComponent_eventListenToInteractionEnd_Parms), Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics
	{
		struct PlayerInteractionListenerComponent_eventListenToInteractionStart_Parms
		{
			ADBDPlayer* player;
			FGameplayTag interactionSemantic;
			FScriptDelegate interactionDelegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_interactionDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionDelegate = { "interactionDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionStart_Parms, interactionDelegate), Z_Construct_UDelegateFunction_DBDGameplay_PlayerInteractionListenerComponentInteractionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionSemantic = { "interactionSemantic", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionStart_Parms, interactionSemantic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventListenToInteractionStart_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_interactionSemantic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionListenerComponent, nullptr, "ListenToInteractionStart", nullptr, nullptr, sizeof(PlayerInteractionListenerComponent_eventListenToInteractionStart_Parms), Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics
	{
		struct PlayerInteractionListenerComponent_eventOnActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventOnActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionListenerComponent, nullptr, "OnActorDestroyed", nullptr, nullptr, sizeof(PlayerInteractionListenerComponent_eventOnActorDestroyed_Parms), Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics
	{
		struct PlayerInteractionListenerComponent_eventUnlistenToInteractionEnd_Parms
		{
			ADBDPlayer* player;
			FGameplayTag interactionSemantic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_interactionSemantic = { "interactionSemantic", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventUnlistenToInteractionEnd_Parms, interactionSemantic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_interactionSemantic_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventUnlistenToInteractionEnd_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_interactionSemantic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionListenerComponent, nullptr, "UnlistenToInteractionEnd", nullptr, nullptr, sizeof(PlayerInteractionListenerComponent_eventUnlistenToInteractionEnd_Parms), Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics
	{
		struct PlayerInteractionListenerComponent_eventUnlistenToInteractionStart_Parms
		{
			ADBDPlayer* player;
			FGameplayTag interactionSemantic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionSemantic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionSemantic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_interactionSemantic = { "interactionSemantic", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventUnlistenToInteractionStart_Parms, interactionSemantic), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_interactionSemantic_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractionListenerComponent_eventUnlistenToInteractionStart_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_interactionSemantic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionListenerComponent, nullptr, "UnlistenToInteractionStart", nullptr, nullptr, sizeof(PlayerInteractionListenerComponent_eventUnlistenToInteractionStart_Parms), Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInteractionListenerComponent_NoRegister()
	{
		return UPlayerInteractionListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionEnd, "ListenToInteractionEnd" }, // 1608063660
		{ &Z_Construct_UFunction_UPlayerInteractionListenerComponent_ListenToInteractionStart, "ListenToInteractionStart" }, // 4124029360
		{ &Z_Construct_UFunction_UPlayerInteractionListenerComponent_OnActorDestroyed, "OnActorDestroyed" }, // 368070433
		{ &Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionEnd, "UnlistenToInteractionEnd" }, // 4010197988
		{ &Z_Construct_UFunction_UPlayerInteractionListenerComponent_UnlistenToInteractionStart, "UnlistenToInteractionStart" }, // 650750167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerInteractionListenerComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerInteractionListenerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInteractionListenerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::ClassParams = {
		&UPlayerInteractionListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInteractionListenerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInteractionListenerComponent, 937918121);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPlayerInteractionListenerComponent>()
	{
		return UPlayerInteractionListenerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInteractionListenerComponent(Z_Construct_UClass_UPlayerInteractionListenerComponent, &UPlayerInteractionListenerComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPlayerInteractionListenerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteractionListenerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
