// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PreLevelGenerationModifierProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreLevelGenerationModifierProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPreLevelGenerationModifierType();
// End Cross Module References
class UScriptStruct* FPreLevelGenerationModifierProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PreLevelGenerationModifierProperties"), sizeof(FPreLevelGenerationModifierProperties), Get_Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPreLevelGenerationModifierProperties>()
{
	return FPreLevelGenerationModifierProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreLevelGenerationModifierProperties(FPreLevelGenerationModifierProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PreLevelGenerationModifierProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPreLevelGenerationModifierProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPreLevelGenerationModifierProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreLevelGenerationModifierProperties")),new UScriptStruct::TCppStructOps<FPreLevelGenerationModifierProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPreLevelGenerationModifierProperties;
	struct Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifierValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerAbiliy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KillerAbiliy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillerAbiliy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModifierID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PreLevelGenerationModifierProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreLevelGenerationModifierProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierValue_MetaData[] = {
		{ "Category", "PreLevelGenerationModifierProperties" },
		{ "ModuleRelativePath", "Public/PreLevelGenerationModifierProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierValue = { "ModifierValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreLevelGenerationModifierProperties, ModifierValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy_MetaData[] = {
		{ "Category", "PreLevelGenerationModifierProperties" },
		{ "ModuleRelativePath", "Public/PreLevelGenerationModifierProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy = { "KillerAbiliy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreLevelGenerationModifierProperties, KillerAbiliy), Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType_MetaData[] = {
		{ "Category", "PreLevelGenerationModifierProperties" },
		{ "ModuleRelativePath", "Public/PreLevelGenerationModifierProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreLevelGenerationModifierProperties, ModifierType), Z_Construct_UEnum_DeadByDaylight_EPreLevelGenerationModifierType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierID_MetaData[] = {
		{ "Category", "PreLevelGenerationModifierProperties" },
		{ "ModuleRelativePath", "Public/PreLevelGenerationModifierProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierID = { "ModifierID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreLevelGenerationModifierProperties, ModifierID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_KillerAbiliy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::NewProp_ModifierID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PreLevelGenerationModifierProperties",
		sizeof(FPreLevelGenerationModifierProperties),
		alignof(FPreLevelGenerationModifierProperties),
		Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreLevelGenerationModifierProperties"), sizeof(FPreLevelGenerationModifierProperties), Get_Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreLevelGenerationModifierProperties_Hash() { return 3595670229U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
