// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25UncontrolledProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25UncontrolledProjectile() {}
// Cross Module References
	THEK25_API UFunction* Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25UncontrolledProjectile_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25UncontrolledProjectile();
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics
	{
		struct _Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms
		{
			bool acquired;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acquired_MetaData[];
#endif
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((_Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms), &Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheK25, nullptr, "K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms), Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AK25UncontrolledProjectile::execOnRep_TargetSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetSurvivor();
		P_NATIVE_END;
	}
	static FName NAME_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX = FName(TEXT("Cosmetic_TriggerUncontrolledProjectileSpawnSFX"));
	void AK25UncontrolledProjectile::Cosmetic_TriggerUncontrolledProjectileSpawnSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX),NULL);
	}
	void AK25UncontrolledProjectile::StaticRegisterNativesAK25UncontrolledProjectile()
	{
		UClass* Class = AK25UncontrolledProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TargetSurvivor", &AK25UncontrolledProjectile::execOnRep_TargetSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25UncontrolledProjectile, nullptr, "Cosmetic_TriggerUncontrolledProjectileSpawnSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25UncontrolledProjectile, nullptr, "OnRep_TargetSurvivor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25UncontrolledProjectile_NoRegister()
	{
		return AK25UncontrolledProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AK25UncontrolledProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAcquiredFromPool_MetaData[];
#endif
		static void NewProp__isAcquiredFromPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAcquiredFromPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileMaximumTravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__projectileMaximumTravelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__projectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumTimeBeforeProjectileLaunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumTimeBeforeProjectileLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumTimeBeforeProjectileLaunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minimumTimeBeforeProjectileLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAcquiredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAcquiredChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25UncontrolledProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AK25Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25UncontrolledProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX, "Cosmetic_TriggerUncontrolledProjectileSpawnSFX" }, // 1694001852
		{ &Z_Construct_UFunction_AK25UncontrolledProjectile_OnRep_TargetSurvivor, "OnRep_TargetSurvivor" }, // 2646546381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25UncontrolledProjectile.h" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__targetSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__targetSurvivor = { "_targetSurvivor", "OnRep_TargetSurvivor", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, _targetSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__targetSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__targetSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool_SetBit(void* Obj)
	{
		((AK25UncontrolledProjectile*)Obj)->_isAcquiredFromPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool = { "_isAcquiredFromPool", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25UncontrolledProjectile), &Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileMaximumTravelDistance_MetaData[] = {
		{ "Category", "K25UncontrolledProjectile" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileMaximumTravelDistance = { "_projectileMaximumTravelDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, _projectileMaximumTravelDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileMaximumTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileMaximumTravelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileSpeed_MetaData[] = {
		{ "Category", "K25UncontrolledProjectile" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileSpeed = { "_projectileSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, _projectileSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__maximumTimeBeforeProjectileLaunch_MetaData[] = {
		{ "Category", "K25UncontrolledProjectile" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__maximumTimeBeforeProjectileLaunch = { "_maximumTimeBeforeProjectileLaunch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, _maximumTimeBeforeProjectileLaunch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__maximumTimeBeforeProjectileLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__maximumTimeBeforeProjectileLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__minimumTimeBeforeProjectileLaunch_MetaData[] = {
		{ "Category", "K25UncontrolledProjectile" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__minimumTimeBeforeProjectileLaunch = { "_minimumTimeBeforeProjectileLaunch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, _minimumTimeBeforeProjectileLaunch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__minimumTimeBeforeProjectileLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__minimumTimeBeforeProjectileLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp_OnAcquiredChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp_OnAcquiredChanged = { "OnAcquiredChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25UncontrolledProjectile, OnAcquiredChanged), Z_Construct_UDelegateFunction_TheK25_K25UncontrolledProjectileOnAcquiredChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp_OnAcquiredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp_OnAcquiredChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25UncontrolledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__targetSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__isAcquiredFromPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileMaximumTravelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__projectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__maximumTimeBeforeProjectileLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp__minimumTimeBeforeProjectileLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25UncontrolledProjectile_Statics::NewProp_OnAcquiredChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolableActor_NoRegister, (int32)VTABLE_OFFSET(AK25UncontrolledProjectile, IPoolableActor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25UncontrolledProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25UncontrolledProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25UncontrolledProjectile_Statics::ClassParams = {
		&AK25UncontrolledProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25UncontrolledProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25UncontrolledProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25UncontrolledProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25UncontrolledProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25UncontrolledProjectile, 4237344682);
	template<> THEK25_API UClass* StaticClass<AK25UncontrolledProjectile>()
	{
		return AK25UncontrolledProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25UncontrolledProjectile(Z_Construct_UClass_AK25UncontrolledProjectile, &AK25UncontrolledProjectile::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25UncontrolledProjectile"), false, nullptr, nullptr, nullptr);

	void AK25UncontrolledProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__targetSurvivor(TEXT("_targetSurvivor"));

		const bool bIsValid = true
			&& Name__targetSurvivor == ClassReps[(int32)ENetFields_Private::_targetSurvivor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25UncontrolledProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25UncontrolledProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
