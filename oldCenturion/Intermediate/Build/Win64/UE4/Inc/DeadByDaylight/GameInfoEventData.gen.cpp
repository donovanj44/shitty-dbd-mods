// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameInfoEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfoEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameInfoEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FGameInfoEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGameInfoEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameInfoEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GameInfoEventData"), sizeof(FGameInfoEventData), Get_Z_Construct_UScriptStruct_FGameInfoEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGameInfoEventData>()
{
	return FGameInfoEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameInfoEventData(FGameInfoEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GameInfoEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameInfoEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameInfoEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameInfoEventData")),new UScriptStruct::TCppStructOps<FGameInfoEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGameInfoEventData;
	struct Z_Construct_UScriptStruct_FGameInfoEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfoEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInfoEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameInfoEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInfoEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType = { "GameType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfoEventData, GameType), Z_Construct_UEnum_DeadByDaylight_EGameType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInfoEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfoEventData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameInfoEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_GameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfoEventData_Statics::NewProp_PlayerRole_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameInfoEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GameInfoEventData",
		sizeof(FGameInfoEventData),
		alignof(FGameInfoEventData),
		Z_Construct_UScriptStruct_FGameInfoEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfoEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameInfoEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameInfoEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameInfoEventData"), sizeof(FGameInfoEventData), Get_Z_Construct_UScriptStruct_FGameInfoEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameInfoEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameInfoEventData_Hash() { return 1904557614U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
