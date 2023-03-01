// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerRoleRankData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRoleRankData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoleRankData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FPlayerRoleRankData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerRoleRankData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRoleRankData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerRoleRankData"), sizeof(FPlayerRoleRankData), Get_Z_Construct_UScriptStruct_FPlayerRoleRankData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerRoleRankData>()
{
	return FPlayerRoleRankData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerRoleRankData(FPlayerRoleRankData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerRoleRankData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoleRankData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoleRankData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerRoleRankData")),new UScriptStruct::TCppStructOps<FPlayerRoleRankData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoleRankData;
	struct Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActivePips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsRequiredForNextRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PipsRequiredForNextRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerRoleRankData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRoleRankData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_ActivePips_MetaData[] = {
		{ "Category", "PlayerRoleRankData" },
		{ "ModuleRelativePath", "Public/PlayerRoleRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_ActivePips = { "ActivePips", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoleRankData, ActivePips), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_ActivePips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_ActivePips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PipsRequiredForNextRank_MetaData[] = {
		{ "Category", "PlayerRoleRankData" },
		{ "ModuleRelativePath", "Public/PlayerRoleRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PipsRequiredForNextRank = { "PipsRequiredForNextRank", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoleRankData, PipsRequiredForNextRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PipsRequiredForNextRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PipsRequiredForNextRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "PlayerRoleRankData" },
		{ "ModuleRelativePath", "Public/PlayerRoleRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoleRankData, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "PlayerRoleRankData" },
		{ "ModuleRelativePath", "Public/PlayerRoleRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoleRankData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_ActivePips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PipsRequiredForNextRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::NewProp_PlayerRole_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerRoleRankData",
		sizeof(FPlayerRoleRankData),
		alignof(FPlayerRoleRankData),
		Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoleRankData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerRoleRankData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerRoleRankData"), sizeof(FPlayerRoleRankData), Get_Z_Construct_UScriptStruct_FPlayerRoleRankData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerRoleRankData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerRoleRankData_Hash() { return 2825846538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
