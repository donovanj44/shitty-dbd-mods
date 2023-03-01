// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24CheatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24CheatComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24CheatComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24CheatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AZombiesManagement_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24ComeToMeMyZombies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24ComeToMeMyZombies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24SetContaminationOnSurvivor)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24SetContaminationOnSurvivor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24SetPowerLevelPoints)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24SetPowerLevelPoints(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24SpawnZombieOnKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24SpawnZombieOnKiller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24StartAllZombies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24StartAllZombies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24StopAllZombies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24StopAllZombies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_K24ZombieFall)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Zvalue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_K24ZombieFall(Z_Param_Zvalue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK24CheatComponent::execDBD_TeleportZombiesTo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_TeleportZombiesTo(Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	void UK24CheatComponent::StaticRegisterNativesUK24CheatComponent()
	{
		UClass* Class = UK24CheatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_K24ComeToMeMyZombies", &UK24CheatComponent::execDBD_K24ComeToMeMyZombies },
			{ "DBD_K24SetContaminationOnSurvivor", &UK24CheatComponent::execDBD_K24SetContaminationOnSurvivor },
			{ "DBD_K24SetPowerLevelPoints", &UK24CheatComponent::execDBD_K24SetPowerLevelPoints },
			{ "DBD_K24SpawnZombieOnKiller", &UK24CheatComponent::execDBD_K24SpawnZombieOnKiller },
			{ "DBD_K24StartAllZombies", &UK24CheatComponent::execDBD_K24StartAllZombies },
			{ "DBD_K24StopAllZombies", &UK24CheatComponent::execDBD_K24StopAllZombies },
			{ "DBD_K24ZombieFall", &UK24CheatComponent::execDBD_K24ZombieFall },
			{ "DBD_TeleportZombiesTo", &UK24CheatComponent::execDBD_TeleportZombiesTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24ComeToMeMyZombies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics
	{
		struct K24CheatComponent_eventDBD_K24SetContaminationOnSurvivor_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value_SetBit(void* Obj)
	{
		((K24CheatComponent_eventDBD_K24SetContaminationOnSurvivor_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K24CheatComponent_eventDBD_K24SetContaminationOnSurvivor_Parms), &Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24SetContaminationOnSurvivor", nullptr, nullptr, sizeof(K24CheatComponent_eventDBD_K24SetContaminationOnSurvivor_Parms), Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics
	{
		struct K24CheatComponent_eventDBD_K24SetPowerLevelPoints_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24CheatComponent_eventDBD_K24SetPowerLevelPoints_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24SetPowerLevelPoints", nullptr, nullptr, sizeof(K24CheatComponent_eventDBD_K24SetPowerLevelPoints_Parms), Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24SpawnZombieOnKiller", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24StartAllZombies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24StopAllZombies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics
	{
		struct K24CheatComponent_eventDBD_K24ZombieFall_Parms
		{
			float Zvalue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zvalue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::NewProp_Zvalue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::NewProp_Zvalue = { "Zvalue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24CheatComponent_eventDBD_K24ZombieFall_Parms, Zvalue), METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::NewProp_Zvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::NewProp_Zvalue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::NewProp_Zvalue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_K24ZombieFall", nullptr, nullptr, sizeof(K24CheatComponent_eventDBD_K24ZombieFall_Parms), Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics
	{
		struct K24CheatComponent_eventDBD_TeleportZombiesTo_Parms
		{
			float x;
			float y;
			float z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24CheatComponent_eventDBD_TeleportZombiesTo_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24CheatComponent_eventDBD_TeleportZombiesTo_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24CheatComponent_eventDBD_TeleportZombiesTo_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24CheatComponent, nullptr, "DBD_TeleportZombiesTo", nullptr, nullptr, sizeof(K24CheatComponent_eventDBD_TeleportZombiesTo_Parms), Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24CheatComponent_NoRegister()
	{
		return UK24CheatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK24CheatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombiesManagement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombiesManagement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieManagementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__zombieManagementClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24CheatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24CheatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24ComeToMeMyZombies, "DBD_K24ComeToMeMyZombies" }, // 1242619249
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetContaminationOnSurvivor, "DBD_K24SetContaminationOnSurvivor" }, // 2729097507
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24SetPowerLevelPoints, "DBD_K24SetPowerLevelPoints" }, // 2520845569
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24SpawnZombieOnKiller, "DBD_K24SpawnZombieOnKiller" }, // 528015054
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24StartAllZombies, "DBD_K24StartAllZombies" }, // 2220910469
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24StopAllZombies, "DBD_K24StopAllZombies" }, // 2895598127
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_K24ZombieFall, "DBD_K24ZombieFall" }, // 2517605795
		{ &Z_Construct_UFunction_UK24CheatComponent_DBD_TeleportZombiesTo, "DBD_TeleportZombiesTo" }, // 2331370985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24CheatComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24CheatComponent.h" },
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombiesManagement_MetaData[] = {
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombiesManagement = { "_zombiesManagement", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24CheatComponent, _zombiesManagement), Z_Construct_UClass_AZombiesManagement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombiesManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombiesManagement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombieManagementClass_MetaData[] = {
		{ "Category", "K24CheatComponent" },
		{ "ModuleRelativePath", "Public/K24CheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombieManagementClass = { "_zombieManagementClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24CheatComponent, _zombieManagementClass), Z_Construct_UClass_AZombiesManagement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombieManagementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombieManagementClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK24CheatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombiesManagement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24CheatComponent_Statics::NewProp__zombieManagementClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24CheatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24CheatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24CheatComponent_Statics::ClassParams = {
		&UK24CheatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK24CheatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK24CheatComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK24CheatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24CheatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24CheatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24CheatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24CheatComponent, 104341220);
	template<> THEK24_API UClass* StaticClass<UK24CheatComponent>()
	{
		return UK24CheatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24CheatComponent(Z_Construct_UClass_UK24CheatComponent, &UK24CheatComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24CheatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24CheatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
