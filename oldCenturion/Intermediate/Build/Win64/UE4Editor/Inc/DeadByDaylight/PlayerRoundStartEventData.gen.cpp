// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerRoundStartEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRoundStartEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoundStartEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRankData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FPlayerRoundStartEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRoundStartEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerRoundStartEventData"), sizeof(FPlayerRoundStartEventData), Get_Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerRoundStartEventData>()
{
	return FPlayerRoundStartEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerRoundStartEventData(FPlayerRoundStartEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerRoundStartEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoundStartEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoundStartEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerRoundStartEventData")),new UScriptStruct::TCppStructOps<FPlayerRoundStartEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerRoundStartEventData;
	struct Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRankDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRankDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodWebLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankForRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRankForRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotDifficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BotDifficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BotDifficultyLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsABot_MetaData[];
#endif
		static void NewProp_IsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRoundStartEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray = { "PlayerRankDataArray", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, PlayerRankDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray_Inner = { "PlayerRankDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerRankData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_Pips_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_Pips = { "Pips", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, Pips), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_Pips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_Pips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BloodWebLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BloodWebLevel = { "BloodWebLevel", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, BloodWebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BloodWebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BloodWebLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankForRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankForRole = { "PlayerRankForRole", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, PlayerRankForRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankForRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankForRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel = { "BotDifficultyLevel", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, BotDifficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot_SetBit(void* Obj)
	{
		((FPlayerRoundStartEventData*)Obj)->IsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot = { "IsABot", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerRoundStartEventData), &Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerRoundStartEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRoundStartEventData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_Pips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BloodWebLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRankForRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_BotDifficultyLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_IsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::NewProp_PlayerRole_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerRoundStartEventData",
		sizeof(FPlayerRoundStartEventData),
		alignof(FPlayerRoundStartEventData),
		Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoundStartEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerRoundStartEventData"), sizeof(FPlayerRoundStartEventData), Get_Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerRoundStartEventData_Hash() { return 1563720231U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
