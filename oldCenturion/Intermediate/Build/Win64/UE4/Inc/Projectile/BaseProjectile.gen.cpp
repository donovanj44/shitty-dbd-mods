// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/BaseProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProjectile() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(ABaseProjectile::execAuthority_TryDetectCollision)
	{
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_GET_UBOOL(Z_Param_force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_TryDetectCollision(Z_Param_impactInfo,Z_Param_force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execGetAddLauncherVeloctyFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAddLauncherVeloctyFactor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execGetImpactPrimitiveComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetImpactPrimitiveComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execGetLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseProjectileLauncher**)Z_Param__Result=P_THIS->GetLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execIsOwningPawnLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwningPawnLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execIsValidImpactDetection)
	{
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidImpactDetection_Implementation(Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execIsValidPlayerDetection)
	{
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidPlayerDetection_Implementation(Z_Param_impactInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execLocal_OnPlayerDetected)
	{
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_projectileLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Local_OnPlayerDetected(Z_Param_impactInfo,Z_Param_Out_projectileLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execLocal_SweepImpactCollision)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_end);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_colliderRotation);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Local_SweepImpactCollision(Z_Param_Out_start,Z_Param_Out_end,Z_Param_Out_colliderRotation,Z_Param_Out_outHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execLocal_TryDetectCollision)
	{
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_GET_UBOOL(Z_Param_force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Local_TryDetectCollision(Z_Param_impactInfo,Z_Param_force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseProjectile::execSphereTraceSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_end);
		P_GET_OBJECT(USphereComponent,Z_Param_sphere);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SphereTraceSingle(Z_Param_start,Z_Param_end,Z_Param_sphere,Z_Param_Out_outHitResult);
		P_NATIVE_END;
	}
	static FName NAME_ABaseProjectile_GetAddLauncherVeloctyFactor = FName(TEXT("GetAddLauncherVeloctyFactor"));
	float ABaseProjectile::GetAddLauncherVeloctyFactor() const
	{
		BaseProjectile_eventGetAddLauncherVeloctyFactor_Parms Parms;
		const_cast<ABaseProjectile*>(this)->ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_GetAddLauncherVeloctyFactor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseProjectile_GetImpactPrimitiveComponent = FName(TEXT("GetImpactPrimitiveComponent"));
	UPrimitiveComponent* ABaseProjectile::GetImpactPrimitiveComponent() const
	{
		BaseProjectile_eventGetImpactPrimitiveComponent_Parms Parms;
		const_cast<ABaseProjectile*>(this)->ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_GetImpactPrimitiveComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseProjectile_IsValidImpactDetection = FName(TEXT("IsValidImpactDetection"));
	bool ABaseProjectile::IsValidImpactDetection(FImpactInfo impactInfo)
	{
		BaseProjectile_eventIsValidImpactDetection_Parms Parms;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_IsValidImpactDetection),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ABaseProjectile_IsValidPlayerDetection = FName(TEXT("IsValidPlayerDetection"));
	bool ABaseProjectile::IsValidPlayerDetection(FImpactInfo impactInfo)
	{
		BaseProjectile_eventIsValidPlayerDetection_Parms Parms;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_IsValidPlayerDetection),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ABaseProjectile_OnDetectCollision = FName(TEXT("OnDetectCollision"));
	void ABaseProjectile::OnDetectCollision(FImpactInfo impactInfo)
	{
		BaseProjectile_eventOnDetectCollision_Parms Parms;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_OnDetectCollision),&Parms);
	}
	static FName NAME_ABaseProjectile_OnDetectPlayer = FName(TEXT("OnDetectPlayer"));
	void ABaseProjectile::OnDetectPlayer(FImpactInfo impactInfo)
	{
		BaseProjectile_eventOnDetectPlayer_Parms Parms;
		Parms.impactInfo=impactInfo;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_OnDetectPlayer),&Parms);
	}
	static FName NAME_ABaseProjectile_OnLaunch = FName(TEXT("OnLaunch"));
	void ABaseProjectile::OnLaunch(FLaunchInfo launchInfo, bool hasImpactOnLaunch)
	{
		BaseProjectile_eventOnLaunch_Parms Parms;
		Parms.launchInfo=launchInfo;
		Parms.hasImpactOnLaunch=hasImpactOnLaunch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_OnLaunch),&Parms);
	}
	static FName NAME_ABaseProjectile_OnSetActive = FName(TEXT("OnSetActive"));
	void ABaseProjectile::OnSetActive(bool active)
	{
		BaseProjectile_eventOnSetActive_Parms Parms;
		Parms.active=active ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseProjectile_OnSetActive),&Parms);
	}
	void ABaseProjectile::StaticRegisterNativesABaseProjectile()
	{
		UClass* Class = ABaseProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_TryDetectCollision", &ABaseProjectile::execAuthority_TryDetectCollision },
			{ "GetAddLauncherVeloctyFactor", &ABaseProjectile::execGetAddLauncherVeloctyFactor },
			{ "GetImpactPrimitiveComponent", &ABaseProjectile::execGetImpactPrimitiveComponent },
			{ "GetLauncher", &ABaseProjectile::execGetLauncher },
			{ "IsOwningPawnLocallyControlled", &ABaseProjectile::execIsOwningPawnLocallyControlled },
			{ "IsValidImpactDetection", &ABaseProjectile::execIsValidImpactDetection },
			{ "IsValidPlayerDetection", &ABaseProjectile::execIsValidPlayerDetection },
			{ "Local_OnPlayerDetected", &ABaseProjectile::execLocal_OnPlayerDetected },
			{ "Local_SweepImpactCollision", &ABaseProjectile::execLocal_SweepImpactCollision },
			{ "Local_TryDetectCollision", &ABaseProjectile::execLocal_TryDetectCollision },
			{ "SphereTraceSingle", &ABaseProjectile::execSphereTraceSingle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics
	{
		struct BaseProjectile_eventAuthority_TryDetectCollision_Parms
		{
			FImpactInfo impactInfo;
			bool force;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_force;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventAuthority_TryDetectCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventAuthority_TryDetectCollision_Parms), &Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_force_SetBit(void* Obj)
	{
		((BaseProjectile_eventAuthority_TryDetectCollision_Parms*)Obj)->force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventAuthority_TryDetectCollision_Parms), &Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_force_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventAuthority_TryDetectCollision_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "Authority_TryDetectCollision", nullptr, nullptr, sizeof(BaseProjectile_eventAuthority_TryDetectCollision_Parms), Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventGetAddLauncherVeloctyFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "GetAddLauncherVeloctyFactor", nullptr, nullptr, sizeof(BaseProjectile_eventGetAddLauncherVeloctyFactor_Parms), Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventGetImpactPrimitiveComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "GetImpactPrimitiveComponent", nullptr, nullptr, sizeof(BaseProjectile_eventGetImpactPrimitiveComponent_Parms), Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics
	{
		struct BaseProjectile_eventGetLauncher_Parms
		{
			UBaseProjectileLauncher* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventGetLauncher_Parms, ReturnValue), Z_Construct_UClass_UBaseProjectileLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "GetLauncher", nullptr, nullptr, sizeof(BaseProjectile_eventGetLauncher_Parms), Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_GetLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_GetLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics
	{
		struct BaseProjectile_eventIsOwningPawnLocallyControlled_Parms
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
	void Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventIsOwningPawnLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventIsOwningPawnLocallyControlled_Parms), &Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "IsOwningPawnLocallyControlled", nullptr, nullptr, sizeof(BaseProjectile_eventIsOwningPawnLocallyControlled_Parms), Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventIsValidImpactDetection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventIsValidImpactDetection_Parms), &Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventIsValidImpactDetection_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "IsValidImpactDetection", nullptr, nullptr, sizeof(BaseProjectile_eventIsValidImpactDetection_Parms), Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventIsValidPlayerDetection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventIsValidPlayerDetection_Parms), &Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventIsValidPlayerDetection_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "IsValidPlayerDetection", nullptr, nullptr, sizeof(BaseProjectile_eventIsValidPlayerDetection_Parms), Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics
	{
		struct BaseProjectile_eventLocal_OnPlayerDetected_Parms
		{
			FImpactInfo impactInfo;
			FVector projectileLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_projectileLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventLocal_OnPlayerDetected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventLocal_OnPlayerDetected_Parms), &Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_projectileLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_projectileLocation = { "projectileLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_OnPlayerDetected_Parms, projectileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_projectileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_projectileLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_OnPlayerDetected_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_projectileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "Local_OnPlayerDetected", nullptr, nullptr, sizeof(BaseProjectile_eventLocal_OnPlayerDetected_Parms), Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics
	{
		struct BaseProjectile_eventLocal_SweepImpactCollision_Parms
		{
			FVector start;
			FVector end;
			FRotator colliderRotation;
			FHitResult outHit;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_colliderRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_colliderRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventLocal_SweepImpactCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventLocal_SweepImpactCollision_Parms), &Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_outHit = { "outHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_SweepImpactCollision_Parms, outHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_colliderRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_colliderRotation = { "colliderRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_SweepImpactCollision_Parms, colliderRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_colliderRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_colliderRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_SweepImpactCollision_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_end_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_SweepImpactCollision_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_outHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_colliderRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "Local_SweepImpactCollision", nullptr, nullptr, sizeof(BaseProjectile_eventLocal_SweepImpactCollision_Parms), Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics
	{
		struct BaseProjectile_eventLocal_TryDetectCollision_Parms
		{
			FImpactInfo impactInfo;
			bool force;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_force;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventLocal_TryDetectCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventLocal_TryDetectCollision_Parms), &Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_force_SetBit(void* Obj)
	{
		((BaseProjectile_eventLocal_TryDetectCollision_Parms*)Obj)->force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventLocal_TryDetectCollision_Parms), &Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_force_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventLocal_TryDetectCollision_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "Local_TryDetectCollision", nullptr, nullptr, sizeof(BaseProjectile_eventLocal_TryDetectCollision_Parms), Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventOnDetectCollision_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "OnDetectCollision", nullptr, nullptr, sizeof(BaseProjectile_eventOnDetectCollision_Parms), Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_OnDetectCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_OnDetectCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventOnDetectPlayer_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::NewProp_impactInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "OnDetectPlayer", nullptr, nullptr, sizeof(BaseProjectile_eventOnDetectPlayer_Parms), Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics
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
	void Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_hasImpactOnLaunch_SetBit(void* Obj)
	{
		((BaseProjectile_eventOnLaunch_Parms*)Obj)->hasImpactOnLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_hasImpactOnLaunch = { "hasImpactOnLaunch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventOnLaunch_Parms), &Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_hasImpactOnLaunch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventOnLaunch_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_hasImpactOnLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::NewProp_launchInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "OnLaunch", nullptr, nullptr, sizeof(BaseProjectile_eventOnLaunch_Parms), Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_OnLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_OnLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((BaseProjectile_eventOnSetActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventOnSetActive_Parms), &Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "OnSetActive", nullptr, nullptr, sizeof(BaseProjectile_eventOnSetActive_Parms), Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_OnSetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_OnSetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics
	{
		struct BaseProjectile_eventSphereTraceSingle_Parms
		{
			FVector start;
			FVector end;
			USphereComponent* sphere;
			FHitResult outHitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphere;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectile_eventSphereTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectile_eventSphereTraceSingle_Parms), &Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_outHitResult = { "outHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventSphereTraceSingle_Parms, outHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_sphere_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_sphere = { "sphere", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventSphereTraceSingle_Parms, sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_sphere_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventSphereTraceSingle_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectile_eventSphereTraceSingle_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_outHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseProjectile, nullptr, "SphereTraceSingle", nullptr, nullptr, sizeof(BaseProjectile_eventSphereTraceSingle_Parms), Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseProjectile_NoRegister()
	{
		return ABaseProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__replicationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__notifyClientOfServerHitValidationResult_MetaData[];
#endif
		static void NewProp__notifyClientOfServerHitValidationResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__notifyClientOfServerHitValidationResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__semanticGameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__semanticGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowMultipleHits_MetaData[];
#endif
		static void NewProp__allowMultipleHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowMultipleHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__multicastLaunch_MetaData[];
#endif
		static void NewProp__multicastLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__multicastLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImpactAINoiseEventRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnImpactAINoiseEventRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseProjectile_Authority_TryDetectCollision, "Authority_TryDetectCollision" }, // 768065436
		{ &Z_Construct_UFunction_ABaseProjectile_GetAddLauncherVeloctyFactor, "GetAddLauncherVeloctyFactor" }, // 2712945554
		{ &Z_Construct_UFunction_ABaseProjectile_GetImpactPrimitiveComponent, "GetImpactPrimitiveComponent" }, // 62858200
		{ &Z_Construct_UFunction_ABaseProjectile_GetLauncher, "GetLauncher" }, // 3510680052
		{ &Z_Construct_UFunction_ABaseProjectile_IsOwningPawnLocallyControlled, "IsOwningPawnLocallyControlled" }, // 3661809844
		{ &Z_Construct_UFunction_ABaseProjectile_IsValidImpactDetection, "IsValidImpactDetection" }, // 1166449235
		{ &Z_Construct_UFunction_ABaseProjectile_IsValidPlayerDetection, "IsValidPlayerDetection" }, // 2664393659
		{ &Z_Construct_UFunction_ABaseProjectile_Local_OnPlayerDetected, "Local_OnPlayerDetected" }, // 2606943478
		{ &Z_Construct_UFunction_ABaseProjectile_Local_SweepImpactCollision, "Local_SweepImpactCollision" }, // 1686146918
		{ &Z_Construct_UFunction_ABaseProjectile_Local_TryDetectCollision, "Local_TryDetectCollision" }, // 2733074679
		{ &Z_Construct_UFunction_ABaseProjectile_OnDetectCollision, "OnDetectCollision" }, // 3396576565
		{ &Z_Construct_UFunction_ABaseProjectile_OnDetectPlayer, "OnDetectPlayer" }, // 2018928841
		{ &Z_Construct_UFunction_ABaseProjectile_OnLaunch, "OnLaunch" }, // 204194772
		{ &Z_Construct_UFunction_ABaseProjectile_OnSetActive, "OnSetActive" }, // 1077201079
		{ &Z_Construct_UFunction_ABaseProjectile_SphereTraceSingle, "SphereTraceSingle" }, // 1799913277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseProjectile.h" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp__replicationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp__replicationComponent = { "_replicationComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseProjectile, _replicationComponent), Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__replicationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__replicationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult_MetaData[] = {
		{ "Category", "BaseProjectile" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult_SetBit(void* Obj)
	{
		((ABaseProjectile*)Obj)->_notifyClientOfServerHitValidationResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult = { "_notifyClientOfServerHitValidationResult", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseProjectile), &Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp__semanticGameplayTags_MetaData[] = {
		{ "Category", "BaseProjectile" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp__semanticGameplayTags = { "_semanticGameplayTags", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseProjectile, _semanticGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__semanticGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__semanticGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits_MetaData[] = {
		{ "Category", "BaseProjectile" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits_SetBit(void* Obj)
	{
		((ABaseProjectile*)Obj)->_allowMultipleHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits = { "_allowMultipleHits", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseProjectile), &Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch_MetaData[] = {
		{ "Category", "BaseProjectile" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch_SetBit(void* Obj)
	{
		((ABaseProjectile*)Obj)->_multicastLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch = { "_multicastLaunch", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseProjectile), &Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseProjectile_Statics::NewProp_OnImpactAINoiseEventRange_MetaData[] = {
		{ "Category", "BaseProjectile" },
		{ "ModuleRelativePath", "Public/BaseProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseProjectile_Statics::NewProp_OnImpactAINoiseEventRange = { "OnImpactAINoiseEventRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseProjectile, OnImpactAINoiseEventRange), METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::NewProp_OnImpactAINoiseEventRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::NewProp_OnImpactAINoiseEventRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp__replicationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp__notifyClientOfServerHitValidationResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp__semanticGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp__allowMultipleHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp__multicastLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseProjectile_Statics::NewProp_OnImpactAINoiseEventRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseProjectile_Statics::ClassParams = {
		&ABaseProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseProjectile, 2484817000);
	template<> PROJECTILE_API UClass* StaticClass<ABaseProjectile>()
	{
		return ABaseProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseProjectile(Z_Construct_UClass_ABaseProjectile, &ABaseProjectile::StaticClass, TEXT("/Script/Projectile"), TEXT("ABaseProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
