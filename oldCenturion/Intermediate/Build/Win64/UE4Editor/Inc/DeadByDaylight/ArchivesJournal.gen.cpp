// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivesJournal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivesJournal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesJournal();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchivesVignettes();
// End Cross Module References
class UScriptStruct* FArchivesJournal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchivesJournal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchivesJournal, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchivesJournal"), sizeof(FArchivesJournal), Get_Z_Construct_UScriptStruct_FArchivesJournal_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchivesJournal>()
{
	return FArchivesJournal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchivesJournal(FArchivesJournal::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchivesJournal"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesJournal
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesJournal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchivesJournal")),new UScriptStruct::TCppStructOps<FArchivesJournal>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchivesJournal;
	struct Z_Construct_UScriptStruct_FArchivesJournal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vignettes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vignettes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vignettes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesJournal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchivesJournal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchivesJournal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes_MetaData[] = {
		{ "Category", "ArchivesJournal" },
		{ "ModuleRelativePath", "Public/ArchivesJournal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes = { "Vignettes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesJournal, Vignettes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes_Inner = { "Vignettes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArchivesVignettes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ArchivesJournal" },
		{ "ModuleRelativePath", "Public/ArchivesJournal.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchivesJournal, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchivesJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Vignettes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchivesJournal_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchivesJournal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"ArchivesJournal",
		sizeof(FArchivesJournal),
		alignof(FArchivesJournal),
		Z_Construct_UScriptStruct_FArchivesJournal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesJournal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchivesJournal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchivesJournal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchivesJournal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchivesJournal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchivesJournal"), sizeof(FArchivesJournal), Get_Z_Construct_UScriptStruct_FArchivesJournal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchivesJournal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchivesJournal_Hash() { return 2141344530U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
