// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorInfoData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorInfoData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSurvivorInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorInfoData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SurvivorInfoData"), sizeof(FSurvivorInfoData), Get_Z_Construct_UScriptStruct_FSurvivorInfoData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSurvivorInfoData>()
{
	return FSurvivorInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorInfoData(FSurvivorInfoData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SurvivorInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorInfoData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorInfoData")),new UScriptStruct::TCppStructOps<FSurvivorInfoData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorInfoData;
	struct Z_Construct_UScriptStruct_FSurvivorInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorInfoData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SurvivorInfoData",
		sizeof(FSurvivorInfoData),
		alignof(FSurvivorInfoData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorInfoData"), sizeof(FSurvivorInfoData), Get_Z_Construct_UScriptStruct_FSurvivorInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorInfoData_Hash() { return 1114944793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif