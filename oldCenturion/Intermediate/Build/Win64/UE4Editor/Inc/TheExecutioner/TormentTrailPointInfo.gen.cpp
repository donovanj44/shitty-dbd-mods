// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailPointInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailPointInfo() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FTormentTrailPointInfo();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
class UScriptStruct* FTormentTrailPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FTormentTrailPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTormentTrailPointInfo, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("TormentTrailPointInfo"), sizeof(FTormentTrailPointInfo), Get_Z_Construct_UScriptStruct_FTormentTrailPointInfo_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FTormentTrailPointInfo>()
{
	return FTormentTrailPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTormentTrailPointInfo(FTormentTrailPointInfo::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("TormentTrailPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFTormentTrailPointInfo
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFTormentTrailPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TormentTrailPointInfo")),new UScriptStruct::TCppStructOps<FTormentTrailPointInfo>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFTormentTrailPointInfo;
	struct Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailPointInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTormentTrailPointInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		nullptr,
		&NewStructOps,
		"TormentTrailPointInfo",
		sizeof(FTormentTrailPointInfo),
		alignof(FTormentTrailPointInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTormentTrailPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTormentTrailPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TormentTrailPointInfo"), sizeof(FTormentTrailPointInfo), Get_Z_Construct_UScriptStruct_FTormentTrailPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTormentTrailPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTormentTrailPointInfo_Hash() { return 4168591575U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
