// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MatchmakingContextData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingContextData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingContextData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FMatchmakingContextData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingContextData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingContextData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MatchmakingContextData"), sizeof(FMatchmakingContextData), Get_Z_Construct_UScriptStruct_FMatchmakingContextData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMatchmakingContextData>()
{
	return FMatchmakingContextData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingContextData(FMatchmakingContextData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MatchmakingContextData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMatchmakingContextData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMatchmakingContextData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingContextData")),new UScriptStruct::TCppStructOps<FMatchmakingContextData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMatchmakingContextData;
	struct Z_Construct_UScriptStruct_FMatchmakingContextData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContextId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingContextData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingContextData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewProp_ContextId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingContextData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingContextData, ContextId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewProp_ContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewProp_ContextId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::NewProp_ContextId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MatchmakingContextData",
		sizeof(FMatchmakingContextData),
		alignof(FMatchmakingContextData),
		Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingContextData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingContextData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingContextData"), sizeof(FMatchmakingContextData), Get_Z_Construct_UScriptStruct_FMatchmakingContextData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingContextData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingContextData_Hash() { return 1954871622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
