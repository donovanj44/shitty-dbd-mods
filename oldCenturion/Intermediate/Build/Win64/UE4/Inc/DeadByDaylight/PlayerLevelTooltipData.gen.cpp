// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerLevelTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
// End Cross Module References
class UScriptStruct* FPlayerLevelTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLevelTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerLevelTooltipData"), sizeof(FPlayerLevelTooltipData), Get_Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerLevelTooltipData>()
{
	return FPlayerLevelTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLevelTooltipData(FPlayerLevelTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerLevelTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerLevelTooltipData")),new UScriptStruct::TCppStructOps<FPlayerLevelTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelTooltipData;
	struct Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextLevelExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPrestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerPrestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLevelTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_NextLevelExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_NextLevelExperience = { "NextLevelExperience", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelTooltipData, NextLevelExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_NextLevelExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_NextLevelExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelTooltipData, CurrentExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_CurrentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_CurrentExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerPrestige_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerPrestige = { "PlayerPrestige", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelTooltipData, PlayerPrestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerPrestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerPrestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelTooltipData, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_NextLevelExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_CurrentExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerPrestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::NewProp_PlayerLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"PlayerLevelTooltipData",
		sizeof(FPlayerLevelTooltipData),
		alignof(FPlayerLevelTooltipData),
		Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLevelTooltipData"), sizeof(FPlayerLevelTooltipData), Get_Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelTooltipData_Hash() { return 3516834223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
