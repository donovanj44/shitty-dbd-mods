// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ProceduralMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMap() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMap();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FProceduralMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FProceduralMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMap, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ProceduralMap"), sizeof(FProceduralMap), Get_Z_Construct_UScriptStruct_FProceduralMap_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FProceduralMap>()
{
	return FProceduralMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralMap(FProceduralMap::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ProceduralMap"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFProceduralMap
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFProceduralMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralMap")),new UScriptStruct::TCppStructOps<FProceduralMap>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFProceduralMap;
	struct Z_Construct_UScriptStruct_FProceduralMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInNonViolentBuild_MetaData[];
#endif
		static void NewProp_IsInNonViolentBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInNonViolentBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedLayoutSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FixedLayoutSeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FixedLayoutSeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIDString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIDString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbnailPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivingWorldObjectsMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LivingWorldObjectsMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivingWorldObjectsMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LivingWorldObjectsMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookShelvesMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BookShelvesMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookShelvesMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BookShelvesMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookShelvesMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BookShelvesMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HookMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HookMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookMinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HookMinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ThemeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild_SetBit(void* Obj)
	{
		((FProceduralMap*)Obj)->IsInNonViolentBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild = { "IsInNonViolentBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProceduralMap), &Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed = { "FixedLayoutSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, FixedLayoutSeed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed_Inner = { "FixedLayoutSeed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_DlcIDString_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_DlcIDString = { "DlcIDString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, DlcIDString), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_DlcIDString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_DlcIDString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_SortingIndex_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_SortingIndex = { "SortingIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, SortingIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_SortingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_SortingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThumbnailPath_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThumbnailPath = { "ThumbnailPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, ThumbnailPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThumbnailPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThumbnailPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMaxCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMaxCount = { "LivingWorldObjectsMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, LivingWorldObjectsMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMinCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMinCount = { "LivingWorldObjectsMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, LivingWorldObjectsMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMaxCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMaxCount = { "BookShelvesMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, BookShelvesMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinCount = { "BookShelvesMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, BookShelvesMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinDistance_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinDistance = { "BookShelvesMinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, BookShelvesMinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMaxCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMaxCount = { "HookMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, HookMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinCount_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinCount = { "HookMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, HookMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinDistance_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinDistance = { "HookMinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, HookMinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThemeName_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThemeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_MapId_MetaData[] = {
		{ "Category", "ProceduralMap" },
		{ "ModuleRelativePath", "Public/ProceduralMap.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_MapId = { "MapId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralMap, MapId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_MapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_MapId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_IsInNonViolentBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_FixedLayoutSeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_DlcIDString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_SortingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThumbnailPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_LivingWorldObjectsMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_BookShelvesMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_HookMinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_ThemeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMap_Statics::NewProp_MapId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ProceduralMap",
		sizeof(FProceduralMap),
		alignof(FProceduralMap),
		Z_Construct_UScriptStruct_FProceduralMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralMap"), sizeof(FProceduralMap), Get_Z_Construct_UScriptStruct_FProceduralMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralMap_Hash() { return 2811003460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
