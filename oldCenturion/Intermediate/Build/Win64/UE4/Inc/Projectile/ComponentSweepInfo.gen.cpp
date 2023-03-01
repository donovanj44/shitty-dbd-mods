// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/ComponentSweepInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentSweepInfo() {}
// Cross Module References
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSweepInfo();
	UPackage* Z_Construct_UPackage__Script_Projectile();
// End Cross Module References
class UScriptStruct* FComponentSweepInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTILE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSweepInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSweepInfo, Z_Construct_UPackage__Script_Projectile(), TEXT("ComponentSweepInfo"), sizeof(FComponentSweepInfo), Get_Z_Construct_UScriptStruct_FComponentSweepInfo_Hash());
	}
	return Singleton;
}
template<> PROJECTILE_API UScriptStruct* StaticStruct<FComponentSweepInfo>()
{
	return FComponentSweepInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSweepInfo(FComponentSweepInfo::StaticStruct, TEXT("/Script/Projectile"), TEXT("ComponentSweepInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Projectile_StaticRegisterNativesFComponentSweepInfo
{
	FScriptStruct_Projectile_StaticRegisterNativesFComponentSweepInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSweepInfo")),new UScriptStruct::TCppStructOps<FComponentSweepInfo>);
	}
} ScriptStruct_Projectile_StaticRegisterNativesFComponentSweepInfo;
	struct Z_Construct_UScriptStruct_FComponentSweepInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComponentSweepInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSweepInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
		nullptr,
		&NewStructOps,
		"ComponentSweepInfo",
		sizeof(FComponentSweepInfo),
		alignof(FComponentSweepInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSweepInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSweepInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Projectile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSweepInfo"), sizeof(FComponentSweepInfo), Get_Z_Construct_UScriptStruct_FComponentSweepInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentSweepInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSweepInfo_Hash() { return 2065269410U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
