// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DemogorgonPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPortal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADemogorgonPortal::execAuthority_OnDestroyChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDestroyChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execAuthority_OnTeleportChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnTeleportChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execAuthority_StopDestroyingPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_StopDestroyingPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execIsTargeted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargeted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execMulticast_SurvivorsInterruptedOnDestroy)
	{
		P_GET_TARRAY(ADBDPlayer*,Z_Param_targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SurvivorsInterruptedOnDestroy_Implementation(Z_Param_targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execOnBeginOverlapPortalArea)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapPortalArea(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execOnEndOverlapPortalArea)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapPortalArea(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADemogorgonPortal::execOnPortalDestroyed)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPortalDestroyed(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_ADemogorgonPortal_MakePortalDisappearVFX = FName(TEXT("MakePortalDisappearVFX"));
	void ADemogorgonPortal::MakePortalDisappearVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_MakePortalDisappearVFX),NULL);
	}
	static FName NAME_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy = FName(TEXT("Multicast_SurvivorsInterruptedOnDestroy"));
	void ADemogorgonPortal::Multicast_SurvivorsInterruptedOnDestroy(TArray<ADBDPlayer*> const& targets)
	{
		DemogorgonPortal_eventMulticast_SurvivorsInterruptedOnDestroy_Parms Parms;
		Parms.targets=targets;
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy),&Parms);
	}
	static FName NAME_ADemogorgonPortal_OnPortalStateChanged = FName(TEXT("OnPortalStateChanged"));
	void ADemogorgonPortal::OnPortalStateChanged(EDemogorgonPortalState state)
	{
		DemogorgonPortal_eventOnPortalStateChanged_Parms Parms;
		Parms.state=state;
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_OnPortalStateChanged),&Parms);
	}
	static FName NAME_ADemogorgonPortal_OnTargetedChanged = FName(TEXT("OnTargetedChanged"));
	void ADemogorgonPortal::OnTargetedChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_OnTargetedChanged),NULL);
	}
	static FName NAME_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX = FName(TEXT("OnTeleportAbilityCooldownChangedVFX"));
	void ADemogorgonPortal::OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown)
	{
		DemogorgonPortal_eventOnTeleportAbilityCooldownChangedVFX_Parms Parms;
		Parms.isOnCooldown=isOnCooldown ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX),&Parms);
	}
	static FName NAME_ADemogorgonPortal_PlaySoundFromPortal = FName(TEXT("PlaySoundFromPortal"));
	void ADemogorgonPortal::PlaySoundFromPortal(UAkAudioEvent* soundEvent)
	{
		DemogorgonPortal_eventPlaySoundFromPortal_Parms Parms;
		Parms.soundEvent=soundEvent;
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_PlaySoundFromPortal),&Parms);
	}
	static FName NAME_ADemogorgonPortal_RemovePortalActiveVFX = FName(TEXT("RemovePortalActiveVFX"));
	void ADemogorgonPortal::RemovePortalActiveVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_RemovePortalActiveVFX),NULL);
	}
	static FName NAME_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX = FName(TEXT("RemovePortalTeleportInteractionStartVFX"));
	void ADemogorgonPortal::RemovePortalTeleportInteractionStartVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX),NULL);
	}
	static FName NAME_ADemogorgonPortal_ShowPortalActiveVFX = FName(TEXT("ShowPortalActiveVFX"));
	void ADemogorgonPortal::ShowPortalActiveVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_ShowPortalActiveVFX),NULL);
	}
	static FName NAME_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX = FName(TEXT("ShowPortalTeleportInteractionStartVFX"));
	void ADemogorgonPortal::ShowPortalTeleportInteractionStartVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX),NULL);
	}
	static FName NAME_ADemogorgonPortal_TriggerDirtExplosion = FName(TEXT("TriggerDirtExplosion"));
	void ADemogorgonPortal::TriggerDirtExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADemogorgonPortal_TriggerDirtExplosion),NULL);
	}
	void ADemogorgonPortal::StaticRegisterNativesADemogorgonPortal()
	{
		UClass* Class = ADemogorgonPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnDestroyChargePercentChanged", &ADemogorgonPortal::execAuthority_OnDestroyChargePercentChanged },
			{ "Authority_OnTeleportChargePercentChanged", &ADemogorgonPortal::execAuthority_OnTeleportChargePercentChanged },
			{ "Authority_StopDestroyingPlayers", &ADemogorgonPortal::execAuthority_StopDestroyingPlayers },
			{ "IsTargeted", &ADemogorgonPortal::execIsTargeted },
			{ "Multicast_SurvivorsInterruptedOnDestroy", &ADemogorgonPortal::execMulticast_SurvivorsInterruptedOnDestroy },
			{ "OnBeginOverlapPortalArea", &ADemogorgonPortal::execOnBeginOverlapPortalArea },
			{ "OnEndOverlapPortalArea", &ADemogorgonPortal::execOnEndOverlapPortalArea },
			{ "OnPortalDestroyed", &ADemogorgonPortal::execOnPortalDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics
	{
		struct DemogorgonPortal_eventAuthority_OnDestroyChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnDestroyChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnDestroyChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnDestroyChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "Authority_OnDestroyChargePercentChanged", nullptr, nullptr, sizeof(DemogorgonPortal_eventAuthority_OnDestroyChargePercentChanged_Parms), Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics
	{
		struct DemogorgonPortal_eventAuthority_OnTeleportChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnTeleportChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnTeleportChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventAuthority_OnTeleportChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "Authority_OnTeleportChargePercentChanged", nullptr, nullptr, sizeof(DemogorgonPortal_eventAuthority_OnTeleportChargePercentChanged_Parms), Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "Authority_StopDestroyingPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics
	{
		struct DemogorgonPortal_eventIsTargeted_Parms
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
	void Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DemogorgonPortal_eventIsTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemogorgonPortal_eventIsTargeted_Parms), &Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "IsTargeted", nullptr, nullptr, sizeof(DemogorgonPortal_eventIsTargeted_Parms), Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_IsTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_IsTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "MakePortalDisappearVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets = { "targets", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventMulticast_SurvivorsInterruptedOnDestroy_Parms, targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets_Inner = { "targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::NewProp_targets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "Multicast_SurvivorsInterruptedOnDestroy", nullptr, nullptr, sizeof(DemogorgonPortal_eventMulticast_SurvivorsInterruptedOnDestroy_Parms), Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics
	{
		struct DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms), &Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnBeginOverlapPortalArea", nullptr, nullptr, sizeof(DemogorgonPortal_eventOnBeginOverlapPortalArea_Parms), Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics
	{
		struct DemogorgonPortal_eventOnEndOverlapPortalArea_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnEndOverlapPortalArea_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnEndOverlapPortalArea_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnEndOverlapPortalArea_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnEndOverlapPortalArea_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnEndOverlapPortalArea", nullptr, nullptr, sizeof(DemogorgonPortal_eventOnEndOverlapPortalArea_Parms), Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics
	{
		struct DemogorgonPortal_eventOnPortalDestroyed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnPortalDestroyed_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnPortalDestroyed", nullptr, nullptr, sizeof(DemogorgonPortal_eventOnPortalDestroyed_Parms), Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventOnPortalStateChanged_Parms, state), Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnPortalStateChanged", nullptr, nullptr, sizeof(DemogorgonPortal_eventOnPortalStateChanged_Parms), Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnTargetedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics
	{
		static void NewProp_isOnCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::NewProp_isOnCooldown_SetBit(void* Obj)
	{
		((DemogorgonPortal_eventOnTeleportAbilityCooldownChangedVFX_Parms*)Obj)->isOnCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::NewProp_isOnCooldown = { "isOnCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemogorgonPortal_eventOnTeleportAbilityCooldownChangedVFX_Parms), &Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::NewProp_isOnCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::NewProp_isOnCooldown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "OnTeleportAbilityCooldownChangedVFX", nullptr, nullptr, sizeof(DemogorgonPortal_eventOnTeleportAbilityCooldownChangedVFX_Parms), Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_soundEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::NewProp_soundEvent = { "soundEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortal_eventPlaySoundFromPortal_Parms, soundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::NewProp_soundEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "PlaySoundFromPortal", nullptr, nullptr, sizeof(DemogorgonPortal_eventPlaySoundFromPortal_Parms), Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "RemovePortalActiveVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "RemovePortalTeleportInteractionStartVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "ShowPortalActiveVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "ShowPortalTeleportInteractionStartVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADemogorgonPortal, nullptr, "TriggerDirtExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister()
	{
		return ADemogorgonPortal::StaticClass();
	}
	struct Z_Construct_UClass_ADemogorgonPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__destroyDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__destroyParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalTeleportingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalTeleportingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalDestroyingStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalDestroyingStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalIdleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalIdleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__portalState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__portalState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__teleportChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__destroyChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalAreaCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalAreaCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemogorgonPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADemogorgonPortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADemogorgonPortal_Authority_OnDestroyChargePercentChanged, "Authority_OnDestroyChargePercentChanged" }, // 2740928975
		{ &Z_Construct_UFunction_ADemogorgonPortal_Authority_OnTeleportChargePercentChanged, "Authority_OnTeleportChargePercentChanged" }, // 2689553569
		{ &Z_Construct_UFunction_ADemogorgonPortal_Authority_StopDestroyingPlayers, "Authority_StopDestroyingPlayers" }, // 3713651943
		{ &Z_Construct_UFunction_ADemogorgonPortal_IsTargeted, "IsTargeted" }, // 47416667
		{ &Z_Construct_UFunction_ADemogorgonPortal_MakePortalDisappearVFX, "MakePortalDisappearVFX" }, // 865336359
		{ &Z_Construct_UFunction_ADemogorgonPortal_Multicast_SurvivorsInterruptedOnDestroy, "Multicast_SurvivorsInterruptedOnDestroy" }, // 2334496729
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnBeginOverlapPortalArea, "OnBeginOverlapPortalArea" }, // 3881044037
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnEndOverlapPortalArea, "OnEndOverlapPortalArea" }, // 2384485372
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnPortalDestroyed, "OnPortalDestroyed" }, // 2208955299
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnPortalStateChanged, "OnPortalStateChanged" }, // 1731511839
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnTargetedChanged, "OnTargetedChanged" }, // 4014834195
		{ &Z_Construct_UFunction_ADemogorgonPortal_OnTeleportAbilityCooldownChangedVFX, "OnTeleportAbilityCooldownChangedVFX" }, // 2051338717
		{ &Z_Construct_UFunction_ADemogorgonPortal_PlaySoundFromPortal, "PlaySoundFromPortal" }, // 870064673
		{ &Z_Construct_UFunction_ADemogorgonPortal_RemovePortalActiveVFX, "RemovePortalActiveVFX" }, // 3352528982
		{ &Z_Construct_UFunction_ADemogorgonPortal_RemovePortalTeleportInteractionStartVFX, "RemovePortalTeleportInteractionStartVFX" }, // 1439786745
		{ &Z_Construct_UFunction_ADemogorgonPortal_ShowPortalActiveVFX, "ShowPortalActiveVFX" }, // 280815305
		{ &Z_Construct_UFunction_ADemogorgonPortal_ShowPortalTeleportInteractionStartVFX, "ShowPortalTeleportInteractionStartVFX" }, // 3504551390
		{ &Z_Construct_UFunction_ADemogorgonPortal_TriggerDirtExplosion, "TriggerDirtExplosion" }, // 2639155998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPortal.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyDuration_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyDuration = { "_destroyDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _destroyDuration), METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyParticleSystem_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyParticleSystem = { "_destroyParticleSystem", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _destroyParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalTeleportingSound_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalTeleportingSound = { "_portalTeleportingSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _portalTeleportingSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalTeleportingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalTeleportingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalDestroyingStart_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalDestroyingStart = { "_portalDestroyingStart", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _portalDestroyingStart), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalDestroyingStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalDestroyingStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalIdleSound_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalIdleSound = { "_portalIdleSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _portalIdleSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalIdleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalIdleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState = { "_portalState", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _portalState), Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__teleportChargeable_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__teleportChargeable = { "_teleportChargeable", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _teleportChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__teleportChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__teleportChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyChargeable_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyChargeable = { "_destroyChargeable", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _destroyChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalAreaCollider_MetaData[] = {
		{ "Category", "DemogorgonPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DemogorgonPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalAreaCollider = { "_portalAreaCollider", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemogorgonPortal, _portalAreaCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalAreaCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalAreaCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemogorgonPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalTeleportingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalDestroyingStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalIdleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__teleportChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__destroyChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemogorgonPortal_Statics::NewProp__portalAreaCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemogorgonPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemogorgonPortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemogorgonPortal_Statics::ClassParams = {
		&ADemogorgonPortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADemogorgonPortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADemogorgonPortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemogorgonPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemogorgonPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemogorgonPortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemogorgonPortal, 3831169401);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADemogorgonPortal>()
	{
		return ADemogorgonPortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemogorgonPortal(Z_Construct_UClass_ADemogorgonPortal, &ADemogorgonPortal::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADemogorgonPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemogorgonPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
