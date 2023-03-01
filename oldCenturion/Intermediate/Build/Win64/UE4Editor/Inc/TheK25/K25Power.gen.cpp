// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25Power.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25Power() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25Power_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Power();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Husk_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ALamentConfiguration_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25ControlledProjectile_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Gateway_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25PowerChargePresentationItemProgressComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileLauncher_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEK25_API UClass* Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainTargetterComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomKillerInstinctData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK25Power::execOnKillerAdded)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerAdded(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Power::execOnRep_K25ControlledProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_K25ControlledProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Power::execOnRep_K25Gateway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_K25Gateway();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Power::execOnRep_LamentConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LamentConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Power::execOnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorAdded(Z_Param_survivor,Z_Param_killer);
		P_NATIVE_END;
	}
	void AK25Power::StaticRegisterNativesAK25Power()
	{
		UClass* Class = AK25Power::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerAdded", &AK25Power::execOnKillerAdded },
			{ "OnRep_K25ControlledProjectile", &AK25Power::execOnRep_K25ControlledProjectile },
			{ "OnRep_K25Gateway", &AK25Power::execOnRep_K25Gateway },
			{ "OnRep_LamentConfiguration", &AK25Power::execOnRep_LamentConfiguration },
			{ "OnSurvivorAdded", &AK25Power::execOnSurvivorAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics
	{
		struct K25Power_eventOnKillerAdded_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Power_eventOnKillerAdded_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Power, nullptr, "OnKillerAdded", nullptr, nullptr, sizeof(K25Power_eventOnKillerAdded_Parms), Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Power_OnKillerAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Power_OnKillerAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Power, nullptr, "OnRep_K25ControlledProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Power, nullptr, "OnRep_K25Gateway", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Power_OnRep_K25Gateway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Power_OnRep_K25Gateway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Power, nullptr, "OnRep_LamentConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics
	{
		struct K25Power_eventOnSurvivorAdded_Parms
		{
			ACamperPlayer* survivor;
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Power_eventOnSurvivorAdded_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Power_eventOnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::NewProp_killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Power, nullptr, "OnSurvivorAdded", nullptr, nullptr, sizeof(K25Power_eventOnSurvivorAdded_Parms), Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Power_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Power_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25Power_NoRegister()
	{
		return AK25Power::StaticClass();
	}
	struct Z_Construct_UClass_AK25Power_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPowerCharged_MetaData[];
#endif
		static void NewProp__isPowerCharged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPowerCharged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAttachmentReplicationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAttachmentReplicationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25Husk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25Husk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lamentConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectileInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controlledProjectileInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gateway_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gateway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25PowerPresentationItemProgressComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25PowerPresentationItemProgressComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25ProjectileProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25ProjectileProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25PowerChargeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25PowerChargeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25ChainPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25ChainPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25ProjectilePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25ProjectilePool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25ProjectileLauncher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25ProjectileLauncher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pillarAnimationActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__pillarAnimationActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAnimationMappingsTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chainAnimationMappingsTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAnimationMappingsTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAnimationActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__chainAnimationActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerTeleportFinderComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__killerTeleportFinderComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25HuskClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__k25HuskClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lamentConfigurationClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__lamentConfigurationClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__controlledProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25GatewayClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__k25GatewayClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorChainTargetterComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorChainTargetterComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorChainAttachmentComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorChainAttachmentComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerStatusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__killerStatusEffectID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__killerStatusEffectID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorStatusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorStatusEffectID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__survivorStatusEffectID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customKillerInstinctDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customKillerInstinctDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__customKillerInstinctDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25TeleportChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25TeleportChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k25ChainStrikeInteractionChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k25ChainStrikeInteractionChargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25Power_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25Power_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25Power_OnKillerAdded, "OnKillerAdded" }, // 2693071990
		{ &Z_Construct_UFunction_AK25Power_OnRep_K25ControlledProjectile, "OnRep_K25ControlledProjectile" }, // 1529520164
		{ &Z_Construct_UFunction_AK25Power_OnRep_K25Gateway, "OnRep_K25Gateway" }, // 2340641938
		{ &Z_Construct_UFunction_AK25Power_OnRep_LamentConfiguration, "OnRep_LamentConfiguration" }, // 1822357738
		{ &Z_Construct_UFunction_AK25Power_OnSurvivorAdded, "OnSurvivorAdded" }, // 3722612226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25Power.h" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	void Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged_SetBit(void* Obj)
	{
		((AK25Power*)Obj)->_isPowerCharged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged = { "_isPowerCharged", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25Power), &Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__chainAttachmentReplicationComponent_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__chainAttachmentReplicationComponent = { "_chainAttachmentReplicationComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _chainAttachmentReplicationComponent), Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAttachmentReplicationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAttachmentReplicationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25Husk_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25Husk = { "_k25Husk", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25Husk), Z_Construct_UClass_AK25Husk_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25Husk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25Husk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfiguration_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfiguration = { "_lamentConfiguration", "OnRep_LamentConfiguration", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _lamentConfiguration), Z_Construct_UClass_ALamentConfiguration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileInstance = { "_controlledProjectileInstance", "OnRep_K25ControlledProjectile", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _controlledProjectileInstance), Z_Construct_UClass_AK25ControlledProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__gateway_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__gateway = { "_gateway", "OnRep_K25Gateway", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _gateway), Z_Construct_UClass_AK25Gateway_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__gateway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__gateway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerPresentationItemProgressComponent_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerPresentationItemProgressComponent = { "_k25PowerPresentationItemProgressComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25PowerPresentationItemProgressComponent), Z_Construct_UClass_UK25PowerChargePresentationItemProgressComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerPresentationItemProgressComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerPresentationItemProgressComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileProvider = { "_k25ProjectileProvider", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25ProjectileProvider), Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerChargeComponent_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerChargeComponent = { "_k25PowerChargeComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25PowerChargeComponent), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerChargeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerChargeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainPool_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainPool = { "_k25ChainPool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25ChainPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectilePool_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectilePool = { "_k25ProjectilePool", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25ProjectilePool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectilePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectilePool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileLauncher_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileLauncher = { "_k25ProjectileLauncher", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25ProjectileLauncher), Z_Construct_UClass_UK25ProjectileLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileLauncher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileLauncher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__pillarAnimationActorClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__pillarAnimationActorClass = { "_pillarAnimationActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _pillarAnimationActorClass), Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__pillarAnimationActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__pillarAnimationActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables = { "_chainAnimationMappingsTables", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _chainAnimationMappingsTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables_Inner = { "_chainAnimationMappingsTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationActorClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationActorClass = { "_chainAnimationActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _chainAnimationActorClass), Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__killerTeleportFinderComponentClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__killerTeleportFinderComponentClass = { "_killerTeleportFinderComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _killerTeleportFinderComponentClass), Z_Construct_UClass_UK25KillerTeleportationPositionFinderComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__killerTeleportFinderComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__killerTeleportFinderComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25HuskClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25HuskClass = { "_k25HuskClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25HuskClass), Z_Construct_UClass_AK25Husk_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25HuskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25HuskClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfigurationClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfigurationClass = { "_lamentConfigurationClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _lamentConfigurationClass), Z_Construct_UClass_ALamentConfiguration_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfigurationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfigurationClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileClass = { "_controlledProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _controlledProjectileClass), Z_Construct_UClass_AK25ControlledProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25GatewayClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25GatewayClass = { "_k25GatewayClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25GatewayClass), Z_Construct_UClass_AK25Gateway_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25GatewayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25GatewayClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainTargetterComponentClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainTargetterComponentClass = { "_survivorChainTargetterComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _survivorChainTargetterComponentClass), Z_Construct_UClass_UK25SurvivorChainTargetterComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainTargetterComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainTargetterComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainAttachmentComponentClass_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainAttachmentComponentClass = { "_survivorChainAttachmentComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _survivorChainAttachmentComponentClass), Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainAttachmentComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainAttachmentComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID = { "_killerStatusEffectID", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _killerStatusEffectID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID_Inner = { "_killerStatusEffectID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID = { "_survivorStatusEffectID", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _survivorStatusEffectID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID_Inner = { "_survivorStatusEffectID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas_MetaData[] = {
		{ "Category", "K25Power" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas = { "_customKillerInstinctDatas", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _customKillerInstinctDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas_Inner = { "_customKillerInstinctDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomKillerInstinctData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25TeleportChargeableComponent_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25TeleportChargeableComponent = { "_k25TeleportChargeableComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25TeleportChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25TeleportChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25TeleportChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainStrikeInteractionChargeableComponent_MetaData[] = {
		{ "Category", "K25Power" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Power.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainStrikeInteractionChargeableComponent = { "_k25ChainStrikeInteractionChargeableComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Power, _k25ChainStrikeInteractionChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainStrikeInteractionChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainStrikeInteractionChargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__isPowerCharged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__chainAttachmentReplicationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25Husk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__gateway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerPresentationItemProgressComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25PowerChargeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectilePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25ProjectileLauncher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__pillarAnimationActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationMappingsTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__chainAnimationActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__killerTeleportFinderComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25HuskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__lamentConfigurationClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__controlledProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25GatewayClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainTargetterComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__survivorChainAttachmentComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__killerStatusEffectID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__survivorStatusEffectID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__customKillerInstinctDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25TeleportChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Power_Statics::NewProp__k25ChainStrikeInteractionChargeableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25Power_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25Power>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25Power_Statics::ClassParams = {
		&AK25Power::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25Power_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25Power_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Power_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25Power()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25Power_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25Power, 2808992052);
	template<> THEK25_API UClass* StaticClass<AK25Power>()
	{
		return AK25Power::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25Power(Z_Construct_UClass_AK25Power, &AK25Power::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25Power"), false, nullptr, nullptr, nullptr);

	void AK25Power::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__gateway(TEXT("_gateway"));
		static const FName Name__controlledProjectileInstance(TEXT("_controlledProjectileInstance"));
		static const FName Name__lamentConfiguration(TEXT("_lamentConfiguration"));
		static const FName Name__isPowerCharged(TEXT("_isPowerCharged"));

		const bool bIsValid = true
			&& Name__gateway == ClassReps[(int32)ENetFields_Private::_gateway].Property->GetFName()
			&& Name__controlledProjectileInstance == ClassReps[(int32)ENetFields_Private::_controlledProjectileInstance].Property->GetFName()
			&& Name__lamentConfiguration == ClassReps[(int32)ENetFields_Private::_lamentConfiguration].Property->GetFName()
			&& Name__isPowerCharged == ClassReps[(int32)ENetFields_Private::_isPowerCharged].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25Power"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25Power);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
