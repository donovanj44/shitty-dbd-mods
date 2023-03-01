// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/RarityMaterialData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarityMaterialData() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FRarityMaterialData();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FRarityMaterialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FRarityMaterialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRarityMaterialData, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("RarityMaterialData"), sizeof(FRarityMaterialData), Get_Z_Construct_UScriptStruct_FRarityMaterialData_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FRarityMaterialData>()
{
	return FRarityMaterialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRarityMaterialData(FRarityMaterialData::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("RarityMaterialData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFRarityMaterialData
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFRarityMaterialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RarityMaterialData")),new UScriptStruct::TCppStructOps<FRarityMaterialData>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFRarityMaterialData;
	struct Z_Construct_UScriptStruct_FRarityMaterialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityMaterialData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RarityMaterialData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRarityMaterialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RarityMaterialData" },
		{ "ModuleRelativePath", "Public/RarityMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityMaterialData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "RarityMaterialData" },
		{ "ModuleRelativePath", "Public/RarityMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityMaterialData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRarityMaterialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityMaterialData_Statics::NewProp_Rarity_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRarityMaterialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"RarityMaterialData",
		sizeof(FRarityMaterialData),
		alignof(FRarityMaterialData),
		Z_Construct_UScriptStruct_FRarityMaterialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityMaterialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRarityMaterialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRarityMaterialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RarityMaterialData"), sizeof(FRarityMaterialData), Get_Z_Construct_UScriptStruct_FRarityMaterialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRarityMaterialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRarityMaterialData_Hash() { return 1096124930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
