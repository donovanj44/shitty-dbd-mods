// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ForceSpawnTileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceSpawnTileData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FForceSpawnTileData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FForceSpawnTileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FForceSpawnTileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceSpawnTileData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ForceSpawnTileData"), sizeof(FForceSpawnTileData), Get_Z_Construct_UScriptStruct_FForceSpawnTileData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FForceSpawnTileData>()
{
	return FForceSpawnTileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceSpawnTileData(FForceSpawnTileData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ForceSpawnTileData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFForceSpawnTileData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFForceSpawnTileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceSpawnTileData")),new UScriptStruct::TCppStructOps<FForceSpawnTileData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFForceSpawnTileData;
	struct Z_Construct_UScriptStruct_FForceSpawnTileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matrixY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_matrixY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matrixX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_matrixX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ForceSpawnTileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceSpawnTileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "ForceSpawnTileData" },
		{ "ModuleRelativePath", "Public/ForceSpawnTileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceSpawnTileData, rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixY_MetaData[] = {
		{ "Category", "ForceSpawnTileData" },
		{ "ModuleRelativePath", "Public/ForceSpawnTileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixY = { "matrixY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceSpawnTileData, matrixY), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixX_MetaData[] = {
		{ "Category", "ForceSpawnTileData" },
		{ "ModuleRelativePath", "Public/ForceSpawnTileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixX = { "matrixX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceSpawnTileData, matrixX), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_name_MetaData[] = {
		{ "Category", "ForceSpawnTileData" },
		{ "ModuleRelativePath", "Public/ForceSpawnTileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceSpawnTileData, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_matrixX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ForceSpawnTileData",
		sizeof(FForceSpawnTileData),
		alignof(FForceSpawnTileData),
		Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceSpawnTileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceSpawnTileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceSpawnTileData"), sizeof(FForceSpawnTileData), Get_Z_Construct_UScriptStruct_FForceSpawnTileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceSpawnTileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceSpawnTileData_Hash() { return 2536544777U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
