// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialObjective() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjective();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EInteractionPromptType();
// End Cross Module References
class UScriptStruct* FTutorialObjective::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTutorialObjective_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialObjective, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TutorialObjective"), sizeof(FTutorialObjective), Get_Z_Construct_UScriptStruct_FTutorialObjective_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTutorialObjective>()
{
	return FTutorialObjective::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialObjective(FTutorialObjective::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TutorialObjective"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTutorialObjective
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTutorialObjective()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialObjective")),new UScriptStruct::TCppStructOps<FTutorialObjective>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTutorialObjective;
	struct Z_Construct_UScriptStruct_FTutorialObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryPlayerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryPlayerAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryPlayerAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteractionPromptType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryInteractionPromptType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryInteractionPromptType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionPromptType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionPromptType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionPromptType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompletionAnalyticEnabled_MetaData[];
#endif
		static void NewProp_IsCompletionAnalyticEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompletionAnalyticEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialObjective>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction = { "SecondaryPlayerAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjective, SecondaryPlayerAction), Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType = { "SecondaryInteractionPromptType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjective, SecondaryInteractionPromptType), Z_Construct_UEnum_DBDUIViewInterfaces_EInteractionPromptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction = { "PlayerAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjective, PlayerAction), Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType = { "InteractionPromptType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjective, InteractionPromptType), Z_Construct_UEnum_DBDUIViewInterfaces_EInteractionPromptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled_SetBit(void* Obj)
	{
		((FTutorialObjective*)Obj)->IsCompletionAnalyticEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled = { "IsCompletionAnalyticEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTutorialObjective), &Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "TutorialObjective" },
		{ "ModuleRelativePath", "Public/TutorialObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjective, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryPlayerAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_SecondaryInteractionPromptType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_PlayerAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_InteractionPromptType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_IsCompletionAnalyticEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjective_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialObjective_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"TutorialObjective",
		sizeof(FTutorialObjective),
		alignof(FTutorialObjective),
		Z_Construct_UScriptStruct_FTutorialObjective_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjective_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjective_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjective()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialObjective_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialObjective"), sizeof(FTutorialObjective), Get_Z_Construct_UScriptStruct_FTutorialObjective_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialObjective_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialObjective_Hash() { return 1542717309U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
