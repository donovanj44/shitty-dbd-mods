// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIRoll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIRoll() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIRoll();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
class UScriptStruct* FAIRoll::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAIRoll_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIRoll, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AIRoll"), sizeof(FAIRoll), Get_Z_Construct_UScriptStruct_FAIRoll_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAIRoll>()
{
	return FAIRoll::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIRoll(FAIRoll::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AIRoll"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAIRoll
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAIRoll()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIRoll")),new UScriptStruct::TCppStructOps<FAIRoll>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAIRoll;
	struct Z_Construct_UScriptStruct_FAIRoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnFailCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Random_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Random;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRoll_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIRoll.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIRoll_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIRoll>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_OnFailCooldown_MetaData[] = {
		{ "Category", "AIRoll" },
		{ "ModuleRelativePath", "Public/AIRoll.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_OnFailCooldown = { "OnFailCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRoll, OnFailCooldown), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_OnFailCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_OnFailCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_Random_MetaData[] = {
		{ "Category", "AIRoll" },
		{ "ModuleRelativePath", "Public/AIRoll.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_Random = { "Random", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRoll, Random), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_Random_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_Random_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_OnFailCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRoll_Statics::NewProp_Random,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIRoll_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AIRoll",
		sizeof(FAIRoll),
		alignof(FAIRoll),
		Z_Construct_UScriptStruct_FAIRoll_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRoll_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRoll_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRoll_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIRoll()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIRoll_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIRoll"), sizeof(FAIRoll), Get_Z_Construct_UScriptStruct_FAIRoll_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIRoll_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIRoll_Hash() { return 2326211973U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
