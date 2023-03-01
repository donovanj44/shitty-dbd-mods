// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GeneratedLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FForceSpawnTileData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependency();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayElementData();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfSceneComponent();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESurvivorGrouping();
// End Cross Module References
class UScriptStruct* FGeneratedLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGeneratedLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GeneratedLevelData"), sizeof(FGeneratedLevelData), Get_Z_Construct_UScriptStruct_FGeneratedLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGeneratedLevelData>()
{
	return FGeneratedLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeneratedLevelData(FGeneratedLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GeneratedLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGeneratedLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGeneratedLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeneratedLevelData")),new UScriptStruct::TCppStructOps<FGeneratedLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGeneratedLevelData;
	struct Z_Construct_UScriptStruct_FGeneratedLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelLightings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelLightings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelLightings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceSpawnTileData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceSpawnTileData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceSpawnTileData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GenerationPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationErrors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GenerationErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationLogs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GenerationLogs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePremadeMap_MetaData[];
#endif
		static void NewProp_UsePremadeMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePremadeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseForcedMap_MetaData[];
#endif
		static void NewProp_UseForcedMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseForcedMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialEventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedMapOrphanSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FixedMapOrphanSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FixedMapOrphanSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedMapTileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FixedMapTileIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FixedMapTileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelDependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeatHookManagedGameplayElementData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeatHookManagedGameplayElementData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookshelfManagedGameplayElementData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookshelfManagedGameplayElementData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapeSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscapeSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakableWallSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BreakableWallSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakableWallSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShackHatchSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShackHatchSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShackHatchSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainBuildingHatchSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MainBuildingHatchSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainBuildingHatchSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HatchSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HatchSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HatchSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerLairSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillerLairSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerLairSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HexSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchableSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchableSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchableSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialBehaviourSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpecialBehaviourSpawnPoints;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialBehaviourSpawnPoints_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialBehaviourSpawnPoints_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialBehaviourRequestCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpecialBehaviourRequestCounts;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialBehaviourRequestCounts_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialBehaviourRequestCounts_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableElementsSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractableElementsSpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableElementsSpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurvivorSpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorSpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GroupingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableSurvivorItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableSurvivorItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableEscapeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableEscapeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamRelatedSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamRelatedSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremadeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PremadeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedPaperTileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UsedPaperTileMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings = { "LevelLightings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, LevelLightings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings_Inner = { "LevelLightings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData = { "ForceSpawnTileData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, ForceSpawnTileData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData_Inner = { "ForceSpawnTileData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FForceSpawnTileData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationPlayerCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationPlayerCount = { "GenerationPlayerCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, GenerationPlayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationPlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationErrors = { "GenerationErrors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, GenerationErrors), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationLogs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationLogs = { "GenerationLogs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, GenerationLogs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationLogs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap_SetBit(void* Obj)
	{
		((FGeneratedLevelData*)Obj)->UsePremadeMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap = { "UsePremadeMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeneratedLevelData), &Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap_SetBit(void* Obj)
	{
		((FGeneratedLevelData*)Obj)->UseForcedMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap = { "UseForcedMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeneratedLevelData), &Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialEventId_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialEventId = { "SpecialEventId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, SpecialEventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialEventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialEventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners = { "FixedMapOrphanSpawners", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, FixedMapOrphanSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners_Inner = { "FixedMapOrphanSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds = { "FixedMapTileIds", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, FixedMapTileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds_Inner = { "FixedMapTileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies = { "LevelDependencies", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, LevelDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies_Inner = { "LevelDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MeatHookManagedGameplayElementData_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MeatHookManagedGameplayElementData = { "MeatHookManagedGameplayElementData", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, MeatHookManagedGameplayElementData), Z_Construct_UScriptStruct_FManagedGameplayElementData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MeatHookManagedGameplayElementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MeatHookManagedGameplayElementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BookshelfManagedGameplayElementData_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BookshelfManagedGameplayElementData = { "BookshelfManagedGameplayElementData", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, BookshelfManagedGameplayElementData), Z_Construct_UScriptStruct_FManagedGameplayElementData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BookshelfManagedGameplayElementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BookshelfManagedGameplayElementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners = { "EscapeSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, EscapeSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners_Inner = { "EscapeSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners = { "BreakableWallSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, BreakableWallSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners_Inner = { "BreakableWallSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners = { "ShackHatchSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, ShackHatchSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners_Inner = { "ShackHatchSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners = { "MainBuildingHatchSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, MainBuildingHatchSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners_Inner = { "MainBuildingHatchSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners = { "HatchSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, HatchSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners_Inner = { "HatchSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners = { "KillerLairSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, KillerLairSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners_Inner = { "KillerLairSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners = { "HexSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, HexSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners_Inner = { "HexSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners = { "SearchableSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, SearchableSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners_Inner = { "SearchableSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints = { "SpecialBehaviourSpawnPoints", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, SpecialBehaviourSpawnPoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_Key_KeyProp = { "SpecialBehaviourSpawnPoints_Key", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_ValueProp = { "SpecialBehaviourSpawnPoints", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FArrayOfSceneComponent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts = { "SpecialBehaviourRequestCounts", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, SpecialBehaviourRequestCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_Key_KeyProp = { "SpecialBehaviourRequestCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_ValueProp = { "SpecialBehaviourRequestCounts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints = { "InteractableElementsSpawnPoints", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, InteractableElementsSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints_Inner = { "InteractableElementsSpawnPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints = { "SurvivorSpawnPoints", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, SurvivorSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints_Inner = { "SurvivorSpawnPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerSpawnPoint_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerSpawnPoint = { "KillerSpawnPoint", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, KillerSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType = { "GroupingType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, GroupingType), Z_Construct_UEnum_DeadByDaylight_ESurvivorGrouping, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableSurvivorItemCount_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableSurvivorItemCount = { "AvailableSurvivorItemCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, AvailableSurvivorItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableSurvivorItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableSurvivorItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableEscapeCount_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableEscapeCount = { "AvailableEscapeCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, AvailableEscapeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableEscapeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableEscapeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_StreamRelatedSeed_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_StreamRelatedSeed = { "StreamRelatedSeed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, StreamRelatedSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_StreamRelatedSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_StreamRelatedSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_PremadeMap_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_PremadeMap = { "PremadeMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, PremadeMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_PremadeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_PremadeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsedPaperTileMap_MetaData[] = {
		{ "Category", "GeneratedLevelData" },
		{ "ModuleRelativePath", "Public/GeneratedLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsedPaperTileMap = { "UsedPaperTileMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedLevelData, UsedPaperTileMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsedPaperTileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsedPaperTileMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelLightings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ForceSpawnTileData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GenerationLogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsePremadeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UseForcedMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialEventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapOrphanSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_FixedMapTileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_LevelDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MeatHookManagedGameplayElementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BookshelfManagedGameplayElementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_EscapeSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_BreakableWallSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_ShackHatchSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_MainBuildingHatchSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HatchSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerLairSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_HexSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SearchableSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourSpawnPoints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SpecialBehaviourRequestCounts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_InteractableElementsSpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_SurvivorSpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_KillerSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_GroupingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableSurvivorItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_AvailableEscapeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_StreamRelatedSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_PremadeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::NewProp_UsedPaperTileMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GeneratedLevelData",
		sizeof(FGeneratedLevelData),
		alignof(FGeneratedLevelData),
		Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeneratedLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeneratedLevelData"), sizeof(FGeneratedLevelData), Get_Z_Construct_UScriptStruct_FGeneratedLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeneratedLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeneratedLevelData_Hash() { return 3138630062U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
