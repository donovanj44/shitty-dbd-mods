// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingHostCreatedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingHostCreatedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMatchmakingHostCreatedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingHostCreatedAnalytics"), sizeof(FMatchmakingHostCreatedAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingHostCreatedAnalytics>()
{
	return FMatchmakingHostCreatedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingHostCreatedAnalytics(FMatchmakingHostCreatedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingHostCreatedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingHostCreatedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingHostCreatedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingHostCreatedAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingHostCreatedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingHostCreatedAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowJoinViaPresence_MetaData[];
#endif
		static void NewProp_AllowJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowJoinViaPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowJoinInProgress_MetaData[];
#endif
		static void NewProp_AllowJoinInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowJoinInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowJoinViaPresenceFriendsOnly_MetaData[];
#endif
		static void NewProp_AllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowJoinViaPresenceFriendsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsesPresence_MetaData[];
#endif
		static void NewProp_UsesPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsesPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowInvites_MetaData[];
#endif
		static void NewProp_AllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLANMatch_MetaData[];
#endif
		static void NewProp_IsLANMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLANMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldAdvertise_MetaData[];
#endif
		static void NewProp_ShouldAdvertise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldAdvertise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPrivateConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPrivateConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPublicConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPublicConnections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingHostCreatedAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_HostSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_HostSettings = { "HostSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingHostCreatedAnalytics, HostSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_HostSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_HostSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->AllowJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence = { "AllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->AllowJoinInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress = { "AllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->AllowJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly = { "AllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->UsesPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence = { "UsesPresence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->AllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites = { "AllowInvites", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->IsLANMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch = { "IsLANMatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise_SetBit(void* Obj)
	{
		((FMatchmakingHostCreatedAnalytics*)Obj)->ShouldAdvertise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise = { "ShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingHostCreatedAnalytics), &Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPrivateConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPrivateConnections = { "NumPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingHostCreatedAnalytics, NumPrivateConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPrivateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPrivateConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPublicConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingHostCreatedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPublicConnections = { "NumPublicConnections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingHostCreatedAnalytics, NumPublicConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPublicConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPublicConnections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_HostSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_UsesPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_AllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_IsLANMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_ShouldAdvertise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::NewProp_NumPublicConnections,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchmakingHostCreatedAnalytics",
		sizeof(FMatchmakingHostCreatedAnalytics),
		alignof(FMatchmakingHostCreatedAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingHostCreatedAnalytics"), sizeof(FMatchmakingHostCreatedAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingHostCreatedAnalytics_Hash() { return 3837048296U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
