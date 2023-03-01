// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDOutlineRenderStrategySelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDOutlineRenderStrategySelector() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDBDOutlineRenderStrategySelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDOutlineRenderStrategySelector"), sizeof(FDBDOutlineRenderStrategySelector), Get_Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDOutlineRenderStrategySelector>()
{
	return FDBDOutlineRenderStrategySelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDOutlineRenderStrategySelector(FDBDOutlineRenderStrategySelector::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDOutlineRenderStrategySelector"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDOutlineRenderStrategySelector
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDOutlineRenderStrategySelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDOutlineRenderStrategySelector")),new UScriptStruct::TCppStructOps<FDBDOutlineRenderStrategySelector>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDOutlineRenderStrategySelector;
	struct Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorForStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorForStrategy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDOutlineRenderStrategySelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDOutlineRenderStrategySelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewProp__actorForStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDOutlineRenderStrategySelector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewProp__actorForStrategy = { "_actorForStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDOutlineRenderStrategySelector, _actorForStrategy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewProp__actorForStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewProp__actorForStrategy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::NewProp__actorForStrategy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDOutlineRenderStrategySelector",
		sizeof(FDBDOutlineRenderStrategySelector),
		alignof(FDBDOutlineRenderStrategySelector),
		Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDOutlineRenderStrategySelector"), sizeof(FDBDOutlineRenderStrategySelector), Get_Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDOutlineRenderStrategySelector_Hash() { return 2954792284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
