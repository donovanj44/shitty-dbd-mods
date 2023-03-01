// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualsUIScreenData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualsUIScreenData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualUIData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAtlantaRitualsUIScreenData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaRitualsUIScreenData"), sizeof(FAtlantaRitualsUIScreenData), Get_Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaRitualsUIScreenData>()
{
	return FAtlantaRitualsUIScreenData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaRitualsUIScreenData(FAtlantaRitualsUIScreenData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaRitualsUIScreenData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualsUIScreenData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualsUIScreenData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaRitualsUIScreenData")),new UScriptStruct::TCppStructOps<FAtlantaRitualsUIScreenData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualsUIScreenData;
	struct Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeeklyRituals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeeklyRituals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DailyRituals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyRituals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyRefreshTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeeklyRefreshTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRefreshTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyRefreshTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsUIScreenData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaRitualsUIScreenData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals_MetaData[] = {
		{ "Category", "AtlantaRitualsUIScreenData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsUIScreenData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals = { "WeeklyRituals", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsUIScreenData, WeeklyRituals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals_Inner = { "WeeklyRituals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaRitualUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals_MetaData[] = {
		{ "Category", "AtlantaRitualsUIScreenData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsUIScreenData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals = { "DailyRituals", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsUIScreenData, DailyRituals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals_Inner = { "DailyRituals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaRitualUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRefreshTime_MetaData[] = {
		{ "Category", "AtlantaRitualsUIScreenData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsUIScreenData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRefreshTime = { "WeeklyRefreshTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsUIScreenData, WeeklyRefreshTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRefreshTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRefreshTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRefreshTime_MetaData[] = {
		{ "Category", "AtlantaRitualsUIScreenData" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsUIScreenData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRefreshTime = { "DailyRefreshTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualsUIScreenData, DailyRefreshTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRefreshTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRefreshTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRituals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRituals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_WeeklyRefreshTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::NewProp_DailyRefreshTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaRitualsUIScreenData",
		sizeof(FAtlantaRitualsUIScreenData),
		alignof(FAtlantaRitualsUIScreenData),
		Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaRitualsUIScreenData"), sizeof(FAtlantaRitualsUIScreenData), Get_Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualsUIScreenData_Hash() { return 1889633587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
