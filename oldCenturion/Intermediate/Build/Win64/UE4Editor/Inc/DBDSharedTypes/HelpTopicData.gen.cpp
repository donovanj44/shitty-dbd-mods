// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/HelpTopicData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpTopicData() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FHelpTopicData();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FHelpTopicData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FHelpTopicData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHelpTopicData, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("HelpTopicData"), sizeof(FHelpTopicData), Get_Z_Construct_UScriptStruct_FHelpTopicData_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FHelpTopicData>()
{
	return FHelpTopicData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHelpTopicData(FHelpTopicData::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("HelpTopicData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpTopicData
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpTopicData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HelpTopicData")),new UScriptStruct::TCppStructOps<FHelpTopicData>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFHelpTopicData;
	struct Z_Construct_UScriptStruct_FHelpTopicData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHelpTopicData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_VideoID_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, VideoID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_VideoID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_VideoID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_ImagePath_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, ImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "HelpTopicData" },
		{ "ModuleRelativePath", "Public/HelpTopicData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHelpTopicData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHelpTopicData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_VideoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHelpTopicData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHelpTopicData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"HelpTopicData",
		sizeof(FHelpTopicData),
		alignof(FHelpTopicData),
		Z_Construct_UScriptStruct_FHelpTopicData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHelpTopicData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHelpTopicData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHelpTopicData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHelpTopicData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HelpTopicData"), sizeof(FHelpTopicData), Get_Z_Construct_UScriptStruct_FHelpTopicData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHelpTopicData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHelpTopicData_Hash() { return 3191160722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
