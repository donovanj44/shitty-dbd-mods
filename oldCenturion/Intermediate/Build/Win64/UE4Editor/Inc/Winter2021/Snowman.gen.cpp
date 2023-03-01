// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/Snowman.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowman() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_ASnowman_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_ASnowman();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WINTER2021_API UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnData();
	WINTER2021_API UEnum* Z_Construct_UEnum_Winter2021_ESnowmanDestructionType();
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanAttackableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_UHideInSnowmanInteraction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	WINTER2021_API UEnum* Z_Construct_UEnum_Winter2021_ESnowmanState();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(ASnowman::execMulticast_DrawDebugCollisionCheck)
	{
		P_GET_STRUCT(FVector,Z_Param_boxExtent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_debugLifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DrawDebugCollisionCheck_Implementation(Z_Param_boxExtent,Z_Param_debugLifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_OnSnowmanStartBeingControlledBySurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivorUsingSnowman);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSnowmanStartBeingControlledBySurvivor_Implementation(Z_Param_survivorUsingSnowman);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_OnSnowmanStartBeingUsedBySurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivorUsingSnowman);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSnowmanStartBeingUsedBySurvivor_Implementation(Z_Param_survivorUsingSnowman);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_SetSnowmanHiddenInGame)
	{
		P_GET_UBOOL(Z_Param_isHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSnowmanHiddenInGame_Implementation(Z_Param_isHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_SetSnowmanMaterialVariant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_materialVariantIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSnowmanMaterialVariant_Implementation(Z_Param_materialVariantIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_SpawnSnowman)
	{
		P_GET_STRUCT(FSnowmanSpawnData,Z_Param_spawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SpawnSnowman_Implementation(Z_Param_spawnData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execMulticast_StartSnowmanDestruction)
	{
		P_GET_ENUM(ESnowmanDestructionType,Z_Param_snowmanDestructionType);
		P_GET_UBOOL(Z_Param_unlockRequirementsSatisfiedForSurvivor);
		P_GET_UBOOL(Z_Param_unlockRequirementsSatisfiedForKiller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartSnowmanDestruction_Implementation(ESnowmanDestructionType(Z_Param_snowmanDestructionType),Z_Param_unlockRequirementsSatisfiedForSurvivor,Z_Param_unlockRequirementsSatisfiedForKiller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execOnRep_IsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execOnRep_SnowmanDestructionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SnowmanDestructionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execOnRep_SnowmanState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SnowmanState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnowman::execOnRep_SurvivorUsingSnowman)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SurvivorUsingSnowman();
		P_NATIVE_END;
	}
	static FName NAME_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller = FName(TEXT("Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller"));
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(ASlasherPlayer* killerAttackingSnowman)
	{
		Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Parms Parms;
		Parms.killerAttackingSnowman=killerAttackingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor = FName(TEXT("Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor"));
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled = FName(TEXT("Cosmetic_OnSnowmanDestroyedByAttackWhileControlled"));
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(ACamperPlayer* survivorUsingSnowman, ASlasherPlayer* killerAttackingSnowman)
	{
		Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileControlled_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		Parms.killerAttackingSnowman=killerAttackingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty = FName(TEXT("Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty"));
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(ASlasherPlayer* killerAttackingSnowman)
	{
		Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Parms Parms;
		Parms.killerAttackingSnowman=killerAttackingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit = FName(TEXT("Cosmetic_OnSnowmanDestroyedBySurvivorRunExit"));
	void ASnowman::Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventCosmetic_OnSnowmanDestroyedBySurvivorRunExit_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanSpawned = FName(TEXT("Cosmetic_OnSnowmanSpawned"));
	void ASnowman::Cosmetic_OnSnowmanSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanSpawned),NULL);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor = FName(TEXT("Cosmetic_OnSnowmanStartBeingControlledBySurvivor"));
	void ASnowman::Cosmetic_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventCosmetic_OnSnowmanStartBeingControlledBySurvivor_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor = FName(TEXT("Cosmetic_OnSnowmanStartBeingUsedBySurvivor"));
	void ASnowman::Cosmetic_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventCosmetic_OnSnowmanStartBeingUsedBySurvivor_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor),&Parms);
	}
	static FName NAME_ASnowman_Cosmetic_SetSnowmanMaterialVariant = FName(TEXT("Cosmetic_SetSnowmanMaterialVariant"));
	void ASnowman::Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex)
	{
		Snowman_eventCosmetic_SetSnowmanMaterialVariant_Parms Parms;
		Parms.materialVariantIndex=materialVariantIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Cosmetic_SetSnowmanMaterialVariant),&Parms);
	}
	static FName NAME_ASnowman_Multicast_DrawDebugCollisionCheck = FName(TEXT("Multicast_DrawDebugCollisionCheck"));
	void ASnowman::Multicast_DrawDebugCollisionCheck(FVector boxExtent, float debugLifetime) const
	{
		Snowman_eventMulticast_DrawDebugCollisionCheck_Parms Parms;
		Parms.boxExtent=boxExtent;
		Parms.debugLifetime=debugLifetime;
		const_cast<ASnowman*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_DrawDebugCollisionCheck),&Parms);
	}
	static FName NAME_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor = FName(TEXT("Multicast_OnSnowmanStartBeingControlledBySurvivor"));
	void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventMulticast_OnSnowmanStartBeingControlledBySurvivor_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor),&Parms);
	}
	static FName NAME_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor = FName(TEXT("Multicast_OnSnowmanStartBeingUsedBySurvivor"));
	void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman)
	{
		Snowman_eventMulticast_OnSnowmanStartBeingUsedBySurvivor_Parms Parms;
		Parms.survivorUsingSnowman=survivorUsingSnowman;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor),&Parms);
	}
	static FName NAME_ASnowman_Multicast_SetSnowmanHiddenInGame = FName(TEXT("Multicast_SetSnowmanHiddenInGame"));
	void ASnowman::Multicast_SetSnowmanHiddenInGame(bool isHidden)
	{
		Snowman_eventMulticast_SetSnowmanHiddenInGame_Parms Parms;
		Parms.isHidden=isHidden ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_SetSnowmanHiddenInGame),&Parms);
	}
	static FName NAME_ASnowman_Multicast_SetSnowmanMaterialVariant = FName(TEXT("Multicast_SetSnowmanMaterialVariant"));
	void ASnowman::Multicast_SetSnowmanMaterialVariant(const int32 materialVariantIndex)
	{
		Snowman_eventMulticast_SetSnowmanMaterialVariant_Parms Parms;
		Parms.materialVariantIndex=materialVariantIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_SetSnowmanMaterialVariant),&Parms);
	}
	static FName NAME_ASnowman_Multicast_SpawnSnowman = FName(TEXT("Multicast_SpawnSnowman"));
	void ASnowman::Multicast_SpawnSnowman(FSnowmanSpawnData spawnData)
	{
		Snowman_eventMulticast_SpawnSnowman_Parms Parms;
		Parms.spawnData=spawnData;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_SpawnSnowman),&Parms);
	}
	static FName NAME_ASnowman_Multicast_StartSnowmanDestruction = FName(TEXT("Multicast_StartSnowmanDestruction"));
	void ASnowman::Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller)
	{
		Snowman_eventMulticast_StartSnowmanDestruction_Parms Parms;
		Parms.snowmanDestructionType=snowmanDestructionType;
		Parms.unlockRequirementsSatisfiedForSurvivor=unlockRequirementsSatisfiedForSurvivor ? true : false;
		Parms.unlockRequirementsSatisfiedForKiller=unlockRequirementsSatisfiedForKiller ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASnowman_Multicast_StartSnowmanDestruction),&Parms);
	}
	void ASnowman::StaticRegisterNativesASnowman()
	{
		UClass* Class = ASnowman::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DrawDebugCollisionCheck", &ASnowman::execMulticast_DrawDebugCollisionCheck },
			{ "Multicast_OnSnowmanStartBeingControlledBySurvivor", &ASnowman::execMulticast_OnSnowmanStartBeingControlledBySurvivor },
			{ "Multicast_OnSnowmanStartBeingUsedBySurvivor", &ASnowman::execMulticast_OnSnowmanStartBeingUsedBySurvivor },
			{ "Multicast_SetSnowmanHiddenInGame", &ASnowman::execMulticast_SetSnowmanHiddenInGame },
			{ "Multicast_SetSnowmanMaterialVariant", &ASnowman::execMulticast_SetSnowmanMaterialVariant },
			{ "Multicast_SpawnSnowman", &ASnowman::execMulticast_SpawnSnowman },
			{ "Multicast_StartSnowmanDestruction", &ASnowman::execMulticast_StartSnowmanDestruction },
			{ "OnRep_IsMoving", &ASnowman::execOnRep_IsMoving },
			{ "OnRep_SnowmanDestructionType", &ASnowman::execOnRep_SnowmanDestructionType },
			{ "OnRep_SnowmanState", &ASnowman::execOnRep_SnowmanState },
			{ "OnRep_SurvivorUsingSnowman", &ASnowman::execOnRep_SurvivorUsingSnowman },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerAttackingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::NewProp_killerAttackingSnowman = { "killerAttackingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Parms, killerAttackingSnowman), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::NewProp_killerAttackingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerAttackingSnowman;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::NewProp_killerAttackingSnowman = { "killerAttackingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileControlled_Parms, killerAttackingSnowman), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileControlled_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::NewProp_killerAttackingSnowman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanDestroyedByAttackWhileControlled", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileControlled_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerAttackingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::NewProp_killerAttackingSnowman = { "killerAttackingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Parms, killerAttackingSnowman), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::NewProp_killerAttackingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanDestroyedBySurvivorRunExit_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanDestroyedBySurvivorRunExit", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnSnowmanDestroyedBySurvivorRunExit_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanStartBeingControlledBySurvivor_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanStartBeingControlledBySurvivor", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnSnowmanStartBeingControlledBySurvivor_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_OnSnowmanStartBeingUsedBySurvivor_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_OnSnowmanStartBeingUsedBySurvivor", nullptr, nullptr, sizeof(Snowman_eventCosmetic_OnSnowmanStartBeingUsedBySurvivor_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialVariantIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialVariantIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex = { "materialVariantIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventCosmetic_SetSnowmanMaterialVariant_Parms, materialVariantIndex), METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Cosmetic_SetSnowmanMaterialVariant", nullptr, nullptr, sizeof(Snowman_eventCosmetic_SetSnowmanMaterialVariant_Parms), Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_debugLifetime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boxExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::NewProp_debugLifetime = { "debugLifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_DrawDebugCollisionCheck_Parms, debugLifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::NewProp_boxExtent = { "boxExtent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_DrawDebugCollisionCheck_Parms, boxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::NewProp_debugLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::NewProp_boxExtent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_DrawDebugCollisionCheck", nullptr, nullptr, sizeof(Snowman_eventMulticast_DrawDebugCollisionCheck_Parms), Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_OnSnowmanStartBeingControlledBySurvivor_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_OnSnowmanStartBeingControlledBySurvivor", nullptr, nullptr, sizeof(Snowman_eventMulticast_OnSnowmanStartBeingControlledBySurvivor_Parms), Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorUsingSnowman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::NewProp_survivorUsingSnowman = { "survivorUsingSnowman", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_OnSnowmanStartBeingUsedBySurvivor_Parms, survivorUsingSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::NewProp_survivorUsingSnowman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_OnSnowmanStartBeingUsedBySurvivor", nullptr, nullptr, sizeof(Snowman_eventMulticast_OnSnowmanStartBeingUsedBySurvivor_Parms), Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics
	{
		static void NewProp_isHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::NewProp_isHidden_SetBit(void* Obj)
	{
		((Snowman_eventMulticast_SetSnowmanHiddenInGame_Parms*)Obj)->isHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::NewProp_isHidden = { "isHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Snowman_eventMulticast_SetSnowmanHiddenInGame_Parms), &Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::NewProp_isHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::NewProp_isHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_SetSnowmanHiddenInGame", nullptr, nullptr, sizeof(Snowman_eventMulticast_SetSnowmanHiddenInGame_Parms), Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialVariantIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialVariantIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex = { "materialVariantIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_SetSnowmanMaterialVariant_Parms, materialVariantIndex), METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::NewProp_materialVariantIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_SetSnowmanMaterialVariant", nullptr, nullptr, sizeof(Snowman_eventMulticast_SetSnowmanMaterialVariant_Parms), Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::NewProp_spawnData = { "spawnData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_SpawnSnowman_Parms, spawnData), Z_Construct_UScriptStruct_FSnowmanSpawnData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::NewProp_spawnData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_SpawnSnowman", nullptr, nullptr, sizeof(Snowman_eventMulticast_SpawnSnowman_Parms), Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics
	{
		static void NewProp_unlockRequirementsSatisfiedForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_unlockRequirementsSatisfiedForKiller;
		static void NewProp_unlockRequirementsSatisfiedForSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_unlockRequirementsSatisfiedForSurvivor;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_snowmanDestructionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_snowmanDestructionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForKiller_SetBit(void* Obj)
	{
		((Snowman_eventMulticast_StartSnowmanDestruction_Parms*)Obj)->unlockRequirementsSatisfiedForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForKiller = { "unlockRequirementsSatisfiedForKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Snowman_eventMulticast_StartSnowmanDestruction_Parms), &Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForKiller_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForSurvivor_SetBit(void* Obj)
	{
		((Snowman_eventMulticast_StartSnowmanDestruction_Parms*)Obj)->unlockRequirementsSatisfiedForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForSurvivor = { "unlockRequirementsSatisfiedForSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Snowman_eventMulticast_StartSnowmanDestruction_Parms), &Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForSurvivor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_snowmanDestructionType = { "snowmanDestructionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Snowman_eventMulticast_StartSnowmanDestruction_Parms, snowmanDestructionType), Z_Construct_UEnum_Winter2021_ESnowmanDestructionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_snowmanDestructionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_unlockRequirementsSatisfiedForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_snowmanDestructionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::NewProp_snowmanDestructionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "Multicast_StartSnowmanDestruction", nullptr, nullptr, sizeof(Snowman_eventMulticast_StartSnowmanDestruction_Parms), Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "OnRep_IsMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_OnRep_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_OnRep_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "OnRep_SnowmanDestructionType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "OnRep_SnowmanState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_OnRep_SnowmanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_OnRep_SnowmanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowman, nullptr, "OnRep_SurvivorUsingSnowman", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnowman_NoRegister()
	{
		return ASnowman::StaticClass();
	}
	struct Z_Construct_UClass_ASnowman_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isMoving_MetaData[];
#endif
		static void NewProp__isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAcquiredFromPool_MetaData[];
#endif
		static void NewProp__isAcquiredFromPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAcquiredFromPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanAttackableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanAttackableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideInSnowmanInteractionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hideInSnowmanInteractionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideInSnowmanInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hideInSnowmanInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanOutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanOutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__snowmanSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorUsingThisSnowman_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorUsingThisSnowman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanDestructionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__snowmanDestructionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__snowmanDestructionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snowmanState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__snowmanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__snowmanState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeToBeDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeToBeDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeToRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeToRespawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnowman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARespawnableInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnowman_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller, "Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller" }, // 1082623184
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor, "Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor" }, // 3133279957
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled, "Cosmetic_OnSnowmanDestroyedByAttackWhileControlled" }, // 437115624
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty, "Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty" }, // 1402165620
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit, "Cosmetic_OnSnowmanDestroyedBySurvivorRunExit" }, // 155318184
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanSpawned, "Cosmetic_OnSnowmanSpawned" }, // 814001349
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor, "Cosmetic_OnSnowmanStartBeingControlledBySurvivor" }, // 2747893551
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor, "Cosmetic_OnSnowmanStartBeingUsedBySurvivor" }, // 129155468
		{ &Z_Construct_UFunction_ASnowman_Cosmetic_SetSnowmanMaterialVariant, "Cosmetic_SetSnowmanMaterialVariant" }, // 3145832156
		{ &Z_Construct_UFunction_ASnowman_Multicast_DrawDebugCollisionCheck, "Multicast_DrawDebugCollisionCheck" }, // 1494812845
		{ &Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor, "Multicast_OnSnowmanStartBeingControlledBySurvivor" }, // 2249481028
		{ &Z_Construct_UFunction_ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor, "Multicast_OnSnowmanStartBeingUsedBySurvivor" }, // 2220832762
		{ &Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanHiddenInGame, "Multicast_SetSnowmanHiddenInGame" }, // 2368032533
		{ &Z_Construct_UFunction_ASnowman_Multicast_SetSnowmanMaterialVariant, "Multicast_SetSnowmanMaterialVariant" }, // 1701389393
		{ &Z_Construct_UFunction_ASnowman_Multicast_SpawnSnowman, "Multicast_SpawnSnowman" }, // 1418080625
		{ &Z_Construct_UFunction_ASnowman_Multicast_StartSnowmanDestruction, "Multicast_StartSnowmanDestruction" }, // 1983494991
		{ &Z_Construct_UFunction_ASnowman_OnRep_IsMoving, "OnRep_IsMoving" }, // 3841766436
		{ &Z_Construct_UFunction_ASnowman_OnRep_SnowmanDestructionType, "OnRep_SnowmanDestructionType" }, // 2491091887
		{ &Z_Construct_UFunction_ASnowman_OnRep_SnowmanState, "OnRep_SnowmanState" }, // 926274689
		{ &Z_Construct_UFunction_ASnowman_OnRep_SurvivorUsingSnowman, "OnRep_SurvivorUsingSnowman" }, // 882653002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Snowman.h" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	void Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving_SetBit(void* Obj)
	{
		((ASnowman*)Obj)->_isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving = { "_isMoving", "OnRep_IsMoving", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASnowman), &Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	void Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool_SetBit(void* Obj)
	{
		((ASnowman*)Obj)->_isAcquiredFromPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool = { "_isAcquiredFromPool", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASnowman), &Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanAttackableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanAttackableComponent = { "_snowmanAttackableComponent", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanAttackableComponent), Z_Construct_UClass_USnowmanAttackableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanAttackableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanAttackableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractionZone = { "_snowmanInteractionZone", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanInteractionZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractor = { "_snowmanInteractor", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteractionChargeable_MetaData[] = {
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteractionChargeable = { "_hideInSnowmanInteractionChargeable", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _hideInSnowmanInteractionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteractionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteractionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteraction = { "_hideInSnowmanInteraction", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _hideInSnowmanInteraction), Z_Construct_UClass_UHideInSnowmanInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanCapsule = { "_snowmanCapsule", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanOutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanOutlineComponent = { "_snowmanOutlineComponent", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanOutlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanOutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanOutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Snowman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanSkeletalMesh = { "_snowmanSkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__survivorUsingThisSnowman_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__survivorUsingThisSnowman = { "_survivorUsingThisSnowman", "OnRep_SurvivorUsingSnowman", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _survivorUsingThisSnowman), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__survivorUsingThisSnowman_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__survivorUsingThisSnowman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType = { "_snowmanDestructionType", "OnRep_SnowmanDestructionType", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanDestructionType), Z_Construct_UEnum_Winter2021_ESnowmanDestructionType, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState = { "_snowmanState", "OnRep_SnowmanState", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _snowmanState), Z_Construct_UEnum_Winter2021_ESnowmanState, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__timeToBeDestroyed_MetaData[] = {
		{ "Category", "Snowman" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__timeToBeDestroyed = { "_timeToBeDestroyed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _timeToBeDestroyed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__timeToBeDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__timeToBeDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowman_Statics::NewProp__timeToRespawn_MetaData[] = {
		{ "Category", "Snowman" },
		{ "ModuleRelativePath", "Public/Snowman.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnowman_Statics::NewProp__timeToRespawn = { "_timeToRespawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowman, _timeToRespawn), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::NewProp__timeToRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::NewProp__timeToRespawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnowman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__isAcquiredFromPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanAttackableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteractionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__hideInSnowmanInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanOutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__survivorUsingThisSnowman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanDestructionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__snowmanState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__timeToBeDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowman_Statics::NewProp__timeToRespawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnowman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnowman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnowman_Statics::ClassParams = {
		&ASnowman::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnowman_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnowman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnowman()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnowman_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnowman, 2330092352);
	template<> WINTER2021_API UClass* StaticClass<ASnowman>()
	{
		return ASnowman::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnowman(Z_Construct_UClass_ASnowman, &ASnowman::StaticClass, TEXT("/Script/Winter2021"), TEXT("ASnowman"), false, nullptr, nullptr, nullptr);

	void ASnowman::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__snowmanState(TEXT("_snowmanState"));
		static const FName Name__snowmanDestructionType(TEXT("_snowmanDestructionType"));
		static const FName Name__survivorUsingThisSnowman(TEXT("_survivorUsingThisSnowman"));
		static const FName Name__isMoving(TEXT("_isMoving"));

		const bool bIsValid = true
			&& Name__snowmanState == ClassReps[(int32)ENetFields_Private::_snowmanState].Property->GetFName()
			&& Name__snowmanDestructionType == ClassReps[(int32)ENetFields_Private::_snowmanDestructionType].Property->GetFName()
			&& Name__survivorUsingThisSnowman == ClassReps[(int32)ENetFields_Private::_survivorUsingThisSnowman].Property->GetFName()
			&& Name__isMoving == ClassReps[(int32)ENetFields_Private::_isMoving].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASnowman"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnowman);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
