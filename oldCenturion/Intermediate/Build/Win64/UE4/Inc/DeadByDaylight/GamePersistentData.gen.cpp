// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GamePersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePersistentData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGamePersistentData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGamePresetData();
// End Cross Module References
class UScriptStruct* FGamePersistentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGamePersistentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamePersistentData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GamePersistentData"), sizeof(FGamePersistentData), Get_Z_Construct_UScriptStruct_FGamePersistentData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGamePersistentData>()
{
	return FGamePersistentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamePersistentData(FGamePersistentData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GamePersistentData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePersistentData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePersistentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamePersistentData")),new UScriptStruct::TCppStructOps<FGamePersistentData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePersistentData;
	struct Z_Construct_UScriptStruct_FGamePersistentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamePresetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectatorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePersistentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamePersistentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamePersistentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_GamePresetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_GamePresetData = { "GamePresetData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePersistentData, GamePresetData), Z_Construct_UScriptStruct_FGamePresetData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_GamePresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_GamePresetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_SpectatorCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_SpectatorCount = { "SpectatorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePersistentData, SpectatorCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_SpectatorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_SpectatorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_PlayerCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePersistentData, PlayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_PlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_PlayerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamePersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_GamePresetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_SpectatorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePersistentData_Statics::NewProp_PlayerCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamePersistentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GamePersistentData",
		sizeof(FGamePersistentData),
		alignof(FGamePersistentData),
		Z_Construct_UScriptStruct_FGamePersistentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePersistentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePersistentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePersistentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamePersistentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamePersistentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamePersistentData"), sizeof(FGamePersistentData), Get_Z_Construct_UScriptStruct_FGamePersistentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamePersistentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamePersistentData_Hash() { return 2622068033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
