// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26AttachedCrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26AttachedCrow() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_AK26AttachedCrow_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_AK26AttachedCrow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK26_API UEnum* Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason();
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26AttachmentStatus();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ULightBurnable_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_ActivateInfection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ActivateInfection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_DeactivateInfection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DeactivateInfection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnDestroyAttempt)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_instigatorsForCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDestroyAttempt(Z_Param_Out_instigatorsForCompletion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnIsWithinOtherSurvivorRangeChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_survivorActor);
		P_GET_UBOOL(Z_Param_isInRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIsWithinOtherSurvivorRangeChanged(Z_Param_survivorActor,Z_Param_isInRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnOtherSurvivorDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_before);
		P_GET_ENUM(ECamperDamageState,Z_Param_after);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState(Z_Param_before),ECamperDamageState(Z_Param_after));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnOtherSurvivorGuidedActionChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOtherSurvivorGuidedActionChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnOtherSurvivorPerkFlagsChanged)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameplayTag);
		P_GET_UBOOL(Z_Param_isAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOtherSurvivorPerkFlagsChanged(Z_Param_gameplayTag,Z_Param_isAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnPlayerLeftGame)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPlayerLeftGame(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorAdded(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnSurvivorDroppedEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorDroppedEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnSurvivorExitLocker)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorExitLocker(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnSurvivorStatusIndicatorSet)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_OBJECT(AK26AttachedCrow,Z_Param_attachedCrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorStatusIndicatorSet(Z_Param_survivor,Z_Param_attachedCrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execAuthority_OnSurvivorWasUnhooked)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorWasUnhooked(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execHideOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execMulticast_OnStartDetaching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStartDetaching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execMulticast_OnStopDetaching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStopDetaching_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK26AttachedCrow::execOnRep_AttachmentStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentStatus();
		P_NATIVE_END;
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved = FName(TEXT("Cosmetic_OnAttachedCrowRemoved"));
	void AK26AttachedCrow::Cosmetic_OnAttachedCrowRemoved(FK26AttachedCrowRemovalReason removalReason)
	{
		K26AttachedCrow_eventCosmetic_OnAttachedCrowRemoved_Parms Parms;
		Parms.removalReason=removalReason;
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved),&Parms);
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnAuraHidden = FName(TEXT("Cosmetic_OnAuraHidden"));
	void AK26AttachedCrow::Cosmetic_OnAuraHidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnAuraHidden),NULL);
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnAuraShown = FName(TEXT("Cosmetic_OnAuraShown"));
	void AK26AttachedCrow::Cosmetic_OnAuraShown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnAuraShown),NULL);
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnCrowAttached = FName(TEXT("Cosmetic_OnCrowAttached"));
	void AK26AttachedCrow::Cosmetic_OnCrowAttached()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnCrowAttached),NULL);
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnStartDetaching = FName(TEXT("Cosmetic_OnStartDetaching"));
	void AK26AttachedCrow::Cosmetic_OnStartDetaching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnStartDetaching),NULL);
	}
	static FName NAME_AK26AttachedCrow_Cosmetic_OnStopDetaching = FName(TEXT("Cosmetic_OnStopDetaching"));
	void AK26AttachedCrow::Cosmetic_OnStopDetaching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Cosmetic_OnStopDetaching),NULL);
	}
	static FName NAME_AK26AttachedCrow_Multicast_OnStartDetaching = FName(TEXT("Multicast_OnStartDetaching"));
	void AK26AttachedCrow::Multicast_OnStartDetaching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Multicast_OnStartDetaching),NULL);
	}
	static FName NAME_AK26AttachedCrow_Multicast_OnStopDetaching = FName(TEXT("Multicast_OnStopDetaching"));
	void AK26AttachedCrow::Multicast_OnStopDetaching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK26AttachedCrow_Multicast_OnStopDetaching),NULL);
	}
	void AK26AttachedCrow::StaticRegisterNativesAK26AttachedCrow()
	{
		UClass* Class = AK26AttachedCrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ActivateInfection", &AK26AttachedCrow::execAuthority_ActivateInfection },
			{ "Authority_DeactivateInfection", &AK26AttachedCrow::execAuthority_DeactivateInfection },
			{ "Authority_OnDestroyAttempt", &AK26AttachedCrow::execAuthority_OnDestroyAttempt },
			{ "Authority_OnIsWithinOtherSurvivorRangeChanged", &AK26AttachedCrow::execAuthority_OnIsWithinOtherSurvivorRangeChanged },
			{ "Authority_OnKillerSet", &AK26AttachedCrow::execAuthority_OnKillerSet },
			{ "Authority_OnOtherSurvivorDamageStateChanged", &AK26AttachedCrow::execAuthority_OnOtherSurvivorDamageStateChanged },
			{ "Authority_OnOtherSurvivorGuidedActionChanged", &AK26AttachedCrow::execAuthority_OnOtherSurvivorGuidedActionChanged },
			{ "Authority_OnOtherSurvivorPerkFlagsChanged", &AK26AttachedCrow::execAuthority_OnOtherSurvivorPerkFlagsChanged },
			{ "Authority_OnPlayerLeftGame", &AK26AttachedCrow::execAuthority_OnPlayerLeftGame },
			{ "Authority_OnSurvivorAdded", &AK26AttachedCrow::execAuthority_OnSurvivorAdded },
			{ "Authority_OnSurvivorDroppedEnd", &AK26AttachedCrow::execAuthority_OnSurvivorDroppedEnd },
			{ "Authority_OnSurvivorExitLocker", &AK26AttachedCrow::execAuthority_OnSurvivorExitLocker },
			{ "Authority_OnSurvivorStatusIndicatorSet", &AK26AttachedCrow::execAuthority_OnSurvivorStatusIndicatorSet },
			{ "Authority_OnSurvivorWasUnhooked", &AK26AttachedCrow::execAuthority_OnSurvivorWasUnhooked },
			{ "HideOutline", &AK26AttachedCrow::execHideOutline },
			{ "Multicast_OnStartDetaching", &AK26AttachedCrow::execMulticast_OnStartDetaching },
			{ "Multicast_OnStopDetaching", &AK26AttachedCrow::execMulticast_OnStopDetaching },
			{ "OnRep_AttachmentStatus", &AK26AttachedCrow::execOnRep_AttachmentStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_ActivateInfection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_DeactivateInfection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnDestroyAttempt_Parms
		{
			TArray<AActor*> instigatorsForCompletion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instigatorsForCompletion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_instigatorsForCompletion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorsForCompletion_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion = { "instigatorsForCompletion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnDestroyAttempt_Parms, instigatorsForCompletion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion_Inner = { "instigatorsForCompletion", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::NewProp_instigatorsForCompletion_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnDestroyAttempt", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnDestroyAttempt_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnIsWithinOtherSurvivorRangeChanged_Parms
		{
			AActor* survivorActor;
			bool isInRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInRange_MetaData[];
#endif
		static void NewProp_isInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange_SetBit(void* Obj)
	{
		((K26AttachedCrow_eventAuthority_OnIsWithinOtherSurvivorRangeChanged_Parms*)Obj)->isInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange = { "isInRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26AttachedCrow_eventAuthority_OnIsWithinOtherSurvivorRangeChanged_Parms), &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_survivorActor = { "survivorActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnIsWithinOtherSurvivorRangeChanged_Parms, survivorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_isInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::NewProp_survivorActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnIsWithinOtherSurvivorRangeChanged", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnIsWithinOtherSurvivorRangeChanged_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnKillerSet", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnKillerSet_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnOtherSurvivorDamageStateChanged_Parms
		{
			ECamperDamageState before;
			ECamperDamageState after;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_after;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_after_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_before;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_before_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnOtherSurvivorDamageStateChanged_Parms, after), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_after_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_before = { "before", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnOtherSurvivorDamageStateChanged_Parms, before), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_before_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_after,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_after_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::NewProp_before_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnOtherSurvivorDamageStateChanged", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnOtherSurvivorDamageStateChanged_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnOtherSurvivorGuidedActionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnOtherSurvivorPerkFlagsChanged_Parms
		{
			FGameplayTag gameplayTag;
			bool isAdded;
		};
		static void NewProp_isAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAdded;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_isAdded_SetBit(void* Obj)
	{
		((K26AttachedCrow_eventAuthority_OnOtherSurvivorPerkFlagsChanged_Parms*)Obj)->isAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_isAdded = { "isAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26AttachedCrow_eventAuthority_OnOtherSurvivorPerkFlagsChanged_Parms), &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_isAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_gameplayTag = { "gameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnOtherSurvivorPerkFlagsChanged_Parms, gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_isAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::NewProp_gameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnOtherSurvivorPerkFlagsChanged", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnOtherSurvivorPerkFlagsChanged_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnPlayerLeftGame_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnPlayerLeftGame_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnPlayerLeftGame_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnPlayerLeftGame", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnPlayerLeftGame_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnSurvivorAdded_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnSurvivorAdded", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnSurvivorAdded_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnSurvivorDroppedEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnSurvivorExitLocker_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorExitLocker_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorExitLocker_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnSurvivorExitLocker", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnSurvivorExitLocker_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnSurvivorStatusIndicatorSet_Parms
		{
			const ACamperPlayer* survivor;
			AK26AttachedCrow* attachedCrow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachedCrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow = { "attachedCrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorStatusIndicatorSet_Parms, attachedCrow), Z_Construct_UClass_AK26AttachedCrow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorStatusIndicatorSet_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnSurvivorStatusIndicatorSet", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnSurvivorStatusIndicatorSet_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics
	{
		struct K26AttachedCrow_eventAuthority_OnSurvivorWasUnhooked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorWasUnhooked_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventAuthority_OnSurvivorWasUnhooked_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Authority_OnSurvivorWasUnhooked", nullptr, nullptr, sizeof(K26AttachedCrow_eventAuthority_OnSurvivorWasUnhooked_Parms), Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_removalReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_removalReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::NewProp_removalReason = { "removalReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AttachedCrow_eventCosmetic_OnAttachedCrowRemoved_Parms, removalReason), Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::NewProp_removalReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::NewProp_removalReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::NewProp_removalReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnAttachedCrowRemoved", nullptr, nullptr, sizeof(K26AttachedCrow_eventCosmetic_OnAttachedCrowRemoved_Parms), Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnAuraHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnAuraShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnCrowAttached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnStartDetaching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Cosmetic_OnStopDetaching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "HideOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_HideOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_HideOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Multicast_OnStartDetaching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "Multicast_OnStopDetaching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK26AttachedCrow, nullptr, "OnRep_AttachmentStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK26AttachedCrow_NoRegister()
	{
		return AK26AttachedCrow::StaticClass();
	}
	struct Z_Construct_UClass_AK26AttachedCrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachmentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attachmentStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authority_isInfecting_MetaData[];
#endif
		static void NewProp__authority_isInfecting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__authority_isInfecting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__visualStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__infectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__infectRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__infectionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__infectionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lingerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requiredFlashlightTimeToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__requiredFlashlightTimeToDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightDestroyChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashlightDestroyChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightBurnableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightBurnableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashLightableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashLightableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firecrackerEffectHandlerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firecrackerEffectHandlerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK26AttachedCrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK26AttachedCrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_ActivateInfection, "Authority_ActivateInfection" }, // 316807557
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_DeactivateInfection, "Authority_DeactivateInfection" }, // 3316437804
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnDestroyAttempt, "Authority_OnDestroyAttempt" }, // 2993176158
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged, "Authority_OnIsWithinOtherSurvivorRangeChanged" }, // 3574162018
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnKillerSet, "Authority_OnKillerSet" }, // 1531690344
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged, "Authority_OnOtherSurvivorDamageStateChanged" }, // 2862374327
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged, "Authority_OnOtherSurvivorGuidedActionChanged" }, // 882992207
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged, "Authority_OnOtherSurvivorPerkFlagsChanged" }, // 2013361226
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnPlayerLeftGame, "Authority_OnPlayerLeftGame" }, // 949946872
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorAdded, "Authority_OnSurvivorAdded" }, // 3923582921
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorDroppedEnd, "Authority_OnSurvivorDroppedEnd" }, // 2251785392
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorExitLocker, "Authority_OnSurvivorExitLocker" }, // 2833633575
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet, "Authority_OnSurvivorStatusIndicatorSet" }, // 2384029488
		{ &Z_Construct_UFunction_AK26AttachedCrow_Authority_OnSurvivorWasUnhooked, "Authority_OnSurvivorWasUnhooked" }, // 4104676148
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved, "Cosmetic_OnAttachedCrowRemoved" }, // 1089085269
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraHidden, "Cosmetic_OnAuraHidden" }, // 1925359436
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnAuraShown, "Cosmetic_OnAuraShown" }, // 1965395722
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnCrowAttached, "Cosmetic_OnCrowAttached" }, // 1437038002
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStartDetaching, "Cosmetic_OnStartDetaching" }, // 1450326504
		{ &Z_Construct_UFunction_AK26AttachedCrow_Cosmetic_OnStopDetaching, "Cosmetic_OnStopDetaching" }, // 3201249184
		{ &Z_Construct_UFunction_AK26AttachedCrow_HideOutline, "HideOutline" }, // 2557734960
		{ &Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStartDetaching, "Multicast_OnStartDetaching" }, // 325546729
		{ &Z_Construct_UFunction_AK26AttachedCrow_Multicast_OnStopDetaching, "Multicast_OnStopDetaching" }, // 793701117
		{ &Z_Construct_UFunction_AK26AttachedCrow_OnRep_AttachmentStatus, "OnRep_AttachmentStatus" }, // 3757518841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26AttachedCrow.h" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__attachmentStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__attachmentStatus = { "_attachmentStatus", "OnRep_AttachmentStatus", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _attachmentStatus), Z_Construct_UScriptStruct_FK26AttachmentStatus, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__attachmentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__attachmentStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	void Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting_SetBit(void* Obj)
	{
		((AK26AttachedCrow*)Obj)->_authority_isInfecting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting = { "_authority_isInfecting", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK26AttachedCrow), &Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__statusHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__statusHandler = { "_statusHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _statusHandler), Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__statusHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__statusHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__rootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__rootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__visualStaticMeshComponent_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__visualStaticMeshComponent = { "_visualStaticMeshComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _visualStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__visualStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__visualStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineUpdateStrategy_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineUpdateStrategy = { "_outlineUpdateStrategy", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _outlineUpdateStrategy), Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectRadius_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectRadius = { "_infectRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _infectRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectionDelay_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectionDelay = { "_infectionDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _infectionDelay), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lingerTime_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lingerTime = { "_lingerTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _lingerTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lingerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lingerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__requiredFlashlightTimeToDestroy_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__requiredFlashlightTimeToDestroy = { "_requiredFlashlightTimeToDestroy", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _requiredFlashlightTimeToDestroy), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__requiredFlashlightTimeToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__requiredFlashlightTimeToDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashlightDestroyChargeable_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashlightDestroyChargeable = { "_flashlightDestroyChargeable", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _flashlightDestroyChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashlightDestroyChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashlightDestroyChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lightBurnableComponent_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lightBurnableComponent = { "_lightBurnableComponent", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _lightBurnableComponent), Z_Construct_UClass_ULightBurnable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lightBurnableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lightBurnableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashLightableComponent_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashLightableComponent = { "_flashLightableComponent", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _flashLightableComponent), Z_Construct_UClass_UFlashlightableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashLightableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashLightableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData[] = {
		{ "Category", "K26AttachedCrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26AttachedCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__firecrackerEffectHandlerComponent = { "_firecrackerEffectHandlerComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26AttachedCrow, _firecrackerEffectHandlerComponent), Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK26AttachedCrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__attachmentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__authority_isInfecting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__statusHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__rootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__visualStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__outlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__infectionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lingerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__requiredFlashlightTimeToDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashlightDestroyChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__lightBurnableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__flashLightableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26AttachedCrow_Statics::NewProp__firecrackerEffectHandlerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK26AttachedCrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK26AttachedCrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK26AttachedCrow_Statics::ClassParams = {
		&AK26AttachedCrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK26AttachedCrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK26AttachedCrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK26AttachedCrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK26AttachedCrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK26AttachedCrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK26AttachedCrow, 161709068);
	template<> THEK26_API UClass* StaticClass<AK26AttachedCrow>()
	{
		return AK26AttachedCrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK26AttachedCrow(Z_Construct_UClass_AK26AttachedCrow, &AK26AttachedCrow::StaticClass, TEXT("/Script/TheK26"), TEXT("AK26AttachedCrow"), false, nullptr, nullptr, nullptr);

	void AK26AttachedCrow::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__attachmentStatus(TEXT("_attachmentStatus"));

		const bool bIsValid = true
			&& Name__attachmentStatus == ClassReps[(int32)ENetFields_Private::_attachmentStatus].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK26AttachedCrow"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK26AttachedCrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
