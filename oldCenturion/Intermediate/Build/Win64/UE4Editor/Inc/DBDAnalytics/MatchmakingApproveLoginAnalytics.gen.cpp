// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingApproveLoginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingApproveLoginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMatchmakingApproveLoginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingApproveLoginAnalytics"), sizeof(FMatchmakingApproveLoginAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingApproveLoginAnalytics>()
{
	return FMatchmakingApproveLoginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingApproveLoginAnalytics(FMatchmakingApproveLoginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingApproveLoginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingApproveLoginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingApproveLoginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingApproveLoginAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingApproveLoginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingApproveLoginAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoiningUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JoiningUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingApproveLoginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingApproveLoginAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_JoiningUserID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingApproveLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_JoiningUserID = { "JoiningUserID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingApproveLoginAnalytics, JoiningUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_JoiningUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_JoiningUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingApproveLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingApproveLoginAnalytics, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingApproveLoginAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMatchmakingApproveLoginAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingApproveLoginAnalytics), &Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingApproveLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingApproveLoginAnalytics, CurrentPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_CurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_CurrentPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_JoiningUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::NewProp_CurrentPlayers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchmakingApproveLoginAnalytics",
		sizeof(FMatchmakingApproveLoginAnalytics),
		alignof(FMatchmakingApproveLoginAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingApproveLoginAnalytics"), sizeof(FMatchmakingApproveLoginAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingApproveLoginAnalytics_Hash() { return 1092056609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
