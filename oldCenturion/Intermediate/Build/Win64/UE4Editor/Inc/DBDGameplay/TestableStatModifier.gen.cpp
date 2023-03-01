// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/TestableStatModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestableStatModifier() {}
// Cross Module References
	DBDGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTestableStatModifier();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
// End Cross Module References
class UScriptStruct* FTestableStatModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDGAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FTestableStatModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestableStatModifier, Z_Construct_UPackage__Script_DBDGameplay(), TEXT("TestableStatModifier"), sizeof(FTestableStatModifier), Get_Z_Construct_UScriptStruct_FTestableStatModifier_Hash());
	}
	return Singleton;
}
template<> DBDGAMEPLAY_API UScriptStruct* StaticStruct<FTestableStatModifier>()
{
	return FTestableStatModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestableStatModifier(FTestableStatModifier::StaticStruct, TEXT("/Script/DBDGameplay"), TEXT("TestableStatModifier"), false, nullptr, nullptr);
static struct FScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStatModifier
{
	FScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStatModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestableStatModifier")),new UScriptStruct::TCppStructOps<FTestableStatModifier>);
	}
} ScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStatModifier;
	struct Z_Construct_UScriptStruct_FTestableStatModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestableStatModifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestableStatModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestableStatModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestableStatModifier>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestableStatModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
		Z_Construct_UScriptStruct_FStatModifier,
		&NewStructOps,
		"TestableStatModifier",
		sizeof(FTestableStatModifier),
		alignof(FTestableStatModifier),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestableStatModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestableStatModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestableStatModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestableStatModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDGameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestableStatModifier"), sizeof(FTestableStatModifier), Get_Z_Construct_UScriptStruct_FTestableStatModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestableStatModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestableStatModifier_Hash() { return 3584080529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
