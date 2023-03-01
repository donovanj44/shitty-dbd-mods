// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveNodeDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveNodeDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FArchiveNodeDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveNodeDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchiveNodeDefinition"), sizeof(FArchiveNodeDefinition), Get_Z_Construct_UScriptStruct_FArchiveNodeDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchiveNodeDefinition>()
{
	return FArchiveNodeDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveNodeDefinition(FArchiveNodeDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchiveNodeDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveNodeDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveNodeDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveNodeDefinition")),new UScriptStruct::TCppStructOps<FArchiveNodeDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveNodeDefinition;
	struct Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CinematicId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveNodeDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_CinematicId_MetaData[] = {
		{ "Category", "ArchiveNodeDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_CinematicId = { "CinematicId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeDefinition, CinematicId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_CinematicId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_CinematicId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "ArchiveNodeDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeDefinition, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "ArchiveNodeDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeDefinition, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchiveNodeDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ArchiveNodeDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveNodeDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveNodeDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_CinematicId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"ArchiveNodeDefinition",
		sizeof(FArchiveNodeDefinition),
		alignof(FArchiveNodeDefinition),
		Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveNodeDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveNodeDefinition"), sizeof(FArchiveNodeDefinition), Get_Z_Construct_UScriptStruct_FArchiveNodeDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveNodeDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveNodeDefinition_Hash() { return 828378416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
