// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorSpawnerProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnerProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FActorSpawnerProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FActorSpawnerProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSpawnerProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ActorSpawnerProperties"), sizeof(FActorSpawnerProperties), Get_Z_Construct_UScriptStruct_FActorSpawnerProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FActorSpawnerProperties>()
{
	return FActorSpawnerProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSpawnerProperties(FActorSpawnerProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ActorSpawnerProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFActorSpawnerProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFActorSpawnerProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSpawnerProperties")),new UScriptStruct::TCppStructOps<FActorSpawnerProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFActorSpawnerProperties;
	struct Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SceneElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorSpawnerProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSpawnerProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ActorSpawnerProperties" },
		{ "ModuleRelativePath", "Public/ActorSpawnerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnerProperties, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_SceneElement_MetaData[] = {
		{ "Category", "ActorSpawnerProperties" },
		{ "ModuleRelativePath", "Public/ActorSpawnerProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_SceneElement = { "SceneElement", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnerProperties, SceneElement), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_SceneElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_SceneElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::NewProp_SceneElement,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ActorSpawnerProperties",
		sizeof(FActorSpawnerProperties),
		alignof(FActorSpawnerProperties),
		Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnerProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSpawnerProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSpawnerProperties"), sizeof(FActorSpawnerProperties), Get_Z_Construct_UScriptStruct_FActorSpawnerProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSpawnerProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSpawnerProperties_Hash() { return 2517185949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
