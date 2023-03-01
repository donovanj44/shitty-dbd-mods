// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SimpleSpawnEffectsOnAllSurvivorsAddonParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSpawnEffectsOnAllSurvivorsAddonParams() {}
// Cross Module References
	DBDCOMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
class UScriptStruct* FSimpleSpawnEffectsOnAllSurvivorsAddonParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDCOMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams, Z_Construct_UPackage__Script_DBDCompetence(), TEXT("SimpleSpawnEffectsOnAllSurvivorsAddonParams"), sizeof(FSimpleSpawnEffectsOnAllSurvivorsAddonParams), Get_Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Hash());
	}
	return Singleton;
}
template<> DBDCOMPETENCE_API UScriptStruct* StaticStruct<FSimpleSpawnEffectsOnAllSurvivorsAddonParams>()
{
	return FSimpleSpawnEffectsOnAllSurvivorsAddonParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams(FSimpleSpawnEffectsOnAllSurvivorsAddonParams::StaticStruct, TEXT("/Script/DBDCompetence"), TEXT("SimpleSpawnEffectsOnAllSurvivorsAddonParams"), false, nullptr, nullptr);
static struct FScriptStruct_DBDCompetence_StaticRegisterNativesFSimpleSpawnEffectsOnAllSurvivorsAddonParams
{
	FScriptStruct_DBDCompetence_StaticRegisterNativesFSimpleSpawnEffectsOnAllSurvivorsAddonParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleSpawnEffectsOnAllSurvivorsAddonParams")),new UScriptStruct::TCppStructOps<FSimpleSpawnEffectsOnAllSurvivorsAddonParams>);
	}
} ScriptStruct_DBDCompetence_StaticRegisterNativesFSimpleSpawnEffectsOnAllSurvivorsAddonParams;
	struct Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__customParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleSpawnEffectsOnAllSurvivorsAddonParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleSpawnEffectsOnAllSurvivorsAddonParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__customParam_MetaData[] = {
		{ "Category", "SimpleSpawnEffectsOnAllSurvivorsAddonParams" },
		{ "ModuleRelativePath", "Public/SimpleSpawnEffectsOnAllSurvivorsAddonParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__customParam = { "_customParam", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSpawnEffectsOnAllSurvivorsAddonParams, _customParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__customParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__customParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__statusEffectId_MetaData[] = {
		{ "Category", "SimpleSpawnEffectsOnAllSurvivorsAddonParams" },
		{ "ModuleRelativePath", "Public/SimpleSpawnEffectsOnAllSurvivorsAddonParams.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__statusEffectId = { "_statusEffectId", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleSpawnEffectsOnAllSurvivorsAddonParams, _statusEffectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__statusEffectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__statusEffectId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__customParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::NewProp__statusEffectId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
		nullptr,
		&NewStructOps,
		"SimpleSpawnEffectsOnAllSurvivorsAddonParams",
		sizeof(FSimpleSpawnEffectsOnAllSurvivorsAddonParams),
		alignof(FSimpleSpawnEffectsOnAllSurvivorsAddonParams),
		Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDCompetence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleSpawnEffectsOnAllSurvivorsAddonParams"), sizeof(FSimpleSpawnEffectsOnAllSurvivorsAddonParams), Get_Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleSpawnEffectsOnAllSurvivorsAddonParams_Hash() { return 3395174996U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
