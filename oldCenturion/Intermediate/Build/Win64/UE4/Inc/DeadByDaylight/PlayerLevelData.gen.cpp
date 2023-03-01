// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPlayerLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerLevelData"), sizeof(FPlayerLevelData), Get_Z_Construct_UScriptStruct_FPlayerLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerLevelData>()
{
	return FPlayerLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLevelData(FPlayerLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerLevelData")),new UScriptStruct::TCppStructOps<FPlayerLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLevelData;
	struct Z_Construct_UScriptStruct_FPlayerLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxXp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxXp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_MaxXp_MetaData[] = {
		{ "Category", "PlayerLevelData" },
		{ "ModuleRelativePath", "Public/PlayerLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_MaxXp = { "MaxXp", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelData, MaxXp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_MaxXp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_MaxXp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_PrestigeValue_MetaData[] = {
		{ "Category", "PlayerLevelData" },
		{ "ModuleRelativePath", "Public/PlayerLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_PrestigeValue = { "PrestigeValue", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelData, PrestigeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_PrestigeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_PrestigeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_LevelValue_MetaData[] = {
		{ "Category", "PlayerLevelData" },
		{ "ModuleRelativePath", "Public/PlayerLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_LevelValue = { "LevelValue", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLevelData, LevelValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_LevelValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_LevelValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_MaxXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_PrestigeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLevelData_Statics::NewProp_LevelValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerLevelData",
		sizeof(FPlayerLevelData),
		alignof(FPlayerLevelData),
		Z_Construct_UScriptStruct_FPlayerLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLevelData"), sizeof(FPlayerLevelData), Get_Z_Construct_UScriptStruct_FPlayerLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLevelData_Hash() { return 170703698U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
