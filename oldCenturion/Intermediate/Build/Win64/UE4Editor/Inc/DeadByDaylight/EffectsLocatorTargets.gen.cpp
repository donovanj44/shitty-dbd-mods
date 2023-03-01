// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EffectsLocatorTargets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectsLocatorTargets() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEffectsLocatorTargets();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FEffectsLocatorTargets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEffectsLocatorTargets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectsLocatorTargets, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EffectsLocatorTargets"), sizeof(FEffectsLocatorTargets), Get_Z_Construct_UScriptStruct_FEffectsLocatorTargets_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEffectsLocatorTargets>()
{
	return FEffectsLocatorTargets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectsLocatorTargets(FEffectsLocatorTargets::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EffectsLocatorTargets"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectsLocatorTargets
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectsLocatorTargets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EffectsLocatorTargets")),new UScriptStruct::TCppStructOps<FEffectsLocatorTargets>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectsLocatorTargets;
	struct Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffectsLocatorTargets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectsLocatorTargets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewProp_TargetActorClass_MetaData[] = {
		{ "Category", "EffectsLocatorTargets" },
		{ "ModuleRelativePath", "Public/EffectsLocatorTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewProp_TargetActorClass = { "TargetActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectsLocatorTargets, TargetActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewProp_TargetActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewProp_TargetActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::NewProp_TargetActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EffectsLocatorTargets",
		sizeof(FEffectsLocatorTargets),
		alignof(FEffectsLocatorTargets),
		Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectsLocatorTargets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectsLocatorTargets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectsLocatorTargets"), sizeof(FEffectsLocatorTargets), Get_Z_Construct_UScriptStruct_FEffectsLocatorTargets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectsLocatorTargets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectsLocatorTargets_Hash() { return 2729791854U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
