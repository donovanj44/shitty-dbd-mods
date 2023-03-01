// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RankTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoleRankData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FRankTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRankTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RankTooltipData"), sizeof(FRankTooltipData), Get_Z_Construct_UScriptStruct_FRankTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRankTooltipData>()
{
	return FRankTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankTooltipData(FRankTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RankTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankTooltipData")),new UScriptStruct::TCppStructOps<FRankTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRankTooltipData;
	struct Z_Construct_UScriptStruct_FRankTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerRankData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerRankData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRankData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorRankData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_KillerRankData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RankTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_KillerRankData = { "KillerRankData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipData, KillerRankData), Z_Construct_UScriptStruct_FPlayerRoleRankData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_KillerRankData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_KillerRankData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_SurvivorRankData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RankTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_SurvivorRankData = { "SurvivorRankData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipData, SurvivorRankData), Z_Construct_UScriptStruct_FPlayerRoleRankData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_SurvivorRankData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_SurvivorRankData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/RankTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole = { "CurrentPlayerRole", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankTooltipData, CurrentPlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_KillerRankData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_SurvivorRankData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankTooltipData_Statics::NewProp_CurrentPlayerRole_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"RankTooltipData",
		sizeof(FRankTooltipData),
		alignof(FRankTooltipData),
		Z_Construct_UScriptStruct_FRankTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankTooltipData"), sizeof(FRankTooltipData), Get_Z_Construct_UScriptStruct_FRankTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankTooltipData_Hash() { return 3730541254U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
