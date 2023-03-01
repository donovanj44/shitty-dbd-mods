// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/SnowmanSpawnData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanSpawnData() {}
// Cross Module References
	WINTER2021_API UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnData();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSnowmanSpawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WINTER2021_API uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnowmanSpawnData, Z_Construct_UPackage__Script_Winter2021(), TEXT("SnowmanSpawnData"), sizeof(FSnowmanSpawnData), Get_Z_Construct_UScriptStruct_FSnowmanSpawnData_Hash());
	}
	return Singleton;
}
template<> WINTER2021_API UScriptStruct* StaticStruct<FSnowmanSpawnData>()
{
	return FSnowmanSpawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnowmanSpawnData(FSnowmanSpawnData::StaticStruct, TEXT("/Script/Winter2021"), TEXT("SnowmanSpawnData"), false, nullptr, nullptr);
static struct FScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnData
{
	FScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SnowmanSpawnData")),new UScriptStruct::TCppStructOps<FSnowmanSpawnData>);
	}
} ScriptStruct_Winter2021_StaticRegisterNativesFSnowmanSpawnData;
	struct Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnowmanSpawnData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnowmanSpawnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnowmanSpawnData, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnowmanSpawnData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnowmanSpawnData, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::NewProp_SpawnLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Winter2021,
		nullptr,
		&NewStructOps,
		"SnowmanSpawnData",
		sizeof(FSnowmanSpawnData),
		alignof(FSnowmanSpawnData),
		Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnowmanSpawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Winter2021();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnowmanSpawnData"), sizeof(FSnowmanSpawnData), Get_Z_Construct_UScriptStruct_FSnowmanSpawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnowmanSpawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnowmanSpawnData_Hash() { return 2565229505U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
