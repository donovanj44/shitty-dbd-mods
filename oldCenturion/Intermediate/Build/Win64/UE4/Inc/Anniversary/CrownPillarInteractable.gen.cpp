// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anniversary/Public/CrownPillarInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrownPillarInteractable() {}
// Cross Module References
	ANNIVERSARY_API UClass* Z_Construct_UClass_ACrownPillarInteractable_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_ACrownPillarInteractable();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable();
	UPackage* Z_Construct_UPackage__Script_Anniversary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearTrackedActorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPickupInteraction_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(ACrownPillarInteractable::execIsLocallyObservedPlayerEquippedWithAnniversaryOffering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyObservedPlayerEquippedWithAnniversaryOffering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrownPillarInteractable::execLocal_OnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnIntroCompleted();
		P_NATIVE_END;
	}
	static FName NAME_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled = FName(TEXT("Cosmetic_OnInteractionCancelled"));
	void ACrownPillarInteractable::Cosmetic_OnInteractionCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled),NULL);
	}
	static FName NAME_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted = FName(TEXT("Cosmetic_OnInteractionCompleted"));
	void ACrownPillarInteractable::Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		CrownPillarInteractable_eventCosmetic_OnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted),&Parms);
	}
	static FName NAME_ACrownPillarInteractable_Cosmetic_OnStartedInteracting = FName(TEXT("Cosmetic_OnStartedInteracting"));
	void ACrownPillarInteractable::Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		CrownPillarInteractable_eventCosmetic_OnStartedInteracting_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		Parms.interactionDuration=interactionDuration;
		ProcessEvent(FindFunctionChecked(NAME_ACrownPillarInteractable_Cosmetic_OnStartedInteracting),&Parms);
	}
	static FName NAME_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting = FName(TEXT("Cosmetic_OnStoppedInteracting"));
	void ACrownPillarInteractable::Cosmetic_OnStoppedInteracting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting),NULL);
	}
	void ACrownPillarInteractable::StaticRegisterNativesACrownPillarInteractable()
	{
		UClass* Class = ACrownPillarInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLocallyObservedPlayerEquippedWithAnniversaryOffering", &ACrownPillarInteractable::execIsLocallyObservedPlayerEquippedWithAnniversaryOffering },
			{ "Local_OnIntroCompleted", &ACrownPillarInteractable::execLocal_OnIntroCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "Cosmetic_OnInteractionCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrownPillarInteractable_eventCosmetic_OnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "Cosmetic_OnInteractionCompleted", nullptr, nullptr, sizeof(CrownPillarInteractable_eventCosmetic_OnInteractionCompleted_Parms), Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration = { "interactionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrownPillarInteractable_eventCosmetic_OnStartedInteracting_Parms, interactionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrownPillarInteractable_eventCosmetic_OnStartedInteracting_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "Cosmetic_OnStartedInteracting", nullptr, nullptr, sizeof(CrownPillarInteractable_eventCosmetic_OnStartedInteracting_Parms), Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "Cosmetic_OnStoppedInteracting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics
	{
		struct CrownPillarInteractable_eventIsLocallyObservedPlayerEquippedWithAnniversaryOffering_Parms
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
	void Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CrownPillarInteractable_eventIsLocallyObservedPlayerEquippedWithAnniversaryOffering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrownPillarInteractable_eventIsLocallyObservedPlayerEquippedWithAnniversaryOffering_Parms), &Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "IsLocallyObservedPlayerEquippedWithAnniversaryOffering", nullptr, nullptr, sizeof(CrownPillarInteractable_eventIsLocallyObservedPlayerEquippedWithAnniversaryOffering_Parms), Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrownPillarInteractable, nullptr, "Local_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrownPillarInteractable_NoRegister()
	{
		return ACrownPillarInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ACrownPillarInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarOutlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarOutlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nearTrackedActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nearTrackedActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionChargeableKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteractionChargeableKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteractionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteractionKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crownPillarInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offeringEnabledAuraVisibilityDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__offeringEnabledAuraVisibilityDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionSecondsToChargeKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__crownPillarInteractionSecondsToChargeKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crownPillarInteractionSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__crownPillarInteractionSecondsToCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrownPillarInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARespawnableInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Anniversary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrownPillarInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCancelled, "Cosmetic_OnInteractionCancelled" }, // 4129992774
		{ &Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnInteractionCompleted, "Cosmetic_OnInteractionCompleted" }, // 73304605
		{ &Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStartedInteracting, "Cosmetic_OnStartedInteracting" }, // 922894125
		{ &Z_Construct_UFunction_ACrownPillarInteractable_Cosmetic_OnStoppedInteracting, "Cosmetic_OnStoppedInteracting" }, // 3814339359
		{ &Z_Construct_UFunction_ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering, "IsLocallyObservedPlayerEquippedWithAnniversaryOffering" }, // 2149915131
		{ &Z_Construct_UFunction_ACrownPillarInteractable_Local_OnIntroCompleted, "Local_OnIntroCompleted" }, // 3047751522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrownPillarInteractable.h" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarOutlineUpdateStrategy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarOutlineUpdateStrategy = { "_crownPillarOutlineUpdateStrategy", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarOutlineUpdateStrategy), Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarOutlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarOutlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__nearTrackedActorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__nearTrackedActorComponent = { "_nearTrackedActorComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _nearTrackedActorComponent), Z_Construct_UClass_UNearTrackedActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__nearTrackedActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__nearTrackedActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarStaticMesh = { "_crownPillarStaticMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionZone = { "_crownPillarInteractionZone", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractor = { "_crownPillarInteractor", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeableKiller_MetaData[] = {
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeableKiller = { "_crownPillarInteractionChargeableKiller", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionChargeableKiller), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeableKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeableKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeable_MetaData[] = {
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeable = { "_crownPillarInteractionChargeable", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionKiller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionKiller = { "_crownPillarInteractionKiller", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionKiller), Z_Construct_UClass_UCrownPickupInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrownPillarInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteraction = { "_crownPillarInteraction", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteraction), Z_Construct_UClass_UCrownPickupInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__offeringEnabledAuraVisibilityDistance_MetaData[] = {
		{ "Category", "CrownPillarInteractable" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__offeringEnabledAuraVisibilityDistance = { "_offeringEnabledAuraVisibilityDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _offeringEnabledAuraVisibilityDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__offeringEnabledAuraVisibilityDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__offeringEnabledAuraVisibilityDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToChargeKiller_MetaData[] = {
		{ "Category", "CrownPillarInteractable" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToChargeKiller = { "_crownPillarInteractionSecondsToChargeKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionSecondsToChargeKiller), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToChargeKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToChargeKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToCharge_MetaData[] = {
		{ "Category", "CrownPillarInteractable" },
		{ "ModuleRelativePath", "Public/CrownPillarInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToCharge = { "_crownPillarInteractionSecondsToCharge", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrownPillarInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarOutlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__nearTrackedActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeableKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__offeringEnabledAuraVisibilityDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToChargeKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrownPillarInteractable_Statics::NewProp__crownPillarInteractionSecondsToCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrownPillarInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrownPillarInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrownPillarInteractable_Statics::ClassParams = {
		&ACrownPillarInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrownPillarInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrownPillarInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrownPillarInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrownPillarInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrownPillarInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrownPillarInteractable, 2795724593);
	template<> ANNIVERSARY_API UClass* StaticClass<ACrownPillarInteractable>()
	{
		return ACrownPillarInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrownPillarInteractable(Z_Construct_UClass_ACrownPillarInteractable, &ACrownPillarInteractable::StaticClass, TEXT("/Script/Anniversary"), TEXT("ACrownPillarInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrownPillarInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
