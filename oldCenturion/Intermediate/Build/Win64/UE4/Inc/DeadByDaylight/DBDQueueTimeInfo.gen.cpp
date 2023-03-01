// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDQueueTimeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDQueueTimeInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDQueueTimeInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDBDQueueTimeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDQueueTimeInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDQueueTimeInfo"), sizeof(FDBDQueueTimeInfo), Get_Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDQueueTimeInfo>()
{
	return FDBDQueueTimeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDQueueTimeInfo(FDBDQueueTimeInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDQueueTimeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDQueueTimeInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDQueueTimeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDQueueTimeInfo")),new UScriptStruct::TCppStructOps<FDBDQueueTimeInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDQueueTimeInfo;
	struct Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDQueueTimeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDQueueTimeInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDQueueTimeInfo",
		sizeof(FDBDQueueTimeInfo),
		alignof(FDBDQueueTimeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDQueueTimeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDQueueTimeInfo"), sizeof(FDBDQueueTimeInfo), Get_Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDQueueTimeInfo_Hash() { return 3440260020U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
