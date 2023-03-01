// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerAudioHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAudioHandlerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerAudioHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerAudioHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerAudioHandlerComponent::execOnChaseStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_chasedSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseStart(Z_Param_chasedSurvivor);
		P_NATIVE_END;
	}
	static FName NAME_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX = FName(TEXT("ChaseTriggerKillerReactionSpecificSurvivorSFX"));
	void UKillerAudioHandlerComponent::ChaseTriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper)
	{
		KillerAudioHandlerComponent_eventChaseTriggerKillerReactionSpecificSurvivorSFX_Parms Parms;
		Parms.camper=camper;
		ProcessEvent(FindFunctionChecked(NAME_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX),&Parms);
	}
	static FName NAME_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX = FName(TEXT("HitImpactOnSurvivorSFX"));
	void UKillerAudioHandlerComponent::HitImpactOnSurvivorSFX(ACamperPlayer* camper, EAttackType attackType, bool isWeaponHit)
	{
		KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms Parms;
		Parms.camper=camper;
		Parms.attackType=attackType;
		Parms.isWeaponHit=isWeaponHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX),&Parms);
	}
	static FName NAME_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX = FName(TEXT("TriggerKillerReactionSpecificSurvivorSFX"));
	void UKillerAudioHandlerComponent::TriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper)
	{
		KillerAudioHandlerComponent_eventTriggerKillerReactionSpecificSurvivorSFX_Parms Parms;
		Parms.camper=camper;
		ProcessEvent(FindFunctionChecked(NAME_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX),&Parms);
	}
	static FName NAME_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX = FName(TEXT("TriggerSurvivorDamageHitAudioSFX"));
	void UKillerAudioHandlerComponent::TriggerSurvivorDamageHitAudioSFX(ACamperPlayer* camper, EAttackType attackType, bool causedKO, bool isWeaponHit, bool isLightHit)
	{
		KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms Parms;
		Parms.camper=camper;
		Parms.attackType=attackType;
		Parms.causedKO=causedKO ? true : false;
		Parms.isWeaponHit=isWeaponHit ? true : false;
		Parms.isLightHit=isLightHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX),&Parms);
	}
	void UKillerAudioHandlerComponent::StaticRegisterNativesUKillerAudioHandlerComponent()
	{
		UClass* Class = UKillerAudioHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChaseStart", &UKillerAudioHandlerComponent::execOnChaseStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventChaseTriggerKillerReactionSpecificSurvivorSFX_Parms, camper), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioHandlerComponent, nullptr, "ChaseTriggerKillerReactionSpecificSurvivorSFX", nullptr, nullptr, sizeof(KillerAudioHandlerComponent_eventChaseTriggerKillerReactionSpecificSurvivorSFX_Parms), Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics
	{
		static void NewProp_isWeaponHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponHit;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_isWeaponHit_SetBit(void* Obj)
	{
		((KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms*)Obj)->isWeaponHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_isWeaponHit = { "isWeaponHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms), &Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_isWeaponHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms, camper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_isWeaponHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioHandlerComponent, nullptr, "HitImpactOnSurvivorSFX", nullptr, nullptr, sizeof(KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms), Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics
	{
		struct KillerAudioHandlerComponent_eventOnChaseStart_Parms
		{
			ADBDPlayer* chasedSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chasedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::NewProp_chasedSurvivor = { "chasedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventOnChaseStart_Parms, chasedSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::NewProp_chasedSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioHandlerComponent, nullptr, "OnChaseStart", nullptr, nullptr, sizeof(KillerAudioHandlerComponent_eventOnChaseStart_Parms), Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventTriggerKillerReactionSpecificSurvivorSFX_Parms, camper), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioHandlerComponent, nullptr, "TriggerKillerReactionSpecificSurvivorSFX", nullptr, nullptr, sizeof(KillerAudioHandlerComponent_eventTriggerKillerReactionSpecificSurvivorSFX_Parms), Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics
	{
		static void NewProp_isLightHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLightHit;
		static void NewProp_isWeaponHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWeaponHit;
		static void NewProp_causedKO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_causedKO;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isLightHit_SetBit(void* Obj)
	{
		((KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms*)Obj)->isLightHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isLightHit = { "isLightHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms), &Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isLightHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isWeaponHit_SetBit(void* Obj)
	{
		((KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms*)Obj)->isWeaponHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isWeaponHit = { "isWeaponHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms), &Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isWeaponHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_causedKO_SetBit(void* Obj)
	{
		((KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms*)Obj)->causedKO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_causedKO = { "causedKO", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms), &Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_causedKO_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms, camper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isLightHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_isWeaponHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_causedKO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerAudioHandlerComponent, nullptr, "TriggerSurvivorDamageHitAudioSFX", nullptr, nullptr, sizeof(KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms), Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerAudioHandlerComponent_NoRegister()
	{
		return UKillerAudioHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerAudioHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerAudioHandlerComponent_ChaseTriggerKillerReactionSpecificSurvivorSFX, "ChaseTriggerKillerReactionSpecificSurvivorSFX" }, // 3474221710
		{ &Z_Construct_UFunction_UKillerAudioHandlerComponent_HitImpactOnSurvivorSFX, "HitImpactOnSurvivorSFX" }, // 907913808
		{ &Z_Construct_UFunction_UKillerAudioHandlerComponent_OnChaseStart, "OnChaseStart" }, // 3757484886
		{ &Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerKillerReactionSpecificSurvivorSFX, "TriggerKillerReactionSpecificSurvivorSFX" }, // 3357389339
		{ &Z_Construct_UFunction_UKillerAudioHandlerComponent_TriggerSurvivorDamageHitAudioSFX, "TriggerSurvivorDamageHitAudioSFX" }, // 3597309397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KillerAudioHandlerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KillerAudioHandlerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerAudioHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::ClassParams = {
		&UKillerAudioHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerAudioHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerAudioHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerAudioHandlerComponent, 1393452464);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerAudioHandlerComponent>()
	{
		return UKillerAudioHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerAudioHandlerComponent(Z_Construct_UClass_UKillerAudioHandlerComponent, &UKillerAudioHandlerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerAudioHandlerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerAudioHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
