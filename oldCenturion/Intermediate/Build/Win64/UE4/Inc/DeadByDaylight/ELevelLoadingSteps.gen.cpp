// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ELevelLoadingSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELevelLoadingSteps() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELevelLoadingSteps();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ELevelLoadingSteps_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ELevelLoadingSteps, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ELevelLoadingSteps"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELevelLoadingSteps>()
	{
		return ELevelLoadingSteps_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelLoadingSteps(ELevelLoadingSteps_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ELevelLoadingSteps"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ELevelLoadingSteps_Hash() { return 1231108187U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ELevelLoadingSteps()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelLoadingSteps"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ELevelLoadingSteps_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelLoadingSteps::Invalid", (int64)ELevelLoadingSteps::Invalid },
				{ "ELevelLoadingSteps::WaitingForPlayersToBeSpawned", (int64)ELevelLoadingSteps::WaitingForPlayersToBeSpawned },
				{ "ELevelLoadingSteps::WaitingForAIPawnToBeSpawned", (int64)ELevelLoadingSteps::WaitingForAIPawnToBeSpawned },
				{ "ELevelLoadingSteps::WaitingForAssetPreloader", (int64)ELevelLoadingSteps::WaitingForAssetPreloader },
				{ "ELevelLoadingSteps::WaitingForLoadoutAndTheme", (int64)ELevelLoadingSteps::WaitingForLoadoutAndTheme },
				{ "ELevelLoadingSteps::WaitingForPIAToBeSpawnedAndInitialized", (int64)ELevelLoadingSteps::WaitingForPIAToBeSpawnedAndInitialized },
				{ "ELevelLoadingSteps::WaitingForNavmeshComputationToStart", (int64)ELevelLoadingSteps::WaitingForNavmeshComputationToStart },
				{ "ELevelLoadingSteps::WaitingForNavmeshComputationToFinish", (int64)ELevelLoadingSteps::WaitingForNavmeshComputationToFinish },
				{ "ELevelLoadingSteps::SetGameLoadedAndReadyToPlay", (int64)ELevelLoadingSteps::SetGameLoadedAndReadyToPlay },
				{ "ELevelLoadingSteps::WaitingForIntroToBeDone", (int64)ELevelLoadingSteps::WaitingForIntroToBeDone },
				{ "ELevelLoadingSteps::LoadingCompleted", (int64)ELevelLoadingSteps::LoadingCompleted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Name", "ELevelLoadingSteps::Invalid" },
				{ "LoadingCompleted.Name", "ELevelLoadingSteps::LoadingCompleted" },
				{ "ModuleRelativePath", "Public/ELevelLoadingSteps.h" },
				{ "SetGameLoadedAndReadyToPlay.Name", "ELevelLoadingSteps::SetGameLoadedAndReadyToPlay" },
				{ "WaitingForAIPawnToBeSpawned.Name", "ELevelLoadingSteps::WaitingForAIPawnToBeSpawned" },
				{ "WaitingForAssetPreloader.Name", "ELevelLoadingSteps::WaitingForAssetPreloader" },
				{ "WaitingForIntroToBeDone.Name", "ELevelLoadingSteps::WaitingForIntroToBeDone" },
				{ "WaitingForLoadoutAndTheme.Name", "ELevelLoadingSteps::WaitingForLoadoutAndTheme" },
				{ "WaitingForNavmeshComputationToFinish.Name", "ELevelLoadingSteps::WaitingForNavmeshComputationToFinish" },
				{ "WaitingForNavmeshComputationToStart.Name", "ELevelLoadingSteps::WaitingForNavmeshComputationToStart" },
				{ "WaitingForPIAToBeSpawnedAndInitialized.Name", "ELevelLoadingSteps::WaitingForPIAToBeSpawnedAndInitialized" },
				{ "WaitingForPlayersToBeSpawned.Name", "ELevelLoadingSteps::WaitingForPlayersToBeSpawned" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ELevelLoadingSteps",
				"ELevelLoadingSteps",
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
