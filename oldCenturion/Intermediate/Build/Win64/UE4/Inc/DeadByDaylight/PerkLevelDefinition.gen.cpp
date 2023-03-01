// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkLevelDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkLevelDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPerkLevelDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPerkLevelDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkLevelDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PerkLevelDefinition"), sizeof(FPerkLevelDefinition), Get_Z_Construct_UScriptStruct_FPerkLevelDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPerkLevelDefinition>()
{
	return FPerkLevelDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkLevelDefinition(FPerkLevelDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PerkLevelDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerkLevelDefinition")),new UScriptStruct::TCppStructOps<FPerkLevelDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelDefinition;
	struct Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerkLevelDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkLevelDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewProp_CountRequired_MetaData[] = {
		{ "Category", "PerkLevelDefinition" },
		{ "ModuleRelativePath", "Public/PerkLevelDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewProp_CountRequired = { "CountRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkLevelDefinition, CountRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewProp_CountRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewProp_CountRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::NewProp_CountRequired,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PerkLevelDefinition",
		sizeof(FPerkLevelDefinition),
		alignof(FPerkLevelDefinition),
		Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkLevelDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkLevelDefinition"), sizeof(FPerkLevelDefinition), Get_Z_Construct_UScriptStruct_FPerkLevelDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkLevelDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkLevelDefinition_Hash() { return 580234593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
