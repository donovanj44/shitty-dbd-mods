// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightingSpecifics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingSpecifics() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLightingSpecifics();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
// End Cross Module References
class UScriptStruct* FLightingSpecifics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLightingSpecifics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightingSpecifics, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LightingSpecifics"), sizeof(FLightingSpecifics), Get_Z_Construct_UScriptStruct_FLightingSpecifics_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLightingSpecifics>()
{
	return FLightingSpecifics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightingSpecifics(FLightingSpecifics::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LightingSpecifics"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLightingSpecifics
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLightingSpecifics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightingSpecifics")),new UScriptStruct::TCppStructOps<FLightingSpecifics>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLightingSpecifics;
	struct Z_Construct_UScriptStruct_FLightingSpecifics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LightBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingSpecifics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LightingSpecifics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightingSpecifics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewProp_LightBlueprint_MetaData[] = {
		{ "Category", "LightingSpecifics" },
		{ "ModuleRelativePath", "Public/LightingSpecifics.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewProp_LightBlueprint = { "LightBlueprint", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightingSpecifics, LightBlueprint), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewProp_LightBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewProp_LightBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightingSpecifics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightingSpecifics_Statics::NewProp_LightBlueprint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightingSpecifics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LightingSpecifics",
		sizeof(FLightingSpecifics),
		alignof(FLightingSpecifics),
		Z_Construct_UScriptStruct_FLightingSpecifics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingSpecifics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightingSpecifics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightingSpecifics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightingSpecifics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightingSpecifics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightingSpecifics"), sizeof(FLightingSpecifics), Get_Z_Construct_UScriptStruct_FLightingSpecifics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightingSpecifics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightingSpecifics_Hash() { return 2714527733U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
