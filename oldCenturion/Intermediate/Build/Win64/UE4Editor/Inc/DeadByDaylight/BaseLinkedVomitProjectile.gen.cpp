// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseLinkedVomitProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLinkedVomitProjectile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseLinkedVomitProjectile_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseLinkedVomitProjectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactInfo();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPoolableProjectileComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABaseLinkedVomitProjectile::execNativeExplode)
	{
		P_GET_STRUCT_REF(FImpactInfo,Z_Param_Out_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeExplode(Z_Param_Out_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseLinkedVomitProjectile::execOnAffectInteractable)
	{
		P_GET_OBJECT(AInteractable,Z_Param_interactable);
		P_GET_OBJECT(USceneComponent,Z_Param_hitComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffectInteractable_Implementation(Z_Param_interactable,Z_Param_hitComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseLinkedVomitProjectile::execOnAffectSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_camperPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffectSurvivor_Implementation(Z_Param_camperPlayer);
		P_NATIVE_END;
	}
	static FName NAME_ABaseLinkedVomitProjectile_OnAffectInteractable = FName(TEXT("OnAffectInteractable"));
	void ABaseLinkedVomitProjectile::OnAffectInteractable(AInteractable* interactable, USceneComponent* hitComponent)
	{
		BaseLinkedVomitProjectile_eventOnAffectInteractable_Parms Parms;
		Parms.interactable=interactable;
		Parms.hitComponent=hitComponent;
		ProcessEvent(FindFunctionChecked(NAME_ABaseLinkedVomitProjectile_OnAffectInteractable),&Parms);
	}
	static FName NAME_ABaseLinkedVomitProjectile_OnAffectSurvivor = FName(TEXT("OnAffectSurvivor"));
	void ABaseLinkedVomitProjectile::OnAffectSurvivor(ACamperPlayer* camperPlayer)
	{
		BaseLinkedVomitProjectile_eventOnAffectSurvivor_Parms Parms;
		Parms.camperPlayer=camperPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ABaseLinkedVomitProjectile_OnAffectSurvivor),&Parms);
	}
	void ABaseLinkedVomitProjectile::StaticRegisterNativesABaseLinkedVomitProjectile()
	{
		UClass* Class = ABaseLinkedVomitProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeExplode", &ABaseLinkedVomitProjectile::execNativeExplode },
			{ "OnAffectInteractable", &ABaseLinkedVomitProjectile::execOnAffectInteractable },
			{ "OnAffectSurvivor", &ABaseLinkedVomitProjectile::execOnAffectSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics
	{
		struct BaseLinkedVomitProjectile_eventNativeExplode_Parms
		{
			FImpactInfo impactInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::NewProp_impactInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLinkedVomitProjectile_eventNativeExplode_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::NewProp_impactInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::NewProp_impactInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseLinkedVomitProjectile, nullptr, "NativeExplode", nullptr, nullptr, sizeof(BaseLinkedVomitProjectile_eventNativeExplode_Parms), Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLinkedVomitProjectile_eventOnAffectInteractable_Parms, hitComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_interactable = { "interactable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLinkedVomitProjectile_eventOnAffectInteractable_Parms, interactable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_hitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::NewProp_interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseLinkedVomitProjectile, nullptr, "OnAffectInteractable", nullptr, nullptr, sizeof(BaseLinkedVomitProjectile_eventOnAffectInteractable_Parms), Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseLinkedVomitProjectile_eventOnAffectSurvivor_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseLinkedVomitProjectile, nullptr, "OnAffectSurvivor", nullptr, nullptr, sizeof(BaseLinkedVomitProjectile_eventOnAffectSurvivor_Parms), Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseLinkedVomitProjectile_NoRegister()
	{
		return ABaseLinkedVomitProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSuperVomit_MetaData[];
#endif
		static void NewProp__isSuperVomit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuperVomit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akAudioEventAudioEventVomitSplash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akAudioEventAudioEventVomitSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitSplash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vomitSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitSplashCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vomitSplashCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akAudioVomitProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akAudioVomitProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splashDamageSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splashDamageSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vomitTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeactivateOrLaunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeactivateOrLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__passThroughSurvivors_MetaData[];
#endif
		static void NewProp__passThroughSurvivors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__passThroughSurvivors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useSplashDamage_MetaData[];
#endif
		static void NewProp__useSplashDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useSplashDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKillerProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseLinkedVomitProjectile_NativeExplode, "NativeExplode" }, // 2292458354
		{ &Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectInteractable, "OnAffectInteractable" }, // 69125652
		{ &Z_Construct_UFunction_ABaseLinkedVomitProjectile_OnAffectSurvivor, "OnAffectSurvivor" }, // 964824543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLinkedVomitProjectile.h" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit_SetBit(void* Obj)
	{
		((ABaseLinkedVomitProjectile*)Obj)->_isSuperVomit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit = { "_isSuperVomit", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseLinkedVomitProjectile), &Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__maxDecalSize_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__maxDecalSize = { "_maxDecalSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _maxDecalSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__maxDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__maxDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__minDecalSize_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__minDecalSize = { "_minDecalSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _minDecalSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__minDecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__minDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioEventAudioEventVomitSplash_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioEventAudioEventVomitSplash = { "_akAudioEventAudioEventVomitSplash", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _akAudioEventAudioEventVomitSplash), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioEventAudioEventVomitSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioEventAudioEventVomitSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplash_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplash = { "_vomitSplash", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitSplash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplashCamper_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplashCamper = { "_vomitSplashCamper", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitSplashCamper), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplashCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplashCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioVomitProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioVomitProjectile = { "_akAudioVomitProjectile", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _akAudioVomitProjectile), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioVomitProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioVomitProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splashDamageSphere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splashDamageSphere = { "_splashDamageSphere", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _splashDamageSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splashDamageSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splashDamageSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splineMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splineMesh = { "_splineMesh", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _splineMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitTrail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitTrail = { "_vomitTrail", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitTrail), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp_OnDeactivateOrLaunch_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp_OnDeactivateOrLaunch = { "OnDeactivateOrLaunch", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, OnDeactivateOrLaunch), Z_Construct_UDelegateFunction_DeadByDaylight_BaseLinkedVomitProjectileOnDeactivateOrLaunch__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp_OnDeactivateOrLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp_OnDeactivateOrLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__poolableProjectile_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__poolableProjectile = { "_poolableProjectile", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLinkedVomitProjectile, _poolableProjectile), Z_Construct_UClass_UPoolableProjectileComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__poolableProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__poolableProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors_SetBit(void* Obj)
	{
		((ABaseLinkedVomitProjectile*)Obj)->_passThroughSurvivors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors = { "_passThroughSurvivors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseLinkedVomitProjectile), &Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage_MetaData[] = {
		{ "Category", "BaseLinkedVomitProjectile" },
		{ "ModuleRelativePath", "Public/BaseLinkedVomitProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage_SetBit(void* Obj)
	{
		((ABaseLinkedVomitProjectile*)Obj)->_useSplashDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage = { "_useSplashDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseLinkedVomitProjectile), &Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__isSuperVomit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__maxDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__minDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioEventAudioEventVomitSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitSplashCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__akAudioVomitProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splashDamageSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__splineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__vomitTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp_OnDeactivateOrLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__poolableProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__passThroughSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::NewProp__useSplashDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseLinkedVomitProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::ClassParams = {
		&ABaseLinkedVomitProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseLinkedVomitProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseLinkedVomitProjectile, 2256767110);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABaseLinkedVomitProjectile>()
	{
		return ABaseLinkedVomitProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseLinkedVomitProjectile(Z_Construct_UClass_ABaseLinkedVomitProjectile, &ABaseLinkedVomitProjectile::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABaseLinkedVomitProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseLinkedVomitProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
