// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/MindFocusObjectEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMindFocusObjectEntry() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FMindFocusObjectEntry();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMindFocusObjectEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FMindFocusObjectEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMindFocusObjectEntry, Z_Construct_UPackage__Script_DBDBots(), TEXT("MindFocusObjectEntry"), sizeof(FMindFocusObjectEntry), Get_Z_Construct_UScriptStruct_FMindFocusObjectEntry_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FMindFocusObjectEntry>()
{
	return FMindFocusObjectEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMindFocusObjectEntry(FMindFocusObjectEntry::StaticStruct, TEXT("/Script/DBDBots"), TEXT("MindFocusObjectEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFMindFocusObjectEntry
{
	FScriptStruct_DBDBots_StaticRegisterNativesFMindFocusObjectEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MindFocusObjectEntry")),new UScriptStruct::TCppStructOps<FMindFocusObjectEntry>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFMindFocusObjectEntry;
	struct Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CooldownMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CooldownMap_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusedStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FocusedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedBy_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MindFocusObjectEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMindFocusObjectEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MindFocusObjectEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap = { "CooldownMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMindFocusObjectEntry, CooldownMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_Key_KeyProp = { "CooldownMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_ValueProp = { "CooldownMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MindFocusObjectEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedStartTime = { "FocusedStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMindFocusObjectEntry, FocusedStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MindFocusObjectEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy = { "FocusedBy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMindFocusObjectEntry, FocusedBy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy_Inner = { "FocusedBy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_CooldownMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::NewProp_FocusedBy_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"MindFocusObjectEntry",
		sizeof(FMindFocusObjectEntry),
		alignof(FMindFocusObjectEntry),
		Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMindFocusObjectEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMindFocusObjectEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MindFocusObjectEntry"), sizeof(FMindFocusObjectEntry), Get_Z_Construct_UScriptStruct_FMindFocusObjectEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMindFocusObjectEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMindFocusObjectEntry_Hash() { return 26219416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
