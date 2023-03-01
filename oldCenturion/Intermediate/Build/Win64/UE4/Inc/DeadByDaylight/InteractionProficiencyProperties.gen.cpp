// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionProficiencyProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionProficiencyProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionProficiencyProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionProficiency_NoRegister();
// End Cross Module References
class UScriptStruct* FInteractionProficiencyProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionProficiencyProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractionProficiencyProperties"), sizeof(FInteractionProficiencyProperties), Get_Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractionProficiencyProperties>()
{
	return FInteractionProficiencyProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionProficiencyProperties(FInteractionProficiencyProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractionProficiencyProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionProficiencyProperties")),new UScriptStruct::TCppStructOps<FInteractionProficiencyProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyProperties;
	struct Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLevels_MetaData[];
#endif
		static void NewProp_HasLevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebuffLevelThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebuffLevelThresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebuffLevelThresholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffLevelThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuffLevelThresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffLevelThresholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProficiencyBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ProficiencyBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProficiencyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProficiencyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionProficiencyProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyProperties, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels_SetBit(void* Obj)
	{
		((FInteractionProficiencyProperties*)Obj)->HasLevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels = { "HasLevels", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionProficiencyProperties), &Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds = { "DebuffLevelThresholds", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyProperties, DebuffLevelThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds_Inner = { "DebuffLevelThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds = { "BuffLevelThresholds", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyProperties, BuffLevelThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds_Inner = { "BuffLevelThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyBlueprint_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyBlueprint = { "ProficiencyBlueprint", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyProperties, ProficiencyBlueprint), Z_Construct_UClass_UInteractionProficiency_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyID_MetaData[] = {
		{ "Category", "InteractionProficiencyProperties" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyID = { "ProficiencyID", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyProperties, ProficiencyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_HasLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_DebuffLevelThresholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_BuffLevelThresholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::NewProp_ProficiencyID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"InteractionProficiencyProperties",
		sizeof(FInteractionProficiencyProperties),
		alignof(FInteractionProficiencyProperties),
		Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionProficiencyProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionProficiencyProperties"), sizeof(FInteractionProficiencyProperties), Get_Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyProperties_Hash() { return 2278650516U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
