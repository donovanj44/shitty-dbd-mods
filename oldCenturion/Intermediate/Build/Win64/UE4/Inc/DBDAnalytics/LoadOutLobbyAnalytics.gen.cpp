// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LoadOutLobbyAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadOutLobbyAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutBaseAnalytics();
// End Cross Module References
class UScriptStruct* FLoadOutLobbyAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LoadOutLobbyAnalytics"), sizeof(FLoadOutLobbyAnalytics), Get_Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLoadOutLobbyAnalytics>()
{
	return FLoadOutLobbyAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadOutLobbyAnalytics(FLoadOutLobbyAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LoadOutLobbyAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadOutLobbyAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadOutLobbyAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadOutLobbyAnalytics")),new UScriptStruct::TCppStructOps<FLoadOutLobbyAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadOutLobbyAnalytics;
	struct Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadOutLobbyAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadOutLobbyAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadOutLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadOutLobbyAnalytics, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadOutLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadOutLobbyAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Prestige_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadOutLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadOutLobbyAnalytics, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadOutLobbyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadOutLobbyAnalytics, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FLoadoutBaseAnalytics,
		&NewStructOps,
		"LoadOutLobbyAnalytics",
		sizeof(FLoadOutLobbyAnalytics),
		alignof(FLoadOutLobbyAnalytics),
		Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadOutLobbyAnalytics"), sizeof(FLoadOutLobbyAnalytics), Get_Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadOutLobbyAnalytics_Hash() { return 3382685489U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
