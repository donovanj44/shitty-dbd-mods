// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivesVignetteEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesVignetteEntry() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntry();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FArchivesVignetteEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesVignetteEntry, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchivesVignetteEntry"), sizeof(FArchivesVignetteEntry), Get_Z_Construct_UScriptStruct_FArchivesVignetteEntry_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchivesVignetteEntry>()
{
	return FArchivesVignetteEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesVignetteEntry(FArchivesVignetteEntry::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchivesVignetteEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignetteEntry
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignetteEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchivesVignetteEntry")),new UScriptStruct::TCppStructOps<FArchivesVignetteEntry>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignetteEntry;
	struct Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAudio_MetaData[];
#endif
		static void NewProp_HasAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesVignetteEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio_MetaData[] = {
		{ "Category", "ArchivesVignetteEntry" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio_SetBit(void* Obj)
	{
		((FArchivesVignetteEntry*)Obj)->HasAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio = { "HasAudio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchivesVignetteEntry), &Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "ArchivesVignetteEntry" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntry, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchivesVignetteEntry" },
		{ "ModuleRelativePath", "Public/ArchivesVignetteEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignetteEntry, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_HasAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ArchivesVignetteEntry",
		sizeof(FArchivesVignetteEntry),
		alignof(FArchivesVignetteEntry),
		Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesVignetteEntry"), sizeof(FArchivesVignetteEntry), Get_Z_Construct_UScriptStruct_FArchivesVignetteEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesVignetteEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesVignetteEntry_Hash() { return 1244915787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
