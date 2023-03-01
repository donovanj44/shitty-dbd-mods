// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaPerkSelectionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPerkSelectionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaPerkSelectionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaPerkSelectionAnalytics"), sizeof(FAtlantaPerkSelectionAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaPerkSelectionAnalytics>()
{
	return FAtlantaPerkSelectionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaPerkSelectionAnalytics(FAtlantaPerkSelectionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaPerkSelectionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPerkSelectionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPerkSelectionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaPerkSelectionAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaPerkSelectionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPerkSelectionAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNotSelectedPerkTeachable_MetaData[];
#endif
		static void NewProp_IsNotSelectedPerkTeachable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNotSelectedPerkTeachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotSelectedPerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotSelectedPerkLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotSelectedPerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NotSelectedPerkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSelectedPerkTeachable_MetaData[];
#endif
		static void NewProp_IsSelectedPerkTeachable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSelectedPerkTeachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedPerkLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedPerkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterPrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaPerkSelectionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable_SetBit(void* Obj)
	{
		((FAtlantaPerkSelectionAnalytics*)Obj)->IsNotSelectedPerkTeachable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable = { "IsNotSelectedPerkTeachable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaPerkSelectionAnalytics), &Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkLevel = { "NotSelectedPerkLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, NotSelectedPerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkId = { "NotSelectedPerkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, NotSelectedPerkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable_SetBit(void* Obj)
	{
		((FAtlantaPerkSelectionAnalytics*)Obj)->IsSelectedPerkTeachable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable = { "IsSelectedPerkTeachable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaPerkSelectionAnalytics), &Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkLevel = { "SelectedPerkLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, SelectedPerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkId = { "SelectedPerkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, SelectedPerkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterPrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterPrestigeLevel = { "CharacterPrestigeLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, CharacterPrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterPrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterPrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, CharacterLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPerkSelectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPerkSelectionAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsNotSelectedPerkTeachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_NotSelectedPerkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_IsSelectedPerkTeachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_SelectedPerkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterPrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaPerkSelectionAnalytics",
		sizeof(FAtlantaPerkSelectionAnalytics),
		alignof(FAtlantaPerkSelectionAnalytics),
		Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaPerkSelectionAnalytics"), sizeof(FAtlantaPerkSelectionAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaPerkSelectionAnalytics_Hash() { return 3840585207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
