// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileSpawnPoint() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWeightedElement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnElement_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTileSpawnPoint::execGetSpawnedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSpawnedObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileSpawnPoint::execIsActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileSpawnPoint::execOnRep_SpawnObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpawnObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileSpawnPoint::execSetActivated)
	{
		P_GET_UBOOL(Z_Param_activated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActivated(Z_Param_activated);
		P_NATIVE_END;
	}
	void UTileSpawnPoint::StaticRegisterNativesUTileSpawnPoint()
	{
		UClass* Class = UTileSpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedObject", &UTileSpawnPoint::execGetSpawnedObject },
			{ "IsActivated", &UTileSpawnPoint::execIsActivated },
			{ "OnRep_SpawnObject", &UTileSpawnPoint::execOnRep_SpawnObject },
			{ "SetActivated", &UTileSpawnPoint::execSetActivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics
	{
		struct TileSpawnPoint_eventGetSpawnedObject_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileSpawnPoint_eventGetSpawnedObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileSpawnPoint, nullptr, "GetSpawnedObject", nullptr, nullptr, sizeof(TileSpawnPoint_eventGetSpawnedObject_Parms), Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics
	{
		struct TileSpawnPoint_eventIsActivated_Parms
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
	void Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TileSpawnPoint_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileSpawnPoint_eventIsActivated_Parms), &Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileSpawnPoint, nullptr, "IsActivated", nullptr, nullptr, sizeof(TileSpawnPoint_eventIsActivated_Parms), Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileSpawnPoint_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileSpawnPoint_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileSpawnPoint, nullptr, "OnRep_SpawnObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics
	{
		struct TileSpawnPoint_eventSetActivated_Parms
		{
			bool activated;
		};
		static void NewProp_activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::NewProp_activated_SetBit(void* Obj)
	{
		((TileSpawnPoint_eventSetActivated_Parms*)Obj)->activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::NewProp_activated = { "activated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileSpawnPoint_eventSetActivated_Parms), &Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::NewProp_activated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::NewProp_activated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileSpawnPoint, nullptr, "SetActivated", nullptr, nullptr, sizeof(TileSpawnPoint_eventSetActivated_Parms), Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileSpawnPoint_SetActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileSpawnPoint_SetActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister()
	{
		return UTileSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_UTileSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activated_MetaData[];
#endif
		static void NewProp__activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__activated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weightInfluencer_MetaData[];
#endif
		static void NewProp__weightInfluencer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__weightInfluencer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weightInfluenceable_MetaData[];
#endif
		static void NewProp__weightInfluenceable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__weightInfluenceable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnPriorityTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__spawnPriorityTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawnModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectSpawnModifier;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectSpawnModifier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Visualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSpawnPointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TileSpawnPointType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TileSpawnPointType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileSpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileSpawnPoint_GetSpawnedObject, "GetSpawnedObject" }, // 3678240228
		{ &Z_Construct_UFunction_UTileSpawnPoint_IsActivated, "IsActivated" }, // 2528712498
		{ &Z_Construct_UFunction_UTileSpawnPoint_OnRep_SpawnObject, "OnRep_SpawnObject" }, // 1595765749
		{ &Z_Construct_UFunction_UTileSpawnPoint_SetActivated, "SetActivated" }, // 2879691217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TileSpawnPoint.h" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated_SetBit(void* Obj)
	{
		((UTileSpawnPoint*)Obj)->_activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated = { "_activated", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileSpawnPoint), &Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer_SetBit(void* Obj)
	{
		((UTileSpawnPoint*)Obj)->_weightInfluencer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer = { "_weightInfluencer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileSpawnPoint), &Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable_SetBit(void* Obj)
	{
		((UTileSpawnPoint*)Obj)->_weightInfluenceable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable = { "_weightInfluenceable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileSpawnPoint), &Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnPriorityTier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnPriorityTier = { "_spawnPriorityTier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, _spawnPriorityTier), METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnPriorityTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnPriorityTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier = { "ObjectSpawnModifier", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, ObjectSpawnModifier), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier_Inner = { "ObjectSpawnModifier", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnedObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnedObject = { "_spawnedObject", "OnRep_SpawnObject", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, _spawnedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Visualization_MetaData[] = {
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Visualization = { "Visualization", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, Visualization), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Visualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Visualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, Weight), METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType_MetaData[] = {
		{ "Category", "TileSpawnPoint" },
		{ "ModuleRelativePath", "Public/TileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType = { "TileSpawnPointType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPoint, TileSpawnPointType), Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__activated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluencer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__weightInfluenceable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnPriorityTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_ObjectSpawnModifier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp__spawnedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Visualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPoint_Statics::NewProp_TileSpawnPointType_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTileSpawnPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWeightedElement_NoRegister, (int32)VTABLE_OFFSET(UTileSpawnPoint, IWeightedElement), false },
			{ Z_Construct_UClass_USpawnElement_NoRegister, (int32)VTABLE_OFFSET(UTileSpawnPoint, ISpawnElement), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileSpawnPoint_Statics::ClassParams = {
		&UTileSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTileSpawnPoint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileSpawnPoint, 3327707225);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileSpawnPoint>()
	{
		return UTileSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileSpawnPoint(Z_Construct_UClass_UTileSpawnPoint, &UTileSpawnPoint::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileSpawnPoint"), false, nullptr, nullptr, nullptr);

	void UTileSpawnPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__spawnedObject(TEXT("_spawnedObject"));

		const bool bIsValid = true
			&& Name__spawnedObject == ClassReps[(int32)ENetFields_Private::_spawnedObject].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTileSpawnPoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
