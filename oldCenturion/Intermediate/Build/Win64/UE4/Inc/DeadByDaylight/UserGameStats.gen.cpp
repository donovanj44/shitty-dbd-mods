// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UserGameStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserGameStats() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FUserGameStats();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
// End Cross Module References
class UScriptStruct* FUserGameStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FUserGameStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserGameStats, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("UserGameStats"), sizeof(FUserGameStats), Get_Z_Construct_UScriptStruct_FUserGameStats_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FUserGameStats>()
{
	return FUserGameStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserGameStats(FUserGameStats::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("UserGameStats"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFUserGameStats
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFUserGameStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserGameStats")),new UScriptStruct::TCppStructOps<FUserGameStats>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFUserGameStats;
	struct Z_Construct_UScriptStruct_FUserGameStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__bloodpoints;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__bloodpoints_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bloodpoints_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__bloodpoints_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusBloodpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BonusBloodpoints;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BonusBloodpoints_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BonusBloodpoints_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BonusBloodpoints_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skulls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skulls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FearTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FearTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disconnected_MetaData[];
#endif
		static void NewProp_Disconnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserGameStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserGameStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints = { "_bloodpoints", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserGameStats, _bloodpoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_Key_KeyProp = { "_bloodpoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_ValueProp = { "_bloodpoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints = { "BonusBloodpoints", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserGameStats, BonusBloodpoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_Key_KeyProp = { "BonusBloodpoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_ValueProp = { "BonusBloodpoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Skulls_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Skulls = { "Skulls", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserGameStats, Skulls), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Skulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Skulls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_FearTokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_FearTokens = { "FearTokens", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserGameStats, FearTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_FearTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_FearTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserGameStats.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected_SetBit(void* Obj)
	{
		((FUserGameStats*)Obj)->Disconnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected = { "Disconnected", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserGameStats), &Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserGameStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp__bloodpoints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_BonusBloodpoints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Skulls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_FearTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGameStats_Statics::NewProp_Disconnected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserGameStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"UserGameStats",
		sizeof(FUserGameStats),
		alignof(FUserGameStats),
		Z_Construct_UScriptStruct_FUserGameStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserGameStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGameStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserGameStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserGameStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserGameStats"), sizeof(FUserGameStats), Get_Z_Construct_UScriptStruct_FUserGameStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserGameStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserGameStats_Hash() { return 1619588192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
