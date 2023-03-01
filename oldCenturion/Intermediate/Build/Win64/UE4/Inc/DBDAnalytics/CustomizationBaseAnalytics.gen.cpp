// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CustomizationBaseAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationBaseAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationBaseAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FCustomizationBaseAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CustomizationBaseAnalytics"), sizeof(FCustomizationBaseAnalytics), Get_Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCustomizationBaseAnalytics>()
{
	return FCustomizationBaseAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationBaseAnalytics(FCustomizationBaseAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CustomizationBaseAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomizationBaseAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomizationBaseAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizationBaseAnalytics")),new UScriptStruct::TCppStructOps<FCustomizationBaseAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomizationBaseAnalytics;
	struct Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charm3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Charm3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charm2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Charm2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charm1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Charm1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationSlot3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomizationSlot3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationSlot2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomizationSlot2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationSlot1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomizationSlot1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationBaseAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm3 = { "Charm3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, Charm3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm2 = { "Charm2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, Charm2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm1 = { "Charm1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, Charm1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot3 = { "CustomizationSlot3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, CustomizationSlot3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot2 = { "CustomizationSlot2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, CustomizationSlot2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomizationBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot1 = { "CustomizationSlot1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationBaseAnalytics, CustomizationSlot1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_Charm1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::NewProp_CustomizationSlot1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CustomizationBaseAnalytics",
		sizeof(FCustomizationBaseAnalytics),
		alignof(FCustomizationBaseAnalytics),
		Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationBaseAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationBaseAnalytics"), sizeof(FCustomizationBaseAnalytics), Get_Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationBaseAnalytics_Hash() { return 2256084981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
