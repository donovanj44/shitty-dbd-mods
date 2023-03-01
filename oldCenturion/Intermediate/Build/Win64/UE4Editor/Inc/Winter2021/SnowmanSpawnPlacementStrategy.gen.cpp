// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/SnowmanSpawnPlacementStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanSpawnPlacementStrategy() {}
// Cross Module References
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanSpawnPlacementStrategy_NoRegister();
	WINTER2021_API UClass* Z_Construct_UClass_USnowmanSpawnPlacementStrategy();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APallet_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AHatch_NoRegister();
	WINTER2021_API UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnLocationData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(USnowmanSpawnPlacementStrategy::execAuthority_OnIntroCompletedOrLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroCompletedOrLevelReadyToPlay();
		P_NATIVE_END;
	}
	void USnowmanSpawnPlacementStrategy::StaticRegisterNativesUSnowmanSpawnPlacementStrategy()
	{
		UClass* Class = USnowmanSpawnPlacementStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIntroCompletedOrLevelReadyToPlay", &USnowmanSpawnPlacementStrategy::execAuthority_OnIntroCompletedOrLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnowmanSpawnPlacementStrategy, nullptr, "Authority_OnIntroCompletedOrLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USnowmanSpawnPlacementStrategy_NoRegister()
	{
		return USnowmanSpawnPlacementStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceToGroundToleranceSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceToGroundToleranceSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastZOffet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastZOffet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downRaycastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__downRaycastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionCheckBoxExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__collisionCheckBoxExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pallets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pallets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pallets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hatches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hatches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnLocationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnLocationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__spawnLocationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnPointsGameplayElementTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnPointsGameplayElementTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__spawnPointsGameplayElementTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__spawnPointsGameplayElementTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnPointsTileTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnPointsTileTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__spawnPointsTileTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__spawnPointsTileTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minHatchSquaredDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minHatchSquaredDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minPalletDistanceSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minPalletDistanceSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromOtherPlayersSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minDistanceFromOtherPlayersSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromOtherActiveSnowmenSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minDistanceFromOtherActiveSnowmenSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionBoxHalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__collisionBoxHalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boxExtentZSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__boxExtentZSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boxExtentYSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__boxExtentYSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boxExtentXSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__boxExtentXSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navmesh_minimumDistanceFromOriginSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__navmesh_minimumDistanceFromOriginSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navmesh_radiusArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__navmesh_radiusArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minPalletDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minPalletDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minHatchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minHatchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromOtherPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minDistanceFromOtherPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromOtherActiveSnowmen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minDistanceFromOtherActiveSnowmen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay, "Authority_OnIntroCompletedOrLevelReadyToPlay" }, // 1940236035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnowmanSpawnPlacementStrategy.h" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__distanceToGroundToleranceSquared_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__distanceToGroundToleranceSquared = { "_distanceToGroundToleranceSquared", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _distanceToGroundToleranceSquared), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__distanceToGroundToleranceSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__distanceToGroundToleranceSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__rayCastZOffet_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__rayCastZOffet = { "_rayCastZOffet", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _rayCastZOffet), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__rayCastZOffet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__rayCastZOffet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__downRaycastLength_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__downRaycastLength = { "_downRaycastLength", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _downRaycastLength), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__downRaycastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__downRaycastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionCheckBoxExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionCheckBoxExtents = { "_collisionCheckBoxExtents", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _collisionCheckBoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionCheckBoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionCheckBoxExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets = { "_pallets", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _pallets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets_Inner = { "_pallets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches = { "_hatches", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _hatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches_Inner = { "_hatches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData = { "_spawnLocationData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnLocationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData_Inner = { "_spawnLocationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnowmanSpawnLocationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes = { "_spawnPointsGameplayElementTypes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnPointsGameplayElementTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_Inner = { "_spawnPointsGameplayElementTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes = { "_spawnPointsTileTypes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnPointsTileTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_Inner = { "_spawnPointsTileTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchSquaredDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchSquaredDistance = { "_minHatchSquaredDistance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minHatchSquaredDistance), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchSquaredDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchSquaredDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistanceSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistanceSquared = { "_minPalletDistanceSquared", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minPalletDistanceSquared), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistanceSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistanceSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayersSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayersSquared = { "_minDistanceFromOtherPlayersSquared", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherPlayersSquared), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayersSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayersSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmenSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmenSquared = { "_minDistanceFromOtherActiveSnowmenSquared", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherActiveSnowmenSquared), METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmenSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmenSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionBoxHalfExtent_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionBoxHalfExtent = { "_collisionBoxHalfExtent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _collisionBoxHalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionBoxHalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionBoxHalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentZSize_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentZSize = { "_boxExtentZSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentZSize), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentZSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentZSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentYSize_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentYSize = { "_boxExtentYSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentYSize), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentYSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentYSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentXSize_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentXSize = { "_boxExtentXSize", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentXSize), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentXSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentXSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady = { "_navmesh_minimumNumberOfNavmeshPointsToBeReady", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_minimumNumberOfNavmeshPointsToBeReady), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumDistanceFromOriginSpawnPoint_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumDistanceFromOriginSpawnPoint = { "_navmesh_minimumDistanceFromOriginSpawnPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_minimumDistanceFromOriginSpawnPoint), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumDistanceFromOriginSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumDistanceFromOriginSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_radiusArea_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_radiusArea = { "_navmesh_radiusArea", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_radiusArea), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_radiusArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_radiusArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistance_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistance = { "_minPalletDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minPalletDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchDistance_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchDistance = { "_minHatchDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minHatchDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayers_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayers = { "_minDistanceFromOtherPlayers", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherPlayers), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmen_MetaData[] = {
		{ "Category", "SnowmanSpawnPlacementStrategy" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmen = { "_minDistanceFromOtherActiveSnowmen", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherActiveSnowmen), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__distanceToGroundToleranceSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__rayCastZOffet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__downRaycastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionCheckBoxExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__pallets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__hatches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnLocationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsGameplayElementTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__spawnPointsTileTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchSquaredDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistanceSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayersSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmenSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__collisionBoxHalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentZSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentYSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__boxExtentXSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumNumberOfNavmeshPointsToBeReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_minimumDistanceFromOriginSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__navmesh_radiusArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minPalletDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minHatchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::NewProp__minDistanceFromOtherActiveSnowmen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnowmanSpawnPlacementStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::ClassParams = {
		&USnowmanSpawnPlacementStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnowmanSpawnPlacementStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USnowmanSpawnPlacementStrategy, 161539355);
	template<> WINTER2021_API UClass* StaticClass<USnowmanSpawnPlacementStrategy>()
	{
		return USnowmanSpawnPlacementStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USnowmanSpawnPlacementStrategy(Z_Construct_UClass_USnowmanSpawnPlacementStrategy, &USnowmanSpawnPlacementStrategy::StaticClass, TEXT("/Script/Winter2021"), TEXT("USnowmanSpawnPlacementStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnowmanSpawnPlacementStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
