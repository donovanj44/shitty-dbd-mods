// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/HelpCategoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpCategoryData() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FHelpCategoryData();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHelpType();
// End Cross Module References
class UScriptStruct* FHelpCategoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FHelpCategoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHelpCategoryData, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("HelpCategoryData"), sizeof(FHelpCategoryData), Get_Z_Construct_UScriptStruct_FHelpCategoryData_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FHelpCategoryData>()
{
	return FHelpCategoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHelpCategoryData(FHelpCategoryData::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("HelpCategoryData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpCategoryData
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpCategoryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HelpCategoryData")),new UScriptStruct::TCppStructOps<FHelpCategoryData>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpCategoryData;
	struct Z_Construct_UScriptStruct_FHelpCategoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopicIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TopicIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TopicIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpCategoryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HelpCategoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHelpCategoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds_MetaData[] = {
		{ "Category", "HelpCategoryData" },
		{ "ModuleRelativePath", "Public/HelpCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds = { "TopicIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpCategoryData, TopicIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds_Inner = { "TopicIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "HelpCategoryData" },
		{ "ModuleRelativePath", "Public/HelpCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpCategoryData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "HelpCategoryData" },
		{ "ModuleRelativePath", "Public/HelpCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpCategoryData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "HelpCategoryData" },
		{ "ModuleRelativePath", "Public/HelpCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpCategoryData, Type), Z_Construct_UEnum_DBDSharedTypes_EHelpType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHelpCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_TopicIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpCategoryData_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHelpCategoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"HelpCategoryData",
		sizeof(FHelpCategoryData),
		alignof(FHelpCategoryData),
		Z_Construct_UScriptStruct_FHelpCategoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpCategoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHelpCategoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHelpCategoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HelpCategoryData"), sizeof(FHelpCategoryData), Get_Z_Construct_UScriptStruct_FHelpCategoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHelpCategoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHelpCategoryData_Hash() { return 3681281559U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
