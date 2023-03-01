// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HitValidationEditorConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidationEditorConfig() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidationEditorConfig();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName();
// End Cross Module References
class UScriptStruct* FHitValidationEditorConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FHitValidationEditorConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitValidationEditorConfig, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("HitValidationEditorConfig"), sizeof(FHitValidationEditorConfig), Get_Z_Construct_UScriptStruct_FHitValidationEditorConfig_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FHitValidationEditorConfig>()
{
	return FHitValidationEditorConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitValidationEditorConfig(FHitValidationEditorConfig::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("HitValidationEditorConfig"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFHitValidationEditorConfig
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFHitValidationEditorConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitValidationEditorConfig")),new UScriptStruct::TCppStructOps<FHitValidationEditorConfig>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFHitValidationEditorConfig;
	struct Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfigName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfigName_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HitValidationEditorConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitValidationEditorConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "HitValidationEditorConfig" },
		{ "ModuleRelativePath", "Public/HitValidationEditorConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationEditorConfig, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_CapsuleInflation_MetaData[] = {
		{ "Category", "HitValidationEditorConfig" },
		{ "ModuleRelativePath", "Public/HitValidationEditorConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_CapsuleInflation = { "CapsuleInflation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationEditorConfig, CapsuleInflation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_CapsuleInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_CapsuleInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "HitValidationEditorConfig" },
		{ "ModuleRelativePath", "Public/HitValidationEditorConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationEditorConfig, ConfigName), Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_MaximumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_CapsuleInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::NewProp_ConfigName_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HitValidationEditorConfig",
		sizeof(FHitValidationEditorConfig),
		alignof(FHitValidationEditorConfig),
		Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitValidationEditorConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitValidationEditorConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitValidationEditorConfig"), sizeof(FHitValidationEditorConfig), Get_Z_Construct_UScriptStruct_FHitValidationEditorConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitValidationEditorConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitValidationEditorConfig_Hash() { return 3796168726U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
