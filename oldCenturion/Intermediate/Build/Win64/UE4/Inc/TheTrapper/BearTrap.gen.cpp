// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/BearTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrap() {}
// Cross Module References
	THETRAPPER_API UFunction* Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
	THETRAPPER_API UClass* Z_Construct_UClass_ABearTrap_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_ABearTrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseTrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UBearTrapAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavModifierComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCapsulePlayerOverlapComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBoxPlayerOverlapComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheTrapper, nullptr, "BearTrapOnIsTrapSetChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABearTrap::execGetAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBearTrapAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execGetTrappedPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetTrappedPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execHasTrappedPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTrappedPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execHasTrappedPlayerSinceMoved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTrappedPlayerSinceMoved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execInitializeMainInteractor)
	{
		P_GET_OBJECT(UInteractor,Z_Param_interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMainInteractor(Z_Param_interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execInitializeTrapKillerInteraction)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTrapKillerInteraction(Z_Param_interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execInitializeTrapSurvivorInteraction)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTrapSurvivorInteraction(Z_Param_interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execIsTrapperOutOfSafetyZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTrapperOutOfSafetyZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnCollectUpdateEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectUpdateEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnCollectUpdateStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectUpdateStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnLevelReadyToPlay_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnSafetyZoneEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSafetyZoneEndOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnTrapDetectionZoneOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrapDetectionZoneOverlapBegin(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnTrapDetectionZoneOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrapDetectionZoneOverlapEnd(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execOnTrappedPlayerPickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrappedPlayerPickedUp(Z_Param_picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontage(Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execSetTrappedPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_trappedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrappedPlayer(Z_Param_trappedPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execSetTrappedPlayerSinceMoved)
	{
		P_GET_UBOOL(Z_Param_didTrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrappedPlayerSinceMoved(Z_Param_didTrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABearTrap::execTrySetTrappedPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetTrappedPlayer(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_ABearTrap_Cosmetic_OnPlayerTrapped = FName(TEXT("Cosmetic_OnPlayerTrapped"));
	void ABearTrap::Cosmetic_OnPlayerTrapped(ADBDPlayer* trappedPlayer)
	{
		BearTrap_eventCosmetic_OnPlayerTrapped_Parms Parms;
		Parms.trappedPlayer=trappedPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ABearTrap_Cosmetic_OnPlayerTrapped),&Parms);
	}
	static FName NAME_ABearTrap_GetAkAudioComponent = FName(TEXT("GetAkAudioComponent"));
	UAkComponent* ABearTrap::GetAkAudioComponent() const
	{
		BearTrap_eventGetAkAudioComponent_Parms Parms;
		const_cast<ABearTrap*>(this)->ProcessEvent(FindFunctionChecked(NAME_ABearTrap_GetAkAudioComponent),&Parms);
		return Parms.ReturnValue;
	}
	void ABearTrap::StaticRegisterNativesABearTrap()
	{
		UClass* Class = ABearTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimInstance", &ABearTrap::execGetAnimInstance },
			{ "GetTrappedPlayer", &ABearTrap::execGetTrappedPlayer },
			{ "HasTrappedPlayer", &ABearTrap::execHasTrappedPlayer },
			{ "HasTrappedPlayerSinceMoved", &ABearTrap::execHasTrappedPlayerSinceMoved },
			{ "InitializeMainInteractor", &ABearTrap::execInitializeMainInteractor },
			{ "InitializeTrapKillerInteraction", &ABearTrap::execInitializeTrapKillerInteraction },
			{ "InitializeTrapSurvivorInteraction", &ABearTrap::execInitializeTrapSurvivorInteraction },
			{ "IsTrapperOutOfSafetyZone", &ABearTrap::execIsTrapperOutOfSafetyZone },
			{ "OnCollectUpdateEnd", &ABearTrap::execOnCollectUpdateEnd },
			{ "OnCollectUpdateStart", &ABearTrap::execOnCollectUpdateStart },
			{ "OnLevelReadyToPlay_Implementation", &ABearTrap::execOnLevelReadyToPlay_Implementation },
			{ "OnSafetyZoneEndOverlap", &ABearTrap::execOnSafetyZoneEndOverlap },
			{ "OnSlasherSet", &ABearTrap::execOnSlasherSet },
			{ "OnTrapDetectionZoneOverlapBegin", &ABearTrap::execOnTrapDetectionZoneOverlapBegin },
			{ "OnTrapDetectionZoneOverlapEnd", &ABearTrap::execOnTrapDetectionZoneOverlapEnd },
			{ "OnTrappedPlayerPickedUp", &ABearTrap::execOnTrappedPlayerPickedUp },
			{ "PlayMontage", &ABearTrap::execPlayMontage },
			{ "SetTrappedPlayer", &ABearTrap::execSetTrappedPlayer },
			{ "SetTrappedPlayerSinceMoved", &ABearTrap::execSetTrappedPlayerSinceMoved },
			{ "TrySetTrappedPlayer", &ABearTrap::execTrySetTrappedPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trappedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::NewProp_trappedPlayer = { "trappedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventCosmetic_OnPlayerTrapped_Parms, trappedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::NewProp_trappedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "Cosmetic_OnPlayerTrapped", nullptr, nullptr, sizeof(BearTrap_eventCosmetic_OnPlayerTrapped_Parms), Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventGetAkAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "GetAkAudioComponent", nullptr, nullptr, sizeof(BearTrap_eventGetAkAudioComponent_Parms), Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_GetAkAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_GetAkAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics
	{
		struct BearTrap_eventGetAnimInstance_Parms
		{
			UBearTrapAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UBearTrapAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "GetAnimInstance", nullptr, nullptr, sizeof(BearTrap_eventGetAnimInstance_Parms), Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_GetAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_GetAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics
	{
		struct BearTrap_eventGetTrappedPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventGetTrappedPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "GetTrappedPlayer", nullptr, nullptr, sizeof(BearTrap_eventGetTrappedPlayer_Parms), Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_GetTrappedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_GetTrappedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics
	{
		struct BearTrap_eventHasTrappedPlayer_Parms
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
	void Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BearTrap_eventHasTrappedPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrap_eventHasTrappedPlayer_Parms), &Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "HasTrappedPlayer", nullptr, nullptr, sizeof(BearTrap_eventHasTrappedPlayer_Parms), Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_HasTrappedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_HasTrappedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics
	{
		struct BearTrap_eventHasTrappedPlayerSinceMoved_Parms
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
	void Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BearTrap_eventHasTrappedPlayerSinceMoved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrap_eventHasTrappedPlayerSinceMoved_Parms), &Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "HasTrappedPlayerSinceMoved", nullptr, nullptr, sizeof(BearTrap_eventHasTrappedPlayerSinceMoved_Parms), Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics
	{
		struct BearTrap_eventInitializeMainInteractor_Parms
		{
			UInteractor* interactor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::NewProp_interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::NewProp_interactor = { "interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventInitializeMainInteractor_Parms, interactor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::NewProp_interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::NewProp_interactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::NewProp_interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "InitializeMainInteractor", nullptr, nullptr, sizeof(BearTrap_eventInitializeMainInteractor_Parms), Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_InitializeMainInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_InitializeMainInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics
	{
		struct BearTrap_eventInitializeTrapKillerInteraction_Parms
		{
			UInteractionDefinition* interaction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventInitializeTrapKillerInteraction_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "InitializeTrapKillerInteraction", nullptr, nullptr, sizeof(BearTrap_eventInitializeTrapKillerInteraction_Parms), Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics
	{
		struct BearTrap_eventInitializeTrapSurvivorInteraction_Parms
		{
			UInteractionDefinition* interaction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventInitializeTrapSurvivorInteraction_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "InitializeTrapSurvivorInteraction", nullptr, nullptr, sizeof(BearTrap_eventInitializeTrapSurvivorInteraction_Parms), Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics
	{
		struct BearTrap_eventIsTrapperOutOfSafetyZone_Parms
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
	void Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BearTrap_eventIsTrapperOutOfSafetyZone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrap_eventIsTrapperOutOfSafetyZone_Parms), &Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "IsTrapperOutOfSafetyZone", nullptr, nullptr, sizeof(BearTrap_eventIsTrapperOutOfSafetyZone_Parms), Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnCollectUpdateEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnCollectUpdateStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnLevelReadyToPlay_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics
	{
		struct BearTrap_eventOnSafetyZoneEndOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnSafetyZoneEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnSafetyZoneEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnSafetyZoneEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnSafetyZoneEndOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnSafetyZoneEndOverlap", nullptr, nullptr, sizeof(BearTrap_eventOnSafetyZoneEndOverlap_Parms), Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics
	{
		struct BearTrap_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(BearTrap_eventOnSlasherSet_Parms), Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics
	{
		struct BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms), &Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnTrapDetectionZoneOverlapBegin", nullptr, nullptr, sizeof(BearTrap_eventOnTrapDetectionZoneOverlapBegin_Parms), Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics
	{
		struct BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnTrapDetectionZoneOverlapEnd", nullptr, nullptr, sizeof(BearTrap_eventOnTrapDetectionZoneOverlapEnd_Parms), Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics
	{
		struct BearTrap_eventOnTrappedPlayerPickedUp_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventOnTrappedPlayerPickedUp_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "OnTrappedPlayerPickedUp", nullptr, nullptr, sizeof(BearTrap_eventOnTrappedPlayerPickedUp_Parms), Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_PlayMontage_Statics
	{
		struct BearTrap_eventPlayMontage_Parms
		{
			UAnimMontage* montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventPlayMontage_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "PlayMontage", nullptr, nullptr, sizeof(BearTrap_eventPlayMontage_Parms), Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics
	{
		struct BearTrap_eventSetTrappedPlayer_Parms
		{
			ADBDPlayer* trappedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trappedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::NewProp_trappedPlayer = { "trappedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventSetTrappedPlayer_Parms, trappedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::NewProp_trappedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "SetTrappedPlayer", nullptr, nullptr, sizeof(BearTrap_eventSetTrappedPlayer_Parms), Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_SetTrappedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_SetTrappedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics
	{
		struct BearTrap_eventSetTrappedPlayerSinceMoved_Parms
		{
			bool didTrap;
		};
		static void NewProp_didTrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_didTrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::NewProp_didTrap_SetBit(void* Obj)
	{
		((BearTrap_eventSetTrappedPlayerSinceMoved_Parms*)Obj)->didTrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::NewProp_didTrap = { "didTrap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BearTrap_eventSetTrappedPlayerSinceMoved_Parms), &Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::NewProp_didTrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::NewProp_didTrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "SetTrappedPlayerSinceMoved", nullptr, nullptr, sizeof(BearTrap_eventSetTrappedPlayerSinceMoved_Parms), Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics
	{
		struct BearTrap_eventTrySetTrappedPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrap_eventTrySetTrappedPlayer_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABearTrap, nullptr, "TrySetTrappedPlayer", nullptr, nullptr, sizeof(BearTrap_eventTrySetTrappedPlayer_Parms), Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABearTrap_NoRegister()
	{
		return ABearTrap::StaticClass();
	}
	struct Z_Construct_UClass_ABearTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMontageSlave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animationMontageSlave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trappedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trappedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trapKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trapSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mainInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mainInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfUntrapAttemptsRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__selfUntrapAttemptsRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumAttemptsForSelfUntrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maximumAttemptsForSelfUntrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTrapperOutOfSafetyZone_MetaData[];
#endif
		static void NewProp__isTrapperOutOfSafetyZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTrapperOutOfSafetyZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dangerNavModifierComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dangerNavModifierComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ownerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onIsTrapSetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onIsTrapSetChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapBlocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trapBlocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapActorCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mapActorCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mapActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerSafetyZoneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerSafetyZoneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapPlayerDetectionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trapPlayerDetectionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTrap,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABearTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABearTrap_Cosmetic_OnPlayerTrapped, "Cosmetic_OnPlayerTrapped" }, // 1451286492
		{ &Z_Construct_UFunction_ABearTrap_GetAkAudioComponent, "GetAkAudioComponent" }, // 3176488898
		{ &Z_Construct_UFunction_ABearTrap_GetAnimInstance, "GetAnimInstance" }, // 2220157770
		{ &Z_Construct_UFunction_ABearTrap_GetTrappedPlayer, "GetTrappedPlayer" }, // 1123410215
		{ &Z_Construct_UFunction_ABearTrap_HasTrappedPlayer, "HasTrappedPlayer" }, // 2441307718
		{ &Z_Construct_UFunction_ABearTrap_HasTrappedPlayerSinceMoved, "HasTrappedPlayerSinceMoved" }, // 1086432816
		{ &Z_Construct_UFunction_ABearTrap_InitializeMainInteractor, "InitializeMainInteractor" }, // 21434540
		{ &Z_Construct_UFunction_ABearTrap_InitializeTrapKillerInteraction, "InitializeTrapKillerInteraction" }, // 1359543389
		{ &Z_Construct_UFunction_ABearTrap_InitializeTrapSurvivorInteraction, "InitializeTrapSurvivorInteraction" }, // 1468433536
		{ &Z_Construct_UFunction_ABearTrap_IsTrapperOutOfSafetyZone, "IsTrapperOutOfSafetyZone" }, // 3651403416
		{ &Z_Construct_UFunction_ABearTrap_OnCollectUpdateEnd, "OnCollectUpdateEnd" }, // 1641053954
		{ &Z_Construct_UFunction_ABearTrap_OnCollectUpdateStart, "OnCollectUpdateStart" }, // 2389167877
		{ &Z_Construct_UFunction_ABearTrap_OnLevelReadyToPlay_Implementation, "OnLevelReadyToPlay_Implementation" }, // 2545619006
		{ &Z_Construct_UFunction_ABearTrap_OnSafetyZoneEndOverlap, "OnSafetyZoneEndOverlap" }, // 183673789
		{ &Z_Construct_UFunction_ABearTrap_OnSlasherSet, "OnSlasherSet" }, // 3183279206
		{ &Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapBegin, "OnTrapDetectionZoneOverlapBegin" }, // 19590219
		{ &Z_Construct_UFunction_ABearTrap_OnTrapDetectionZoneOverlapEnd, "OnTrapDetectionZoneOverlapEnd" }, // 3408162421
		{ &Z_Construct_UFunction_ABearTrap_OnTrappedPlayerPickedUp, "OnTrappedPlayerPickedUp" }, // 3786016627
		{ &Z_Construct_UFunction_ABearTrap_PlayMontage, "PlayMontage" }, // 2006873753
		{ &Z_Construct_UFunction_ABearTrap_SetTrappedPlayer, "SetTrappedPlayer" }, // 344011747
		{ &Z_Construct_UFunction_ABearTrap_SetTrappedPlayerSinceMoved, "SetTrappedPlayerSinceMoved" }, // 2282750640
		{ &Z_Construct_UFunction_ABearTrap_TrySetTrappedPlayer, "TrySetTrappedPlayer" }, // 941159453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BearTrap.h" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__animationMontageSlave_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__animationMontageSlave = { "_animationMontageSlave", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _animationMontageSlave), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__animationMontageSlave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__animationMontageSlave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__trappedPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BearTrap" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__trappedPlayer = { "_trappedPlayer", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _trappedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__trappedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__trappedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__trapKiller_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__trapKiller = { "_trapKiller", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _trapKiller), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__trapSurvivor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__trapSurvivor = { "_trapSurvivor", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _trapSurvivor), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__mainInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__mainInteractor = { "_mainInteractor", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _mainInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__mainInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__mainInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__selfUntrapAttemptsRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__selfUntrapAttemptsRemaining = { "_selfUntrapAttemptsRemaining", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _selfUntrapAttemptsRemaining), METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__selfUntrapAttemptsRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__selfUntrapAttemptsRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__maximumAttemptsForSelfUntrap_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__maximumAttemptsForSelfUntrap = { "_maximumAttemptsForSelfUntrap", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _maximumAttemptsForSelfUntrap), METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__maximumAttemptsForSelfUntrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__maximumAttemptsForSelfUntrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BearTrap" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	void Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone_SetBit(void* Obj)
	{
		((ABearTrap*)Obj)->_isTrapperOutOfSafetyZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone = { "_isTrapperOutOfSafetyZone", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABearTrap), &Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__dangerNavModifierComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__dangerNavModifierComponent = { "_dangerNavModifierComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _dangerNavModifierComponent), Z_Construct_UClass_UDBDNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__dangerNavModifierComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__dangerNavModifierComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__ownerPlayer_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__ownerPlayer = { "_ownerPlayer", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _ownerPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__ownerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__ownerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__onIsTrapSetChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__onIsTrapSetChanged = { "_onIsTrapSetChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _onIsTrapSetChanged), Z_Construct_UDelegateFunction_TheTrapper_BearTrapOnIsTrapSetChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__onIsTrapSetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__onIsTrapSetChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__trapBlocker_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__trapBlocker = { "_trapBlocker", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _trapBlocker), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapBlocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorCollision_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorCollision = { "_mapActorCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _mapActorCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorComponent_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorComponent = { "_mapActorComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _mapActorComponent), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineUpdateStrategy_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineUpdateStrategy = { "_outlineUpdateStrategy", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _outlineUpdateStrategy), Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__killerSafetyZoneComponent_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__killerSafetyZoneComponent = { "_killerSafetyZoneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _killerSafetyZoneComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__killerSafetyZoneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__killerSafetyZoneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__trapPlayerDetectionZone_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__trapPlayerDetectionZone = { "_trapPlayerDetectionZone", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _trapPlayerDetectionZone), Z_Construct_UClass_UCapsulePlayerOverlapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapPlayerDetectionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__trapPlayerDetectionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrap_Statics::NewProp__interactionVolume_MetaData[] = {
		{ "Category", "BearTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABearTrap_Statics::NewProp__interactionVolume = { "_interactionVolume", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABearTrap, _interactionVolume), Z_Construct_UClass_UBoxPlayerOverlapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::NewProp__interactionVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::NewProp__interactionVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABearTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__animationMontageSlave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__trappedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__trapKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__trapSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__mainInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__selfUntrapAttemptsRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__maximumAttemptsForSelfUntrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__isTrapperOutOfSafetyZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__dangerNavModifierComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__ownerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__onIsTrapSetChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__trapBlocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__mapActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__killerSafetyZoneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__trapPlayerDetectionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrap_Statics::NewProp__interactionVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABearTrap_Statics::ClassParams = {
		&ABearTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABearTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABearTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABearTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABearTrap, 912900768);
	template<> THETRAPPER_API UClass* StaticClass<ABearTrap>()
	{
		return ABearTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABearTrap(Z_Construct_UClass_ABearTrap, &ABearTrap::StaticClass, TEXT("/Script/TheTrapper"), TEXT("ABearTrap"), false, nullptr, nullptr, nullptr);

	void ABearTrap::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__selfUntrapAttemptsRemaining(TEXT("_selfUntrapAttemptsRemaining"));

		const bool bIsValid = true
			&& Name__selfUntrapAttemptsRemaining == ClassReps[(int32)ENetFields_Private::_selfUntrapAttemptsRemaining].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABearTrap"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
