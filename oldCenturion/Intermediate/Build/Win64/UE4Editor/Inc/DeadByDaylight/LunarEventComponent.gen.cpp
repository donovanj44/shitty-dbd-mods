// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LunarEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLunarEventComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULunarEventComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULunarEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnCamperEscape)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperEscape(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnCamperLostLantern)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCamperLostLantern(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnDestroyCamperLightGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDestroyCamperLightGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnFixGenerator)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFixGenerator(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnPickupLantern)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPickupLantern(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnPlayerLeaveGame)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPlayerLeaveGame(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execAuthority_OnSlasherDestroysLantern)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSlasherDestroysLantern(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execLocal_OnCamperEscape)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnCamperEscape(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execLocal_OnCamperLostLantern)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnCamperLostLantern(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execMulticast_ResetLanternLight)
	{
		P_GET_OBJECT(ALanternInteractable,Z_Param_lanternInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_ResetLanternLight_Validate(Z_Param_lanternInteractable))
		{
			RPC_ValidateFailed(TEXT("Multicast_ResetLanternLight_Validate"));
			return;
		}
		P_THIS->Multicast_ResetLanternLight_Implementation(Z_Param_lanternInteractable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execOnFinishedPlaying)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execOnLanternHoldTimerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanternHoldTimerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULunarEventComponent::execOnRep_lanternCollectedCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_lanternCollectedCount();
		P_NATIVE_END;
	}
	static FName NAME_ULunarEventComponent_Multicast_ResetLanternLight = FName(TEXT("Multicast_ResetLanternLight"));
	void ULunarEventComponent::Multicast_ResetLanternLight(ALanternInteractable* lanternInteractable)
	{
		LunarEventComponent_eventMulticast_ResetLanternLight_Parms Parms;
		Parms.lanternInteractable=lanternInteractable;
		ProcessEvent(FindFunctionChecked(NAME_ULunarEventComponent_Multicast_ResetLanternLight),&Parms);
	}
	void ULunarEventComponent::StaticRegisterNativesULunarEventComponent()
	{
		UClass* Class = ULunarEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnCamperEscape", &ULunarEventComponent::execAuthority_OnCamperEscape },
			{ "Authority_OnCamperLostLantern", &ULunarEventComponent::execAuthority_OnCamperLostLantern },
			{ "Authority_OnDestroyCamperLightGameEvent", &ULunarEventComponent::execAuthority_OnDestroyCamperLightGameEvent },
			{ "Authority_OnFixGenerator", &ULunarEventComponent::execAuthority_OnFixGenerator },
			{ "Authority_OnPickupLantern", &ULunarEventComponent::execAuthority_OnPickupLantern },
			{ "Authority_OnPlayerLeaveGame", &ULunarEventComponent::execAuthority_OnPlayerLeaveGame },
			{ "Authority_OnSlasherDestroysLantern", &ULunarEventComponent::execAuthority_OnSlasherDestroysLantern },
			{ "Local_OnCamperEscape", &ULunarEventComponent::execLocal_OnCamperEscape },
			{ "Local_OnCamperLostLantern", &ULunarEventComponent::execLocal_OnCamperLostLantern },
			{ "Multicast_ResetLanternLight", &ULunarEventComponent::execMulticast_ResetLanternLight },
			{ "OnFinishedPlaying", &ULunarEventComponent::execOnFinishedPlaying },
			{ "OnLanternHoldTimerEnd", &ULunarEventComponent::execOnLanternHoldTimerEnd },
			{ "OnRep_lanternCollectedCount", &ULunarEventComponent::execOnRep_lanternCollectedCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics
	{
		struct LunarEventComponent_eventAuthority_OnCamperEscape_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnCamperEscape_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnCamperEscape_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnCamperEscape", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnCamperEscape_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics
	{
		struct LunarEventComponent_eventAuthority_OnCamperLostLantern_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnCamperLostLantern_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnCamperLostLantern_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnCamperLostLantern", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnCamperLostLantern_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics
	{
		struct LunarEventComponent_eventAuthority_OnDestroyCamperLightGameEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnDestroyCamperLightGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnDestroyCamperLightGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnDestroyCamperLightGameEvent", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnDestroyCamperLightGameEvent_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics
	{
		struct LunarEventComponent_eventAuthority_OnFixGenerator_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnFixGenerator_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnFixGenerator_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnFixGenerator", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnFixGenerator_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics
	{
		struct LunarEventComponent_eventAuthority_OnPickupLantern_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnPickupLantern_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnPickupLantern_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnPickupLantern", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnPickupLantern_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics
	{
		struct LunarEventComponent_eventAuthority_OnPlayerLeaveGame_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnPlayerLeaveGame_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnPlayerLeaveGame_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnPlayerLeaveGame", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnPlayerLeaveGame_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics
	{
		struct LunarEventComponent_eventAuthority_OnSlasherDestroysLantern_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnSlasherDestroysLantern_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventAuthority_OnSlasherDestroysLantern_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Authority_OnSlasherDestroysLantern", nullptr, nullptr, sizeof(LunarEventComponent_eventAuthority_OnSlasherDestroysLantern_Parms), Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics
	{
		struct LunarEventComponent_eventLocal_OnCamperEscape_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventLocal_OnCamperEscape_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventLocal_OnCamperEscape_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Local_OnCamperEscape", nullptr, nullptr, sizeof(LunarEventComponent_eventLocal_OnCamperEscape_Parms), Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics
	{
		struct LunarEventComponent_eventLocal_OnCamperLostLantern_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventLocal_OnCamperLostLantern_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventLocal_OnCamperLostLantern_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Local_OnCamperLostLantern", nullptr, nullptr, sizeof(LunarEventComponent_eventLocal_OnCamperLostLantern_Parms), Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lanternInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::NewProp_lanternInteractable = { "lanternInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventMulticast_ResetLanternLight_Parms, lanternInteractable), Z_Construct_UClass_ALanternInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::NewProp_lanternInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "Multicast_ResetLanternLight", nullptr, nullptr, sizeof(LunarEventComponent_eventMulticast_ResetLanternLight_Parms), Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics
	{
		struct LunarEventComponent_eventOnFinishedPlaying_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventOnFinishedPlaying_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LunarEventComponent_eventOnFinishedPlaying_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "OnFinishedPlaying", nullptr, nullptr, sizeof(LunarEventComponent_eventOnFinishedPlaying_Parms), Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "OnLanternHoldTimerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULunarEventComponent, nullptr, "OnRep_lanternCollectedCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULunarEventComponent_NoRegister()
	{
		return ULunarEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULunarEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__additionalEventProgressCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__additionalEventProgressCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lanternCollectedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__lanternCollectedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULunarEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULunarEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperEscape, "Authority_OnCamperEscape" }, // 3186346668
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnCamperLostLantern, "Authority_OnCamperLostLantern" }, // 1488327201
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnDestroyCamperLightGameEvent, "Authority_OnDestroyCamperLightGameEvent" }, // 113317816
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnFixGenerator, "Authority_OnFixGenerator" }, // 1331648464
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnPickupLantern, "Authority_OnPickupLantern" }, // 813076383
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnPlayerLeaveGame, "Authority_OnPlayerLeaveGame" }, // 1019890532
		{ &Z_Construct_UFunction_ULunarEventComponent_Authority_OnSlasherDestroysLantern, "Authority_OnSlasherDestroysLantern" }, // 1814907831
		{ &Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperEscape, "Local_OnCamperEscape" }, // 1391643293
		{ &Z_Construct_UFunction_ULunarEventComponent_Local_OnCamperLostLantern, "Local_OnCamperLostLantern" }, // 2077342580
		{ &Z_Construct_UFunction_ULunarEventComponent_Multicast_ResetLanternLight, "Multicast_ResetLanternLight" }, // 3341524877
		{ &Z_Construct_UFunction_ULunarEventComponent_OnFinishedPlaying, "OnFinishedPlaying" }, // 1958986698
		{ &Z_Construct_UFunction_ULunarEventComponent_OnLanternHoldTimerEnd, "OnLanternHoldTimerEnd" }, // 917190798
		{ &Z_Construct_UFunction_ULunarEventComponent_OnRep_lanternCollectedCount, "OnRep_lanternCollectedCount" }, // 781411104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULunarEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LunarEventComponent.h" },
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__additionalEventProgressCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__additionalEventProgressCount = { "_additionalEventProgressCount", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULunarEventComponent, _additionalEventProgressCount), METADATA_PARAMS(Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__additionalEventProgressCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__additionalEventProgressCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__lanternCollectedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LunarEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__lanternCollectedCount = { "_lanternCollectedCount", "OnRep_lanternCollectedCount", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULunarEventComponent, _lanternCollectedCount), METADATA_PARAMS(Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__lanternCollectedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__lanternCollectedCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULunarEventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__additionalEventProgressCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULunarEventComponent_Statics::NewProp__lanternCollectedCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULunarEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULunarEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULunarEventComponent_Statics::ClassParams = {
		&ULunarEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULunarEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULunarEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULunarEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULunarEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULunarEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULunarEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULunarEventComponent, 3417535309);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULunarEventComponent>()
	{
		return ULunarEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULunarEventComponent(Z_Construct_UClass_ULunarEventComponent, &ULunarEventComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULunarEventComponent"), false, nullptr, nullptr, nullptr);

	void ULunarEventComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__lanternCollectedCount(TEXT("_lanternCollectedCount"));
		static const FName Name__additionalEventProgressCount(TEXT("_additionalEventProgressCount"));

		const bool bIsValid = true
			&& Name__lanternCollectedCount == ClassReps[(int32)ENetFields_Private::_lanternCollectedCount].Property->GetFName()
			&& Name__additionalEventProgressCount == ClassReps[(int32)ENetFields_Private::_additionalEventProgressCount].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULunarEventComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULunarEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
