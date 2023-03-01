// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PlayerMovementUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovementUtilities() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerMovementUtilities_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerMovementUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyGamepadPitchScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyGamepadPitchScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyGamepadYawScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyGamepadYawScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyMousePitchScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyMousePitchScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyMouseYawScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyMouseYawScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyPitchScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyPitchScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyRotationScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyRotationScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ApplyYawScaleMultiplier)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ApplyYawScaleMultiplier(Z_Param_player,Z_Param_multiplier,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ResetGamepadLookCurves)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ResetGamepadLookCurves(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_ResetRotationScale)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustmentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_ResetRotationScale(Z_Param_player,Z_Param_adjustmentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_SetGamepadPitchCurve)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_SetGamepadPitchCurve(Z_Param_player,Z_Param_curve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMovementUtilities::execLocal_SetGamepadYawCurve)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayerMovementUtilities::Local_SetGamepadYawCurve(Z_Param_player,Z_Param_curve);
		P_NATIVE_END;
	}
	void UPlayerMovementUtilities::StaticRegisterNativesUPlayerMovementUtilities()
	{
		UClass* Class = UPlayerMovementUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_ApplyGamepadPitchScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyGamepadPitchScaleMultiplier },
			{ "Local_ApplyGamepadYawScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyGamepadYawScaleMultiplier },
			{ "Local_ApplyMousePitchScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyMousePitchScaleMultiplier },
			{ "Local_ApplyMouseYawScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyMouseYawScaleMultiplier },
			{ "Local_ApplyPitchScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyPitchScaleMultiplier },
			{ "Local_ApplyRotationScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyRotationScaleMultiplier },
			{ "Local_ApplyYawScaleMultiplier", &UPlayerMovementUtilities::execLocal_ApplyYawScaleMultiplier },
			{ "Local_ResetGamepadLookCurves", &UPlayerMovementUtilities::execLocal_ResetGamepadLookCurves },
			{ "Local_ResetRotationScale", &UPlayerMovementUtilities::execLocal_ResetRotationScale },
			{ "Local_SetGamepadPitchCurve", &UPlayerMovementUtilities::execLocal_SetGamepadPitchCurve },
			{ "Local_SetGamepadYawCurve", &UPlayerMovementUtilities::execLocal_SetGamepadYawCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyGamepadPitchScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadPitchScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadPitchScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadPitchScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyGamepadPitchScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyGamepadPitchScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyGamepadYawScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadYawScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadYawScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyGamepadYawScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyGamepadYawScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyGamepadYawScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyMousePitchScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMousePitchScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMousePitchScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMousePitchScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyMousePitchScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyMousePitchScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyMouseYawScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMouseYawScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMouseYawScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyMouseYawScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyMouseYawScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyMouseYawScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyPitchScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyPitchScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyPitchScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyPitchScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyPitchScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyPitchScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyRotationScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyRotationScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyRotationScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyRotationScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyRotationScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyRotationScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ApplyYawScaleMultiplier_Parms
		{
			ADBDPlayer* player;
			float multiplier;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyYawScaleMultiplier_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_adjustmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyYawScaleMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ApplyYawScaleMultiplier_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ApplyYawScaleMultiplier", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ApplyYawScaleMultiplier_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ResetGamepadLookCurves_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ResetGamepadLookCurves_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ResetGamepadLookCurves", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ResetGamepadLookCurves_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics
	{
		struct PlayerMovementUtilities_eventLocal_ResetRotationScale_Parms
		{
			ADBDPlayer* player;
			float adjustmentTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adjustmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustmentTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_adjustmentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_adjustmentTime = { "adjustmentTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ResetRotationScale_Parms, adjustmentTime), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_adjustmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_adjustmentTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_ResetRotationScale_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_adjustmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_ResetRotationScale", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_ResetRotationScale_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics
	{
		struct PlayerMovementUtilities_eventLocal_SetGamepadPitchCurve_Parms
		{
			ADBDPlayer* player;
			UCurveFloat* curve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_SetGamepadPitchCurve_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_SetGamepadPitchCurve_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::NewProp_curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_SetGamepadPitchCurve", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_SetGamepadPitchCurve_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics
	{
		struct PlayerMovementUtilities_eventLocal_SetGamepadYawCurve_Parms
		{
			ADBDPlayer* player;
			UCurveFloat* curve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_SetGamepadYawCurve_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerMovementUtilities_eventLocal_SetGamepadYawCurve_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::NewProp_curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMovementUtilities, nullptr, "Local_SetGamepadYawCurve", nullptr, nullptr, sizeof(PlayerMovementUtilities_eventLocal_SetGamepadYawCurve_Parms), Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerMovementUtilities_NoRegister()
	{
		return UPlayerMovementUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMovementUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMovementUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerMovementUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier, "Local_ApplyGamepadPitchScaleMultiplier" }, // 1627173099
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier, "Local_ApplyGamepadYawScaleMultiplier" }, // 2004084289
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier, "Local_ApplyMousePitchScaleMultiplier" }, // 3971052672
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier, "Local_ApplyMouseYawScaleMultiplier" }, // 267880923
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier, "Local_ApplyPitchScaleMultiplier" }, // 571311221
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier, "Local_ApplyRotationScaleMultiplier" }, // 2536937752
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier, "Local_ApplyYawScaleMultiplier" }, // 1620764729
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetGamepadLookCurves, "Local_ResetGamepadLookCurves" }, // 1824366616
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_ResetRotationScale, "Local_ResetRotationScale" }, // 966345703
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadPitchCurve, "Local_SetGamepadPitchCurve" }, // 3121666957
		{ &Z_Construct_UFunction_UPlayerMovementUtilities_Local_SetGamepadYawCurve, "Local_SetGamepadYawCurve" }, // 2906582019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovementUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerMovementUtilities.h" },
		{ "ModuleRelativePath", "Public/PlayerMovementUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMovementUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovementUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovementUtilities_Statics::ClassParams = {
		&UPlayerMovementUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMovementUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMovementUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMovementUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMovementUtilities, 398155927);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPlayerMovementUtilities>()
	{
		return UPlayerMovementUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMovementUtilities(Z_Construct_UClass_UPlayerMovementUtilities, &UPlayerMovementUtilities::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPlayerMovementUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovementUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
