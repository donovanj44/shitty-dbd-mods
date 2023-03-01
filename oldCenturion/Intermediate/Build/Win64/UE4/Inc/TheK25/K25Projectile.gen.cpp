// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25Projectile() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ProjectileDeactivationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECTILE_API UClass* Z_Construct_UClass_UDBDProjectileMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileDodgeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK25Projectile::execGetChainAttachmentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainAttachmentLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Projectile::execGetMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDProjectileMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Projectile::execOnProjectileStopped)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileStopped(Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Projectile::execServer_RequestDisableProjectile)
	{
		P_GET_ENUM(EK25ProjectileDeactivateReason,Z_Param_deactivateReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RequestDisableProjectile_Implementation(EK25ProjectileDeactivateReason(Z_Param_deactivateReason));
		P_NATIVE_END;
	}
	static FName NAME_AK25Projectile_Cosmetic_OnProjectileActivated = FName(TEXT("Cosmetic_OnProjectileActivated"));
	void AK25Projectile::Cosmetic_OnProjectileActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Projectile_Cosmetic_OnProjectileActivated),NULL);
	}
	static FName NAME_AK25Projectile_Cosmetic_OnProjectileDeactivated = FName(TEXT("Cosmetic_OnProjectileDeactivated"));
	void AK25Projectile::Cosmetic_OnProjectileDeactivated(FK25ProjectileDeactivationData const& deactivationData)
	{
		K25Projectile_eventCosmetic_OnProjectileDeactivated_Parms Parms;
		Parms.deactivationData=deactivationData;
		ProcessEvent(FindFunctionChecked(NAME_AK25Projectile_Cosmetic_OnProjectileDeactivated),&Parms);
	}
	static FName NAME_AK25Projectile_GetChainAttachmentLocation = FName(TEXT("GetChainAttachmentLocation"));
	FVector AK25Projectile::GetChainAttachmentLocation() const
	{
		K25Projectile_eventGetChainAttachmentLocation_Parms Parms;
		const_cast<AK25Projectile*>(this)->ProcessEvent(FindFunctionChecked(NAME_AK25Projectile_GetChainAttachmentLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AK25Projectile_Server_RequestDisableProjectile = FName(TEXT("Server_RequestDisableProjectile"));
	void AK25Projectile::Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason)
	{
		K25Projectile_eventServer_RequestDisableProjectile_Parms Parms;
		Parms.deactivateReason=deactivateReason;
		ProcessEvent(FindFunctionChecked(NAME_AK25Projectile_Server_RequestDisableProjectile),&Parms);
	}
	void AK25Projectile::StaticRegisterNativesAK25Projectile()
	{
		UClass* Class = AK25Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainAttachmentLocation", &AK25Projectile::execGetChainAttachmentLocation },
			{ "GetMovementComponent", &AK25Projectile::execGetMovementComponent },
			{ "OnProjectileStopped", &AK25Projectile::execOnProjectileStopped },
			{ "Server_RequestDisableProjectile", &AK25Projectile::execServer_RequestDisableProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "Cosmetic_OnProjectileActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deactivationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_deactivationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::NewProp_deactivationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::NewProp_deactivationData = { "deactivationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Projectile_eventCosmetic_OnProjectileDeactivated_Parms, deactivationData), Z_Construct_UScriptStruct_FK25ProjectileDeactivationData, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::NewProp_deactivationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::NewProp_deactivationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::NewProp_deactivationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "Cosmetic_OnProjectileDeactivated", nullptr, nullptr, sizeof(K25Projectile_eventCosmetic_OnProjectileDeactivated_Parms), Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Projectile_eventGetChainAttachmentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "GetChainAttachmentLocation", nullptr, nullptr, sizeof(K25Projectile_eventGetChainAttachmentLocation_Parms), Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics
	{
		struct K25Projectile_eventGetMovementComponent_Parms
		{
			UDBDProjectileMovementComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Projectile_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UDBDProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "GetMovementComponent", nullptr, nullptr, sizeof(K25Projectile_eventGetMovementComponent_Parms), Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_GetMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_GetMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics
	{
		struct K25Projectile_eventOnProjectileStopped_Parms
		{
			FHitResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Projectile_eventOnProjectileStopped_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "OnProjectileStopped", nullptr, nullptr, sizeof(K25Projectile_eventOnProjectileStopped_Parms), Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_OnProjectileStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_OnProjectileStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_deactivateReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_deactivateReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::NewProp_deactivateReason = { "deactivateReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Projectile_eventServer_RequestDisableProjectile_Parms, deactivateReason), Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::NewProp_deactivateReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::NewProp_deactivateReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::NewProp_deactivateReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Projectile, nullptr, "Server_RequestDisableProjectile", nullptr, nullptr, sizeof(K25Projectile_eventServer_RequestDisableProjectile_Parms), Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25Projectile_NoRegister()
	{
		return AK25Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AK25Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastDeactivationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lastDeactivationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActive_MetaData[];
#endif
		static void NewProp__isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeIgnoreSlasherCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeIgnoreSlasherCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attachedChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__launchInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileDodgeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__projectileDodgeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__environmentCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__environmentCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__staticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKillerProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileActivated, "Cosmetic_OnProjectileActivated" }, // 3658585822
		{ &Z_Construct_UFunction_AK25Projectile_Cosmetic_OnProjectileDeactivated, "Cosmetic_OnProjectileDeactivated" }, // 4186495368
		{ &Z_Construct_UFunction_AK25Projectile_GetChainAttachmentLocation, "GetChainAttachmentLocation" }, // 2374331773
		{ &Z_Construct_UFunction_AK25Projectile_GetMovementComponent, "GetMovementComponent" }, // 1614733141
		{ &Z_Construct_UFunction_AK25Projectile_OnProjectileStopped, "OnProjectileStopped" }, // 4154122305
		{ &Z_Construct_UFunction_AK25Projectile_Server_RequestDisableProjectile, "Server_RequestDisableProjectile" }, // 2912127304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25Projectile.h" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__lastDeactivationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__lastDeactivationData = { "_lastDeactivationData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _lastDeactivationData), Z_Construct_UScriptStruct_FK25ProjectileDeactivationData, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__lastDeactivationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__lastDeactivationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive_SetBit(void* Obj)
	{
		((AK25Projectile*)Obj)->_isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive = { "_isActive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25Projectile), &Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__timeIgnoreSlasherCollision_MetaData[] = {
		{ "Category", "K25Projectile" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__timeIgnoreSlasherCollision = { "_timeIgnoreSlasherCollision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _timeIgnoreSlasherCollision), METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__timeIgnoreSlasherCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__timeIgnoreSlasherCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__attachedChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__attachedChain = { "_attachedChain", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _attachedChain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__attachedChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__attachedChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__launchInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__launchInfo = { "_launchInfo", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__launchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__launchInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__projectileDodgeComponent_MetaData[] = {
		{ "Category", "K25Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__projectileDodgeComponent = { "_projectileDodgeComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _projectileDodgeComponent), Z_Construct_UClass_UKillerProjectileDodgeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__projectileDodgeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__projectileDodgeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__environmentCollider_MetaData[] = {
		{ "Category", "K25Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__environmentCollider = { "_environmentCollider", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _environmentCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__environmentCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__environmentCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__characterCollider_MetaData[] = {
		{ "Category", "K25Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__characterCollider = { "_characterCollider", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _characterCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__characterCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__characterCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Projectile_Statics::NewProp__staticMesh_MetaData[] = {
		{ "Category", "K25Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Projectile_Statics::NewProp__staticMesh = { "_staticMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Projectile, _staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::NewProp__staticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::NewProp__staticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__lastDeactivationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__timeIgnoreSlasherCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__attachedChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__launchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__projectileDodgeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__environmentCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__characterCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Projectile_Statics::NewProp__staticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25Projectile_Statics::ClassParams = {
		&AK25Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AK25Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25Projectile, 2013522934);
	template<> THEK25_API UClass* StaticClass<AK25Projectile>()
	{
		return AK25Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25Projectile(Z_Construct_UClass_AK25Projectile, &AK25Projectile::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25Projectile"), false, nullptr, nullptr, nullptr);

	void AK25Projectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__attachedChain(TEXT("_attachedChain"));

		const bool bIsValid = true
			&& Name__attachedChain == ClassReps[(int32)ENetFields_Private::_attachedChain].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25Projectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
