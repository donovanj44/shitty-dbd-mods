// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDashInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDashInteraction() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDashInteraction_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDashInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOniDashInteraction::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOniDashInteraction::execSetPlayerOwner)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerOwner(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_UOniDashInteraction_OnChargeBegin = FName(TEXT("OnChargeBegin"));
	void UOniDashInteraction::OnChargeBegin(ADBDPlayer* player)
	{
		OniDashInteraction_eventOnChargeBegin_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UOniDashInteraction_OnChargeBegin),&Parms);
	}
	static FName NAME_UOniDashInteraction_OnChargeEnd = FName(TEXT("OnChargeEnd"));
	void UOniDashInteraction::OnChargeEnd(ADBDPlayer* player, bool chargeCompleted)
	{
		OniDashInteraction_eventOnChargeEnd_Parms Parms;
		Parms.player=player;
		Parms.chargeCompleted=chargeCompleted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOniDashInteraction_OnChargeEnd),&Parms);
	}
	static FName NAME_UOniDashInteraction_OnDashBegin = FName(TEXT("OnDashBegin"));
	void UOniDashInteraction::OnDashBegin(ADBDPlayer* player)
	{
		OniDashInteraction_eventOnDashBegin_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UOniDashInteraction_OnDashBegin),&Parms);
	}
	static FName NAME_UOniDashInteraction_OnDashEnd = FName(TEXT("OnDashEnd"));
	void UOniDashInteraction::OnDashEnd(ADBDPlayer* player)
	{
		OniDashInteraction_eventOnDashEnd_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UOniDashInteraction_OnDashEnd),&Parms);
	}
	void UOniDashInteraction::StaticRegisterNativesUOniDashInteraction()
	{
		UClass* Class = UOniDashInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UOniDashInteraction::execOnLevelReadyToPlay },
			{ "SetPlayerOwner", &UOniDashInteraction::execSetPlayerOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OniDashInteraction_eventOnChargeBegin_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "OnChargeBegin", nullptr, nullptr, sizeof(OniDashInteraction_eventOnChargeBegin_Parms), Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeCompleted_MetaData[];
#endif
		static void NewProp_chargeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_chargeCompleted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted_SetBit(void* Obj)
	{
		((OniDashInteraction_eventOnChargeEnd_Parms*)Obj)->chargeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted = { "chargeCompleted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OniDashInteraction_eventOnChargeEnd_Parms), &Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OniDashInteraction_eventOnChargeEnd_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_chargeCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "OnChargeEnd", nullptr, nullptr, sizeof(OniDashInteraction_eventOnChargeEnd_Parms), Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OniDashInteraction_eventOnDashBegin_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "OnDashBegin", nullptr, nullptr, sizeof(OniDashInteraction_eventOnDashBegin_Parms), Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_OnDashBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_OnDashBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OniDashInteraction_eventOnDashEnd_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "OnDashEnd", nullptr, nullptr, sizeof(OniDashInteraction_eventOnDashEnd_Parms), Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_OnDashEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_OnDashEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics
	{
		struct OniDashInteraction_eventSetPlayerOwner_Parms
		{
			const ADBDPlayer* player;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OniDashInteraction_eventSetPlayerOwner_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniDashInteraction, nullptr, "SetPlayerOwner", nullptr, nullptr, sizeof(OniDashInteraction_eventSetPlayerOwner_Parms), Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOniDashInteraction_NoRegister()
	{
		return UOniDashInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UOniDashInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawAdjustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dashingSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dashingSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargingSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargingSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDashInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOniDashInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOniDashInteraction_OnChargeBegin, "OnChargeBegin" }, // 2836846974
		{ &Z_Construct_UFunction_UOniDashInteraction_OnChargeEnd, "OnChargeEnd" }, // 791240078
		{ &Z_Construct_UFunction_UOniDashInteraction_OnDashBegin, "OnDashBegin" }, // 962081331
		{ &Z_Construct_UFunction_UOniDashInteraction_OnDashEnd, "OnDashEnd" }, // 2836907454
		{ &Z_Construct_UFunction_UOniDashInteraction_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3115299660
		{ &Z_Construct_UFunction_UOniDashInteraction_SetPlayerOwner, "SetPlayerOwner" }, // 114695029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDashInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OniDashInteraction.h" },
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData[] = {
		{ "Category", "OniDashInteraction" },
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__cooldownSpeedCurve = { "_cooldownSpeedCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniDashInteraction, _cooldownSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__cooldownSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__yawAdjustTime_MetaData[] = {
		{ "Category", "OniDashInteraction" },
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__yawAdjustTime = { "_yawAdjustTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniDashInteraction, _yawAdjustTime), METADATA_PARAMS(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__yawAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__yawAdjustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__dashingSpeedCurve_MetaData[] = {
		{ "Category", "OniDashInteraction" },
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__dashingSpeedCurve = { "_dashingSpeedCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniDashInteraction, _dashingSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__dashingSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__dashingSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__chargingSpeedCurve_MetaData[] = {
		{ "Category", "OniDashInteraction" },
		{ "ModuleRelativePath", "Public/OniDashInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__chargingSpeedCurve = { "_chargingSpeedCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniDashInteraction, _chargingSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__chargingSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__chargingSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOniDashInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__cooldownSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__yawAdjustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__dashingSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniDashInteraction_Statics::NewProp__chargingSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDashInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDashInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDashInteraction_Statics::ClassParams = {
		&UOniDashInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOniDashInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOniDashInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDashInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDashInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDashInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDashInteraction, 2070434104);
	template<> THEONI_API UClass* StaticClass<UOniDashInteraction>()
	{
		return UOniDashInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDashInteraction(Z_Construct_UClass_UOniDashInteraction, &UOniDashInteraction::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDashInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDashInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
