// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivesVignettes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesVignettes() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignettes();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignetteEntry();
// End Cross Module References
class UScriptStruct* FArchivesVignettes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchivesVignettes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesVignettes, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchivesVignettes"), sizeof(FArchivesVignettes), Get_Z_Construct_UScriptStruct_FArchivesVignettes_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchivesVignettes>()
{
	return FArchivesVignettes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesVignettes(FArchivesVignettes::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchivesVignettes"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignettes
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignettes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchivesVignettes")),new UScriptStruct::TCppStructOps<FArchivesVignettes>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesVignettes;
	struct Z_Construct_UScriptStruct_FArchivesVignettes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CinematicPaths;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CinematicPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VignetteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesVignettes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths_MetaData[] = {
		{ "Category", "ArchivesVignettes" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths = { "CinematicPaths", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignettes, CinematicPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths_Inner = { "CinematicPaths", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "ArchivesVignettes" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignettes, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchivesVignetteEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "ArchivesVignettes" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignettes, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchivesVignettes" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignettes, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_VignetteId_MetaData[] = {
		{ "Category", "ArchivesVignettes" },
		{ "ModuleRelativePath", "Public/ArchivesVignettes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_VignetteId = { "VignetteId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesVignettes, VignetteId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_VignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_VignetteId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesVignettes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_CinematicPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesVignettes_Statics::NewProp_VignetteId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesVignettes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ArchivesVignettes",
		sizeof(FArchivesVignettes),
		alignof(FArchivesVignettes),
		Z_Construct_UScriptStruct_FArchivesVignettes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesVignettes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignettes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesVignettes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesVignettes"), sizeof(FArchivesVignettes), Get_Z_Construct_UScriptStruct_FArchivesVignettes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesVignettes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesVignettes_Hash() { return 322880099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
