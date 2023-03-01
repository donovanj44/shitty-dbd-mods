// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URitualEvaluatorBase_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualLevel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters();
// End Cross Module References
class UScriptStruct* FDailyRitualDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRitualDefinition"), sizeof(FDailyRitualDefinition), Get_Z_Construct_UScriptStruct_FDailyRitualDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRitualDefinition>()
{
	return FDailyRitualDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualDefinition(FDailyRitualDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRitualDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualDefinition")),new UScriptStruct::TCppStructOps<FDailyRitualDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualDefinition;
	struct Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Evaluator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DifficultyLevels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifficultyLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGameEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedGameEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedGameEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedEvents;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedEvents_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedEvents_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossibleCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossibleCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Evaluator_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, Evaluator), Z_Construct_UClass_URitualEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Evaluator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels = { "DifficultyLevels", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, DifficultyLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels_Inner = { "DifficultyLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDailyRitualLevel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, TrackedGameEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents_Inner = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents = { "TrackedEvents", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, TrackedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_Inner = { "TrackedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_PossibleCharacters_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_PossibleCharacters = { "PossibleCharacters", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, PossibleCharacters), Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_PossibleCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_PossibleCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "DailyRitualDefinition" },
		{ "ModuleRelativePath", "Public/DailyRitualDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DifficultyLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedGameEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_TrackedEvents_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_PossibleCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DailyRitualDefinition",
		sizeof(FDailyRitualDefinition),
		alignof(FDailyRitualDefinition),
		Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualDefinition"), sizeof(FDailyRitualDefinition), Get_Z_Construct_UScriptStruct_FDailyRitualDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualDefinition_Hash() { return 127469784U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
