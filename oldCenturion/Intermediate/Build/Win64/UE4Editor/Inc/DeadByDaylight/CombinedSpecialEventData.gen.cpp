// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CombinedSpecialEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinedSpecialEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedSpecialEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FCombinedSpecialEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCombinedSpecialEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombinedSpecialEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CombinedSpecialEventData"), sizeof(FCombinedSpecialEventData), Get_Z_Construct_UScriptStruct_FCombinedSpecialEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCombinedSpecialEventData>()
{
	return FCombinedSpecialEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCombinedSpecialEventData(FCombinedSpecialEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CombinedSpecialEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCombinedSpecialEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCombinedSpecialEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CombinedSpecialEventData")),new UScriptStruct::TCppStructOps<FCombinedSpecialEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCombinedSpecialEventData;
	struct Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CombinedSpecialEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombinedSpecialEventData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CombinedSpecialEventData",
		sizeof(FCombinedSpecialEventData),
		alignof(FCombinedSpecialEventData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCombinedSpecialEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCombinedSpecialEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CombinedSpecialEventData"), sizeof(FCombinedSpecialEventData), Get_Z_Construct_UScriptStruct_FCombinedSpecialEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCombinedSpecialEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCombinedSpecialEventData_Hash() { return 355830769U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
