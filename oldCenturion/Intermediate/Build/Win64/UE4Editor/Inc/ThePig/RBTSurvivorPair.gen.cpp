// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/RBTSurvivorPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBTSurvivorPair() {}
// Cross Module References
	THEPIG_API UScriptStruct* Z_Construct_UScriptStruct_FRBTSurvivorPair();
	UPackage* Z_Construct_UPackage__Script_ThePig();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AReverseBearTrap_NoRegister();
// End Cross Module References
class UScriptStruct* FRBTSurvivorPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEPIG_API uint32 Get_Z_Construct_UScriptStruct_FRBTSurvivorPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBTSurvivorPair, Z_Construct_UPackage__Script_ThePig(), TEXT("RBTSurvivorPair"), sizeof(FRBTSurvivorPair), Get_Z_Construct_UScriptStruct_FRBTSurvivorPair_Hash());
	}
	return Singleton;
}
template<> THEPIG_API UScriptStruct* StaticStruct<FRBTSurvivorPair>()
{
	return FRBTSurvivorPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBTSurvivorPair(FRBTSurvivorPair::StaticStruct, TEXT("/Script/ThePig"), TEXT("RBTSurvivorPair"), false, nullptr, nullptr);
static struct FScriptStruct_ThePig_StaticRegisterNativesFRBTSurvivorPair
{
	FScriptStruct_ThePig_StaticRegisterNativesFRBTSurvivorPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBTSurvivorPair")),new UScriptStruct::TCppStructOps<FRBTSurvivorPair>);
	}
} ScriptStruct_ThePig_StaticRegisterNativesFRBTSurvivorPair;
	struct Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Survivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverseBearTrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RBTSurvivorPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBTSurvivorPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_Survivor_MetaData[] = {
		{ "Category", "RBTSurvivorPair" },
		{ "ModuleRelativePath", "Public/RBTSurvivorPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_Survivor = { "Survivor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBTSurvivorPair, Survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_Survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_Survivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_ReverseBearTrap_MetaData[] = {
		{ "Category", "RBTSurvivorPair" },
		{ "ModuleRelativePath", "Public/RBTSurvivorPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_ReverseBearTrap = { "ReverseBearTrap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRBTSurvivorPair, ReverseBearTrap), Z_Construct_UClass_AReverseBearTrap_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_ReverseBearTrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_ReverseBearTrap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_Survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::NewProp_ReverseBearTrap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
		nullptr,
		&NewStructOps,
		"RBTSurvivorPair",
		sizeof(FRBTSurvivorPair),
		alignof(FRBTSurvivorPair),
		Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBTSurvivorPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBTSurvivorPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ThePig();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBTSurvivorPair"), sizeof(FRBTSurvivorPair), Get_Z_Construct_UScriptStruct_FRBTSurvivorPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRBTSurvivorPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBTSurvivorPair_Hash() { return 3892015963U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
