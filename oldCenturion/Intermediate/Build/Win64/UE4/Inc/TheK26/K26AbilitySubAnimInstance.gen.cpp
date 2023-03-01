// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26AbilitySubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26AbilitySubAnimInstance() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26AbilitySubAnimInstance_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26AbilitySubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UK26AbilitySubAnimInstance::execConsumeHasProjectileBeenSummoned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeHasProjectileBeenSummoned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26AbilitySubAnimInstance::execConsumeHasProjectileFired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeHasProjectileFired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26AbilitySubAnimInstance::execOnHasProjectileBeenSummoned)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_remainingAmmo);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHasProjectileBeenSummoned(Z_Param_remainingAmmo,Z_Param_maxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26AbilitySubAnimInstance::execOnHasProjectileFired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHasProjectileFired();
		P_NATIVE_END;
	}
	void UK26AbilitySubAnimInstance::StaticRegisterNativesUK26AbilitySubAnimInstance()
	{
		UClass* Class = UK26AbilitySubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeHasProjectileBeenSummoned", &UK26AbilitySubAnimInstance::execConsumeHasProjectileBeenSummoned },
			{ "ConsumeHasProjectileFired", &UK26AbilitySubAnimInstance::execConsumeHasProjectileFired },
			{ "OnHasProjectileBeenSummoned", &UK26AbilitySubAnimInstance::execOnHasProjectileBeenSummoned },
			{ "OnHasProjectileFired", &UK26AbilitySubAnimInstance::execOnHasProjectileFired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26AbilitySubAnimInstance, nullptr, "ConsumeHasProjectileBeenSummoned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26AbilitySubAnimInstance, nullptr, "ConsumeHasProjectileFired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics
	{
		struct K26AbilitySubAnimInstance_eventOnHasProjectileBeenSummoned_Parms
		{
			int32 remainingAmmo;
			int32 maxAmmo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remainingAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_remainingAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_maxAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AbilitySubAnimInstance_eventOnHasProjectileBeenSummoned_Parms, maxAmmo), METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_maxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_maxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_remainingAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_remainingAmmo = { "remainingAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26AbilitySubAnimInstance_eventOnHasProjectileBeenSummoned_Parms, remainingAmmo), METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_remainingAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_remainingAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_maxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::NewProp_remainingAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26AbilitySubAnimInstance, nullptr, "OnHasProjectileBeenSummoned", nullptr, nullptr, sizeof(K26AbilitySubAnimInstance_eventOnHasProjectileBeenSummoned_Parms), Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26AbilitySubAnimInstance, nullptr, "OnHasProjectileFired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26AbilitySubAnimInstance_NoRegister()
	{
		return UK26AbilitySubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasProjectileFired_MetaData[];
#endif
		static void NewProp__hasProjectileFired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasProjectileFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasChargingEnded_MetaData[];
#endif
		static void NewProp__hasChargingEnded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasChargingEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasProjectileBeenSummoned_MetaData[];
#endif
		static void NewProp__hasProjectileBeenSummoned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasProjectileBeenSummoned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasChargingStarted_MetaData[];
#endif
		static void NewProp__hasChargingStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasChargingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireInteractionCooldownTimeTunable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fireInteractionCooldownTimeTunable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fireInteractionCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fireInteractionCooldownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned, "ConsumeHasProjectileBeenSummoned" }, // 2404436427
		{ &Z_Construct_UFunction_UK26AbilitySubAnimInstance_ConsumeHasProjectileFired, "ConsumeHasProjectileFired" }, // 2413785649
		{ &Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned, "OnHasProjectileBeenSummoned" }, // 1870268942
		{ &Z_Construct_UFunction_UK26AbilitySubAnimInstance_OnHasProjectileFired, "OnHasProjectileFired" }, // 4293247322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K26AbilitySubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired_SetBit(void* Obj)
	{
		((UK26AbilitySubAnimInstance*)Obj)->_hasProjectileFired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired = { "_hasProjectileFired", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26AbilitySubAnimInstance), &Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded_SetBit(void* Obj)
	{
		((UK26AbilitySubAnimInstance*)Obj)->_hasChargingEnded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded = { "_hasChargingEnded", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26AbilitySubAnimInstance), &Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned_SetBit(void* Obj)
	{
		((UK26AbilitySubAnimInstance*)Obj)->_hasProjectileBeenSummoned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned = { "_hasProjectileBeenSummoned", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26AbilitySubAnimInstance), &Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted_SetBit(void* Obj)
	{
		((UK26AbilitySubAnimInstance*)Obj)->_hasChargingStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted = { "_hasChargingStarted", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26AbilitySubAnimInstance), &Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTimeTunable_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTimeTunable = { "_fireInteractionCooldownTimeTunable", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26AbilitySubAnimInstance, _fireInteractionCooldownTimeTunable), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTimeTunable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTimeTunable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTime_MetaData[] = {
		{ "Category", "K26AbilitySubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26AbilitySubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTime = { "_fireInteractionCooldownTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26AbilitySubAnimInstance, _fireInteractionCooldownTime), METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasProjectileBeenSummoned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__hasChargingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTimeTunable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::NewProp__fireInteractionCooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26AbilitySubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::ClassParams = {
		&UK26AbilitySubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26AbilitySubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26AbilitySubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26AbilitySubAnimInstance, 3378801602);
	template<> THEK26_API UClass* StaticClass<UK26AbilitySubAnimInstance>()
	{
		return UK26AbilitySubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26AbilitySubAnimInstance(Z_Construct_UClass_UK26AbilitySubAnimInstance, &UK26AbilitySubAnimInstance::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26AbilitySubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26AbilitySubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
