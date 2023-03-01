// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DecalSpawnerCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalSpawnerCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawnerCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawnerCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawner_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDecalSpawnerCollection::execCreateDecalSpawner)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_decalSpawnerName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_decalMaterial);
		P_GET_PROPERTY(FIntProperty,Z_Param_poolSize);
		P_GET_ENUM(ESpawnerStrategyType,Z_Param_spawnerStrateryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalSpawner**)Z_Param__Result=P_THIS->CreateDecalSpawner(Z_Param_worldContextObject,Z_Param_decalSpawnerName,Z_Param_decalMaterial,Z_Param_poolSize,ESpawnerStrategyType(Z_Param_spawnerStrateryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalSpawnerCollection::execReleaseDecalSpawner)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_decalSpawnerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseDecalSpawner(Z_Param_decalSpawnerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDecalSpawnerCollection::execSpawnDecalAtLocation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_decalSpawnerName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_decalSize);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifeSpan);
		P_GET_PROPERTY(FNameProperty,Z_Param_decalType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDDecalComponent**)Z_Param__Result=P_THIS->SpawnDecalAtLocation(Z_Param_decalSpawnerName,Z_Param_Out_decalSize,Z_Param_Out_location,Z_Param_Out_rotation,Z_Param_lifeSpan,Z_Param_decalType);
		P_NATIVE_END;
	}
	void UDecalSpawnerCollection::StaticRegisterNativesUDecalSpawnerCollection()
	{
		UClass* Class = UDecalSpawnerCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDecalSpawner", &UDecalSpawnerCollection::execCreateDecalSpawner },
			{ "ReleaseDecalSpawner", &UDecalSpawnerCollection::execReleaseDecalSpawner },
			{ "SpawnDecalAtLocation", &UDecalSpawnerCollection::execSpawnDecalAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics
	{
		struct DecalSpawnerCollection_eventCreateDecalSpawner_Parms
		{
			const UObject* worldContextObject;
			FName decalSpawnerName;
			UMaterialInterface* decalMaterial;
			int32 poolSize;
			ESpawnerStrategyType spawnerStrateryType;
			UDecalSpawner* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_spawnerStrateryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_spawnerStrateryType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_poolSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decalMaterial;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_decalSpawnerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, ReturnValue), Z_Construct_UClass_UDecalSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_spawnerStrateryType = { "spawnerStrateryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, spawnerStrateryType), Z_Construct_UEnum_DeadByDaylight_ESpawnerStrategyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_spawnerStrateryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_poolSize = { "poolSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, poolSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_decalMaterial = { "decalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, decalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_decalSpawnerName = { "decalSpawnerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, decalSpawnerName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventCreateDecalSpawner_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_spawnerStrateryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_spawnerStrateryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_poolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_decalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_decalSpawnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecalSpawnerCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalSpawnerCollection, nullptr, "CreateDecalSpawner", nullptr, nullptr, sizeof(DecalSpawnerCollection_eventCreateDecalSpawner_Parms), Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics
	{
		struct DecalSpawnerCollection_eventReleaseDecalSpawner_Parms
		{
			FName decalSpawnerName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_decalSpawnerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::NewProp_decalSpawnerName = { "decalSpawnerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventReleaseDecalSpawner_Parms, decalSpawnerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::NewProp_decalSpawnerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecalSpawnerCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalSpawnerCollection, nullptr, "ReleaseDecalSpawner", nullptr, nullptr, sizeof(DecalSpawnerCollection_eventReleaseDecalSpawner_Parms), Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics
	{
		struct DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms
		{
			FName decalSpawnerName;
			FVector decalSize;
			FVector location;
			FRotator rotation;
			float lifeSpan;
			FName decalType;
			UDBDDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_decalType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_decalSize;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_decalSpawnerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, ReturnValue), Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalType = { "decalType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, decalType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_lifeSpan = { "lifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, lifeSpan), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSize = { "decalSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, decalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSize_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSpawnerName = { "decalSpawnerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms, decalSpawnerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_lifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::NewProp_decalSpawnerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecalSpawnerCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalSpawnerCollection, nullptr, "SpawnDecalAtLocation", nullptr, nullptr, sizeof(DecalSpawnerCollection_eventSpawnDecalAtLocation_Parms), Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDecalSpawnerCollection_NoRegister()
	{
		return UDecalSpawnerCollection::StaticClass();
	}
	struct Z_Construct_UClass_UDecalSpawnerCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__decalSpawners;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__decalSpawners_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalSpawners_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecalSpawnerCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDecalSpawnerCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecalSpawnerCollection_CreateDecalSpawner, "CreateDecalSpawner" }, // 2465689785
		{ &Z_Construct_UFunction_UDecalSpawnerCollection_ReleaseDecalSpawner, "ReleaseDecalSpawner" }, // 594135356
		{ &Z_Construct_UFunction_UDecalSpawnerCollection_SpawnDecalAtLocation, "SpawnDecalAtLocation" }, // 3829733463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalSpawnerCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DecalSpawnerCollection.h" },
		{ "ModuleRelativePath", "Public/DecalSpawnerCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecalSpawnerCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners = { "_decalSpawners", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalSpawnerCollection, _decalSpawners), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_Key_KeyProp = { "_decalSpawners_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_ValueProp = { "_decalSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDecalSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalSpawnerCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalSpawnerCollection_Statics::NewProp__decalSpawners_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecalSpawnerCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalSpawnerCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecalSpawnerCollection_Statics::ClassParams = {
		&UDecalSpawnerCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDecalSpawnerCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawnerCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDecalSpawnerCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawnerCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecalSpawnerCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecalSpawnerCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecalSpawnerCollection, 3642064471);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDecalSpawnerCollection>()
	{
		return UDecalSpawnerCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalSpawnerCollection(Z_Construct_UClass_UDecalSpawnerCollection, &UDecalSpawnerCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDecalSpawnerCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalSpawnerCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
