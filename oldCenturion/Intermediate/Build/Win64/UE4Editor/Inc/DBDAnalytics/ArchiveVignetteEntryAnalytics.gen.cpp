// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ArchiveVignetteEntryAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveVignetteEntryAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FArchiveVignetteEntryAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ArchiveVignetteEntryAnalytics"), sizeof(FArchiveVignetteEntryAnalytics), Get_Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FArchiveVignetteEntryAnalytics>()
{
	return FArchiveVignetteEntryAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveVignetteEntryAnalytics(FArchiveVignetteEntryAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ArchiveVignetteEntryAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteEntryAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteEntryAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveVignetteEntryAnalytics")),new UScriptStruct::TCppStructOps<FArchiveVignetteEntryAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteEntryAnalytics;
	struct Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceoverLongestTimeSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_VoiceoverLongestTimeSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVoiceoverTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartVoiceoverTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAutoplayEnableWhenDeselectingEntry_MetaData[];
#endif
		static void NewProp_IsAutoplayEnableWhenDeselectingEntry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAutoplayEnableWhenDeselectingEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWithAutoplayEnable_MetaData[];
#endif
		static void NewProp_StartWithAutoplayEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartWithAutoplayEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasVoiceOver_MetaData[];
#endif
		static void NewProp_HasVoiceOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasVoiceOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTaggedAsNew_MetaData[];
#endif
		static void NewProp_IsTaggedAsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTaggedAsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryTimeSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_EntryTimeSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectEntryTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectEntryTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VignetteId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArchiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveVignetteEntryAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VoiceoverLongestTimeSpent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VoiceoverLongestTimeSpent = { "VoiceoverLongestTimeSpent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, VoiceoverLongestTimeSpent), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VoiceoverLongestTimeSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VoiceoverLongestTimeSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartVoiceoverTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartVoiceoverTimestamp = { "StartVoiceoverTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, StartVoiceoverTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartVoiceoverTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartVoiceoverTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry_SetBit(void* Obj)
	{
		((FArchiveVignetteEntryAnalytics*)Obj)->IsAutoplayEnableWhenDeselectingEntry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry = { "IsAutoplayEnableWhenDeselectingEntry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveVignetteEntryAnalytics), &Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable_SetBit(void* Obj)
	{
		((FArchiveVignetteEntryAnalytics*)Obj)->StartWithAutoplayEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable = { "StartWithAutoplayEnable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveVignetteEntryAnalytics), &Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver_SetBit(void* Obj)
	{
		((FArchiveVignetteEntryAnalytics*)Obj)->HasVoiceOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver = { "HasVoiceOver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveVignetteEntryAnalytics), &Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew_SetBit(void* Obj)
	{
		((FArchiveVignetteEntryAnalytics*)Obj)->IsTaggedAsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew = { "IsTaggedAsNew", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveVignetteEntryAnalytics), &Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryTimeSpent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryTimeSpent = { "EntryTimeSpent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, EntryTimeSpent), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryTimeSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryTimeSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_SelectEntryTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_SelectEntryTimestamp = { "SelectEntryTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, SelectEntryTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_SelectEntryTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_SelectEntryTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryId = { "EntryId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, EntryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VignetteId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VignetteId = { "VignetteId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, VignetteId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VignetteId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_ArchiveId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteEntryAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_ArchiveId = { "ArchiveId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteEntryAnalytics, ArchiveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_ArchiveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_ArchiveId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VoiceoverLongestTimeSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartVoiceoverTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsAutoplayEnableWhenDeselectingEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_StartWithAutoplayEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_HasVoiceOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_IsTaggedAsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryTimeSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_SelectEntryTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_EntryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_VignetteId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::NewProp_ArchiveId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ArchiveVignetteEntryAnalytics",
		sizeof(FArchiveVignetteEntryAnalytics),
		alignof(FArchiveVignetteEntryAnalytics),
		Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveVignetteEntryAnalytics"), sizeof(FArchiveVignetteEntryAnalytics), Get_Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteEntryAnalytics_Hash() { return 476480910U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
