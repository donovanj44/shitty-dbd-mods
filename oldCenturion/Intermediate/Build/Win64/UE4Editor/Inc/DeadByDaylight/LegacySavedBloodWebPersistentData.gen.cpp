// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedBloodWebPersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedBloodWebPersistentData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData();
// End Cross Module References
class UScriptStruct* FLegacySavedBloodWebPersistentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedBloodWebPersistentData"), sizeof(FLegacySavedBloodWebPersistentData), Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedBloodWebPersistentData>()
{
	return FLegacySavedBloodWebPersistentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedBloodWebPersistentData(FLegacySavedBloodWebPersistentData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedBloodWebPersistentData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebPersistentData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebPersistentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedBloodWebPersistentData")),new UScriptStruct::TCppStructOps<FLegacySavedBloodWebPersistentData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebPersistentData;
	struct Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenerationDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityCurrentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntityCurrentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedBloodWebPersistentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_GenerationDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_GenerationDate = { "GenerationDate", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, GenerationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_GenerationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_GenerationDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_EntityCurrentNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_EntityCurrentNode = { "EntityCurrentNode", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, EntityCurrentNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_EntityCurrentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_EntityCurrentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData = { "RingData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, RingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData_Inner = { "RingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_VersionNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000003000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebPersistentData, VersionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_VersionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_VersionNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_GenerationDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_EntityCurrentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_RingData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::NewProp_VersionNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedBloodWebPersistentData",
		sizeof(FLegacySavedBloodWebPersistentData),
		alignof(FLegacySavedBloodWebPersistentData),
		Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedBloodWebPersistentData"), sizeof(FLegacySavedBloodWebPersistentData), Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData_Hash() { return 3222868657U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
