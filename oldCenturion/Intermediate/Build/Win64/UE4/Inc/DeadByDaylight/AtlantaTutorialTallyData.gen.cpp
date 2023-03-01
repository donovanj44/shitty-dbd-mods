// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialTallyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialTallyData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialTallyData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAtlantaTutorialTallyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaTutorialTallyData"), sizeof(FAtlantaTutorialTallyData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaTutorialTallyData>()
{
	return FAtlantaTutorialTallyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaTutorialTallyData(FAtlantaTutorialTallyData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaTutorialTallyData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialTallyData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialTallyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaTutorialTallyData")),new UScriptStruct::TCppStructOps<FAtlantaTutorialTallyData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialTallyData;
	struct Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FearTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FearTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuricCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointsScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointsScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimeCompleted_MetaData[];
#endif
		static void NewProp_FirstTimeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimeCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKiller_MetaData[];
#endif
		static void NewProp_IsKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaTutorialTallyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialTallyData, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FearTokens_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FearTokens = { "FearTokens", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialTallyData, FearTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FearTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FearTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_AuricCells_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_AuricCells = { "AuricCells", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialTallyData, AuricCells), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_AuricCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_AuricCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_BloodpointsScore_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_BloodpointsScore = { "BloodpointsScore", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialTallyData, BloodpointsScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_BloodpointsScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_BloodpointsScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted_SetBit(void* Obj)
	{
		((FAtlantaTutorialTallyData*)Obj)->FirstTimeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted = { "FirstTimeCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaTutorialTallyData), &Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller_MetaData[] = {
		{ "Category", "AtlantaTutorialTallyData" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialTallyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller_SetBit(void* Obj)
	{
		((FAtlantaTutorialTallyData*)Obj)->IsKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller = { "IsKiller", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaTutorialTallyData), &Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FearTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_AuricCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_BloodpointsScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_FirstTimeCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::NewProp_IsKiller,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaTutorialTallyData",
		sizeof(FAtlantaTutorialTallyData),
		alignof(FAtlantaTutorialTallyData),
		Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialTallyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaTutorialTallyData"), sizeof(FAtlantaTutorialTallyData), Get_Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialTallyData_Hash() { return 1008597056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
