// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/DeathBedInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathBedInteractable() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ADeathBedInteractable_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ADeathBedInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathBedAntiCampComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADeathBedInteractable::execActivateDeathBed)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateDeathBed(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execCanRescueSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRescueSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execGetInDeathBedCamper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetInDeathBedCamper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execGetMontagePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMontagePlayer**)Z_Param__Result=P_THIS->GetMontagePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execGetRescuerSnapPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRescuerSnapPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execMulticast_RelocateToOtherDeathBed)
	{
		P_GET_OBJECT(ADeathBedInteractable,Z_Param_deathBed);
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RelocateToOtherDeathBed_Implementation(Z_Param_deathBed,Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execOnDeathBedDeathEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathBedDeathEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execOnSkillCheckFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheckFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execPlayerOverlapZoneBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerOverlapZoneBeginOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execPlayerOverlapZoneEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerOverlapZoneEndOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execSetInDeathBedCamper)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInDeathBedCamper(Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeathBedInteractable::execTeleportCamperToDeathBed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportCamperToDeathBed();
		P_NATIVE_END;
	}
	static FName NAME_ADeathBedInteractable_DeathBedDisappear = FName(TEXT("DeathBedDisappear"));
	void ADeathBedInteractable::DeathBedDisappear()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_DeathBedDisappear),NULL);
	}
	static FName NAME_ADeathBedInteractable_FX_DeathBedAppear = FName(TEXT("FX_DeathBedAppear"));
	void ADeathBedInteractable::FX_DeathBedAppear()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_FX_DeathBedAppear),NULL);
	}
	static FName NAME_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed = FName(TEXT("FX_SurvivorSavedFromDeathBed"));
	void ADeathBedInteractable::FX_SurvivorSavedFromDeathBed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed),NULL);
	}
	static FName NAME_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed = FName(TEXT("Multicast_RelocateToOtherDeathBed"));
	void ADeathBedInteractable::Multicast_RelocateToOtherDeathBed(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer)
	{
		DeathBedInteractable_eventMulticast_RelocateToOtherDeathBed_Parms Parms;
		Parms.deathBed=deathBed;
		Parms.camperPlayer=camperPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed),&Parms);
	}
	static FName NAME_ADeathBedInteractable_OnRelocateStart_Cosmetic = FName(TEXT("OnRelocateStart_Cosmetic"));
	void ADeathBedInteractable::OnRelocateStart_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_OnRelocateStart_Cosmetic),NULL);
	}
	static FName NAME_ADeathBedInteractable_OnRescueCancelled = FName(TEXT("OnRescueCancelled"));
	void ADeathBedInteractable::OnRescueCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_OnRescueCancelled),NULL);
	}
	static FName NAME_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic = FName(TEXT("OnSkillCheckFailed_Cosmetic"));
	void ADeathBedInteractable::OnSkillCheckFailed_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic),NULL);
	}
	static FName NAME_ADeathBedInteractable_StartPlayerAbsorbedByGround = FName(TEXT("StartPlayerAbsorbedByGround"));
	void ADeathBedInteractable::StartPlayerAbsorbedByGround()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeathBedInteractable_StartPlayerAbsorbedByGround),NULL);
	}
	void ADeathBedInteractable::StaticRegisterNativesADeathBedInteractable()
	{
		UClass* Class = ADeathBedInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateDeathBed", &ADeathBedInteractable::execActivateDeathBed },
			{ "CanRescueSurvivor", &ADeathBedInteractable::execCanRescueSurvivor },
			{ "GetInDeathBedCamper", &ADeathBedInteractable::execGetInDeathBedCamper },
			{ "GetMontagePlayer", &ADeathBedInteractable::execGetMontagePlayer },
			{ "GetRescuerSnapPosition", &ADeathBedInteractable::execGetRescuerSnapPosition },
			{ "Multicast_RelocateToOtherDeathBed", &ADeathBedInteractable::execMulticast_RelocateToOtherDeathBed },
			{ "OnDeathBedDeathEnd", &ADeathBedInteractable::execOnDeathBedDeathEnd },
			{ "OnSkillCheckFailed", &ADeathBedInteractable::execOnSkillCheckFailed },
			{ "PlayerOverlapZoneBeginOverlap", &ADeathBedInteractable::execPlayerOverlapZoneBeginOverlap },
			{ "PlayerOverlapZoneEndOverlap", &ADeathBedInteractable::execPlayerOverlapZoneEndOverlap },
			{ "SetInDeathBedCamper", &ADeathBedInteractable::execSetInDeathBedCamper },
			{ "TeleportCamperToDeathBed", &ADeathBedInteractable::execTeleportCamperToDeathBed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics
	{
		struct DeathBedInteractable_eventActivateDeathBed_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value_SetBit(void* Obj)
	{
		((DeathBedInteractable_eventActivateDeathBed_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeathBedInteractable_eventActivateDeathBed_Parms), &Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "ActivateDeathBed", nullptr, nullptr, sizeof(DeathBedInteractable_eventActivateDeathBed_Parms), Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics
	{
		struct DeathBedInteractable_eventCanRescueSurvivor_Parms
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
	void Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeathBedInteractable_eventCanRescueSurvivor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeathBedInteractable_eventCanRescueSurvivor_Parms), &Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "CanRescueSurvivor", nullptr, nullptr, sizeof(DeathBedInteractable_eventCanRescueSurvivor_Parms), Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "DeathBedDisappear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "FX_DeathBedAppear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "FX_SurvivorSavedFromDeathBed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics
	{
		struct DeathBedInteractable_eventGetInDeathBedCamper_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventGetInDeathBedCamper_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "GetInDeathBedCamper", nullptr, nullptr, sizeof(DeathBedInteractable_eventGetInDeathBedCamper_Parms), Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics
	{
		struct DeathBedInteractable_eventGetMontagePlayer_Parms
		{
			UMontagePlayer* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventGetMontagePlayer_Parms, ReturnValue), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "GetMontagePlayer", nullptr, nullptr, sizeof(DeathBedInteractable_eventGetMontagePlayer_Parms), Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics
	{
		struct DeathBedInteractable_eventGetRescuerSnapPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventGetRescuerSnapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "GetRescuerSnapPosition", nullptr, nullptr, sizeof(DeathBedInteractable_eventGetRescuerSnapPosition_Parms), Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathBed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventMulticast_RelocateToOtherDeathBed_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::NewProp_deathBed = { "deathBed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventMulticast_RelocateToOtherDeathBed_Parms, deathBed), Z_Construct_UClass_ADeathBedInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::NewProp_camperPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::NewProp_deathBed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "Multicast_RelocateToOtherDeathBed", nullptr, nullptr, sizeof(DeathBedInteractable_eventMulticast_RelocateToOtherDeathBed_Parms), Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "OnDeathBedDeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "OnRelocateStart_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "OnRescueCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "OnSkillCheckFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "OnSkillCheckFailed_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics
	{
		struct DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms), &Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "PlayerOverlapZoneBeginOverlap", nullptr, nullptr, sizeof(DeathBedInteractable_eventPlayerOverlapZoneBeginOverlap_Parms), Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics
	{
		struct DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "PlayerOverlapZoneEndOverlap", nullptr, nullptr, sizeof(DeathBedInteractable_eventPlayerOverlapZoneEndOverlap_Parms), Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics
	{
		struct DeathBedInteractable_eventSetInDeathBedCamper_Parms
		{
			ACamperPlayer* camperPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedInteractable_eventSetInDeathBedCamper_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "SetInDeathBedCamper", nullptr, nullptr, sizeof(DeathBedInteractable_eventSetInDeathBedCamper_Parms), Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "StartPlayerAbsorbedByGround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathBedInteractable, nullptr, "TeleportCamperToDeathBed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADeathBedInteractable_NoRegister()
	{
		return ADeathBedInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ADeathBedInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perceptionStimuliComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perceptionStimuliComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anticampDrainCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__anticampDrainCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deathBedAnticampComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deathBedAnticampComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rescuerSnapPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rescuerSnapPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montageToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationMontageSlave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animationMontageSlave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deathBedCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deathBedCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerOverlapZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerOverlapZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deathBedSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deathBedSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rescueChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rescueChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inDeathBedCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inDeathBedCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathBedInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADeathBedInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeathBedInteractable_ActivateDeathBed, "ActivateDeathBed" }, // 884165636
		{ &Z_Construct_UFunction_ADeathBedInteractable_CanRescueSurvivor, "CanRescueSurvivor" }, // 554136148
		{ &Z_Construct_UFunction_ADeathBedInteractable_DeathBedDisappear, "DeathBedDisappear" }, // 1590817505
		{ &Z_Construct_UFunction_ADeathBedInteractable_FX_DeathBedAppear, "FX_DeathBedAppear" }, // 2083500360
		{ &Z_Construct_UFunction_ADeathBedInteractable_FX_SurvivorSavedFromDeathBed, "FX_SurvivorSavedFromDeathBed" }, // 3957256780
		{ &Z_Construct_UFunction_ADeathBedInteractable_GetInDeathBedCamper, "GetInDeathBedCamper" }, // 2739429021
		{ &Z_Construct_UFunction_ADeathBedInteractable_GetMontagePlayer, "GetMontagePlayer" }, // 2521650544
		{ &Z_Construct_UFunction_ADeathBedInteractable_GetRescuerSnapPosition, "GetRescuerSnapPosition" }, // 267335577
		{ &Z_Construct_UFunction_ADeathBedInteractable_Multicast_RelocateToOtherDeathBed, "Multicast_RelocateToOtherDeathBed" }, // 960360577
		{ &Z_Construct_UFunction_ADeathBedInteractable_OnDeathBedDeathEnd, "OnDeathBedDeathEnd" }, // 1524842030
		{ &Z_Construct_UFunction_ADeathBedInteractable_OnRelocateStart_Cosmetic, "OnRelocateStart_Cosmetic" }, // 1574927973
		{ &Z_Construct_UFunction_ADeathBedInteractable_OnRescueCancelled, "OnRescueCancelled" }, // 161236088
		{ &Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed, "OnSkillCheckFailed" }, // 724607510
		{ &Z_Construct_UFunction_ADeathBedInteractable_OnSkillCheckFailed_Cosmetic, "OnSkillCheckFailed_Cosmetic" }, // 670984289
		{ &Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneBeginOverlap, "PlayerOverlapZoneBeginOverlap" }, // 4181446635
		{ &Z_Construct_UFunction_ADeathBedInteractable_PlayerOverlapZoneEndOverlap, "PlayerOverlapZoneEndOverlap" }, // 1517374400
		{ &Z_Construct_UFunction_ADeathBedInteractable_SetInDeathBedCamper, "SetInDeathBedCamper" }, // 2127483865
		{ &Z_Construct_UFunction_ADeathBedInteractable_StartPlayerAbsorbedByGround, "StartPlayerAbsorbedByGround" }, // 1844087590
		{ &Z_Construct_UFunction_ADeathBedInteractable_TeleportCamperToDeathBed, "TeleportCamperToDeathBed" }, // 131685991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeathBedInteractable.h" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__perceptionStimuliComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__perceptionStimuliComponent = { "_perceptionStimuliComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _perceptionStimuliComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__perceptionStimuliComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__perceptionStimuliComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__anticampDrainCooldownTime_MetaData[] = {
		{ "Category", "DeathBedInteractable" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__anticampDrainCooldownTime = { "_anticampDrainCooldownTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _anticampDrainCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__anticampDrainCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__anticampDrainCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedAnticampComponent_MetaData[] = {
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedAnticampComponent = { "_deathBedAnticampComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _deathBedAnticampComponent), Z_Construct_UClass_UDeathBedAntiCampComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedAnticampComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedAnticampComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescuerSnapPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescuerSnapPosition = { "_rescuerSnapPosition", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _rescuerSnapPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescuerSnapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescuerSnapPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montageToPlay = { "_montageToPlay", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _montageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montageToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__animationMontageSlave_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__animationMontageSlave = { "_animationMontageSlave", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _animationMontageSlave), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__animationMontageSlave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__animationMontageSlave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedCollision_MetaData[] = {
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedCollision = { "_deathBedCollision", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _deathBedCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__playerOverlapZone_MetaData[] = {
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__playerOverlapZone = { "_playerOverlapZone", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _playerOverlapZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__playerOverlapZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__playerOverlapZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__interactionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__interactionZone = { "_interactionZone", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _interactionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__interactionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__interactionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedSkeletalMesh = { "_deathBedSkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _deathBedSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescueChargeableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescueChargeableComponent = { "_rescueChargeableComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _rescueChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescueChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescueChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__inDeathBedCamper_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__inDeathBedCamper = { "_inDeathBedCamper", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _inDeathBedCamper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__inDeathBedCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__inDeathBedCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__root_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DeathBedInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeathBedInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__root = { "_root", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathBedInteractable, _root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeathBedInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__perceptionStimuliComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__anticampDrainCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedAnticampComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescuerSnapPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__animationMontageSlave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__playerOverlapZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__interactionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__deathBedSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__rescueChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__inDeathBedCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathBedInteractable_Statics::NewProp__root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADeathBedInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ADeathBedInteractable, IAIInteractableTargetInterface), false },
			{ Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ADeathBedInteractable, IAIPointOfInterestTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathBedInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathBedInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathBedInteractable_Statics::ClassParams = {
		&ADeathBedInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADeathBedInteractable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeathBedInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathBedInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathBedInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathBedInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathBedInteractable, 2269000477);
	template<> THEEXECUTIONER_API UClass* StaticClass<ADeathBedInteractable>()
	{
		return ADeathBedInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathBedInteractable(Z_Construct_UClass_ADeathBedInteractable, &ADeathBedInteractable::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ADeathBedInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathBedInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
