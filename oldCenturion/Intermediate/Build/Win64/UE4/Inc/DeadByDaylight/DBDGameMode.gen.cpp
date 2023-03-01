// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseMatchGameMode();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADBDGameMode::execAreLoadoutsCreated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreLoadoutsCreated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execDBD_BlockCamperEscape)
	{
		P_GET_UBOOL(Z_Param_shouldBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_BlockCamperEscape(Z_Param_shouldBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execHostGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execIsEscapeOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEscapeOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execLevelLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_levelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelLoaded(Z_Param_levelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execOnPlayerGameStateChanged)
	{
		P_GET_ENUM(EGameState,Z_Param_playerGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerGameStateChanged(EGameState(Z_Param_playerGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execRegisterOnPlayerStateChanged)
	{
		P_GET_OBJECT(APlayerState,Z_Param_playerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterOnPlayerStateChanged(Z_Param_playerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDGameMode::execSetEscapeOpened)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeOpened(Z_Param_val);
		P_NATIVE_END;
	}
	void ADBDGameMode::StaticRegisterNativesADBDGameMode()
	{
		UClass* Class = ADBDGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreLoadoutsCreated", &ADBDGameMode::execAreLoadoutsCreated },
			{ "DBD_BlockCamperEscape", &ADBDGameMode::execDBD_BlockCamperEscape },
			{ "HostGame", &ADBDGameMode::execHostGame },
			{ "IsEscapeOpen", &ADBDGameMode::execIsEscapeOpen },
			{ "LevelLoaded", &ADBDGameMode::execLevelLoaded },
			{ "OnPlayerGameStateChanged", &ADBDGameMode::execOnPlayerGameStateChanged },
			{ "RegisterOnPlayerStateChanged", &ADBDGameMode::execRegisterOnPlayerStateChanged },
			{ "SetEscapeOpened", &ADBDGameMode::execSetEscapeOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics
	{
		struct DBDGameMode_eventAreLoadoutsCreated_Parms
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
	void Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameMode_eventAreLoadoutsCreated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameMode_eventAreLoadoutsCreated_Parms), &Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "AreLoadoutsCreated", nullptr, nullptr, sizeof(DBDGameMode_eventAreLoadoutsCreated_Parms), Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics
	{
		struct DBDGameMode_eventDBD_BlockCamperEscape_Parms
		{
			bool shouldBlock;
		};
		static void NewProp_shouldBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::NewProp_shouldBlock_SetBit(void* Obj)
	{
		((DBDGameMode_eventDBD_BlockCamperEscape_Parms*)Obj)->shouldBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::NewProp_shouldBlock = { "shouldBlock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameMode_eventDBD_BlockCamperEscape_Parms), &Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::NewProp_shouldBlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::NewProp_shouldBlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "DBD_BlockCamperEscape", nullptr, nullptr, sizeof(DBDGameMode_eventDBD_BlockCamperEscape_Parms), Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_HostGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_HostGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_HostGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "HostGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_HostGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_HostGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_HostGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_HostGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics
	{
		struct DBDGameMode_eventIsEscapeOpen_Parms
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
	void Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameMode_eventIsEscapeOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameMode_eventIsEscapeOpen_Parms), &Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "IsEscapeOpen", nullptr, nullptr, sizeof(DBDGameMode_eventIsEscapeOpen_Parms), Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics
	{
		struct DBDGameMode_eventLevelLoaded_Parms
		{
			FString levelName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_levelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::NewProp_levelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameMode_eventLevelLoaded_Parms, levelName), METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::NewProp_levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::NewProp_levelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::NewProp_levelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "LevelLoaded", nullptr, nullptr, sizeof(DBDGameMode_eventLevelLoaded_Parms), Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_LevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_LevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics
	{
		struct DBDGameMode_eventOnPlayerGameStateChanged_Parms
		{
			EGameState playerGameState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::NewProp_playerGameState = { "playerGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameMode_eventOnPlayerGameStateChanged_Parms, playerGameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::NewProp_playerGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::NewProp_playerGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::NewProp_playerGameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "OnPlayerGameStateChanged", nullptr, nullptr, sizeof(DBDGameMode_eventOnPlayerGameStateChanged_Parms), Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics
	{
		struct DBDGameMode_eventRegisterOnPlayerStateChanged_Parms
		{
			APlayerState* playerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameMode_eventRegisterOnPlayerStateChanged_Parms, playerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::NewProp_playerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "RegisterOnPlayerStateChanged", nullptr, nullptr, sizeof(DBDGameMode_eventRegisterOnPlayerStateChanged_Parms), Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics
	{
		struct DBDGameMode_eventSetEscapeOpened_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::NewProp_val_SetBit(void* Obj)
	{
		((DBDGameMode_eventSetEscapeOpened_Parms*)Obj)->val = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameMode_eventSetEscapeOpened_Parms), &Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGameMode, nullptr, "SetEscapeOpened", nullptr, nullptr, sizeof(DBDGameMode_eventSetEscapeOpened_Parms), Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDGameMode_NoRegister()
	{
		return ADBDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerCreationPositionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerCreationPositionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialPlayerStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__initialPlayerStarts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__initialPlayerStarts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorPlayerControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__killerPlayerControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayersLoadoutsCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayersLoadoutsCreated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseMatchGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDGameMode_AreLoadoutsCreated, "AreLoadoutsCreated" }, // 1979159555
		{ &Z_Construct_UFunction_ADBDGameMode_DBD_BlockCamperEscape, "DBD_BlockCamperEscape" }, // 3344349635
		{ &Z_Construct_UFunction_ADBDGameMode_HostGame, "HostGame" }, // 1149246739
		{ &Z_Construct_UFunction_ADBDGameMode_IsEscapeOpen, "IsEscapeOpen" }, // 767055723
		{ &Z_Construct_UFunction_ADBDGameMode_LevelLoaded, "LevelLoaded" }, // 3004187591
		{ &Z_Construct_UFunction_ADBDGameMode_OnPlayerGameStateChanged, "OnPlayerGameStateChanged" }, // 2176019165
		{ &Z_Construct_UFunction_ADBDGameMode_RegisterOnPlayerStateChanged, "RegisterOnPlayerStateChanged" }, // 4238785891
		{ &Z_Construct_UFunction_ADBDGameMode_SetEscapeOpened, "SetEscapeOpened" }, // 790711194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDGameMode.h" },
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::NewProp_KillerCreationPositionOrder_MetaData[] = {
		{ "Category", "DBDGameMode" },
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp_KillerCreationPositionOrder = { "KillerCreationPositionOrder", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGameMode, KillerCreationPositionOrder), METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::NewProp_KillerCreationPositionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::NewProp_KillerCreationPositionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts = { "_initialPlayerStarts", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGameMode, _initialPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts_Inner = { "_initialPlayerStarts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::NewProp__survivorPlayerControllerClass_MetaData[] = {
		{ "Category", "DBDGameMode" },
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp__survivorPlayerControllerClass = { "_survivorPlayerControllerClass", nullptr, (EPropertyFlags)0x0024080002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGameMode, _survivorPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__survivorPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__survivorPlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::NewProp__killerPlayerControllerClass_MetaData[] = {
		{ "Category", "DBDGameMode" },
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp__killerPlayerControllerClass = { "_killerPlayerControllerClass", nullptr, (EPropertyFlags)0x0024080002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGameMode, _killerPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__killerPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::NewProp__killerPlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGameMode_Statics::NewProp_OnPlayersLoadoutsCreated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDGameMode_Statics::NewProp_OnPlayersLoadoutsCreated = { "OnPlayersLoadoutsCreated", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGameMode, OnPlayersLoadoutsCreated), Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameModeOnPlayersLoadoutsCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::NewProp_OnPlayersLoadoutsCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::NewProp_OnPlayersLoadoutsCreated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp_KillerCreationPositionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp__initialPlayerStarts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp__survivorPlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp__killerPlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGameMode_Statics::NewProp_OnPlayersLoadoutsCreated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGameMode_Statics::ClassParams = {
		&ADBDGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGameMode, 2511673376);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGameMode>()
	{
		return ADBDGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGameMode(Z_Construct_UClass_ADBDGameMode, &ADBDGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
