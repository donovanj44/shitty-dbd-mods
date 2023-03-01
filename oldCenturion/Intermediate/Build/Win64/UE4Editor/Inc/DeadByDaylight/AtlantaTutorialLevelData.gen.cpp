// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAtlantaTutorialLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaTutorialLevelData"), sizeof(FAtlantaTutorialLevelData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaTutorialLevelData>()
{
	return FAtlantaTutorialLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaTutorialLevelData(FAtlantaTutorialLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaTutorialLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaTutorialLevelData")),new UScriptStruct::TCppStructOps<FAtlantaTutorialLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialLevelData;
	struct Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKillerTutorial_MetaData[];
#endif
		static void NewProp_IsKillerTutorial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKillerTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaTutorialLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial_SetBit(void* Obj)
	{
		((FAtlantaTutorialLevelData*)Obj)->IsKillerTutorial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial = { "IsKillerTutorial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaTutorialLevelData), &Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialLevelData, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialLevelData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialLevelData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialLevelData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "AtlantaTutorialLevelData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialLevelData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IsKillerTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaTutorialLevelData",
		sizeof(FAtlantaTutorialLevelData),
		alignof(FAtlantaTutorialLevelData),
		Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaTutorialLevelData"), sizeof(FAtlantaTutorialLevelData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialLevelData_Hash() { return 1555958194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
