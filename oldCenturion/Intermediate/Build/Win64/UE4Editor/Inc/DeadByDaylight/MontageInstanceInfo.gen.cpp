// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MontageInstanceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMontageInstanceInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMontageInstanceInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FMontageInstanceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMontageInstanceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageInstanceInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MontageInstanceInfo"), sizeof(FMontageInstanceInfo), Get_Z_Construct_UScriptStruct_FMontageInstanceInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMontageInstanceInfo>()
{
	return FMontageInstanceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMontageInstanceInfo(FMontageInstanceInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MontageInstanceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMontageInstanceInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMontageInstanceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MontageInstanceInfo")),new UScriptStruct::TCppStructOps<FMontageInstanceInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMontageInstanceInfo;
	struct Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MontageInstanceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageInstanceInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"MontageInstanceInfo",
		sizeof(FMontageInstanceInfo),
		alignof(FMontageInstanceInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontageInstanceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMontageInstanceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MontageInstanceInfo"), sizeof(FMontageInstanceInfo), Get_Z_Construct_UScriptStruct_FMontageInstanceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMontageInstanceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMontageInstanceInfo_Hash() { return 2976310035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
