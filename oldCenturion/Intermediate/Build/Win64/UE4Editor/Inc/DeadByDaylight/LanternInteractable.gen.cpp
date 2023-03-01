// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LanternInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanternInteractable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELanternState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternLightCollectable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventLanternInteractableOnLanternCollectedByPlayerCosmetic_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventLanternInteractableOnLanternCollectedByPlayerCosmetic_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventLanternInteractableOnLanternCollectedByPlayerCosmetic_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms
		{
			ELanternState lanternState;
			ELanternState previousLanternState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previousLanternState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousLanternState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lanternState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lanternState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_previousLanternState = { "previousLanternState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms, previousLanternState), Z_Construct_UEnum_DeadByDaylight_ELanternState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_previousLanternState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_lanternState = { "lanternState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms, lanternState), Z_Construct_UEnum_DeadByDaylight_ELanternState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_lanternState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_previousLanternState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_previousLanternState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_lanternState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::NewProp_lanternState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "LanternInteractableOnLanternStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ALanternInteractable::execCanBeCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeCollected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execCanBeDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeDestroyed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execChangeLanternState)
	{
		P_GET_ENUM(ELanternState,Z_Param_newLanternState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLanternState(ELanternState(Z_Param_newLanternState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execCollectLight)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectLight(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execGetLanternState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELanternState*)Z_Param__Result=P_THIS->GetLanternState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execOnBackToCollectableTimerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackToCollectableTimerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execOnCamperLeavingHook)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperLeavingHook(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execOnCamperWasHooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperWasHooked(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execOnSlasherDestroyedLantern)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherDestroyedLantern(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALanternInteractable::execSlasherDestroyLantern)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlasherDestroyLantern(Z_Param_player);
		P_NATIVE_END;
	}
	void ALanternInteractable::StaticRegisterNativesALanternInteractable()
	{
		UClass* Class = ALanternInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeCollected", &ALanternInteractable::execCanBeCollected },
			{ "CanBeDestroyed", &ALanternInteractable::execCanBeDestroyed },
			{ "ChangeLanternState", &ALanternInteractable::execChangeLanternState },
			{ "CollectLight", &ALanternInteractable::execCollectLight },
			{ "GetLanternState", &ALanternInteractable::execGetLanternState },
			{ "OnBackToCollectableTimerEnd", &ALanternInteractable::execOnBackToCollectableTimerEnd },
			{ "OnCamperLeavingHook", &ALanternInteractable::execOnCamperLeavingHook },
			{ "OnCamperWasHooked", &ALanternInteractable::execOnCamperWasHooked },
			{ "OnSlasherDestroyedLantern", &ALanternInteractable::execOnSlasherDestroyedLantern },
			{ "SlasherDestroyLantern", &ALanternInteractable::execSlasherDestroyLantern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics
	{
		struct LanternInteractable_eventCanBeCollected_Parms
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
	void Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LanternInteractable_eventCanBeCollected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LanternInteractable_eventCanBeCollected_Parms), &Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "CanBeCollected", nullptr, nullptr, sizeof(LanternInteractable_eventCanBeCollected_Parms), Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_CanBeCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_CanBeCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics
	{
		struct LanternInteractable_eventCanBeDestroyed_Parms
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
	void Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LanternInteractable_eventCanBeDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LanternInteractable_eventCanBeDestroyed_Parms), &Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "CanBeDestroyed", nullptr, nullptr, sizeof(LanternInteractable_eventCanBeDestroyed_Parms), Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics
	{
		struct LanternInteractable_eventChangeLanternState_Parms
		{
			ELanternState newLanternState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newLanternState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newLanternState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::NewProp_newLanternState = { "newLanternState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventChangeLanternState_Parms, newLanternState), Z_Construct_UEnum_DeadByDaylight_ELanternState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::NewProp_newLanternState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::NewProp_newLanternState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::NewProp_newLanternState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "ChangeLanternState", nullptr, nullptr, sizeof(LanternInteractable_eventChangeLanternState_Parms), Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_ChangeLanternState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_ChangeLanternState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics
	{
		struct LanternInteractable_eventCollectLight_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventCollectLight_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "CollectLight", nullptr, nullptr, sizeof(LanternInteractable_eventCollectLight_Parms), Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_CollectLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_CollectLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics
	{
		struct LanternInteractable_eventGetLanternState_Parms
		{
			ELanternState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventGetLanternState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_ELanternState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "GetLanternState", nullptr, nullptr, sizeof(LanternInteractable_eventGetLanternState_Parms), Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_GetLanternState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_GetLanternState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "OnBackToCollectableTimerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics
	{
		struct LanternInteractable_eventOnCamperLeavingHook_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnCamperLeavingHook_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnCamperLeavingHook_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "OnCamperLeavingHook", nullptr, nullptr, sizeof(LanternInteractable_eventOnCamperLeavingHook_Parms), Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics
	{
		struct LanternInteractable_eventOnCamperWasHooked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnCamperWasHooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnCamperWasHooked_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "OnCamperWasHooked", nullptr, nullptr, sizeof(LanternInteractable_eventOnCamperWasHooked_Parms), Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics
	{
		struct LanternInteractable_eventOnSlasherDestroyedLantern_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnSlasherDestroyedLantern_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventOnSlasherDestroyedLantern_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "OnSlasherDestroyedLantern", nullptr, nullptr, sizeof(LanternInteractable_eventOnSlasherDestroyedLantern_Parms), Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics
	{
		struct LanternInteractable_eventSlasherDestroyLantern_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternInteractable_eventSlasherDestroyLantern_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternInteractable, nullptr, "SlasherDestroyLantern", nullptr, nullptr, sizeof(LanternInteractable_eventSlasherDestroyLantern_Parms), Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALanternInteractable_NoRegister()
	{
		return ALanternInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ALanternInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__collectableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLanternCollectedByPlayerCosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanternCollectedByPlayerCosmetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLanternStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanternStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanternInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALanternInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALanternInteractable_CanBeCollected, "CanBeCollected" }, // 54704169
		{ &Z_Construct_UFunction_ALanternInteractable_CanBeDestroyed, "CanBeDestroyed" }, // 97139009
		{ &Z_Construct_UFunction_ALanternInteractable_ChangeLanternState, "ChangeLanternState" }, // 1781976046
		{ &Z_Construct_UFunction_ALanternInteractable_CollectLight, "CollectLight" }, // 1001859871
		{ &Z_Construct_UFunction_ALanternInteractable_GetLanternState, "GetLanternState" }, // 1932544520
		{ &Z_Construct_UFunction_ALanternInteractable_OnBackToCollectableTimerEnd, "OnBackToCollectableTimerEnd" }, // 1786221586
		{ &Z_Construct_UFunction_ALanternInteractable_OnCamperLeavingHook, "OnCamperLeavingHook" }, // 1946932702
		{ &Z_Construct_UFunction_ALanternInteractable_OnCamperWasHooked, "OnCamperWasHooked" }, // 3748511840
		{ &Z_Construct_UFunction_ALanternInteractable_OnSlasherDestroyedLantern, "OnSlasherDestroyedLantern" }, // 96975609
		{ &Z_Construct_UFunction_ALanternInteractable_SlasherDestroyLantern, "SlasherDestroyLantern" }, // 1319935002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LanternInteractable.h" },
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternInteractable_Statics::NewProp__collectableClass_MetaData[] = {
		{ "Category", "LanternInteractable" },
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALanternInteractable_Statics::NewProp__collectableClass = { "_collectableClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanternInteractable, _collectableClass), Z_Construct_UClass_ALanternLightCollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALanternInteractable_Statics::NewProp__collectableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternInteractable_Statics::NewProp__collectableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternCollectedByPlayerCosmetic_MetaData[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternCollectedByPlayerCosmetic = { "OnLanternCollectedByPlayerCosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanternInteractable, OnLanternCollectedByPlayerCosmetic), Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternCollectedByPlayerCosmetic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternCollectedByPlayerCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternCollectedByPlayerCosmetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/LanternInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternStateChanged = { "OnLanternStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanternInteractable, OnLanternStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_LanternInteractableOnLanternStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALanternInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanternInteractable_Statics::NewProp__collectableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternCollectedByPlayerCosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanternInteractable_Statics::NewProp_OnLanternStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanternInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanternInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanternInteractable_Statics::ClassParams = {
		&ALanternInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALanternInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALanternInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALanternInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanternInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanternInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanternInteractable, 2055922210);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ALanternInteractable>()
	{
		return ALanternInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanternInteractable(Z_Construct_UClass_ALanternInteractable, &ALanternInteractable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ALanternInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanternInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
