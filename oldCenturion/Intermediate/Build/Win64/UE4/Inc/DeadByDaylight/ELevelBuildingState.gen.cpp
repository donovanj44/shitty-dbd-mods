// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ELevelBuildingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELevelBuildingState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELevelBuildingState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ELevelBuildingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ELevelBuildingState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ELevelBuildingState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELevelBuildingState>()
	{
		return ELevelBuildingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelBuildingState(ELevelBuildingState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ELevelBuildingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ELevelBuildingState_Hash() { return 1144854946U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ELevelBuildingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelBuildingState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ELevelBuildingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelBuildingState::NotInitialized", (int64)ELevelBuildingState::NotInitialized },
				{ "ELevelBuildingState::WaitingForInitialSync", (int64)ELevelBuildingState::WaitingForInitialSync },
				{ "ELevelBuildingState::SyncSeeds", (int64)ELevelBuildingState::SyncSeeds },
				{ "ELevelBuildingState::GetAvailableItems", (int64)ELevelBuildingState::GetAvailableItems },
				{ "ELevelBuildingState::PendingGettingItems", (int64)ELevelBuildingState::PendingGettingItems },
				{ "ELevelBuildingState::GettingLevelsDone", (int64)ELevelBuildingState::GettingLevelsDone },
				{ "ELevelBuildingState::PendingPremadeMapStreaming", (int64)ELevelBuildingState::PendingPremadeMapStreaming },
				{ "ELevelBuildingState::GetThemedTiles", (int64)ELevelBuildingState::GetThemedTiles },
				{ "ELevelBuildingState::PendingGettingTiles", (int64)ELevelBuildingState::PendingGettingTiles },
				{ "ELevelBuildingState::SpawnRequiredTiles", (int64)ELevelBuildingState::SpawnRequiredTiles },
				{ "ELevelBuildingState::SpawningLevelTiles", (int64)ELevelBuildingState::SpawningLevelTiles },
				{ "ELevelBuildingState::SpawnInterTileElements", (int64)ELevelBuildingState::SpawnInterTileElements },
				{ "ELevelBuildingState::PendingInterTileElementsSpawning", (int64)ELevelBuildingState::PendingInterTileElementsSpawning },
				{ "ELevelBuildingState::SpawningActors", (int64)ELevelBuildingState::SpawningActors },
				{ "ELevelBuildingState::SpawningMultiPassActors", (int64)ELevelBuildingState::SpawningMultiPassActors },
				{ "ELevelBuildingState::StallingForRemotes", (int64)ELevelBuildingState::StallingForRemotes },
				{ "ELevelBuildingState::BuildingDone", (int64)ELevelBuildingState::BuildingDone },
				{ "ELevelBuildingState::BuildingStateCount", (int64)ELevelBuildingState::BuildingStateCount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BuildingDone.Name", "ELevelBuildingState::BuildingDone" },
				{ "BuildingStateCount.Name", "ELevelBuildingState::BuildingStateCount" },
				{ "GetAvailableItems.Name", "ELevelBuildingState::GetAvailableItems" },
				{ "GetThemedTiles.Name", "ELevelBuildingState::GetThemedTiles" },
				{ "GettingLevelsDone.Name", "ELevelBuildingState::GettingLevelsDone" },
				{ "ModuleRelativePath", "Public/ELevelBuildingState.h" },
				{ "NotInitialized.Name", "ELevelBuildingState::NotInitialized" },
				{ "PendingGettingItems.Name", "ELevelBuildingState::PendingGettingItems" },
				{ "PendingGettingTiles.Name", "ELevelBuildingState::PendingGettingTiles" },
				{ "PendingInterTileElementsSpawning.Name", "ELevelBuildingState::PendingInterTileElementsSpawning" },
				{ "PendingPremadeMapStreaming.Name", "ELevelBuildingState::PendingPremadeMapStreaming" },
				{ "SpawningActors.Name", "ELevelBuildingState::SpawningActors" },
				{ "SpawningLevelTiles.Name", "ELevelBuildingState::SpawningLevelTiles" },
				{ "SpawningMultiPassActors.Name", "ELevelBuildingState::SpawningMultiPassActors" },
				{ "SpawnInterTileElements.Name", "ELevelBuildingState::SpawnInterTileElements" },
				{ "SpawnRequiredTiles.Name", "ELevelBuildingState::SpawnRequiredTiles" },
				{ "StallingForRemotes.Name", "ELevelBuildingState::StallingForRemotes" },
				{ "SyncSeeds.Name", "ELevelBuildingState::SyncSeeds" },
				{ "WaitingForInitialSync.Name", "ELevelBuildingState::WaitingForInitialSync" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ELevelBuildingState",
				"ELevelBuildingState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
