// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TunableValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTunableValue() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTunableValue();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowBase();
// End Cross Module References
class UScriptStruct* FTunableValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTunableValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTunableValue, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TunableValue"), sizeof(FTunableValue), Get_Z_Construct_UScriptStruct_FTunableValue_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTunableValue>()
{
	return FTunableValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTunableValue(FTunableValue::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TunableValue"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTunableValue
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTunableValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TunableValue")),new UScriptStruct::TCppStructOps<FTunableValue>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTunableValue;
	struct Z_Construct_UScriptStruct_FTunableValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenInAtlanta_MetaData[];
#endif
		static void NewProp_OverriddenInAtlanta_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverriddenInAtlanta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaOverriddenValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtlantaOverriddenValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TunableValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTunableValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTunableValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta_MetaData[] = {
		{ "Category", "TunableValue" },
		{ "ModuleRelativePath", "Public/TunableValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta_SetBit(void* Obj)
	{
		((FTunableValue*)Obj)->OverriddenInAtlanta = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta = { "OverriddenInAtlanta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTunableValue), &Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "TunableValue" },
		{ "ModuleRelativePath", "Public/TunableValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTunableValue, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_AtlantaOverriddenValue_MetaData[] = {
		{ "Category", "TunableValue" },
		{ "ModuleRelativePath", "Public/TunableValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_AtlantaOverriddenValue = { "AtlantaOverriddenValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTunableValue, AtlantaOverriddenValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_AtlantaOverriddenValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_AtlantaOverriddenValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "TunableValue" },
		{ "ModuleRelativePath", "Public/TunableValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTunableValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_OverriddenInAtlanta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_AtlantaOverriddenValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTunableValue_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTunableValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTunableRowBase,
		&NewStructOps,
		"TunableValue",
		sizeof(FTunableValue),
		alignof(FTunableValue),
		Z_Construct_UScriptStruct_FTunableValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTunableValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTunableValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TunableValue"), sizeof(FTunableValue), Get_Z_Construct_UScriptStruct_FTunableValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTunableValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTunableValue_Hash() { return 59234962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
