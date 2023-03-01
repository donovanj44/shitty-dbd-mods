// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Firecracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirecracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecracker();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirecracker::execGetBlindnessEffectDuration)
	{
		P_GET_OBJECT(AActor,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlindnessEffectDuration(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetDeafnessEffectDuration)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeafnessEffectDuration(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayModifierContainer*>*)Z_Param__Result=P_THIS->GetEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetExploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetExploded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetExplosionDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExplosionDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetExplosionEffectDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExplosionEffectDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetExplosionRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExplosionRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execGetModifierValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetModifierValue(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execHasFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFlag(Z_Param_flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execHasModifierOfType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasModifierOfType(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execMulticast_InitFromSpawner)
	{
		P_GET_OBJECT(ACollectable,Z_Param_spawner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_InitFromSpawner_Implementation(Z_Param_spawner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execOnEffectsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffectsInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execShouldBlind)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBlind(Z_Param_player,Z_Param_Out_outDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirecracker::execShouldDeafen)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDeafen(Z_Param_player,Z_Param_Out_outDuration);
		P_NATIVE_END;
	}
	static FName NAME_AFirecracker_Multicast_InitFromSpawner = FName(TEXT("Multicast_InitFromSpawner"));
	void AFirecracker::Multicast_InitFromSpawner(ACollectable* spawner)
	{
		Firecracker_eventMulticast_InitFromSpawner_Parms Parms;
		Parms.spawner=spawner;
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_Multicast_InitFromSpawner),&Parms);
	}
	static FName NAME_AFirecracker_OnEffectsInitialized = FName(TEXT("OnEffectsInitialized"));
	void AFirecracker::OnEffectsInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_OnEffectsInitialized),NULL);
	}
	static FName NAME_AFirecracker_OnExplode = FName(TEXT("OnExplode"));
	void AFirecracker::OnExplode()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_OnExplode),NULL);
	}
	static FName NAME_AFirecracker_OnFuseBurnEnter = FName(TEXT("OnFuseBurnEnter"));
	void AFirecracker::OnFuseBurnEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_OnFuseBurnEnter),NULL);
	}
	static FName NAME_AFirecracker_OnFuseBurnExit = FName(TEXT("OnFuseBurnExit"));
	void AFirecracker::OnFuseBurnExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_OnFuseBurnExit),NULL);
	}
	static FName NAME_AFirecracker_OnFuseBurnUpdate = FName(TEXT("OnFuseBurnUpdate"));
	void AFirecracker::OnFuseBurnUpdate(float deltaSeconds, float fuseTimeLeftPercent)
	{
		Firecracker_eventOnFuseBurnUpdate_Parms Parms;
		Parms.deltaSeconds=deltaSeconds;
		Parms.fuseTimeLeftPercent=fuseTimeLeftPercent;
		ProcessEvent(FindFunctionChecked(NAME_AFirecracker_OnFuseBurnUpdate),&Parms);
	}
	void AFirecracker::StaticRegisterNativesAFirecracker()
	{
		UClass* Class = AFirecracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlindnessEffectDuration", &AFirecracker::execGetBlindnessEffectDuration },
			{ "GetDeafnessEffectDuration", &AFirecracker::execGetDeafnessEffectDuration },
			{ "GetEffects", &AFirecracker::execGetEffects },
			{ "GetExploded", &AFirecracker::execGetExploded },
			{ "GetExplosionDelay", &AFirecracker::execGetExplosionDelay },
			{ "GetExplosionEffectDuration", &AFirecracker::execGetExplosionEffectDuration },
			{ "GetExplosionRange", &AFirecracker::execGetExplosionRange },
			{ "GetModifierValue", &AFirecracker::execGetModifierValue },
			{ "HasFlag", &AFirecracker::execHasFlag },
			{ "HasModifierOfType", &AFirecracker::execHasModifierOfType },
			{ "Multicast_InitFromSpawner", &AFirecracker::execMulticast_InitFromSpawner },
			{ "OnEffectsInitialized", &AFirecracker::execOnEffectsInitialized },
			{ "ShouldBlind", &AFirecracker::execShouldBlind },
			{ "ShouldDeafen", &AFirecracker::execShouldDeafen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics
	{
		struct Firecracker_eventGetBlindnessEffectDuration_Parms
		{
			const AActor* player;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetBlindnessEffectDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetBlindnessEffectDuration_Parms, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetBlindnessEffectDuration", nullptr, nullptr, sizeof(Firecracker_eventGetBlindnessEffectDuration_Parms), Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics
	{
		struct Firecracker_eventGetDeafnessEffectDuration_Parms
		{
			const ADBDPlayer* player;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetDeafnessEffectDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetDeafnessEffectDuration_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetDeafnessEffectDuration", nullptr, nullptr, sizeof(Firecracker_eventGetDeafnessEffectDuration_Parms), Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetEffects_Statics
	{
		struct Firecracker_eventGetEffects_Parms
		{
			TArray<UGameplayModifierContainer*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetEffects_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetEffects", nullptr, nullptr, sizeof(Firecracker_eventGetEffects_Parms), Z_Construct_UFunction_AFirecracker_GetEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetExploded_Statics
	{
		struct Firecracker_eventGetExploded_Parms
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
	void Z_Construct_UFunction_AFirecracker_GetExploded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Firecracker_eventGetExploded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirecracker_GetExploded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Firecracker_eventGetExploded_Parms), &Z_Construct_UFunction_AFirecracker_GetExploded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetExploded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetExploded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetExploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetExploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetExploded", nullptr, nullptr, sizeof(Firecracker_eventGetExploded_Parms), Z_Construct_UFunction_AFirecracker_GetExploded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExploded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetExploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetExploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetExploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics
	{
		struct Firecracker_eventGetExplosionDelay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetExplosionDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetExplosionDelay", nullptr, nullptr, sizeof(Firecracker_eventGetExplosionDelay_Parms), Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetExplosionDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetExplosionDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics
	{
		struct Firecracker_eventGetExplosionEffectDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetExplosionEffectDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetExplosionEffectDuration", nullptr, nullptr, sizeof(Firecracker_eventGetExplosionEffectDuration_Parms), Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics
	{
		struct Firecracker_eventGetExplosionRange_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetExplosionRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetExplosionRange", nullptr, nullptr, sizeof(Firecracker_eventGetExplosionRange_Parms), Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetExplosionRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetExplosionRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics
	{
		struct Firecracker_eventGetModifierValue_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetModifierValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventGetModifierValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "GetModifierValue", nullptr, nullptr, sizeof(Firecracker_eventGetModifierValue_Parms), Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_GetModifierValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_GetModifierValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_HasFlag_Statics
	{
		struct Firecracker_eventHasFlag_Parms
		{
			FGameplayTag flag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Firecracker_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Firecracker_eventHasFlag_Parms), &Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventHasFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_HasFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_HasFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_HasFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_HasFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "HasFlag", nullptr, nullptr, sizeof(Firecracker_eventHasFlag_Parms), Z_Construct_UFunction_AFirecracker_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_HasFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_HasFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_HasFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_HasFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_HasFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics
	{
		struct Firecracker_eventHasModifierOfType_Parms
		{
			FGameplayTag type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Firecracker_eventHasModifierOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Firecracker_eventHasModifierOfType_Parms), &Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventHasModifierOfType_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "HasModifierOfType", nullptr, nullptr, sizeof(Firecracker_eventHasModifierOfType_Parms), Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_HasModifierOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_HasModifierOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::NewProp_spawner = { "spawner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventMulticast_InitFromSpawner_Parms, spawner), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::NewProp_spawner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "Multicast_InitFromSpawner", nullptr, nullptr, sizeof(Firecracker_eventMulticast_InitFromSpawner_Parms), Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "OnEffectsInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_OnEffectsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_OnEffectsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_OnExplode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "OnExplode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_OnExplode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "OnFuseBurnEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "OnFuseBurnExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_OnFuseBurnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_OnFuseBurnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fuseTimeLeftPercent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::NewProp_fuseTimeLeftPercent = { "fuseTimeLeftPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventOnFuseBurnUpdate_Parms, fuseTimeLeftPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventOnFuseBurnUpdate_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::NewProp_fuseTimeLeftPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "OnFuseBurnUpdate", nullptr, nullptr, sizeof(Firecracker_eventOnFuseBurnUpdate_Parms), Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics
	{
		struct Firecracker_eventShouldBlind_Parms
		{
			const ADBDPlayer* player;
			float outDuration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Firecracker_eventShouldBlind_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Firecracker_eventShouldBlind_Parms), &Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_outDuration = { "outDuration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventShouldBlind_Parms, outDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventShouldBlind_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_outDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "ShouldBlind", nullptr, nullptr, sizeof(Firecracker_eventShouldBlind_Parms), Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_ShouldBlind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_ShouldBlind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics
	{
		struct Firecracker_eventShouldDeafen_Parms
		{
			const ADBDPlayer* player;
			float outDuration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Firecracker_eventShouldDeafen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Firecracker_eventShouldDeafen_Parms), &Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_outDuration = { "outDuration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventShouldDeafen_Parms, outDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firecracker_eventShouldDeafen_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_outDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecracker, nullptr, "ShouldDeafen", nullptr, nullptr, sizeof(Firecracker_eventShouldDeafen_Parms), Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecracker_ShouldDeafen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecracker_ShouldDeafen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirecracker_NoRegister()
	{
		return AFirecracker::StaticClass();
	}
	struct Z_Construct_UClass_AFirecracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorsInRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__actorsInRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorsInRange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exploded_MetaData[];
#endif
		static void NewProp__exploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__exploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__effectModifiers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__effectModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisplayEnabled_MetaData[];
#endif
		static void NewProp_DebugDisplayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDisplayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__effectArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirecracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirecracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirecracker_GetBlindnessEffectDuration, "GetBlindnessEffectDuration" }, // 199730443
		{ &Z_Construct_UFunction_AFirecracker_GetDeafnessEffectDuration, "GetDeafnessEffectDuration" }, // 1438365599
		{ &Z_Construct_UFunction_AFirecracker_GetEffects, "GetEffects" }, // 981057628
		{ &Z_Construct_UFunction_AFirecracker_GetExploded, "GetExploded" }, // 555407985
		{ &Z_Construct_UFunction_AFirecracker_GetExplosionDelay, "GetExplosionDelay" }, // 628907428
		{ &Z_Construct_UFunction_AFirecracker_GetExplosionEffectDuration, "GetExplosionEffectDuration" }, // 1050936226
		{ &Z_Construct_UFunction_AFirecracker_GetExplosionRange, "GetExplosionRange" }, // 3317790742
		{ &Z_Construct_UFunction_AFirecracker_GetModifierValue, "GetModifierValue" }, // 1436056951
		{ &Z_Construct_UFunction_AFirecracker_HasFlag, "HasFlag" }, // 1216778371
		{ &Z_Construct_UFunction_AFirecracker_HasModifierOfType, "HasModifierOfType" }, // 2956470391
		{ &Z_Construct_UFunction_AFirecracker_Multicast_InitFromSpawner, "Multicast_InitFromSpawner" }, // 880608237
		{ &Z_Construct_UFunction_AFirecracker_OnEffectsInitialized, "OnEffectsInitialized" }, // 2752970566
		{ &Z_Construct_UFunction_AFirecracker_OnExplode, "OnExplode" }, // 1711212390
		{ &Z_Construct_UFunction_AFirecracker_OnFuseBurnEnter, "OnFuseBurnEnter" }, // 3623719843
		{ &Z_Construct_UFunction_AFirecracker_OnFuseBurnExit, "OnFuseBurnExit" }, // 1622398107
		{ &Z_Construct_UFunction_AFirecracker_OnFuseBurnUpdate, "OnFuseBurnUpdate" }, // 3835296885
		{ &Z_Construct_UFunction_AFirecracker_ShouldBlind, "ShouldBlind" }, // 2151756199
		{ &Z_Construct_UFunction_AFirecracker_ShouldDeafen, "ShouldDeafen" }, // 1243946699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Firecracker.h" },
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange = { "_actorsInRange", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirecracker, _actorsInRange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange_Inner = { "_actorsInRange", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	void Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded_SetBit(void* Obj)
	{
		((AFirecracker*)Obj)->_exploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded = { "_exploded", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirecracker), &Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp__playerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__playerOwner = { "_playerOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirecracker, _playerOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp__playerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp__playerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers_MetaData[] = {
		{ "Category", "Firecracker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers = { "_effectModifiers", nullptr, (EPropertyFlags)0x002008800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirecracker, _effectModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers_Inner = { "_effectModifiers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled_MetaData[] = {
		{ "Category", "Firecracker" },
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	void Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled_SetBit(void* Obj)
	{
		((AFirecracker*)Obj)->DebugDisplayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled = { "DebugDisplayEnabled", nullptr, (EPropertyFlags)0x0020080000012005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirecracker), &Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecracker_Statics::NewProp__effectArea_MetaData[] = {
		{ "Category", "Firecracker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Firecracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirecracker_Statics::NewProp__effectArea = { "_effectArea", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirecracker, _effectArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::NewProp__effectArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::NewProp__effectArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirecracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__actorsInRange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__exploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__playerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__effectModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp_DebugDisplayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirecracker_Statics::NewProp__effectArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirecracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirecracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirecracker_Statics::ClassParams = {
		&AFirecracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirecracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirecracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirecracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirecracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirecracker, 2744672198);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AFirecracker>()
	{
		return AFirecracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirecracker(Z_Construct_UClass_AFirecracker, &AFirecracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AFirecracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirecracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
