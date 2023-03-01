// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ManagedGameplayElementData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagedGameplayElementData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayElementData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner_NoRegister();
// End Cross Module References
class UScriptStruct* FManagedGameplayElementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedGameplayElementData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ManagedGameplayElementData"), sizeof(FManagedGameplayElementData), Get_Z_Construct_UScriptStruct_FManagedGameplayElementData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FManagedGameplayElementData>()
{
	return FManagedGameplayElementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManagedGameplayElementData(FManagedGameplayElementData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ManagedGameplayElementData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManagedGameplayElementData")),new UScriptStruct::TCppStructOps<FManagedGameplayElementData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementData;
	struct Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorToAdjustToWhenOutOfProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FactorToAdjustToWhenOutOfProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistSqrBetweenElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistSqrBetweenElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinProximityBetweenElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProximityBetweenElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPopulationCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinPopulationCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPopulationCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPopulationCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPopulationCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPopulationCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopulationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PopulationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PopulationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovedSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatedSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatedSpawners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedGameplayElementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_FactorToAdjustToWhenOutOfProximity = { "FactorToAdjustToWhenOutOfProximity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, FactorToAdjustToWhenOutOfProximity), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_TileWidth_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, TileWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_TileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_TileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinDistSqrBetweenElements_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinDistSqrBetweenElements = { "MinDistSqrBetweenElements", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, MinDistSqrBetweenElements), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinDistSqrBetweenElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinDistSqrBetweenElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinProximityBetweenElements_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinProximityBetweenElements = { "MinProximityBetweenElements", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, MinProximityBetweenElements), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinProximityBetweenElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinProximityBetweenElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MapWidth_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, MapWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinPopulationCost_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinPopulationCost = { "MinPopulationCost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, MinPopulationCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinPopulationCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinPopulationCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MaxPopulationCost_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MaxPopulationCost = { "MaxPopulationCost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, MaxPopulationCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MaxPopulationCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MaxPopulationCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_CurrentPopulationCost_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_CurrentPopulationCost = { "CurrentPopulationCost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, CurrentPopulationCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_CurrentPopulationCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_CurrentPopulationCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType = { "PopulationType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, PopulationType), Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners = { "RemovedSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, RemovedSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners_Inner = { "RemovedSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners_MetaData[] = {
		{ "Category", "ManagedGameplayElementData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners = { "ActivatedSpawners", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementData, ActivatedSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners_Inner = { "ActivatedSpawners", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_FactorToAdjustToWhenOutOfProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_TileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinDistSqrBetweenElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinProximityBetweenElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MinPopulationCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_MaxPopulationCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_CurrentPopulationCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_PopulationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_RemovedSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::NewProp_ActivatedSpawners_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ManagedGameplayElementData",
		sizeof(FManagedGameplayElementData),
		alignof(FManagedGameplayElementData),
		Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayElementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManagedGameplayElementData"), sizeof(FManagedGameplayElementData), Get_Z_Construct_UScriptStruct_FManagedGameplayElementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManagedGameplayElementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementData_Hash() { return 2850015743U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
