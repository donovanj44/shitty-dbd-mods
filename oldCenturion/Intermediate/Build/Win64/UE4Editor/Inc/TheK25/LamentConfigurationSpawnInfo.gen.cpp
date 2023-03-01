// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/LamentConfigurationSpawnInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLamentConfigurationSpawnInfo() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
class UScriptStruct* FLamentConfigurationSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo, Z_Construct_UPackage__Script_TheK25(), TEXT("LamentConfigurationSpawnInfo"), sizeof(FLamentConfigurationSpawnInfo), Get_Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FLamentConfigurationSpawnInfo>()
{
	return FLamentConfigurationSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLamentConfigurationSpawnInfo(FLamentConfigurationSpawnInfo::StaticStruct, TEXT("/Script/TheK25"), TEXT("LamentConfigurationSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationSpawnInfo
{
	FScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LamentConfigurationSpawnInfo")),new UScriptStruct::TCppStructOps<FLamentConfigurationSpawnInfo>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationSpawnInfo;
	struct Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LamentConfigurationSpawnInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLamentConfigurationSpawnInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"LamentConfigurationSpawnInfo",
		sizeof(FLamentConfigurationSpawnInfo),
		alignof(FLamentConfigurationSpawnInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LamentConfigurationSpawnInfo"), sizeof(FLamentConfigurationSpawnInfo), Get_Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationSpawnInfo_Hash() { return 3790400067U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
