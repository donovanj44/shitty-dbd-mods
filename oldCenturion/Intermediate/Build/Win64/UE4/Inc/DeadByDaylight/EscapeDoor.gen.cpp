// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeDoor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeBlocker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeDoorAnimInstance_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEscapeDoor::execAuthority_SetEscapeBlocker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetEscapeBlocker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execGetAtlantaExitOpeningIndicatorVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAtlantaExitOpeningIndicatorVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execGetDoorSkeletalMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetDoorSkeletalMeshComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execGetIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execGetOpenTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOpenTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execGetParadiseServerLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetParadiseServerLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execIsActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execIsDoorSwitchBlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoorSwitchBlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnCamperStartOpeningExitGate)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperStartOpeningExitGate(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnEscapeZoneBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscapeZoneBeginOverlap(Z_Param_overlappingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnEscapeZoneEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscapeZoneEndOverlap(Z_Param_overlappingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnExitGateOpened)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitGateOpened(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnPlayerEnterExitArea)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnterExitArea(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnPlayerExitExitArea)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerExitExitArea(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnRep_Activated)
	{
		P_GET_UBOOL(Z_Param_oldActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Activated(Z_Param_oldActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execOnRep_OnEscapeBlockerSet)
	{
		P_GET_OBJECT(AEscapeBlocker,Z_Param_escapeBlockerInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OnEscapeBlockerSet(Z_Param_escapeBlockerInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execSetIsActivated)
	{
		P_GET_UBOOL(Z_Param_NewIsActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsActivated(Z_Param_NewIsActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execStartAtlantaDoorBeepingSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAtlantaDoorBeepingSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEscapeDoor::execStartAtlantaDoorOpeningSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAtlantaDoorOpeningSound();
		P_NATIVE_END;
	}
	static FName NAME_AEscapeDoor_GetDoorSkeletalMeshComponent = FName(TEXT("GetDoorSkeletalMeshComponent"));
	USkeletalMeshComponent* AEscapeDoor::GetDoorSkeletalMeshComponent() const
	{
		EscapeDoor_eventGetDoorSkeletalMeshComponent_Parms Parms;
		const_cast<AEscapeDoor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetDoorSkeletalMeshComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_GetEscapeSwitchFloorLocation = FName(TEXT("GetEscapeSwitchFloorLocation"));
	FVector AEscapeDoor::GetEscapeSwitchFloorLocation() const
	{
		EscapeDoor_eventGetEscapeSwitchFloorLocation_Parms Parms;
		const_cast<AEscapeDoor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetEscapeSwitchFloorLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_GetExitArea = FName(TEXT("GetExitArea"));
	UBoxComponent* AEscapeDoor::GetExitArea() const
	{
		EscapeDoor_eventGetExitArea_Parms Parms;
		const_cast<AEscapeDoor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetExitArea),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_GetOpenEscapeInteraction = FName(TEXT("GetOpenEscapeInteraction"));
	UChargeableInteractionDefinition* AEscapeDoor::GetOpenEscapeInteraction()
	{
		EscapeDoor_eventGetOpenEscapeInteraction_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetOpenEscapeInteraction),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_GetParadiseServerLocation = FName(TEXT("GetParadiseServerLocation"));
	FVector AEscapeDoor::GetParadiseServerLocation() const
	{
		EscapeDoor_eventGetParadiseServerLocation_Parms Parms;
		const_cast<AEscapeDoor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetParadiseServerLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_GetSwitchSceneComponent = FName(TEXT("GetSwitchSceneComponent"));
	USceneComponent* AEscapeDoor::GetSwitchSceneComponent() const
	{
		EscapeDoor_eventGetSwitchSceneComponent_Parms Parms;
		const_cast<AEscapeDoor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_GetSwitchSceneComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEscapeDoor_LightAllLights = FName(TEXT("LightAllLights"));
	void AEscapeDoor::LightAllLights()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_LightAllLights),NULL);
	}
	static FName NAME_AEscapeDoor_OnBlockDoorSwitchCosmetic = FName(TEXT("OnBlockDoorSwitchCosmetic"));
	void AEscapeDoor::OnBlockDoorSwitchCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_OnBlockDoorSwitchCosmetic),NULL);
	}
	static FName NAME_AEscapeDoor_OnExitActivationChanged = FName(TEXT("OnExitActivationChanged"));
	void AEscapeDoor::OnExitActivationChanged(bool activated)
	{
		EscapeDoor_eventOnExitActivationChanged_Parms Parms;
		Parms.activated=activated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_OnExitActivationChanged),&Parms);
	}
	static FName NAME_AEscapeDoor_OnExitOpenChanged = FName(TEXT("OnExitOpenChanged"));
	void AEscapeDoor::OnExitOpenChanged(bool opened)
	{
		EscapeDoor_eventOnExitOpenChanged_Parms Parms;
		Parms.opened=opened ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_OnExitOpenChanged),&Parms);
	}
	static FName NAME_AEscapeDoor_OnUnblockDoorSwitchCosmetic = FName(TEXT("OnUnblockDoorSwitchCosmetic"));
	void AEscapeDoor::OnUnblockDoorSwitchCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEscapeDoor_OnUnblockDoorSwitchCosmetic),NULL);
	}
	void AEscapeDoor::StaticRegisterNativesAEscapeDoor()
	{
		UClass* Class = AEscapeDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SetEscapeBlocker", &AEscapeDoor::execAuthority_SetEscapeBlocker },
			{ "GetAtlantaExitOpeningIndicatorVisibility", &AEscapeDoor::execGetAtlantaExitOpeningIndicatorVisibility },
			{ "GetDoorSkeletalMeshComponent", &AEscapeDoor::execGetDoorSkeletalMeshComponent },
			{ "GetIsOpen", &AEscapeDoor::execGetIsOpen },
			{ "GetOpenTime", &AEscapeDoor::execGetOpenTime },
			{ "GetParadiseServerLocation", &AEscapeDoor::execGetParadiseServerLocation },
			{ "IsActivated", &AEscapeDoor::execIsActivated },
			{ "IsDoorSwitchBlocked", &AEscapeDoor::execIsDoorSwitchBlocked },
			{ "OnCamperStartOpeningExitGate", &AEscapeDoor::execOnCamperStartOpeningExitGate },
			{ "OnEscapeZoneBeginOverlap", &AEscapeDoor::execOnEscapeZoneBeginOverlap },
			{ "OnEscapeZoneEndOverlap", &AEscapeDoor::execOnEscapeZoneEndOverlap },
			{ "OnExitGateOpened", &AEscapeDoor::execOnExitGateOpened },
			{ "OnPlayerEnterExitArea", &AEscapeDoor::execOnPlayerEnterExitArea },
			{ "OnPlayerExitExitArea", &AEscapeDoor::execOnPlayerExitExitArea },
			{ "OnRep_Activated", &AEscapeDoor::execOnRep_Activated },
			{ "OnRep_OnEscapeBlockerSet", &AEscapeDoor::execOnRep_OnEscapeBlockerSet },
			{ "SetIsActivated", &AEscapeDoor::execSetIsActivated },
			{ "StartAtlantaDoorBeepingSound", &AEscapeDoor::execStartAtlantaDoorBeepingSound },
			{ "StartAtlantaDoorOpeningSound", &AEscapeDoor::execStartAtlantaDoorOpeningSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "Authority_SetEscapeBlocker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics
	{
		struct EscapeDoor_eventGetAtlantaExitOpeningIndicatorVisibility_Parms
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
	void Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeDoor_eventGetAtlantaExitOpeningIndicatorVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventGetAtlantaExitOpeningIndicatorVisibility_Parms), &Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetAtlantaExitOpeningIndicatorVisibility", nullptr, nullptr, sizeof(EscapeDoor_eventGetAtlantaExitOpeningIndicatorVisibility_Parms), Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetDoorSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetDoorSkeletalMeshComponent", nullptr, nullptr, sizeof(EscapeDoor_eventGetDoorSkeletalMeshComponent_Parms), Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetEscapeSwitchFloorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetEscapeSwitchFloorLocation", nullptr, nullptr, sizeof(EscapeDoor_eventGetEscapeSwitchFloorLocation_Parms), Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetExitArea_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetExitArea", nullptr, nullptr, sizeof(EscapeDoor_eventGetExitArea_Parms), Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics
	{
		struct EscapeDoor_eventGetIsOpen_Parms
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
	void Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeDoor_eventGetIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventGetIsOpen_Parms), &Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetIsOpen", nullptr, nullptr, sizeof(EscapeDoor_eventGetIsOpen_Parms), Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetOpenEscapeInteraction_Parms, ReturnValue), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetOpenEscapeInteraction", nullptr, nullptr, sizeof(EscapeDoor_eventGetOpenEscapeInteraction_Parms), Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics
	{
		struct EscapeDoor_eventGetOpenTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetOpenTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetOpenTime", nullptr, nullptr, sizeof(EscapeDoor_eventGetOpenTime_Parms), Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetOpenTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetOpenTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetParadiseServerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetParadiseServerLocation", nullptr, nullptr, sizeof(EscapeDoor_eventGetParadiseServerLocation_Parms), Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventGetSwitchSceneComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "GetSwitchSceneComponent", nullptr, nullptr, sizeof(EscapeDoor_eventGetSwitchSceneComponent_Parms), Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics
	{
		struct EscapeDoor_eventIsActivated_Parms
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
	void Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeDoor_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventIsActivated_Parms), &Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "IsActivated", nullptr, nullptr, sizeof(EscapeDoor_eventIsActivated_Parms), Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics
	{
		struct EscapeDoor_eventIsDoorSwitchBlocked_Parms
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
	void Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EscapeDoor_eventIsDoorSwitchBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventIsDoorSwitchBlocked_Parms), &Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "IsDoorSwitchBlocked", nullptr, nullptr, sizeof(EscapeDoor_eventIsDoorSwitchBlocked_Parms), Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "LightAllLights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_LightAllLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_LightAllLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnBlockDoorSwitchCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics
	{
		struct EscapeDoor_eventOnCamperStartOpeningExitGate_Parms
		{
			ACamperPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnCamperStartOpeningExitGate_Parms, player), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnCamperStartOpeningExitGate", nullptr, nullptr, sizeof(EscapeDoor_eventOnCamperStartOpeningExitGate_Parms), Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics
	{
		struct EscapeDoor_eventOnEscapeZoneBeginOverlap_Parms
		{
			AActor* overlappingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::NewProp_overlappingActor = { "overlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnEscapeZoneBeginOverlap_Parms, overlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::NewProp_overlappingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnEscapeZoneBeginOverlap", nullptr, nullptr, sizeof(EscapeDoor_eventOnEscapeZoneBeginOverlap_Parms), Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics
	{
		struct EscapeDoor_eventOnEscapeZoneEndOverlap_Parms
		{
			AActor* overlappingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::NewProp_overlappingActor = { "overlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnEscapeZoneEndOverlap_Parms, overlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::NewProp_overlappingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnEscapeZoneEndOverlap", nullptr, nullptr, sizeof(EscapeDoor_eventOnEscapeZoneEndOverlap_Parms), Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics
	{
		static void NewProp_activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::NewProp_activated_SetBit(void* Obj)
	{
		((EscapeDoor_eventOnExitActivationChanged_Parms*)Obj)->activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::NewProp_activated = { "activated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventOnExitActivationChanged_Parms), &Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::NewProp_activated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::NewProp_activated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnExitActivationChanged", nullptr, nullptr, sizeof(EscapeDoor_eventOnExitActivationChanged_Parms), Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics
	{
		struct EscapeDoor_eventOnExitGateOpened_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnExitGateOpened_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnExitGateOpened", nullptr, nullptr, sizeof(EscapeDoor_eventOnExitGateOpened_Parms), Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics
	{
		static void NewProp_opened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_opened;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::NewProp_opened_SetBit(void* Obj)
	{
		((EscapeDoor_eventOnExitOpenChanged_Parms*)Obj)->opened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::NewProp_opened = { "opened", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventOnExitOpenChanged_Parms), &Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::NewProp_opened_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::NewProp_opened,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnExitOpenChanged", nullptr, nullptr, sizeof(EscapeDoor_eventOnExitOpenChanged_Parms), Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics
	{
		struct EscapeDoor_eventOnPlayerEnterExitArea_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnPlayerEnterExitArea_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnPlayerEnterExitArea", nullptr, nullptr, sizeof(EscapeDoor_eventOnPlayerEnterExitArea_Parms), Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics
	{
		struct EscapeDoor_eventOnPlayerExitExitArea_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnPlayerExitExitArea_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnPlayerExitExitArea", nullptr, nullptr, sizeof(EscapeDoor_eventOnPlayerExitExitArea_Parms), Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics
	{
		struct EscapeDoor_eventOnRep_Activated_Parms
		{
			bool oldActivated;
		};
		static void NewProp_oldActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_oldActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::NewProp_oldActivated_SetBit(void* Obj)
	{
		((EscapeDoor_eventOnRep_Activated_Parms*)Obj)->oldActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::NewProp_oldActivated = { "oldActivated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventOnRep_Activated_Parms), &Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::NewProp_oldActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::NewProp_oldActivated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnRep_Activated", nullptr, nullptr, sizeof(EscapeDoor_eventOnRep_Activated_Parms), Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnRep_Activated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnRep_Activated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics
	{
		struct EscapeDoor_eventOnRep_OnEscapeBlockerSet_Parms
		{
			AEscapeBlocker* escapeBlockerInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escapeBlockerInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::NewProp_escapeBlockerInstance = { "escapeBlockerInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoor_eventOnRep_OnEscapeBlockerSet_Parms, escapeBlockerInstance), Z_Construct_UClass_AEscapeBlocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::NewProp_escapeBlockerInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnRep_OnEscapeBlockerSet", nullptr, nullptr, sizeof(EscapeDoor_eventOnRep_OnEscapeBlockerSet_Parms), Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "OnUnblockDoorSwitchCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics
	{
		struct EscapeDoor_eventSetIsActivated_Parms
		{
			bool NewIsActivated;
		};
		static void NewProp_NewIsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::NewProp_NewIsActivated_SetBit(void* Obj)
	{
		((EscapeDoor_eventSetIsActivated_Parms*)Obj)->NewIsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::NewProp_NewIsActivated = { "NewIsActivated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoor_eventSetIsActivated_Parms), &Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::NewProp_NewIsActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::NewProp_NewIsActivated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "SetIsActivated", nullptr, nullptr, sizeof(EscapeDoor_eventSetIsActivated_Parms), Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_SetIsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_SetIsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "StartAtlantaDoorBeepingSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEscapeDoor, nullptr, "StartAtlantaDoorOpeningSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEscapeDoor_NoRegister()
	{
		return AEscapeDoor::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__doorSwitchBlockableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__doorSwitchBlockableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perceptionStimuliComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perceptionStimuliComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localOverlappingCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localOverlappingCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spotlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spotlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeBlockerInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeBlockerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activated_MetaData[];
#endif
		static void NewProp__activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__activated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeDoorAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeDoorAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ak_audio_escape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ak_audio_escape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__openChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__openChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerOpenChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerOpenChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapeFire;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscapeFire_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapePositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapePositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscapePositions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEscapeDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEscapeDoor_Authority_SetEscapeBlocker, "Authority_SetEscapeBlocker" }, // 2762413925
		{ &Z_Construct_UFunction_AEscapeDoor_GetAtlantaExitOpeningIndicatorVisibility, "GetAtlantaExitOpeningIndicatorVisibility" }, // 2406822051
		{ &Z_Construct_UFunction_AEscapeDoor_GetDoorSkeletalMeshComponent, "GetDoorSkeletalMeshComponent" }, // 1931603555
		{ &Z_Construct_UFunction_AEscapeDoor_GetEscapeSwitchFloorLocation, "GetEscapeSwitchFloorLocation" }, // 82959582
		{ &Z_Construct_UFunction_AEscapeDoor_GetExitArea, "GetExitArea" }, // 2846852591
		{ &Z_Construct_UFunction_AEscapeDoor_GetIsOpen, "GetIsOpen" }, // 3059991581
		{ &Z_Construct_UFunction_AEscapeDoor_GetOpenEscapeInteraction, "GetOpenEscapeInteraction" }, // 1645076884
		{ &Z_Construct_UFunction_AEscapeDoor_GetOpenTime, "GetOpenTime" }, // 3835329582
		{ &Z_Construct_UFunction_AEscapeDoor_GetParadiseServerLocation, "GetParadiseServerLocation" }, // 2899220621
		{ &Z_Construct_UFunction_AEscapeDoor_GetSwitchSceneComponent, "GetSwitchSceneComponent" }, // 2971799187
		{ &Z_Construct_UFunction_AEscapeDoor_IsActivated, "IsActivated" }, // 589448081
		{ &Z_Construct_UFunction_AEscapeDoor_IsDoorSwitchBlocked, "IsDoorSwitchBlocked" }, // 3092619006
		{ &Z_Construct_UFunction_AEscapeDoor_LightAllLights, "LightAllLights" }, // 4252775729
		{ &Z_Construct_UFunction_AEscapeDoor_OnBlockDoorSwitchCosmetic, "OnBlockDoorSwitchCosmetic" }, // 2818506996
		{ &Z_Construct_UFunction_AEscapeDoor_OnCamperStartOpeningExitGate, "OnCamperStartOpeningExitGate" }, // 2110609054
		{ &Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneBeginOverlap, "OnEscapeZoneBeginOverlap" }, // 201989010
		{ &Z_Construct_UFunction_AEscapeDoor_OnEscapeZoneEndOverlap, "OnEscapeZoneEndOverlap" }, // 3927535954
		{ &Z_Construct_UFunction_AEscapeDoor_OnExitActivationChanged, "OnExitActivationChanged" }, // 1157775184
		{ &Z_Construct_UFunction_AEscapeDoor_OnExitGateOpened, "OnExitGateOpened" }, // 3806173168
		{ &Z_Construct_UFunction_AEscapeDoor_OnExitOpenChanged, "OnExitOpenChanged" }, // 2243940048
		{ &Z_Construct_UFunction_AEscapeDoor_OnPlayerEnterExitArea, "OnPlayerEnterExitArea" }, // 2492797254
		{ &Z_Construct_UFunction_AEscapeDoor_OnPlayerExitExitArea, "OnPlayerExitExitArea" }, // 2828508585
		{ &Z_Construct_UFunction_AEscapeDoor_OnRep_Activated, "OnRep_Activated" }, // 550990466
		{ &Z_Construct_UFunction_AEscapeDoor_OnRep_OnEscapeBlockerSet, "OnRep_OnEscapeBlockerSet" }, // 3169255250
		{ &Z_Construct_UFunction_AEscapeDoor_OnUnblockDoorSwitchCosmetic, "OnUnblockDoorSwitchCosmetic" }, // 4127980471
		{ &Z_Construct_UFunction_AEscapeDoor_SetIsActivated, "SetIsActivated" }, // 3727760322
		{ &Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorBeepingSound, "StartAtlantaDoorBeepingSound" }, // 353930273
		{ &Z_Construct_UFunction_AEscapeDoor_StartAtlantaDoorOpeningSound, "StartAtlantaDoorOpeningSound" }, // 1494433545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscapeDoor.h" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__doorSwitchBlockableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__doorSwitchBlockableComponent = { "_doorSwitchBlockableComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _doorSwitchBlockableComponent), Z_Construct_UClass_UBlockableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__doorSwitchBlockableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__doorSwitchBlockableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__perceptionStimuliComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EscapeDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__perceptionStimuliComponent = { "_perceptionStimuliComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _perceptionStimuliComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__perceptionStimuliComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__perceptionStimuliComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__localOverlappingCamper_MetaData[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__localOverlappingCamper = { "_localOverlappingCamper", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _localOverlappingCamper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__localOverlappingCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__localOverlappingCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__spotlight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__spotlight = { "_spotlight", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _spotlight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__spotlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__spotlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeBlockerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeBlockerInstance = { "_escapeBlockerInstance", "OnRep_OnEscapeBlockerSet", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _escapeBlockerInstance), Z_Construct_UClass_AEscapeBlocker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeBlockerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeBlockerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	void Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated_SetBit(void* Obj)
	{
		((AEscapeDoor*)Obj)->_activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated = { "_activated", "OnRep_Activated", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEscapeDoor), &Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__rootComponent_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__rootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__rootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeDoorAnimInstance_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeDoorAnimInstance = { "_escapeDoorAnimInstance", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _escapeDoorAnimInstance), Z_Construct_UClass_UEscapeDoorAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeDoorAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeDoorAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__ak_audio_escape_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__ak_audio_escape = { "_ak_audio_escape", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _ak_audio_escape), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__ak_audio_escape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__ak_audio_escape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__openChargeable_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__openChargeable = { "_openChargeable", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _openChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__openChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__openChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp__killerOpenChargeable_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp__killerOpenChargeable = { "_killerOpenChargeable", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, _killerOpenChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__killerOpenChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp__killerOpenChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire = { "EscapeFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, EscapeFire), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire_Inner = { "EscapeFire", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions_MetaData[] = {
		{ "Category", "EscapeDoor" },
		{ "ModuleRelativePath", "Public/EscapeDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions = { "EscapePositions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscapeDoor, EscapePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions_Inner = { "EscapePositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscapeDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__doorSwitchBlockableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__perceptionStimuliComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__localOverlappingCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__spotlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeBlockerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__activated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__rootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__escapeDoorAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__ak_audio_escape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__openChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp__killerOpenChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapeFire_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeDoor_Statics::NewProp_EscapePositions_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEscapeDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AEscapeDoor, IAIPointOfInterestTargetInterface), false },
			{ Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister, (int32)VTABLE_OFFSET(AEscapeDoor, INoiseIndicatorEmitterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeDoor_Statics::ClassParams = {
		&AEscapeDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEscapeDoor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeDoor, 4037966187);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEscapeDoor>()
	{
		return AEscapeDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeDoor(Z_Construct_UClass_AEscapeDoor, &AEscapeDoor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEscapeDoor"), false, nullptr, nullptr, nullptr);

	void AEscapeDoor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__activated(TEXT("_activated"));
		static const FName Name__escapeBlockerInstance(TEXT("_escapeBlockerInstance"));

		const bool bIsValid = true
			&& Name__activated == ClassReps[(int32)ENetFields_Private::_activated].Property->GetFName()
			&& Name__escapeBlockerInstance == ClassReps[(int32)ENetFields_Private::_escapeBlockerInstance].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AEscapeDoor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
