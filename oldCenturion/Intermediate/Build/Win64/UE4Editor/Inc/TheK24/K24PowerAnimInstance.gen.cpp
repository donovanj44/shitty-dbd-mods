// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24PowerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24PowerAnimInstance() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24PowerAnimInstance_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24PowerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AK24Power_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK24PowerAnimInstance::execOnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24PowerAnimInstance::execOnKillerPowerLevelChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_powerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerPowerLevelChanged(Z_Param_powerLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24PowerAnimInstance::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UK24PowerAnimInstance::StaticRegisterNativesUK24PowerAnimInstance()
	{
		UClass* Class = UK24PowerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnIntroCompleted", &UK24PowerAnimInstance::execOnIntroCompleted },
			{ "OnKillerPowerLevelChanged", &UK24PowerAnimInstance::execOnKillerPowerLevelChanged },
			{ "OnLevelReadyToPlay", &UK24PowerAnimInstance::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24PowerAnimInstance, nullptr, "OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics
	{
		struct K24PowerAnimInstance_eventOnKillerPowerLevelChanged_Parms
		{
			int32 powerLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_powerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24PowerAnimInstance_eventOnKillerPowerLevelChanged_Parms, powerLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24PowerAnimInstance, nullptr, "OnKillerPowerLevelChanged", nullptr, nullptr, sizeof(K24PowerAnimInstance_eventOnKillerPowerLevelChanged_Parms), Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24PowerAnimInstance, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24PowerAnimInstance_NoRegister()
	{
		return UK24PowerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK24PowerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isKilling_MetaData[];
#endif
		static void NewProp__isKilling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isKilling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lateralVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lateralVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__forwardVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__powerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLevelReadyToPlay_MetaData[];
#endif
		static void NewProp__isLevelReadyToPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLevelReadyToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIntroCompleted_MetaData[];
#endif
		static void NewProp__isIntroCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIntroCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attackSubState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attackSubState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFirstPersonView_MetaData[];
#endif
		static void NewProp__isFirstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFirstPersonView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tentacleLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__tentacleLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRequestingPowerAttack_MetaData[];
#endif
		static void NewProp__isRequestingPowerAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRequestingPowerAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isK24PowerAttacking_MetaData[];
#endif
		static void NewProp__isK24PowerAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isK24PowerAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChargingPower_MetaData[];
#endif
		static void NewProp__isChargingPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChargingPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInPowerMode_MetaData[];
#endif
		static void NewProp__isInPowerMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInPowerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k24Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__k24Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24PowerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24PowerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24PowerAnimInstance_OnIntroCompleted, "OnIntroCompleted" }, // 4003283076
		{ &Z_Construct_UFunction_UK24PowerAnimInstance_OnKillerPowerLevelChanged, "OnKillerPowerLevelChanged" }, // 3158507227
		{ &Z_Construct_UFunction_UK24PowerAnimInstance_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2406684792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K24PowerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isKilling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling = { "_isKilling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__lateralVelocity_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__lateralVelocity = { "_lateralVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _lateralVelocity), METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__lateralVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__lateralVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__forwardVelocity_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__forwardVelocity = { "_forwardVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _forwardVelocity), METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__forwardVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__forwardVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__powerLevel_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__powerLevel = { "_powerLevel", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _powerLevel), METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__powerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__powerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isLevelReadyToPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay = { "_isLevelReadyToPlay", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isIntroCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted = { "_isIntroCompleted", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState = { "_attackSubState", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _attackSubState), Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isFirstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView = { "_isFirstPersonView", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__tentacleLength_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__tentacleLength = { "_tentacleLength", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _tentacleLength), METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__tentacleLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__tentacleLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isRequestingPowerAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack = { "_isRequestingPowerAttack", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isK24PowerAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking = { "_isK24PowerAttacking", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isChargingPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower = { "_isChargingPower", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode_SetBit(void* Obj)
	{
		((UK24PowerAnimInstance*)Obj)->_isInPowerMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode = { "_isInPowerMode", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24PowerAnimInstance), &Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__owningKiller_MetaData[] = {
		{ "Category", "K24PowerAnimInstance" },
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__owningKiller = { "_owningKiller", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _owningKiller), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__owningKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__owningKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__k24Power_MetaData[] = {
		{ "ModuleRelativePath", "Public/K24PowerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__k24Power = { "_k24Power", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24PowerAnimInstance, _k24Power), Z_Construct_UClass_AK24Power_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__k24Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__k24Power_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK24PowerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isKilling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__lateralVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__forwardVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__powerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isLevelReadyToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isIntroCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__attackSubState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isFirstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__tentacleLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isRequestingPowerAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isK24PowerAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isChargingPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__isInPowerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__owningKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24PowerAnimInstance_Statics::NewProp__k24Power,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24PowerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24PowerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24PowerAnimInstance_Statics::ClassParams = {
		&UK24PowerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK24PowerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK24PowerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24PowerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24PowerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24PowerAnimInstance, 3780101377);
	template<> THEK24_API UClass* StaticClass<UK24PowerAnimInstance>()
	{
		return UK24PowerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24PowerAnimInstance(Z_Construct_UClass_UK24PowerAnimInstance, &UK24PowerAnimInstance::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24PowerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24PowerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
