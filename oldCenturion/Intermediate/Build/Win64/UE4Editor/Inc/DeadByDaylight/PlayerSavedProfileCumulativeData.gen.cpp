// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerSavedProfileCumulativeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSavedProfileCumulativeData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FPlayerSavedProfileCumulativeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerSavedProfileCumulativeData"), sizeof(FPlayerSavedProfileCumulativeData), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerSavedProfileCumulativeData>()
{
	return FPlayerSavedProfileCumulativeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerSavedProfileCumulativeData(FPlayerSavedProfileCumulativeData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerSavedProfileCumulativeData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileCumulativeData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileCumulativeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerSavedProfileCumulativeData")),new UScriptStruct::TCppStructOps<FPlayerSavedProfileCumulativeData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileCumulativeData;
	struct Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativePlaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CumulativePlaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSessionTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSessionTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMatchTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsKillerNoFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsKillerNoFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsSurvivorNoFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimePlaying_MetaData[];
#endif
		static void NewProp_FirstTimePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimePlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSavedProfileCumulativeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativePlaytime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativePlaytime = { "CumulativePlaytime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativePlaytime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativePlaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativePlaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeSessions = { "CumulativeSessions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeSessions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastSessionTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastSessionTimestamp = { "LastSessionTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, LastSessionTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastSessionTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastSessionTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastMatchTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastMatchTimestamp = { "LastMatchTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, LastMatchTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastMatchTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastMatchTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKillerNoFriends = { "CumulativeMatchesAsKillerNoFriends", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeMatchesAsKillerNoFriends), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends = { "CumulativeMatchesAsSurvivorNoFriends", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeMatchesAsSurvivorNoFriends), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKiller = { "CumulativeMatchesAsKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeMatchesAsKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivor = { "CumulativeMatchesAsSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeMatchesAsSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatches = { "CumulativeMatches", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileCumulativeData, CumulativeMatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileCumulativeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FPlayerSavedProfileCumulativeData*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileCumulativeData), &Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativePlaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastSessionTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_LastMatchTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKillerNoFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatchesAsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_CumulativeMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::NewProp_FirstTimePlaying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerSavedProfileCumulativeData",
		sizeof(FPlayerSavedProfileCumulativeData),
		alignof(FPlayerSavedProfileCumulativeData),
		Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerSavedProfileCumulativeData"), sizeof(FPlayerSavedProfileCumulativeData), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData_Hash() { return 4043353600U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
