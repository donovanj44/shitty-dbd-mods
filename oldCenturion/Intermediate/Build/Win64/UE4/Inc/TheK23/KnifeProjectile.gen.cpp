// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/KnifeProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnifeProjectile() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_AKnifeProjectile_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_AKnifeProjectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPoolableProjectileComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AKnifeProjectile::execGetAddonExplosionRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAddonExplosionRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execKnifeCanPierceCampers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KnifeCanPierceCampers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execOnProjectileBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_impactResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBounce(Z_Param_Out_impactResult,Z_Param_Out_impactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execOnWorldColliderHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldColliderHit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execSetKnifeAcquired)
	{
		P_GET_UBOOL(Z_Param_acquired);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKnifeAcquired(Z_Param_acquired);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execShouldPlayRicochetSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPlayRicochetSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKnifeProjectile::execWasLaunchedDuringSuperMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasLaunchedDuringSuperMode();
		P_NATIVE_END;
	}
	static FName NAME_AKnifeProjectile_BP_CosmeticOnAddonExplosion = FName(TEXT("BP_CosmeticOnAddonExplosion"));
	void AKnifeProjectile::BP_CosmeticOnAddonExplosion(FVector const& location, FVector const& normal)
	{
		KnifeProjectile_eventBP_CosmeticOnAddonExplosion_Parms Parms;
		Parms.location=location;
		Parms.normal=normal;
		ProcessEvent(FindFunctionChecked(NAME_AKnifeProjectile_BP_CosmeticOnAddonExplosion),&Parms);
	}
	static FName NAME_AKnifeProjectile_BP_OnLaunchCosmetic = FName(TEXT("BP_OnLaunchCosmetic"));
	void AKnifeProjectile::BP_OnLaunchCosmetic(FLaunchInfo launchInfo, bool hasImpactOnLaunch)
	{
		KnifeProjectile_eventBP_OnLaunchCosmetic_Parms Parms;
		Parms.launchInfo=launchInfo;
		Parms.hasImpactOnLaunch=hasImpactOnLaunch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AKnifeProjectile_BP_OnLaunchCosmetic),&Parms);
	}
	static FName NAME_AKnifeProjectile_BP_SetKnifeActive = FName(TEXT("BP_SetKnifeActive"));
	void AKnifeProjectile::BP_SetKnifeActive(bool active)
	{
		KnifeProjectile_eventBP_SetKnifeActive_Parms Parms;
		Parms.active=active ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AKnifeProjectile_BP_SetKnifeActive),&Parms);
	}
	void AKnifeProjectile::StaticRegisterNativesAKnifeProjectile()
	{
		UClass* Class = AKnifeProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAddonExplosionRadius", &AKnifeProjectile::execGetAddonExplosionRadius },
			{ "KnifeCanPierceCampers", &AKnifeProjectile::execKnifeCanPierceCampers },
			{ "OnProjectileBounce", &AKnifeProjectile::execOnProjectileBounce },
			{ "OnWorldColliderHit", &AKnifeProjectile::execOnWorldColliderHit },
			{ "SetKnifeAcquired", &AKnifeProjectile::execSetKnifeAcquired },
			{ "ShouldPlayRicochetSound", &AKnifeProjectile::execShouldPlayRicochetSound },
			{ "WasLaunchedDuringSuperMode", &AKnifeProjectile::execWasLaunchedDuringSuperMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventBP_CosmeticOnAddonExplosion_Parms, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventBP_CosmeticOnAddonExplosion_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "BP_CosmeticOnAddonExplosion", nullptr, nullptr, sizeof(KnifeProjectile_eventBP_CosmeticOnAddonExplosion_Parms), Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics
	{
		static void NewProp_hasImpactOnLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasImpactOnLaunch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_hasImpactOnLaunch_SetBit(void* Obj)
	{
		((KnifeProjectile_eventBP_OnLaunchCosmetic_Parms*)Obj)->hasImpactOnLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_hasImpactOnLaunch = { "hasImpactOnLaunch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventBP_OnLaunchCosmetic_Parms), &Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_hasImpactOnLaunch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventBP_OnLaunchCosmetic_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_hasImpactOnLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::NewProp_launchInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "BP_OnLaunchCosmetic", nullptr, nullptr, sizeof(KnifeProjectile_eventBP_OnLaunchCosmetic_Parms), Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics
	{
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((KnifeProjectile_eventBP_SetKnifeActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventBP_SetKnifeActive_Parms), &Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "BP_SetKnifeActive", nullptr, nullptr, sizeof(KnifeProjectile_eventBP_SetKnifeActive_Parms), Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics
	{
		struct KnifeProjectile_eventGetAddonExplosionRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventGetAddonExplosionRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "GetAddonExplosionRadius", nullptr, nullptr, sizeof(KnifeProjectile_eventGetAddonExplosionRadius_Parms), Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics
	{
		struct KnifeProjectile_eventKnifeCanPierceCampers_Parms
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
	void Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KnifeProjectile_eventKnifeCanPierceCampers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventKnifeCanPierceCampers_Parms), &Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "KnifeCanPierceCampers", nullptr, nullptr, sizeof(KnifeProjectile_eventKnifeCanPierceCampers_Parms), Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics
	{
		struct KnifeProjectile_eventOnProjectileBounce_Parms
		{
			FHitResult impactResult;
			FVector impactVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactVelocity = { "impactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnProjectileBounce_Parms, impactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactResult = { "impactResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnProjectileBounce_Parms, impactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::NewProp_impactResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "OnProjectileBounce", nullptr, nullptr, sizeof(KnifeProjectile_eventOnProjectileBounce_Parms), Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics
	{
		struct KnifeProjectile_eventOnWorldColliderHit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnWorldColliderHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnWorldColliderHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnWorldColliderHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnWorldColliderHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeProjectile_eventOnWorldColliderHit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_normalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "OnWorldColliderHit", nullptr, nullptr, sizeof(KnifeProjectile_eventOnWorldColliderHit_Parms), Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics
	{
		struct KnifeProjectile_eventSetKnifeAcquired_Parms
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
	void Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((KnifeProjectile_eventSetKnifeAcquired_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventSetKnifeAcquired_Parms), &Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "SetKnifeAcquired", nullptr, nullptr, sizeof(KnifeProjectile_eventSetKnifeAcquired_Parms), Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics
	{
		struct KnifeProjectile_eventShouldPlayRicochetSound_Parms
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
	void Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KnifeProjectile_eventShouldPlayRicochetSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventShouldPlayRicochetSound_Parms), &Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "ShouldPlayRicochetSound", nullptr, nullptr, sizeof(KnifeProjectile_eventShouldPlayRicochetSound_Parms), Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics
	{
		struct KnifeProjectile_eventWasLaunchedDuringSuperMode_Parms
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
	void Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KnifeProjectile_eventWasLaunchedDuringSuperMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KnifeProjectile_eventWasLaunchedDuringSuperMode_Parms), &Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeProjectile, nullptr, "WasLaunchedDuringSuperMode", nullptr, nullptr, sizeof(KnifeProjectile_eventWasLaunchedDuringSuperMode_Parms), Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKnifeProjectile_NoRegister()
	{
		return AKnifeProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AKnifeProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfAddonBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__numberOfAddonBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__addonExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__knifeMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__knifeMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersAffectedThisThrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__playersAffectedThisThrow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersAffectedThisThrow_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__worldCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnifeProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKillerProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKnifeProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKnifeProjectile_BP_CosmeticOnAddonExplosion, "BP_CosmeticOnAddonExplosion" }, // 1879029413
		{ &Z_Construct_UFunction_AKnifeProjectile_BP_OnLaunchCosmetic, "BP_OnLaunchCosmetic" }, // 3916020781
		{ &Z_Construct_UFunction_AKnifeProjectile_BP_SetKnifeActive, "BP_SetKnifeActive" }, // 282449056
		{ &Z_Construct_UFunction_AKnifeProjectile_GetAddonExplosionRadius, "GetAddonExplosionRadius" }, // 2656820178
		{ &Z_Construct_UFunction_AKnifeProjectile_KnifeCanPierceCampers, "KnifeCanPierceCampers" }, // 689387818
		{ &Z_Construct_UFunction_AKnifeProjectile_OnProjectileBounce, "OnProjectileBounce" }, // 3886085277
		{ &Z_Construct_UFunction_AKnifeProjectile_OnWorldColliderHit, "OnWorldColliderHit" }, // 2479612472
		{ &Z_Construct_UFunction_AKnifeProjectile_SetKnifeAcquired, "SetKnifeAcquired" }, // 3562066153
		{ &Z_Construct_UFunction_AKnifeProjectile_ShouldPlayRicochetSound, "ShouldPlayRicochetSound" }, // 175485815
		{ &Z_Construct_UFunction_AKnifeProjectile_WasLaunchedDuringSuperMode, "WasLaunchedDuringSuperMode" }, // 441569384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KnifeProjectile.h" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__numberOfAddonBounces_MetaData[] = {
		{ "Category", "KnifeProjectile" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__numberOfAddonBounces = { "_numberOfAddonBounces", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _numberOfAddonBounces), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__numberOfAddonBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__numberOfAddonBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__addonExplosionRadius_MetaData[] = {
		{ "Category", "KnifeProjectile" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__addonExplosionRadius = { "_addonExplosionRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _addonExplosionRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__addonExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__addonExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__knifeMaxRange_MetaData[] = {
		{ "Category", "KnifeProjectile" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__knifeMaxRange = { "_knifeMaxRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _knifeMaxRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__knifeMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__knifeMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__poolableActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__poolableActorComponent = { "_poolableActorComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _poolableActorComponent), Z_Construct_UClass_UPoolableProjectileComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__poolableActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__poolableActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow = { "_playersAffectedThisThrow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _playersAffectedThisThrow), METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow_ElementProp = { "_playersAffectedThisThrow", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__camperDetector_MetaData[] = {
		{ "Category", "KnifeProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__camperDetector = { "_camperDetector", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _camperDetector), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__camperDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__camperDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__worldCollider_MetaData[] = {
		{ "Category", "KnifeProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KnifeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__worldCollider = { "_worldCollider", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKnifeProjectile, _worldCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__worldCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__worldCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__numberOfAddonBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__addonExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__knifeMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__poolableActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__playersAffectedThisThrow_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__camperDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKnifeProjectile_Statics::NewProp__worldCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnifeProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnifeProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKnifeProjectile_Statics::ClassParams = {
		&AKnifeProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnifeProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKnifeProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKnifeProjectile, 897185547);
	template<> THEK23_API UClass* StaticClass<AKnifeProjectile>()
	{
		return AKnifeProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKnifeProjectile(Z_Construct_UClass_AKnifeProjectile, &AKnifeProjectile::StaticClass, TEXT("/Script/TheK23"), TEXT("AKnifeProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnifeProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
