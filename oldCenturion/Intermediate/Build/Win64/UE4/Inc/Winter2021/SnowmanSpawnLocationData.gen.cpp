// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/SnowmanSpawnLocationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanSpawnLocationData() {}
// Cross Module References
	WINTER2021_API UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnLocationData();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSnowmanSpawnLocationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WINTER2021_API uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData, Z_Construct_UPackage__Script_Winter2021(), TEXT("SnowmanSpawnLocationData"), sizeof(FSnowmanSpawnLocationData), Get_Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Hash());
	}
	return Singleton;
}
template<> WINTER2021_API UScriptStruct* StaticStruct<FSnowmanSpawnLocationData>()
{
	return FSnowmanSpawnLocationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnowmanSpawnLocationData(FSnowmanSpawnLocationData::StaticStruct, TEXT("/Script/Winter2021"), TEXT("SnowmanSpawnLocationData"), false, nullptr, nullptr);
static struct FScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnLocationData
{
	FScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnLocationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SnowmanSpawnLocationData")),new UScriptStruct::TCppStructOps<FSnowmanSpawnLocationData>);
	}
} ScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnLocationData;
	struct Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavmeshLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavmeshLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnLocationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnowmanSpawnLocationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations = { "NavmeshLocations", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnowmanSpawnLocationData, NavmeshLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations_Inner = { "NavmeshLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_OriginLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnLocationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnowmanSpawnLocationData, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_OriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_OriginLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_NavmeshLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::NewProp_OriginLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
		nullptr,
		&NewStructOps,
		"SnowmanSpawnLocationData",
		sizeof(FSnowmanSpawnLocationData),
		alignof(FSnowmanSpawnLocationData),
		Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnLocationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Winter2021();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnowmanSpawnLocationData"), sizeof(FSnowmanSpawnLocationData), Get_Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnLocationData_Hash() { return 476971288U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
