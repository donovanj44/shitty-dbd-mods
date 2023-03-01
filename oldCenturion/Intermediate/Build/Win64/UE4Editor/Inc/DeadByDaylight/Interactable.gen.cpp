// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInterruptionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionArray();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractableTransformOptimizer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractable::execAttachEveryInteractionToZone)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachEveryInteractionToZone(Z_Param_zone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execAuthority_GetInteractingPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=P_THIS->Authority_GetInteractingPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execAuthorityRequestCancelOngoingInteractions)
	{
		P_GET_UBOOL(Z_Param_onlyOnHitCancelableInteractions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthorityRequestCancelOngoingInteractions(Z_Param_onlyOnHitCancelableInteractions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execGetFocalPointPosition)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_definition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFocalPointPosition_Implementation(Z_Param_player,Z_Param_definition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execGetInteractingPlayersRaw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=P_THIS->GetInteractingPlayersRaw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execGetInteractors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UInteractor*>*)Z_Param__Result=P_THIS->GetInteractors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execGetPlayerOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetPlayerOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execHasAnOngoingInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnOngoingInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execIsInteractingWith)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractingWith(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execIsInteractionDone)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UInteractor,Z_Param_interactor);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_definition);
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractionDone_Implementation(Z_Param_player,Z_Param_interactor,Z_Param_definition,EInputInteractionType(Z_Param_interactionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execIsInterruptionPossible)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptee);
		P_GET_OBJECT(UInteractor,Z_Param_interactor);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_definition);
		P_GET_OBJECT(UInterruptionDefinition,Z_Param_interruption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterruptionPossible_Implementation(Z_Param_interruptor,Z_Param_interruptee,Z_Param_interactor,Z_Param_definition,Z_Param_interruption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execOnInteractorLockChanged)
	{
		P_GET_UBOOL(Z_Param_locked);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interactingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractorLockChanged(Z_Param_locked,Z_Param_interactingPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execOnLevelReadyToPlay_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execSetInteractorsUsable)
	{
		P_GET_UBOOL(Z_Param_usable);
		P_GET_OBJECT(UInteractor,Z_Param_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractorsUsable(Z_Param_usable,Z_Param_exception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execSetSingleZone)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSingleZone(Z_Param_zone);
		P_NATIVE_END;
	}
	static FName NAME_AInteractable_GetFocalPointPosition = FName(TEXT("GetFocalPointPosition"));
	FVector AInteractable::GetFocalPointPosition(const ADBDPlayer* player, const UInteractionDefinition* definition) const
	{
		Interactable_eventGetFocalPointPosition_Parms Parms;
		Parms.player=player;
		Parms.definition=definition;
		const_cast<AInteractable*>(this)->ProcessEvent(FindFunctionChecked(NAME_AInteractable_GetFocalPointPosition),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AInteractable_IsInteractionDone = FName(TEXT("IsInteractionDone"));
	bool AInteractable::IsInteractionDone(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const
	{
		Interactable_eventIsInteractionDone_Parms Parms;
		Parms.player=player;
		Parms.interactor=interactor;
		Parms.definition=definition;
		Parms.interactionType=interactionType;
		const_cast<AInteractable*>(this)->ProcessEvent(FindFunctionChecked(NAME_AInteractable_IsInteractionDone),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AInteractable_IsInterruptionPossible = FName(TEXT("IsInterruptionPossible"));
	bool AInteractable::IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const
	{
		Interactable_eventIsInterruptionPossible_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		Parms.interactor=interactor;
		Parms.definition=definition;
		Parms.interruption=interruption;
		const_cast<AInteractable*>(this)->ProcessEvent(FindFunctionChecked(NAME_AInteractable_IsInterruptionPossible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AInteractable_OnLevelReadyToPlay = FName(TEXT("OnLevelReadyToPlay"));
	void AInteractable::OnLevelReadyToPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_OnLevelReadyToPlay),NULL);
	}
	static FName NAME_AInteractable_PreInterruptionEvent = FName(TEXT("PreInterruptionEvent"));
	void AInteractable::PreInterruptionEvent(ADBDPlayer* interruptor, ADBDPlayer* interruptee, UInterruptionDefinition* interruption)
	{
		Interactable_eventPreInterruptionEvent_Parms Parms;
		Parms.interruptor=interruptor;
		Parms.interruptee=interruptee;
		Parms.interruption=interruption;
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_PreInterruptionEvent),&Parms);
	}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		UClass* Class = AInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachEveryInteractionToZone", &AInteractable::execAttachEveryInteractionToZone },
			{ "Authority_GetInteractingPlayers", &AInteractable::execAuthority_GetInteractingPlayers },
			{ "AuthorityRequestCancelOngoingInteractions", &AInteractable::execAuthorityRequestCancelOngoingInteractions },
			{ "GetFocalPointPosition", &AInteractable::execGetFocalPointPosition },
			{ "GetInteractingPlayersRaw", &AInteractable::execGetInteractingPlayersRaw },
			{ "GetInteractors", &AInteractable::execGetInteractors },
			{ "GetPlayerOwner", &AInteractable::execGetPlayerOwner },
			{ "HasAnOngoingInteraction", &AInteractable::execHasAnOngoingInteraction },
			{ "IsInteractingWith", &AInteractable::execIsInteractingWith },
			{ "IsInteractionDone", &AInteractable::execIsInteractionDone },
			{ "IsInterruptionPossible", &AInteractable::execIsInterruptionPossible },
			{ "OnInteractorLockChanged", &AInteractable::execOnInteractorLockChanged },
			{ "OnLevelReadyToPlay_Native", &AInteractable::execOnLevelReadyToPlay_Native },
			{ "SetInteractorsUsable", &AInteractable::execSetInteractorsUsable },
			{ "SetSingleZone", &AInteractable::execSetSingleZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics
	{
		struct Interactable_eventAttachEveryInteractionToZone_Parms
		{
			UPrimitiveComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventAttachEveryInteractionToZone_Parms, zone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "AttachEveryInteractionToZone", nullptr, nullptr, sizeof(Interactable_eventAttachEveryInteractionToZone_Parms), Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics
	{
		struct Interactable_eventAuthority_GetInteractingPlayers_Parms
		{
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventAuthority_GetInteractingPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Authority_GetInteractingPlayers", nullptr, nullptr, sizeof(Interactable_eventAuthority_GetInteractingPlayers_Parms), Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics
	{
		struct Interactable_eventAuthorityRequestCancelOngoingInteractions_Parms
		{
			bool onlyOnHitCancelableInteractions;
		};
		static void NewProp_onlyOnHitCancelableInteractions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onlyOnHitCancelableInteractions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::NewProp_onlyOnHitCancelableInteractions_SetBit(void* Obj)
	{
		((Interactable_eventAuthorityRequestCancelOngoingInteractions_Parms*)Obj)->onlyOnHitCancelableInteractions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::NewProp_onlyOnHitCancelableInteractions = { "onlyOnHitCancelableInteractions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventAuthorityRequestCancelOngoingInteractions_Parms), &Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::NewProp_onlyOnHitCancelableInteractions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::NewProp_onlyOnHitCancelableInteractions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "AuthorityRequestCancelOngoingInteractions", nullptr, nullptr, sizeof(Interactable_eventAuthorityRequestCancelOngoingInteractions_Parms), Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetFocalPointPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_definition_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetFocalPointPosition_Parms, definition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetFocalPointPosition_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "GetFocalPointPosition", nullptr, nullptr, sizeof(Interactable_eventGetFocalPointPosition_Parms), Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_GetFocalPointPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_GetFocalPointPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics
	{
		struct Interactable_eventGetInteractingPlayersRaw_Parms
		{
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetInteractingPlayersRaw_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "GetInteractingPlayersRaw", nullptr, nullptr, sizeof(Interactable_eventGetInteractingPlayersRaw_Parms), Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_GetInteractors_Statics
	{
		struct Interactable_eventGetInteractors_Parms
		{
			TArray<UInteractor*> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetInteractors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_GetInteractors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetInteractors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetInteractors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_GetInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "GetInteractors", nullptr, nullptr, sizeof(Interactable_eventGetInteractors_Parms), Z_Construct_UFunction_AInteractable_GetInteractors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetInteractors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_GetInteractors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_GetInteractors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics
	{
		struct Interactable_eventGetPlayerOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventGetPlayerOwner_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "GetPlayerOwner", nullptr, nullptr, sizeof(Interactable_eventGetPlayerOwner_Parms), Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_GetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_GetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics
	{
		struct Interactable_eventHasAnOngoingInteraction_Parms
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
	void Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventHasAnOngoingInteraction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventHasAnOngoingInteraction_Parms), &Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "HasAnOngoingInteraction", nullptr, nullptr, sizeof(Interactable_eventHasAnOngoingInteraction_Parms), Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics
	{
		struct Interactable_eventIsInteractingWith_Parms
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
	void Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventIsInteractingWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventIsInteractingWith_Parms), &Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInteractingWith_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "IsInteractingWith", nullptr, nullptr, sizeof(Interactable_eventIsInteractingWith_Parms), Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_IsInteractingWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_IsInteractingWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventIsInteractionDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventIsInteractionDone_Parms), &Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactionType = { "interactionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInteractionDone_Parms, interactionType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_definition_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInteractionDone_Parms, definition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactor = { "interactor", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInteractionDone_Parms, interactor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInteractionDone_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "IsInteractionDone", nullptr, nullptr, sizeof(Interactable_eventIsInteractionDone_Parms), Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_IsInteractionDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_IsInteractionDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics
	{
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactor;
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
	void Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventIsInterruptionPossible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventIsInterruptionPossible_Parms), &Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruption_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruption = { "interruption", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInterruptionPossible_Parms, interruption), Z_Construct_UClass_UInterruptionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_definition_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_definition = { "definition", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInterruptionPossible_Parms, definition), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interactor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interactor = { "interactor", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInterruptionPossible_Parms, interactor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInterruptionPossible_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventIsInterruptionPossible_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "IsInterruptionPossible", nullptr, nullptr, sizeof(Interactable_eventIsInterruptionPossible_Parms), Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_IsInterruptionPossible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_IsInterruptionPossible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics
	{
		struct Interactable_eventOnInteractorLockChanged_Parms
		{
			bool locked;
			ADBDPlayer* interactingPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static void NewProp_locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnInteractorLockChanged_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_locked_SetBit(void* Obj)
	{
		((Interactable_eventOnInteractorLockChanged_Parms*)Obj)->locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_locked = { "locked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventOnInteractorLockChanged_Parms), &Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_locked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_interactingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::NewProp_locked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnInteractorLockChanged", nullptr, nullptr, sizeof(Interactable_eventOnInteractorLockChanged_Parms), Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_OnInteractorLockChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_OnInteractorLockChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnLevelReadyToPlay_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interruption_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruption;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruption = { "interruption", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventPreInterruptionEvent_Parms, interruption), Z_Construct_UClass_UInterruptionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruption_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruptee = { "interruptee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventPreInterruptionEvent_Parms, interruptee), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruptor = { "interruptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventPreInterruptionEvent_Parms, interruptor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruptee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::NewProp_interruptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "PreInterruptionEvent", nullptr, nullptr, sizeof(Interactable_eventPreInterruptionEvent_Parms), Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_PreInterruptionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_PreInterruptionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics
	{
		struct Interactable_eventSetInteractorsUsable_Parms
		{
			bool usable;
			UInteractor* exception;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_exception;
		static void NewProp_usable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_usable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_exception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventSetInteractorsUsable_Parms, exception), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_exception_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_exception_MetaData)) };
	void Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_usable_SetBit(void* Obj)
	{
		((Interactable_eventSetInteractorsUsable_Parms*)Obj)->usable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_usable = { "usable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventSetInteractorsUsable_Parms), &Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_usable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::NewProp_usable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "SetInteractorsUsable", nullptr, nullptr, sizeof(Interactable_eventSetInteractorsUsable_Parms), Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_SetInteractorsUsable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_SetInteractorsUsable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_SetSingleZone_Statics
	{
		struct Interactable_eventSetSingleZone_Parms
		{
			UPrimitiveComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventSetSingleZone_Parms, zone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "SetSingleZone", nullptr, nullptr, sizeof(Interactable_eventSetSingleZone_Parms), Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_SetSingleZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_SetSingleZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zoneToInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__zoneToInteractions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zoneToInteractions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zoneToInteractions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transformOptimizer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__transformOptimizer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useSingleZone_MetaData[];
#endif
		static void NewProp__useSingleZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useSingleZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__singleZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__singleZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_AttachEveryInteractionToZone, "AttachEveryInteractionToZone" }, // 2341050162
		{ &Z_Construct_UFunction_AInteractable_Authority_GetInteractingPlayers, "Authority_GetInteractingPlayers" }, // 1093977831
		{ &Z_Construct_UFunction_AInteractable_AuthorityRequestCancelOngoingInteractions, "AuthorityRequestCancelOngoingInteractions" }, // 1898081820
		{ &Z_Construct_UFunction_AInteractable_GetFocalPointPosition, "GetFocalPointPosition" }, // 3967744352
		{ &Z_Construct_UFunction_AInteractable_GetInteractingPlayersRaw, "GetInteractingPlayersRaw" }, // 3685163966
		{ &Z_Construct_UFunction_AInteractable_GetInteractors, "GetInteractors" }, // 2305592162
		{ &Z_Construct_UFunction_AInteractable_GetPlayerOwner, "GetPlayerOwner" }, // 2671802086
		{ &Z_Construct_UFunction_AInteractable_HasAnOngoingInteraction, "HasAnOngoingInteraction" }, // 2390046142
		{ &Z_Construct_UFunction_AInteractable_IsInteractingWith, "IsInteractingWith" }, // 649150927
		{ &Z_Construct_UFunction_AInteractable_IsInteractionDone, "IsInteractionDone" }, // 2009456755
		{ &Z_Construct_UFunction_AInteractable_IsInterruptionPossible, "IsInterruptionPossible" }, // 2664108127
		{ &Z_Construct_UFunction_AInteractable_OnInteractorLockChanged, "OnInteractorLockChanged" }, // 1466895019
		{ &Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2544187806
		{ &Z_Construct_UFunction_AInteractable_OnLevelReadyToPlay_Native, "OnLevelReadyToPlay_Native" }, // 2916679209
		{ &Z_Construct_UFunction_AInteractable_PreInterruptionEvent, "PreInterruptionEvent" }, // 3825841415
		{ &Z_Construct_UFunction_AInteractable_SetInteractorsUsable, "SetInteractorsUsable" }, // 2764939573
		{ &Z_Construct_UFunction_AInteractable_SetSingleZone, "SetSingleZone" }, // 306161680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions = { "_zoneToInteractions", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, _zoneToInteractions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_Key_KeyProp = { "_zoneToInteractions_Key", nullptr, (EPropertyFlags)0x0000008000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_ValueProp = { "_zoneToInteractions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInteractionArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp__transformOptimizer_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__transformOptimizer = { "_transformOptimizer", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, _transformOptimizer), Z_Construct_UClass_UInteractableTransformOptimizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp__transformOptimizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp__transformOptimizer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp__interactors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__interactors = { "_interactors", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, _interactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp__interactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp__interactors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__interactors_Inner = { "_interactors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone_MetaData[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	void Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone_SetBit(void* Obj)
	{
		((AInteractable*)Obj)->_useSingleZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone = { "_useSingleZone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractable), &Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp__singleZone_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp__singleZone = { "_singleZone", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, _singleZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp__singleZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp__singleZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__zoneToInteractions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__transformOptimizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__interactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__interactors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__useSingleZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp__singleZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
		&AInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractable, 3620760770);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AInteractable>()
	{
		return AInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractable(Z_Construct_UClass_AInteractable, &AInteractable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
