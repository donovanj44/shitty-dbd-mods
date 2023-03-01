// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2021/Public/Pumpkin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePumpkin() {}
// Cross Module References
	HALLOWEEN2021_API UClass* Z_Construct_UClass_APumpkin_NoRegister();
	HALLOWEEN2021_API UClass* Z_Construct_UClass_APumpkin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASpecialBehaviourInteractable();
	UPackage* Z_Construct_UPackage__Script_Halloween2021();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	HALLOWEEN2021_API UClass* Z_Construct_UClass_UPumpkinInteraction_NoRegister();
	HALLOWEEN2021_API UEnum* Z_Construct_UEnum_Halloween2021_EPumpkinType();
// End Cross Module References
	static FName NAME_APumpkin_Cosmetic_OnInteractionCompleted = FName(TEXT("Cosmetic_OnInteractionCompleted"));
	void APumpkin::Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		Pumpkin_eventCosmetic_OnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_APumpkin_Cosmetic_OnInteractionCompleted),&Parms);
	}
	static FName NAME_APumpkin_Cosmetic_OnIntroCompleted = FName(TEXT("Cosmetic_OnIntroCompleted"));
	void APumpkin::Cosmetic_OnIntroCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_APumpkin_Cosmetic_OnIntroCompleted),NULL);
	}
	static FName NAME_APumpkin_Cosmetic_OnStartedInteracting = FName(TEXT("Cosmetic_OnStartedInteracting"));
	void APumpkin::Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		Pumpkin_eventCosmetic_OnStartedInteracting_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		Parms.interactionDuration=interactionDuration;
		ProcessEvent(FindFunctionChecked(NAME_APumpkin_Cosmetic_OnStartedInteracting),&Parms);
	}
	static FName NAME_APumpkin_Cosmetic_OnStoppedInteracting = FName(TEXT("Cosmetic_OnStoppedInteracting"));
	void APumpkin::Cosmetic_OnStoppedInteracting()
	{
		ProcessEvent(FindFunctionChecked(NAME_APumpkin_Cosmetic_OnStoppedInteracting),NULL);
	}
	static FName NAME_APumpkin_OnInteractionCompleted = FName(TEXT("OnInteractionCompleted"));
	void APumpkin::OnInteractionCompleted(ADBDPlayer* interactingPlayer)
	{
		Pumpkin_eventOnInteractionCompleted_Parms Parms;
		Parms.interactingPlayer=interactingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_APumpkin_OnInteractionCompleted),&Parms);
	}
	void APumpkin::StaticRegisterNativesAPumpkin()
	{
	}
	struct Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pumpkin_eventCosmetic_OnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APumpkin, nullptr, "Cosmetic_OnInteractionCompleted", nullptr, nullptr, sizeof(Pumpkin_eventCosmetic_OnInteractionCompleted_Parms), Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APumpkin, nullptr, "Cosmetic_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration = { "interactionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pumpkin_eventCosmetic_OnStartedInteracting_Parms, interactionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pumpkin_eventCosmetic_OnStartedInteracting_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::NewProp_interactionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APumpkin, nullptr, "Cosmetic_OnStartedInteracting", nullptr, nullptr, sizeof(Pumpkin_eventCosmetic_OnStartedInteracting_Parms), Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APumpkin, nullptr, "Cosmetic_OnStoppedInteracting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pumpkin_eventOnInteractionCompleted_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APumpkin, nullptr, "OnInteractionCompleted", nullptr, nullptr, sizeof(Pumpkin_eventOnInteractionCompleted_Parms), Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APumpkin_OnInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APumpkin_OnInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APumpkin_NoRegister()
	{
		return APumpkin::StaticClass();
	}
	struct Z_Construct_UClass_APumpkin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinSpeedDebuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinSpeedDebuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinSpeedBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinSpeedBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinTrickDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinTrickDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinTreatDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinTreatDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinTrickChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinTrickChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinTreatChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinTreatChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraColorWhileInteracting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__auraColorWhileInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionSecondsToChargeKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinInteractionSecondsToChargeKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pumpkinInteractionSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionChargeableKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteractionChargeableKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteractionChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteractionKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteractionKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pumpkinInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pumpkinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__pumpkinType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pumpkinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialBehaviourId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__specialBehaviourId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APumpkin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpecialBehaviourInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APumpkin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APumpkin_Cosmetic_OnInteractionCompleted, "Cosmetic_OnInteractionCompleted" }, // 2432350438
		{ &Z_Construct_UFunction_APumpkin_Cosmetic_OnIntroCompleted, "Cosmetic_OnIntroCompleted" }, // 2353368228
		{ &Z_Construct_UFunction_APumpkin_Cosmetic_OnStartedInteracting, "Cosmetic_OnStartedInteracting" }, // 1918020153
		{ &Z_Construct_UFunction_APumpkin_Cosmetic_OnStoppedInteracting, "Cosmetic_OnStoppedInteracting" }, // 756794870
		{ &Z_Construct_UFunction_APumpkin_OnInteractionCompleted, "OnInteractionCompleted" }, // 1190422710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pumpkin.h" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinStatusEffect = { "_pumpkinStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedDebuff_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedDebuff = { "_pumpkinSpeedDebuff", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinSpeedDebuff), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedDebuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedDebuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedBoost_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedBoost = { "_pumpkinSpeedBoost", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinSpeedBoost), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickDuration_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickDuration = { "_pumpkinTrickDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinTrickDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatDuration_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatDuration = { "_pumpkinTreatDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinTreatDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickChance_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickChance = { "_pumpkinTrickChance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinTrickChance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatChance_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatChance = { "_pumpkinTreatChance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinTreatChance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__auraColorWhileInteracting_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__auraColorWhileInteracting = { "_auraColorWhileInteracting", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _auraColorWhileInteracting), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__auraColorWhileInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__auraColorWhileInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToChargeKiller_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToChargeKiller = { "_pumpkinInteractionSecondsToChargeKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionSecondsToChargeKiller), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToChargeKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToChargeKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToCharge_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToCharge = { "_pumpkinInteractionSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSkeletalMesh = { "_pumpkinSkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionZone = { "_pumpkinInteractionZone", nullptr, (EPropertyFlags)0x004000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionZone), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractor = { "_pumpkinInteractor", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeableKiller_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeableKiller = { "_pumpkinInteractionChargeableKiller", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionChargeableKiller), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeableKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeableKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeable_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeable = { "_pumpkinInteractionChargeable", nullptr, (EPropertyFlags)0x00400000020a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionKiller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionKiller = { "_pumpkinInteractionKiller", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteractionKiller), Z_Construct_UClass_UPumpkinInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pumpkin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteraction = { "_pumpkinInteraction", nullptr, (EPropertyFlags)0x00400000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinInteraction), Z_Construct_UClass_UPumpkinInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType = { "_pumpkinType", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _pumpkinType), Z_Construct_UEnum_Halloween2021_EPumpkinType, METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APumpkin_Statics::NewProp__specialBehaviourId_MetaData[] = {
		{ "Category", "Pumpkin" },
		{ "ModuleRelativePath", "Public/Pumpkin.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APumpkin_Statics::NewProp__specialBehaviourId = { "_specialBehaviourId", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APumpkin, _specialBehaviourId), METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::NewProp__specialBehaviourId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::NewProp__specialBehaviourId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APumpkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedDebuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSpeedBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTrickChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinTreatChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__auraColorWhileInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToChargeKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeableKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteractionKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__pumpkinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APumpkin_Statics::NewProp__specialBehaviourId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APumpkin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APumpkin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APumpkin_Statics::ClassParams = {
		&APumpkin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APumpkin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APumpkin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APumpkin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APumpkin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APumpkin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APumpkin, 2654495912);
	template<> HALLOWEEN2021_API UClass* StaticClass<APumpkin>()
	{
		return APumpkin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APumpkin(Z_Construct_UClass_APumpkin, &APumpkin::StaticClass, TEXT("/Script/Halloween2021"), TEXT("APumpkin"), false, nullptr, nullptr, nullptr);

	void APumpkin::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__pumpkinType(TEXT("_pumpkinType"));

		const bool bIsValid = true
			&& Name__pumpkinType == ClassReps[(int32)ENetFields_Private::_pumpkinType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APumpkin"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APumpkin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
