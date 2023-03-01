// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AimDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimDirection() {}
// Cross Module References
	DBDGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FAimDirection();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
class UScriptStruct* FAimDirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDGAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FAimDirection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimDirection, Z_Construct_UPackage__Script_DBDGameplay(), TEXT("AimDirection"), sizeof(FAimDirection), Get_Z_Construct_UScriptStruct_FAimDirection_Hash());
	}
	return Singleton;
}
template<> DBDGAMEPLAY_API UScriptStruct* StaticStruct<FAimDirection>()
{
	return FAimDirection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAimDirection(FAimDirection::StaticStruct, TEXT("/Script/DBDGameplay"), TEXT("AimDirection"), false, nullptr, nullptr);
static struct FScriptStruct_DBDGameplay_StaticRegisterNativesFAimDirection
{
	FScriptStruct_DBDGameplay_StaticRegisterNativesFAimDirection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AimDirection")),new UScriptStruct::TCppStructOps<FAimDirection>);
	}
} ScriptStruct_DBDGameplay_StaticRegisterNativesFAimDirection;
	struct Z_Construct_UScriptStruct_FAimDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimDirection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimDirection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimDirection>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
		nullptr,
		&NewStructOps,
		"AimDirection",
		sizeof(FAimDirection),
		alignof(FAimDirection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimDirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAimDirection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDGameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AimDirection"), sizeof(FAimDirection), Get_Z_Construct_UScriptStruct_FAimDirection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAimDirection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAimDirection_Hash() { return 512479188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
