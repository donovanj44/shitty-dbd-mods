// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorPlagueEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorPlagueEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorPlagueEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorPlagueEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorPlagueEffect::execAuthority_AddSickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sicknessToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddSickness(Z_Param_sicknessToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execAuthority_OnHitBySuperVomitProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHitBySuperVomitProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execAuthority_OnHitByVomitProjectile)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sicknessToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHitByVomitProjectile(Z_Param_sicknessToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execAuthority_OnHitByVomitProjectileAesthetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHitByVomitProjectileAesthetic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execAuthority_ResetSickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newSickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ResetSickness(Z_Param_newSickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execGetMaxSicknessLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMaxSicknessLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execGetSicknessAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSicknessAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execGetSicknessLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetSicknessLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execGetSicknessPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSicknessPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execGetSicknessThresholds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetSicknessThresholds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execHasMaxLevelSickness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMaxLevelSickness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execIsDebugModeActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugModeActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execIsInfected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInfected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_AddOnScreenDebugMessage)
	{
		P_GET_PROPERTY(FUInt64Property,Z_Param_key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_STRUCT(FColor,Z_Param_displayColor);
		P_GET_PROPERTY(FStrProperty,Z_Param_debugMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddOnScreenDebugMessage_Implementation(Z_Param_key,Z_Param_duration,Z_Param_displayColor,Z_Param_debugMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_OnMaxSicknessReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnMaxSicknessReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_OnSicknessChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newSickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSicknessChanged_Implementation(Z_Param_newSickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_OnSicknessCured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSicknessCured_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_OnSurvivorBecomesInfected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSurvivorBecomesInfected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execMulticast_OnSurvivorVomit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSurvivorVomit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execOnHitByVomit)
	{
		P_GET_UBOOL(Z_Param_isSuperVomit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitByVomit(Z_Param_isSuperVomit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorPlagueEffect::execRefreshSicknessGainValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSicknessGainValues();
		P_NATIVE_END;
	}
	static FName NAME_USurvivorPlagueEffect_Authority_InfectInteractable = FName(TEXT("Authority_InfectInteractable"));
	void USurvivorPlagueEffect::Authority_InfectInteractable(AInteractable* interactable)
	{
		SurvivorPlagueEffect_eventAuthority_InfectInteractable_Parms Parms;
		Parms.interactable=interactable;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Authority_InfectInteractable),&Parms);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage = FName(TEXT("Multicast_AddOnScreenDebugMessage"));
	void USurvivorPlagueEffect::Multicast_AddOnScreenDebugMessage(uint64 key, float duration, FColor displayColor, const FString& debugMessage)
	{
		SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms Parms;
		Parms.key=key;
		Parms.duration=duration;
		Parms.displayColor=displayColor;
		Parms.debugMessage=debugMessage;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage),&Parms);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached = FName(TEXT("Multicast_OnMaxSicknessReached"));
	void USurvivorPlagueEffect::Multicast_OnMaxSicknessReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_OnSicknessChanged = FName(TEXT("Multicast_OnSicknessChanged"));
	void USurvivorPlagueEffect::Multicast_OnSicknessChanged(float newSickness)
	{
		SurvivorPlagueEffect_eventMulticast_OnSicknessChanged_Parms Parms;
		Parms.newSickness=newSickness;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_OnSicknessChanged),&Parms);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_OnSicknessCured = FName(TEXT("Multicast_OnSicknessCured"));
	void USurvivorPlagueEffect::Multicast_OnSicknessCured()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_OnSicknessCured),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected = FName(TEXT("Multicast_OnSurvivorBecomesInfected"));
	void USurvivorPlagueEffect::Multicast_OnSurvivorBecomesInfected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_Multicast_OnSurvivorVomit = FName(TEXT("Multicast_OnSurvivorVomit"));
	void USurvivorPlagueEffect::Multicast_OnSurvivorVomit()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_Multicast_OnSurvivorVomit),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic = FName(TEXT("OnMaxSicknessReached_Aesthetic"));
	void USurvivorPlagueEffect::OnMaxSicknessReached_Aesthetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic = FName(TEXT("OnSicknessChanged_Aesthetic"));
	void USurvivorPlagueEffect::OnSicknessChanged_Aesthetic(float newSickness)
	{
		SurvivorPlagueEffect_eventOnSicknessChanged_Aesthetic_Parms Parms;
		Parms.newSickness=newSickness;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic),&Parms);
	}
	static FName NAME_USurvivorPlagueEffect_OnSicknessCured_Aesthetic = FName(TEXT("OnSicknessCured_Aesthetic"));
	void USurvivorPlagueEffect::OnSicknessCured_Aesthetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_OnSicknessCured_Aesthetic),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic = FName(TEXT("OnSurvivorBecomesInfected_Aesthetic"));
	void USurvivorPlagueEffect::OnSurvivorBecomesInfected_Aesthetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic),NULL);
	}
	static FName NAME_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic = FName(TEXT("OnSurvivorVomit_Aesthetic"));
	void USurvivorPlagueEffect::OnSurvivorVomit_Aesthetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic),NULL);
	}
	void USurvivorPlagueEffect::StaticRegisterNativesUSurvivorPlagueEffect()
	{
		UClass* Class = USurvivorPlagueEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddSickness", &USurvivorPlagueEffect::execAuthority_AddSickness },
			{ "Authority_OnHitBySuperVomitProjectile", &USurvivorPlagueEffect::execAuthority_OnHitBySuperVomitProjectile },
			{ "Authority_OnHitByVomitProjectile", &USurvivorPlagueEffect::execAuthority_OnHitByVomitProjectile },
			{ "Authority_OnHitByVomitProjectileAesthetic", &USurvivorPlagueEffect::execAuthority_OnHitByVomitProjectileAesthetic },
			{ "Authority_ResetSickness", &USurvivorPlagueEffect::execAuthority_ResetSickness },
			{ "GetMaxSicknessLevel", &USurvivorPlagueEffect::execGetMaxSicknessLevel },
			{ "GetSicknessAmount", &USurvivorPlagueEffect::execGetSicknessAmount },
			{ "GetSicknessLevel", &USurvivorPlagueEffect::execGetSicknessLevel },
			{ "GetSicknessPercentage", &USurvivorPlagueEffect::execGetSicknessPercentage },
			{ "GetSicknessThresholds", &USurvivorPlagueEffect::execGetSicknessThresholds },
			{ "HasMaxLevelSickness", &USurvivorPlagueEffect::execHasMaxLevelSickness },
			{ "IsDebugModeActive", &USurvivorPlagueEffect::execIsDebugModeActive },
			{ "IsInfected", &USurvivorPlagueEffect::execIsInfected },
			{ "Multicast_AddOnScreenDebugMessage", &USurvivorPlagueEffect::execMulticast_AddOnScreenDebugMessage },
			{ "Multicast_OnMaxSicknessReached", &USurvivorPlagueEffect::execMulticast_OnMaxSicknessReached },
			{ "Multicast_OnSicknessChanged", &USurvivorPlagueEffect::execMulticast_OnSicknessChanged },
			{ "Multicast_OnSicknessCured", &USurvivorPlagueEffect::execMulticast_OnSicknessCured },
			{ "Multicast_OnSurvivorBecomesInfected", &USurvivorPlagueEffect::execMulticast_OnSurvivorBecomesInfected },
			{ "Multicast_OnSurvivorVomit", &USurvivorPlagueEffect::execMulticast_OnSurvivorVomit },
			{ "OnHitByVomit", &USurvivorPlagueEffect::execOnHitByVomit },
			{ "RefreshSicknessGainValues", &USurvivorPlagueEffect::execRefreshSicknessGainValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics
	{
		struct SurvivorPlagueEffect_eventAuthority_AddSickness_Parms
		{
			float sicknessToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sicknessToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::NewProp_sicknessToAdd = { "sicknessToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventAuthority_AddSickness_Parms, sicknessToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::NewProp_sicknessToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_AddSickness", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventAuthority_AddSickness_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::NewProp_interactable = { "interactable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventAuthority_InfectInteractable_Parms, interactable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::NewProp_interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_InfectInteractable", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventAuthority_InfectInteractable_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_OnHitBySuperVomitProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics
	{
		struct SurvivorPlagueEffect_eventAuthority_OnHitByVomitProjectile_Parms
		{
			float sicknessToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sicknessToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::NewProp_sicknessToAdd = { "sicknessToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventAuthority_OnHitByVomitProjectile_Parms, sicknessToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::NewProp_sicknessToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_OnHitByVomitProjectile", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventAuthority_OnHitByVomitProjectile_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_OnHitByVomitProjectileAesthetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics
	{
		struct SurvivorPlagueEffect_eventAuthority_ResetSickness_Parms
		{
			float newSickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newSickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::NewProp_newSickness = { "newSickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventAuthority_ResetSickness_Parms, newSickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::NewProp_newSickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Authority_ResetSickness", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventAuthority_ResetSickness_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics
	{
		struct SurvivorPlagueEffect_eventGetMaxSicknessLevel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventGetMaxSicknessLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "GetMaxSicknessLevel", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventGetMaxSicknessLevel_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics
	{
		struct SurvivorPlagueEffect_eventGetSicknessAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventGetSicknessAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "GetSicknessAmount", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventGetSicknessAmount_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics
	{
		struct SurvivorPlagueEffect_eventGetSicknessLevel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventGetSicknessLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "GetSicknessLevel", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventGetSicknessLevel_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics
	{
		struct SurvivorPlagueEffect_eventGetSicknessPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventGetSicknessPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "GetSicknessPercentage", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventGetSicknessPercentage_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics
	{
		struct SurvivorPlagueEffect_eventGetSicknessThresholds_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventGetSicknessThresholds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "GetSicknessThresholds", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventGetSicknessThresholds_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics
	{
		struct SurvivorPlagueEffect_eventHasMaxLevelSickness_Parms
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
	void Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorPlagueEffect_eventHasMaxLevelSickness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorPlagueEffect_eventHasMaxLevelSickness_Parms), &Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "HasMaxLevelSickness", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventHasMaxLevelSickness_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics
	{
		struct SurvivorPlagueEffect_eventIsDebugModeActive_Parms
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
	void Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorPlagueEffect_eventIsDebugModeActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorPlagueEffect_eventIsDebugModeActive_Parms), &Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "IsDebugModeActive", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventIsDebugModeActive_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics
	{
		struct SurvivorPlagueEffect_eventIsInfected_Parms
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
	void Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorPlagueEffect_eventIsInfected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorPlagueEffect_eventIsInfected_Parms), &Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "IsInfected", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventIsInfected_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_debugMessage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_displayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_debugMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_debugMessage = { "debugMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms, debugMessage), METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_debugMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_debugMessage_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_displayColor = { "displayColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms, displayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_debugMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_displayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_AddOnScreenDebugMessage", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_OnMaxSicknessReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newSickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::NewProp_newSickness = { "newSickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventMulticast_OnSicknessChanged_Parms, newSickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::NewProp_newSickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_OnSicknessChanged", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventMulticast_OnSicknessChanged_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_OnSicknessCured", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_OnSurvivorBecomesInfected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "Multicast_OnSurvivorVomit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics
	{
		struct SurvivorPlagueEffect_eventOnHitByVomit_Parms
		{
			bool isSuperVomit;
		};
		static void NewProp_isSuperVomit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuperVomit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::NewProp_isSuperVomit_SetBit(void* Obj)
	{
		((SurvivorPlagueEffect_eventOnHitByVomit_Parms*)Obj)->isSuperVomit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::NewProp_isSuperVomit = { "isSuperVomit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorPlagueEffect_eventOnHitByVomit_Parms), &Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::NewProp_isSuperVomit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::NewProp_isSuperVomit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnHitByVomit", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventOnHitByVomit_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnMaxSicknessReached_Aesthetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newSickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::NewProp_newSickness = { "newSickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorPlagueEffect_eventOnSicknessChanged_Aesthetic_Parms, newSickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::NewProp_newSickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnSicknessChanged_Aesthetic", nullptr, nullptr, sizeof(SurvivorPlagueEffect_eventOnSicknessChanged_Aesthetic_Parms), Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnSicknessCured_Aesthetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnSurvivorBecomesInfected_Aesthetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "OnSurvivorVomit_Aesthetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorPlagueEffect, nullptr, "RefreshSicknessGainValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorPlagueEffect_NoRegister()
	{
		return USurvivorPlagueEffect::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorPlagueEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugMode_MetaData[];
#endif
		static void NewProp__debugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sicknessGainPerSecondFromInfectedInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__sicknessGainPerSecondFromInfectedInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonNauseatingInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nonNauseatingInteractions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__nonNauseatingInteractions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wasRecentlyHitByVomit_MetaData[];
#endif
		static void NewProp__wasRecentlyHitByVomit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__wasRecentlyHitByVomit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sicknessThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__sicknessThresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sicknessThresholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitSlowAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__vomitSlowAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitSlowDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__vomitSlowDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sicknessCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sicknessCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sicknessAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sicknessAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorPlagueEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorPlagueEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_AddSickness, "Authority_AddSickness" }, // 1910090331
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_InfectInteractable, "Authority_InfectInteractable" }, // 2149934872
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitBySuperVomitProjectile, "Authority_OnHitBySuperVomitProjectile" }, // 1825019362
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectile, "Authority_OnHitByVomitProjectile" }, // 2829430474
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_OnHitByVomitProjectileAesthetic, "Authority_OnHitByVomitProjectileAesthetic" }, // 48016022
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Authority_ResetSickness, "Authority_ResetSickness" }, // 3187729293
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_GetMaxSicknessLevel, "GetMaxSicknessLevel" }, // 1143371917
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessAmount, "GetSicknessAmount" }, // 2265996992
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessLevel, "GetSicknessLevel" }, // 1369295669
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessPercentage, "GetSicknessPercentage" }, // 537076950
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_GetSicknessThresholds, "GetSicknessThresholds" }, // 682894571
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_HasMaxLevelSickness, "HasMaxLevelSickness" }, // 975843847
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_IsDebugModeActive, "IsDebugModeActive" }, // 2758683730
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_IsInfected, "IsInfected" }, // 2055072158
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_AddOnScreenDebugMessage, "Multicast_AddOnScreenDebugMessage" }, // 3833807906
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnMaxSicknessReached, "Multicast_OnMaxSicknessReached" }, // 1972839680
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessChanged, "Multicast_OnSicknessChanged" }, // 1432617392
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSicknessCured, "Multicast_OnSicknessCured" }, // 2836090025
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorBecomesInfected, "Multicast_OnSurvivorBecomesInfected" }, // 853157788
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_Multicast_OnSurvivorVomit, "Multicast_OnSurvivorVomit" }, // 412341160
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnHitByVomit, "OnHitByVomit" }, // 3322971031
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnMaxSicknessReached_Aesthetic, "OnMaxSicknessReached_Aesthetic" }, // 678422880
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessChanged_Aesthetic, "OnSicknessChanged_Aesthetic" }, // 392735767
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnSicknessCured_Aesthetic, "OnSicknessCured_Aesthetic" }, // 1538417833
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorBecomesInfected_Aesthetic, "OnSurvivorBecomesInfected_Aesthetic" }, // 1654641057
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_OnSurvivorVomit_Aesthetic, "OnSurvivorVomit_Aesthetic" }, // 2347018060
		{ &Z_Construct_UFunction_USurvivorPlagueEffect_RefreshSicknessGainValues, "RefreshSicknessGainValues" }, // 440754347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorPlagueEffect.h" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode_SetBit(void* Obj)
	{
		((USurvivorPlagueEffect*)Obj)->_debugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode = { "_debugMode", nullptr, (EPropertyFlags)0x0040000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorPlagueEffect), &Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessGainPerSecondFromInfectedInteractable_MetaData[] = {
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessGainPerSecondFromInfectedInteractable = { "_sicknessGainPerSecondFromInfectedInteractable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessGainPerSecondFromInfectedInteractable), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessGainPerSecondFromInfectedInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessGainPerSecondFromInfectedInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions = { "_nonNauseatingInteractions", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _nonNauseatingInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions_Inner = { "_nonNauseatingInteractions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit_SetBit(void* Obj)
	{
		((USurvivorPlagueEffect*)Obj)->_wasRecentlyHitByVomit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit = { "_wasRecentlyHitByVomit", nullptr, (EPropertyFlags)0x0040000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorPlagueEffect), &Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds = { "_sicknessThresholds", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds_Inner = { "_sicknessThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowAmount = { "_vomitSlowAmount", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _vomitSlowAmount), METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowDuration = { "_vomitSlowDuration", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _vomitSlowDuration), METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessCap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessCap = { "_sicknessCap", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessCap), METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorPlagueEffect" },
		{ "ModuleRelativePath", "Public/SurvivorPlagueEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessAmount = { "_sicknessAmount", nullptr, (EPropertyFlags)0x0040000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessAmount), METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorPlagueEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__debugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessGainPerSecondFromInfectedInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__nonNauseatingInteractions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__wasRecentlyHitByVomit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessThresholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__vomitSlowDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorPlagueEffect_Statics::NewProp__sicknessAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorPlagueEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorPlagueEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorPlagueEffect_Statics::ClassParams = {
		&USurvivorPlagueEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorPlagueEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorPlagueEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorPlagueEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorPlagueEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorPlagueEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorPlagueEffect, 4024709010);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurvivorPlagueEffect>()
	{
		return USurvivorPlagueEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorPlagueEffect(Z_Construct_UClass_USurvivorPlagueEffect, &USurvivorPlagueEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurvivorPlagueEffect"), false, nullptr, nullptr, nullptr);

	void USurvivorPlagueEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__sicknessAmount(TEXT("_sicknessAmount"));
		static const FName Name__wasRecentlyHitByVomit(TEXT("_wasRecentlyHitByVomit"));
		static const FName Name__debugMode(TEXT("_debugMode"));

		const bool bIsValid = true
			&& Name__sicknessAmount == ClassReps[(int32)ENetFields_Private::_sicknessAmount].Property->GetFName()
			&& Name__wasRecentlyHitByVomit == ClassReps[(int32)ENetFields_Private::_wasRecentlyHitByVomit].Property->GetFName()
			&& Name__debugMode == ClassReps[(int32)ENetFields_Private::_debugMode].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivorPlagueEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorPlagueEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
