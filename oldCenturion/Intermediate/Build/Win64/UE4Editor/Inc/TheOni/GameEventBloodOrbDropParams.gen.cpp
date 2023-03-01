// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/GameEventBloodOrbDropParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEventBloodOrbDropParams() {}
// Cross Module References
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FGameEventBloodOrbDropParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEONI_API uint32 Get_Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams, Z_Construct_UPackage__Script_TheOni(), TEXT("GameEventBloodOrbDropParams"), sizeof(FGameEventBloodOrbDropParams), Get_Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Hash());
	}
	return Singleton;
}
template<> THEONI_API UScriptStruct* StaticStruct<FGameEventBloodOrbDropParams>()
{
	return FGameEventBloodOrbDropParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameEventBloodOrbDropParams(FGameEventBloodOrbDropParams::StaticStruct, TEXT("/Script/TheOni"), TEXT("GameEventBloodOrbDropParams"), false, nullptr, nullptr);
static struct FScriptStruct_TheOni_StaticRegisterNativesFGameEventBloodOrbDropParams
{
	FScriptStruct_TheOni_StaticRegisterNativesFGameEventBloodOrbDropParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameEventBloodOrbDropParams")),new UScriptStruct::TCppStructOps<FGameEventBloodOrbDropParams>);
	}
} ScriptStruct_TheOni_StaticRegisterNativesFGameEventBloodOrbDropParams;
	struct Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameEventBloodOrbDropParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameEventBloodOrbDropParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_ImpulseFactor_MetaData[] = {
		{ "Category", "GameEventBloodOrbDropParams" },
		{ "ModuleRelativePath", "Public/GameEventBloodOrbDropParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_ImpulseFactor = { "ImpulseFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameEventBloodOrbDropParams, ImpulseFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_ImpulseFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_ImpulseFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_GameEvent_MetaData[] = {
		{ "Category", "GameEventBloodOrbDropParams" },
		{ "ModuleRelativePath", "Public/GameEventBloodOrbDropParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_GameEvent = { "GameEvent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameEventBloodOrbDropParams, GameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_GameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_GameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_ImpulseFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::NewProp_GameEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
		nullptr,
		&NewStructOps,
		"GameEventBloodOrbDropParams",
		sizeof(FGameEventBloodOrbDropParams),
		alignof(FGameEventBloodOrbDropParams),
		Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameEventBloodOrbDropParams"), sizeof(FGameEventBloodOrbDropParams), Get_Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameEventBloodOrbDropParams_Hash() { return 2605275054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
