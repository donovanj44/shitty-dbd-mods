// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/BaseGasCloudProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGasCloudProjectile() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_ABaseGasCloudProjectile();
	PROJECTILE_API UClass* Z_Construct_UClass_APhysicsBasedProjectile();
	UPackage* Z_Construct_UPackage__Script_TheClown();
	THECLOWN_API UEnum* Z_Construct_UEnum_TheClown_EBombType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	THECLOWN_API UClass* Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPoolableProjectileComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execAuthority_GetCumulativeLifetime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Authority_GetCumulativeLifetime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execAuthority_SetCumulativeLifetime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetCumulativeLifetime(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execDissipateGasCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DissipateGasCloud_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execGetGasType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBombType*)Z_Param__Result=P_THIS->GetGasType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execIsDissipating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDissipating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execIsSurvivorDetectionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSurvivorDetectionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execMulticast_DissipateGasCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DissipateGasCloud_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execOnAcquiredChanged)
	{
		P_GET_UBOOL(Z_Param_acquired);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcquiredChanged(Z_Param_acquired);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_hitComp,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_hitComp,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execSetIgnoredActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoredActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGasCloudProjectile::execSetIsDissipating)
	{
		P_GET_UBOOL(Z_Param_NewIsDissipating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDissipating(Z_Param_NewIsDissipating);
		P_NATIVE_END;
	}
	static FName NAME_ABaseGasCloudProjectile_ActivateCosmetic_BP = FName(TEXT("ActivateCosmetic_BP"));
	void ABaseGasCloudProjectile::ActivateCosmetic_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseGasCloudProjectile_ActivateCosmetic_BP),NULL);
	}
	static FName NAME_ABaseGasCloudProjectile_DissipateGasCloud = FName(TEXT("DissipateGasCloud"));
	void ABaseGasCloudProjectile::DissipateGasCloud()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseGasCloudProjectile_DissipateGasCloud),NULL);
	}
	static FName NAME_ABaseGasCloudProjectile_Multicast_DissipateGasCloud = FName(TEXT("Multicast_DissipateGasCloud"));
	void ABaseGasCloudProjectile::Multicast_DissipateGasCloud()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseGasCloudProjectile_Multicast_DissipateGasCloud),NULL);
	}
	static FName NAME_ABaseGasCloudProjectile_OnDelayedActivationStart = FName(TEXT("OnDelayedActivationStart"));
	void ABaseGasCloudProjectile::OnDelayedActivationStart(float delay)
	{
		BaseGasCloudProjectile_eventOnDelayedActivationStart_Parms Parms;
		Parms.delay=delay;
		ProcessEvent(FindFunctionChecked(NAME_ABaseGasCloudProjectile_OnDelayedActivationStart),&Parms);
	}
	static FName NAME_ABaseGasCloudProjectile_SetGasAudioActive = FName(TEXT("SetGasAudioActive"));
	void ABaseGasCloudProjectile::SetGasAudioActive(bool activated)
	{
		BaseGasCloudProjectile_eventSetGasAudioActive_Parms Parms;
		Parms.activated=activated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseGasCloudProjectile_SetGasAudioActive),&Parms);
	}
	void ABaseGasCloudProjectile::StaticRegisterNativesABaseGasCloudProjectile()
	{
		UClass* Class = ABaseGasCloudProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_GetCumulativeLifetime", &ABaseGasCloudProjectile::execAuthority_GetCumulativeLifetime },
			{ "Authority_SetCumulativeLifetime", &ABaseGasCloudProjectile::execAuthority_SetCumulativeLifetime },
			{ "DissipateGasCloud", &ABaseGasCloudProjectile::execDissipateGasCloud },
			{ "GetGasType", &ABaseGasCloudProjectile::execGetGasType },
			{ "IsDissipating", &ABaseGasCloudProjectile::execIsDissipating },
			{ "IsSurvivorDetectionEnabled", &ABaseGasCloudProjectile::execIsSurvivorDetectionEnabled },
			{ "Multicast_DissipateGasCloud", &ABaseGasCloudProjectile::execMulticast_DissipateGasCloud },
			{ "OnAcquiredChanged", &ABaseGasCloudProjectile::execOnAcquiredChanged },
			{ "OnOverlapBegin", &ABaseGasCloudProjectile::execOnOverlapBegin },
			{ "OnOverlapEnd", &ABaseGasCloudProjectile::execOnOverlapEnd },
			{ "SetIgnoredActors", &ABaseGasCloudProjectile::execSetIgnoredActors },
			{ "SetIsDissipating", &ABaseGasCloudProjectile::execSetIsDissipating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "ActivateCosmetic_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics
	{
		struct BaseGasCloudProjectile_eventAuthority_GetCumulativeLifetime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventAuthority_GetCumulativeLifetime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "Authority_GetCumulativeLifetime", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventAuthority_GetCumulativeLifetime_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics
	{
		struct BaseGasCloudProjectile_eventAuthority_SetCumulativeLifetime_Parms
		{
			float value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventAuthority_SetCumulativeLifetime_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "Authority_SetCumulativeLifetime", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventAuthority_SetCumulativeLifetime_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "DissipateGasCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics
	{
		struct BaseGasCloudProjectile_eventGetGasType_Parms
		{
			EBombType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventGetGasType_Parms, ReturnValue), Z_Construct_UEnum_TheClown_EBombType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "GetGasType", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventGetGasType_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics
	{
		struct BaseGasCloudProjectile_eventIsDissipating_Parms
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
	void Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventIsDissipating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventIsDissipating_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "IsDissipating", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventIsDissipating_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics
	{
		struct BaseGasCloudProjectile_eventIsSurvivorDetectionEnabled_Parms
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
	void Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventIsSurvivorDetectionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventIsSurvivorDetectionEnabled_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "IsSurvivorDetectionEnabled", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventIsSurvivorDetectionEnabled_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "Multicast_DissipateGasCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics
	{
		struct BaseGasCloudProjectile_eventOnAcquiredChanged_Parms
		{
			bool acquired;
		};
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventOnAcquiredChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventOnAcquiredChanged_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "OnAcquiredChanged", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventOnAcquiredChanged_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnDelayedActivationStart_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "OnDelayedActivationStart", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventOnDelayedActivationStart_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics
	{
		struct BaseGasCloudProjectile_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* hitComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapBegin_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_hitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapBegin_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_hitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_hitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::NewProp_hitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics
	{
		struct BaseGasCloudProjectile_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* hitComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapEnd_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapEnd_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapEnd_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_hitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGasCloudProjectile_eventOnOverlapEnd_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_hitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_hitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::NewProp_hitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics
	{
		static void NewProp_activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::NewProp_activated_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventSetGasAudioActive_Parms*)Obj)->activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::NewProp_activated = { "activated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventSetGasAudioActive_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::NewProp_activated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::NewProp_activated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "SetGasAudioActive", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventSetGasAudioActive_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "SetIgnoredActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics
	{
		struct BaseGasCloudProjectile_eventSetIsDissipating_Parms
		{
			bool NewIsDissipating;
		};
		static void NewProp_NewIsDissipating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsDissipating;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::NewProp_NewIsDissipating_SetBit(void* Obj)
	{
		((BaseGasCloudProjectile_eventSetIsDissipating_Parms*)Obj)->NewIsDissipating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::NewProp_NewIsDissipating = { "NewIsDissipating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGasCloudProjectile_eventSetIsDissipating_Parms), &Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::NewProp_NewIsDissipating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::NewProp_NewIsDissipating,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGasCloudProjectile, nullptr, "SetIsDissipating", nullptr, nullptr, sizeof(BaseGasCloudProjectile_eventSetIsDissipating_Parms), Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseGasCloudProjectile_NoRegister()
	{
		return ABaseGasCloudProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGasCloudProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cumulativeLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cumulativeLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloudSizeModifierTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cloudSizeModifierTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeGasCloudTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeGasCloudTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__complexCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__complexCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__simpleCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__simpleCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gasParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__overlappingSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dissipating_MetaData[];
#endif
		static void NewProp__dissipating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__dissipating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__overlappingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudCosmeticFadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudCosmeticFadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudDetectionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudDetectionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudSurvivorDetectionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudSurvivorDetectionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudComplexCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudComplexCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudSimpleCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudSimpleCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudMinimumLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudMinimumLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dissipateGasCloudTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dissipateGasCloudTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudBounciness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudBounciness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudGravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasCloudDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gasCloudDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gasType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__gasType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__gasType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGasCloudProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsBasedProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGasCloudProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_ActivateCosmetic_BP, "ActivateCosmetic_BP" }, // 1407645778
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_GetCumulativeLifetime, "Authority_GetCumulativeLifetime" }, // 3664962624
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_Authority_SetCumulativeLifetime, "Authority_SetCumulativeLifetime" }, // 2015433111
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_DissipateGasCloud, "DissipateGasCloud" }, // 738936484
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_GetGasType, "GetGasType" }, // 3842700329
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_IsDissipating, "IsDissipating" }, // 3565214198
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_IsSurvivorDetectionEnabled, "IsSurvivorDetectionEnabled" }, // 1542988044
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_Multicast_DissipateGasCloud, "Multicast_DissipateGasCloud" }, // 3780730104
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_OnAcquiredChanged, "OnAcquiredChanged" }, // 3191238682
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_OnDelayedActivationStart, "OnDelayedActivationStart" }, // 2461873064
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapBegin, "OnOverlapBegin" }, // 3395497442
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_OnOverlapEnd, "OnOverlapEnd" }, // 4187002680
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_SetGasAudioActive, "SetGasAudioActive" }, // 4255224565
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_SetIgnoredActors, "SetIgnoredActors" }, // 4136356540
		{ &Z_Construct_UFunction_ABaseGasCloudProjectile_SetIsDissipating, "SetIsDissipating" }, // 4049936254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGasCloudProjectile.h" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cumulativeLifetime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cumulativeLifetime = { "_cumulativeLifetime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _cumulativeLifetime), METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cumulativeLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cumulativeLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cloudSizeModifierTag_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cloudSizeModifierTag = { "_cloudSizeModifierTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _cloudSizeModifierTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cloudSizeModifierTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cloudSizeModifierTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__activeGasCloudTracker_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__activeGasCloudTracker = { "_activeGasCloudTracker", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _activeGasCloudTracker), Z_Construct_UClass_UActiveGasCloudTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__activeGasCloudTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__activeGasCloudTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__survivorDetector_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__survivorDetector = { "_survivorDetector", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _survivorDetector), Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__survivorDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__survivorDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__complexCollider_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__complexCollider = { "_complexCollider", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _complexCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__complexCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__complexCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__simpleCollider_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__simpleCollider = { "_simpleCollider", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _simpleCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__simpleCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__simpleCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasParticleSystem_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasParticleSystem = { "_gasParticleSystem", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors = { "_overlappingSurvivors", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _overlappingSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors_Inner = { "_overlappingSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating_SetBit(void* Obj)
	{
		((ABaseGasCloudProjectile*)Obj)->_dissipating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating = { "_dissipating", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGasCloudProjectile), &Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingTime_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingTime = { "_overlappingTime", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _overlappingTime), METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudCosmeticFadeDuration_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudCosmeticFadeDuration = { "_gasCloudCosmeticFadeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudCosmeticFadeDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudCosmeticFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudCosmeticFadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDetectionDelay_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDetectionDelay = { "_gasCloudDetectionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudDetectionDelay), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDetectionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDetectionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSurvivorDetectionRadius_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSurvivorDetectionRadius = { "_gasCloudSurvivorDetectionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudSurvivorDetectionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSurvivorDetectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSurvivorDetectionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudComplexCollisionRadius_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudComplexCollisionRadius = { "_gasCloudComplexCollisionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudComplexCollisionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudComplexCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudComplexCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSimpleCollisionRadius_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSimpleCollisionRadius = { "_gasCloudSimpleCollisionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudSimpleCollisionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSimpleCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSimpleCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudMinimumLifetime_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudMinimumLifetime = { "_gasCloudMinimumLifetime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudMinimumLifetime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudMinimumLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudMinimumLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipateGasCloudTime_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipateGasCloudTime = { "_dissipateGasCloudTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _dissipateGasCloudTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipateGasCloudTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipateGasCloudTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudFriction_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudFriction = { "_gasCloudFriction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudFriction), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudBounciness_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudBounciness = { "_gasCloudBounciness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudBounciness), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudBounciness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudBounciness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudGravityScale_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudGravityScale = { "_gasCloudGravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudGravityScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudGravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDuration_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDuration = { "_gasCloudDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__poolableProjectile_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__poolableProjectile = { "_poolableProjectile", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _poolableProjectile), Z_Construct_UClass_UPoolableProjectileComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__poolableProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__poolableProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType_MetaData[] = {
		{ "Category", "BaseGasCloudProjectile" },
		{ "ModuleRelativePath", "Public/BaseGasCloudProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType = { "_gasType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGasCloudProjectile, _gasType), Z_Construct_UEnum_TheClown_EBombType, METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGasCloudProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cumulativeLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__cloudSizeModifierTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__activeGasCloudTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__survivorDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__complexCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__simpleCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__overlappingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudCosmeticFadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDetectionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSurvivorDetectionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudComplexCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudSimpleCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudMinimumLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__dissipateGasCloudTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudBounciness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasCloudDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__poolableProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGasCloudProjectile_Statics::NewProp__gasType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGasCloudProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGasCloudProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGasCloudProjectile_Statics::ClassParams = {
		&ABaseGasCloudProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGasCloudProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGasCloudProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGasCloudProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGasCloudProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGasCloudProjectile, 3629805691);
	template<> THECLOWN_API UClass* StaticClass<ABaseGasCloudProjectile>()
	{
		return ABaseGasCloudProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGasCloudProjectile(Z_Construct_UClass_ABaseGasCloudProjectile, &ABaseGasCloudProjectile::StaticClass, TEXT("/Script/TheClown"), TEXT("ABaseGasCloudProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGasCloudProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
