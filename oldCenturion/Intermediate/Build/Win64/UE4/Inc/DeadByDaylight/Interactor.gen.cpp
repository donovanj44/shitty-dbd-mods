// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Interactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInterruptionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLock();
// End Cross Module References
	DEFINE_FUNCTION(UInteractor::execAuthority_GetInteractingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->Authority_GetInteractingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execCanPerformInteraction)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_definition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPerformInteraction(Z_Param_player,Z_Param_definition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execGetCurrentInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=P_THIS->GetCurrentInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execGetInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInteractable**)Z_Param__Result=P_THIS->GetInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execGetInteractingPlayerRaw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetInteractingPlayerRaw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execGetInteractionDefinitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UInteractionDefinition*>*)Z_Param__Result=P_THIS->GetInteractionDefinitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execGetIsUsable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execIsInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteracting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execIsInterruptionPossible)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptee);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_definition);
		P_GET_OBJECT(UInterruptionDefinition,Z_Param_interruption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterruptionPossible(Z_Param_interruptor,Z_Param_interruptee,Z_Param_definition,Z_Param_interruption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execMulticast_LockStatus)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_currentInteraction);
		P_GET_UBOOL(Z_Param_lock);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_LockStatus_Validate(Z_Param_player,Z_Param_currentInteraction,Z_Param_lock))
		{
			RPC_ValidateFailed(TEXT("Multicast_LockStatus_Validate"));
			return;
		}
		P_THIS->Multicast_LockStatus_Implementation(Z_Param_player,Z_Param_currentInteraction,Z_Param_lock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execMulticast_ReservationStatus)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_lock);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_ReservationStatus_Validate(Z_Param_player,Z_Param_lock))
		{
			RPC_ValidateFailed(TEXT("Multicast_ReservationStatus_Validate"));
			return;
		}
		P_THIS->Multicast_ReservationStatus_Implementation(Z_Param_player,Z_Param_lock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractor::execSetIsUsable)
	{
		P_GET_UBOOL(Z_Param_isUsableParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsable(Z_Param_isUsableParam);
		P_NATIVE_END;
	}
	static FName NAME_UInteractor_BPPostInitializeComponents = FName(TEXT("BPPostInitializeComponents"));
	void UInteractor::BPPostInitializeComponents()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractor_BPPostInitializeComponents),NULL);
	}
	static FName NAME_UInteractor_Multicast_LockStatus = FName(TEXT("Multicast_LockStatus"));
	void UInteractor::Multicast_LockStatus(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock)
	{
		Interactor_eventMulticast_LockStatus_Parms Parms;
		Parms.player=player;
		Parms.currentInteraction=currentInteraction;
		Parms.lock=lock ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UInteractor_Multicast_LockStatus),&Parms);
	}
	static FName NAME_UInteractor_Multicast_ReservationStatus = FName(TEXT("Multicast_ReservationStatus"));
	void UInteractor::Multicast_ReservationStatus(ADBDPlayer* player, bool lock)
	{
		Interactor_eventMulticast_ReservationStatus_Parms Parms;
		Parms.player=player;
		Parms.lock=lock ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UInteractor_Multicast_ReservationStatus),&Parms);
	}
	void UInteractor::StaticRegisterNativesUInteractor()
	{
		UClass* Class = UInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_GetInteractingPlayer", &UInteractor::execAuthority_GetInteractingPlayer },
			{ "CanPerformInteraction", &UInteractor::execCanPerformInteraction },
			{ "GetCurrentInteraction", &UInteractor::execGetCurrentInteraction },
			{ "GetInteractable", &UInteractor::execGetInteractable },
			{ "GetInteractingPlayerRaw", &UInteractor::execGetInteractingPlayerRaw },
			{ "GetInteractionDefinitions", &UInteractor::execGetInteractionDefinitions },
			{ "GetIsUsable", &UInteractor::execGetIsUsable },
			{ "IsInteracting", &UInteractor::execIsInteracting },
			{ "IsInterruptionPossible", &UInteractor::execIsInterruptionPossible },
			{ "Multicast_LockStatus", &UInteractor::execMulticast_LockStatus },
			{ "Multicast_ReservationStatus", &UInteractor::execMulticast_ReservationStatus },
			{ "SetIsUsable", &UInteractor::execSetIsUsable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics
	{
		struct Interactor_eventAuthority_GetInteractingPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventAuthority_GetInteractingPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "Authority_GetInteractingPlayer", nullptr, nullptr, sizeof(Interactor_eventAuthority_GetInteractingPlayer_Parms), Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "BPPostInitializeComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_BPPostInitializeComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_BPPostInitializeComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics
	{
		struct Interactor_eventCanPerformInteraction_Parms
		{
			const ADBDPlayer* player;
			const UInteractionDefinition* definition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_definition;
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
	void Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactor_eventCanPerformInteraction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventCanPerformInteraction_Parms), &Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_definition_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventCanPerformInteraction_Parms, definition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventCanPerformInteraction_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "CanPerformInteraction", nullptr, nullptr, sizeof(Interactor_eventCanPerformInteraction_Parms), Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_CanPerformInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_CanPerformInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics
	{
		struct Interactor_eventGetCurrentInteraction_Parms
		{
			UInteractionDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventGetCurrentInteraction_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "GetCurrentInteraction", nullptr, nullptr, sizeof(Interactor_eventGetCurrentInteraction_Parms), Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_GetCurrentInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_GetCurrentInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_GetInteractable_Statics
	{
		struct Interactor_eventGetInteractable_Parms
		{
			AInteractable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_GetInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventGetInteractable_Parms, ReturnValue), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_GetInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_GetInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "GetInteractable", nullptr, nullptr, sizeof(Interactor_eventGetInteractable_Parms), Z_Construct_UFunction_UInteractor_GetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_GetInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_GetInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics
	{
		struct Interactor_eventGetInteractingPlayerRaw_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventGetInteractingPlayerRaw_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "GetInteractingPlayerRaw", nullptr, nullptr, sizeof(Interactor_eventGetInteractingPlayerRaw_Parms), Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics
	{
		struct Interactor_eventGetInteractionDefinitions_Parms
		{
			TArray<UInteractionDefinition*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventGetInteractionDefinitions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "GetInteractionDefinitions", nullptr, nullptr, sizeof(Interactor_eventGetInteractionDefinitions_Parms), Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_GetInteractionDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_GetInteractionDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_GetIsUsable_Statics
	{
		struct Interactor_eventGetIsUsable_Parms
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
	void Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactor_eventGetIsUsable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventGetIsUsable_Parms), &Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "GetIsUsable", nullptr, nullptr, sizeof(Interactor_eventGetIsUsable_Parms), Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_GetIsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_GetIsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_IsInteracting_Statics
	{
		struct Interactor_eventIsInteracting_Parms
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
	void Z_Construct_UFunction_UInteractor_IsInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactor_eventIsInteracting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_IsInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventIsInteracting_Parms), &Z_Construct_UFunction_UInteractor_IsInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_IsInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInteracting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_IsInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "IsInteracting", nullptr, nullptr, sizeof(Interactor_eventIsInteracting_Parms), Z_Construct_UFunction_UInteractor_IsInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_IsInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_IsInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics
	{
		struct Interactor_eventIsInterruptionPossible_Parms
		{
			const ADBDPlayer* interruptor;
			const ADBDPlayer* interruptee;
			const UInteractionDefinition* definition;
			const UInterruptionDefinition* interruption;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruption_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactor_eventIsInterruptionPossible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventIsInterruptionPossible_Parms), &Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruption_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruption = { "interruption", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventIsInterruptionPossible_Parms, interruption), Z_Construct_UClass_UInterruptionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_definition_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventIsInterruptionPossible_Parms, definition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventIsInterruptionPossible_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventIsInterruptionPossible_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "IsInterruptionPossible", nullptr, nullptr, sizeof(Interactor_eventIsInterruptionPossible_Parms), Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_IsInterruptionPossible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_IsInterruptionPossible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics
	{
		static void NewProp_lock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentInteraction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_lock_SetBit(void* Obj)
	{
		((Interactor_eventMulticast_LockStatus_Parms*)Obj)->lock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventMulticast_LockStatus_Parms), &Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_lock_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_currentInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_currentInteraction = { "currentInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventMulticast_LockStatus_Parms, currentInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_currentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_currentInteraction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventMulticast_LockStatus_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_lock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_currentInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "Multicast_LockStatus", nullptr, nullptr, sizeof(Interactor_eventMulticast_LockStatus_Parms), Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_Multicast_LockStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_Multicast_LockStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics
	{
		static void NewProp_lock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lock;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_lock_SetBit(void* Obj)
	{
		((Interactor_eventMulticast_ReservationStatus_Parms*)Obj)->lock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventMulticast_ReservationStatus_Parms), &Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_lock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactor_eventMulticast_ReservationStatus_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_lock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "Multicast_ReservationStatus", nullptr, nullptr, sizeof(Interactor_eventMulticast_ReservationStatus_Parms), Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractor_SetIsUsable_Statics
	{
		struct Interactor_eventSetIsUsable_Parms
		{
			bool isUsableParam;
		};
		static void NewProp_isUsableParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUsableParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::NewProp_isUsableParam_SetBit(void* Obj)
	{
		((Interactor_eventSetIsUsable_Parms*)Obj)->isUsableParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::NewProp_isUsableParam = { "isUsableParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactor_eventSetIsUsable_Parms), &Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::NewProp_isUsableParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::NewProp_isUsableParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractor, nullptr, "SetIsUsable", nullptr, nullptr, sizeof(Interactor_eventSetIsUsable_Parms), Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractor_SetIsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractor_SetIsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractor_NoRegister()
	{
		return UInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactionDefinitions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reservation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lock_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsable_MetaData[];
#endif
		static void NewProp_IsUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractor_Authority_GetInteractingPlayer, "Authority_GetInteractingPlayer" }, // 2063654288
		{ &Z_Construct_UFunction_UInteractor_BPPostInitializeComponents, "BPPostInitializeComponents" }, // 633829433
		{ &Z_Construct_UFunction_UInteractor_CanPerformInteraction, "CanPerformInteraction" }, // 1557147333
		{ &Z_Construct_UFunction_UInteractor_GetCurrentInteraction, "GetCurrentInteraction" }, // 3527371307
		{ &Z_Construct_UFunction_UInteractor_GetInteractable, "GetInteractable" }, // 2067519786
		{ &Z_Construct_UFunction_UInteractor_GetInteractingPlayerRaw, "GetInteractingPlayerRaw" }, // 3331465468
		{ &Z_Construct_UFunction_UInteractor_GetInteractionDefinitions, "GetInteractionDefinitions" }, // 1279278792
		{ &Z_Construct_UFunction_UInteractor_GetIsUsable, "GetIsUsable" }, // 788890980
		{ &Z_Construct_UFunction_UInteractor_IsInteracting, "IsInteracting" }, // 2643350689
		{ &Z_Construct_UFunction_UInteractor_IsInterruptionPossible, "IsInterruptionPossible" }, // 1688505301
		{ &Z_Construct_UFunction_UInteractor_Multicast_LockStatus, "Multicast_LockStatus" }, // 2505831666
		{ &Z_Construct_UFunction_UInteractor_Multicast_ReservationStatus, "Multicast_ReservationStatus" }, // 1314495305
		{ &Z_Construct_UFunction_UInteractor_SetIsUsable, "SetIsUsable" }, // 2692602812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interactor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions = { "_interactionDefinitions", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractor, _interactionDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions_Inner = { "_interactionDefinitions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp__currentInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp__currentInteraction = { "_currentInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractor, _currentInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp__currentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp__currentInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp__reservation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp__reservation = { "_reservation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractor, _reservation), Z_Construct_UScriptStruct_FLock, METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp__reservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp__reservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp__lock_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp__lock = { "_lock", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractor, _lock), Z_Construct_UScriptStruct_FLock, METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp__lock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp__lock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable_MetaData[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	void Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable_SetBit(void* Obj)
	{
		((UInteractor*)Obj)->IsUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable = { "IsUsable", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractor), &Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractor_Statics::NewProp_InteractorName_MetaData[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/Interactor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractor_Statics::NewProp_InteractorName = { "InteractorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractor, InteractorName), METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::NewProp_InteractorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::NewProp_InteractorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp__interactionDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp__currentInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp__reservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp__lock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp_IsUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractor_Statics::NewProp_InteractorName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractor_Statics::ClassParams = {
		&UInteractor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractor, 1909936016);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInteractor>()
	{
		return UInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractor(Z_Construct_UClass_UInteractor, &UInteractor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInteractor"), false, nullptr, nullptr, nullptr);

	void UInteractor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsUsable(TEXT("IsUsable"));

		const bool bIsValid = true
			&& Name_IsUsable == ClassReps[(int32)ENetFields_Private::IsUsable].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInteractor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
