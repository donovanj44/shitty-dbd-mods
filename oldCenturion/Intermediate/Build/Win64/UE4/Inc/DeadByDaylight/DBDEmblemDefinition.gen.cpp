// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDEmblemDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblemDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDEmblemDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionID();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemEvaluation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FDBDEmblemDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDEmblemDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDEmblemDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDEmblemDefinition"), sizeof(FDBDEmblemDefinition), Get_Z_Construct_UScriptStruct_FDBDEmblemDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDEmblemDefinition>()
{
	return FDBDEmblemDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDEmblemDefinition(FDBDEmblemDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDEmblemDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDEmblemDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDEmblemDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDEmblemDefinition")),new UScriptStruct::TCppStructOps<FDBDEmblemDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDEmblemDefinition;
	struct Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemProgressionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmblemProgressionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmblemProgressionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemEvaluation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmblemEvaluation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmblemEvaluation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconFilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEmblem_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CustomEmblem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Roles_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Roles_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDEmblemDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData = { "EmblemProgressionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, EmblemProgressionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData_Inner = { "EmblemProgressionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmblemProgressionID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FDBDEmblemDefinition*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBDEmblemDefinition), &Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation = { "EmblemEvaluation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, EmblemEvaluation), Z_Construct_UEnum_DeadByDaylight_EEmblemEvaluation, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths = { "IconFilePaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, IconFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths_Inner = { "IconFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_CustomEmblem_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_CustomEmblem = { "CustomEmblem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, CustomEmblem), Z_Construct_UClass_UDBDEmblem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_CustomEmblem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_CustomEmblem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "DBDEmblemDefinition" },
		{ "ModuleRelativePath", "Public/DBDEmblemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDEmblemDefinition, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemProgressionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_EmblemEvaluation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_IconFilePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_CustomEmblem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Roles_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DBDEmblemDefinition",
		sizeof(FDBDEmblemDefinition),
		alignof(FDBDEmblemDefinition),
		Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDEmblemDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDEmblemDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDEmblemDefinition"), sizeof(FDBDEmblemDefinition), Get_Z_Construct_UScriptStruct_FDBDEmblemDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDEmblemDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDEmblemDefinition_Hash() { return 3079909292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
