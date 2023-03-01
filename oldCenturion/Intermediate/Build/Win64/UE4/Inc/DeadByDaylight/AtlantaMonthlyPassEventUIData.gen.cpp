// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaMonthlyPassEventUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaMonthlyPassEventUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData();
// End Cross Module References
class UScriptStruct* FAtlantaMonthlyPassEventUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaMonthlyPassEventUIData"), sizeof(FAtlantaMonthlyPassEventUIData), Get_Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaMonthlyPassEventUIData>()
{
	return FAtlantaMonthlyPassEventUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaMonthlyPassEventUIData(FAtlantaMonthlyPassEventUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaMonthlyPassEventUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaMonthlyPassEventUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaMonthlyPassEventUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaMonthlyPassEventUIData")),new UScriptStruct::TCppStructOps<FAtlantaMonthlyPassEventUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaMonthlyPassEventUIData;
	struct Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaMonthlyPassEventUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaMonthlyPassEventUIData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FAtlantaBaseEventsUIData,
		&NewStructOps,
		"AtlantaMonthlyPassEventUIData",
		sizeof(FAtlantaMonthlyPassEventUIData),
		alignof(FAtlantaMonthlyPassEventUIData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaMonthlyPassEventUIData"), sizeof(FAtlantaMonthlyPassEventUIData), Get_Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaMonthlyPassEventUIData_Hash() { return 1914272609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
