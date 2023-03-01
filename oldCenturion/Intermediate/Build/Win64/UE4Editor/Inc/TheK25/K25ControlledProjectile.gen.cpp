// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ControlledProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ControlledProjectile() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25ControlledProjectile_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25ControlledProjectile();
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	THEK25_API UClass* Z_Construct_UClass_UK25ControlledProjectileMovementComponent_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpectatingActorLinker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK25ControlledProjectile::execOnRep_AngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25ControlledProjectile::execServer_ProcessPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaledInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ProcessPitchInput_Implementation(Z_Param_deltaTime,Z_Param_scaledInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25ControlledProjectile::execServer_ProcessYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaledInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ProcessYawInput_Implementation(Z_Param_deltaTime,Z_Param_scaledInput);
		P_NATIVE_END;
	}
	static FName NAME_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects = FName(TEXT("Cosmetic_OnKillerPossessProjectileEffects"));
	void AK25ControlledProjectile::Cosmetic_OnKillerPossessProjectileEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects),NULL);
	}
	static FName NAME_AK25ControlledProjectile_Server_ProcessPitchInput = FName(TEXT("Server_ProcessPitchInput"));
	void AK25ControlledProjectile::Server_ProcessPitchInput(float deltaTime, float scaledInput)
	{
		K25ControlledProjectile_eventServer_ProcessPitchInput_Parms Parms;
		Parms.deltaTime=deltaTime;
		Parms.scaledInput=scaledInput;
		ProcessEvent(FindFunctionChecked(NAME_AK25ControlledProjectile_Server_ProcessPitchInput),&Parms);
	}
	static FName NAME_AK25ControlledProjectile_Server_ProcessYawInput = FName(TEXT("Server_ProcessYawInput"));
	void AK25ControlledProjectile::Server_ProcessYawInput(float deltaTime, float scaledInput)
	{
		K25ControlledProjectile_eventServer_ProcessYawInput_Parms Parms;
		Parms.deltaTime=deltaTime;
		Parms.scaledInput=scaledInput;
		ProcessEvent(FindFunctionChecked(NAME_AK25ControlledProjectile_Server_ProcessYawInput),&Parms);
	}
	void AK25ControlledProjectile::StaticRegisterNativesAK25ControlledProjectile()
	{
		UClass* Class = AK25ControlledProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AngularVelocity", &AK25ControlledProjectile::execOnRep_AngularVelocity },
			{ "Server_ProcessPitchInput", &AK25ControlledProjectile::execServer_ProcessPitchInput },
			{ "Server_ProcessYawInput", &AK25ControlledProjectile::execServer_ProcessYawInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25ControlledProjectile, nullptr, "Cosmetic_OnKillerPossessProjectileEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25ControlledProjectile, nullptr, "OnRep_AngularVelocity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scaledInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::NewProp_scaledInput = { "scaledInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ControlledProjectile_eventServer_ProcessPitchInput_Parms, scaledInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ControlledProjectile_eventServer_ProcessPitchInput_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::NewProp_scaledInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25ControlledProjectile, nullptr, "Server_ProcessPitchInput", nullptr, nullptr, sizeof(K25ControlledProjectile_eventServer_ProcessPitchInput_Parms), Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scaledInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::NewProp_scaledInput = { "scaledInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ControlledProjectile_eventServer_ProcessYawInput_Parms, scaledInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ControlledProjectile_eventServer_ProcessYawInput_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::NewProp_scaledInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25ControlledProjectile, nullptr, "Server_ProcessYawInput", nullptr, nullptr, sizeof(K25ControlledProjectile_eventServer_ProcessYawInput_Parms), Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25ControlledProjectile_NoRegister()
	{
		return AK25ControlledProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AK25ControlledProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastAppliedAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lastAppliedAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__targetRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__currentRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controlledProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numbExtraChainsOnControlledProjectileHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__numbExtraChainsOnControlledProjectileHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraMaximumRollDegree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraMaximumRollDegree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraRollGoBackSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraRollGoBackSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraRollSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cameraRollSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumPitchTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumPitchTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumYawTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumYawTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchClampAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pitchClampAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerCameraPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerCameraPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerViewProjectileStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerViewProjectileStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25ControlledProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AK25Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25ControlledProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects, "Cosmetic_OnKillerPossessProjectileEffects" }, // 4067385621
		{ &Z_Construct_UFunction_AK25ControlledProjectile_OnRep_AngularVelocity, "OnRep_AngularVelocity" }, // 3647217433
		{ &Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessPitchInput, "Server_ProcessPitchInput" }, // 923528632
		{ &Z_Construct_UFunction_AK25ControlledProjectile_Server_ProcessYawInput, "Server_ProcessYawInput" }, // 1419205507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ControlledProjectile.h" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__lastAppliedAngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__lastAppliedAngularVelocity = { "_lastAppliedAngularVelocity", "OnRep_AngularVelocity", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _lastAppliedAngularVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__lastAppliedAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__lastAppliedAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__targetRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__targetRoll = { "_targetRoll", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _targetRoll), METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__targetRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__targetRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__currentRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__currentRoll = { "_currentRoll", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _currentRoll), METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__currentRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__currentRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__controlledProjectileMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__controlledProjectileMovementComponent = { "_controlledProjectileMovementComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _controlledProjectileMovementComponent), Z_Construct_UClass_UK25ControlledProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__controlledProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__controlledProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__numbExtraChainsOnControlledProjectileHit_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__numbExtraChainsOnControlledProjectileHit = { "_numbExtraChainsOnControlledProjectileHit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _numbExtraChainsOnControlledProjectileHit), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__numbExtraChainsOnControlledProjectileHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__numbExtraChainsOnControlledProjectileHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraMaximumRollDegree_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraMaximumRollDegree = { "_cameraMaximumRollDegree", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _cameraMaximumRollDegree), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraMaximumRollDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraMaximumRollDegree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollGoBackSpeedMultiplier_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollGoBackSpeedMultiplier = { "_cameraRollGoBackSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _cameraRollGoBackSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollGoBackSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollGoBackSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollSpeedMultiplier_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollSpeedMultiplier = { "_cameraRollSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _cameraRollSpeedMultiplier), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumPitchTurnRate_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumPitchTurnRate = { "_maximumPitchTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _maximumPitchTurnRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumPitchTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumPitchTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumYawTurnRate_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumYawTurnRate = { "_maximumYawTurnRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _maximumYawTurnRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumYawTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumYawTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__pitchClampAngle_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__pitchClampAngle = { "_pitchClampAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _pitchClampAngle), METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__pitchClampAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__pitchClampAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerCameraPlacement_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerCameraPlacement = { "_killerCameraPlacement", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _killerCameraPlacement), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerCameraPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerCameraPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerSpringArm_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerSpringArm = { "_killerSpringArm", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _killerSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerViewProjectileStaticMesh_MetaData[] = {
		{ "Category", "K25ControlledProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ControlledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerViewProjectileStaticMesh = { "_killerViewProjectileStaticMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25ControlledProjectile, _killerViewProjectileStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerViewProjectileStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerViewProjectileStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25ControlledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__lastAppliedAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__targetRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__currentRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__controlledProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__numbExtraChainsOnControlledProjectileHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraMaximumRollDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollGoBackSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__cameraRollSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumPitchTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__maximumYawTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__pitchClampAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerCameraPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25ControlledProjectile_Statics::NewProp__killerViewProjectileStaticMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AK25ControlledProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USpectatingActorLinker_NoRegister, (int32)VTABLE_OFFSET(AK25ControlledProjectile, ISpectatingActorLinker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25ControlledProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25ControlledProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25ControlledProjectile_Statics::ClassParams = {
		&AK25ControlledProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25ControlledProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25ControlledProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25ControlledProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25ControlledProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25ControlledProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25ControlledProjectile, 2073071488);
	template<> THEK25_API UClass* StaticClass<AK25ControlledProjectile>()
	{
		return AK25ControlledProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25ControlledProjectile(Z_Construct_UClass_AK25ControlledProjectile, &AK25ControlledProjectile::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25ControlledProjectile"), false, nullptr, nullptr, nullptr);

	void AK25ControlledProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__lastAppliedAngularVelocity(TEXT("_lastAppliedAngularVelocity"));

		const bool bIsValid = true
			&& Name__lastAppliedAngularVelocity == ClassReps[(int32)ENetFields_Private::_lastAppliedAngularVelocity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25ControlledProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25ControlledProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
