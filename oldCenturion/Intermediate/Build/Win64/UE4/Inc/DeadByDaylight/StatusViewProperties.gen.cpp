// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusViewProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusViewProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusViewProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStatusView_NoRegister();
// End Cross Module References
class UScriptStruct* FStatusViewProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStatusViewProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusViewProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StatusViewProperties"), sizeof(FStatusViewProperties), Get_Z_Construct_UScriptStruct_FStatusViewProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStatusViewProperties>()
{
	return FStatusViewProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatusViewProperties(FStatusViewProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StatusViewProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatusViewProperties")),new UScriptStruct::TCppStructOps<FStatusViewProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStatusViewProperties;
	struct Z_Construct_UScriptStruct_FStatusViewProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusViewBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_StatusViewBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusViewID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatusViewID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusViewProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconAsset_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconAsset = { "IconAsset", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, IconAsset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType = { "StatusType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, StatusType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewBlueprint_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewBlueprint = { "StatusViewBlueprint", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, StatusViewBlueprint), Z_Construct_UClass_AStatusView_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewID_MetaData[] = {
		{ "Category", "StatusViewProperties" },
		{ "ModuleRelativePath", "Public/StatusViewProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewID = { "StatusViewID", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusViewProperties, StatusViewID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusViewProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusViewProperties_Statics::NewProp_StatusViewID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusViewProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"StatusViewProperties",
		sizeof(FStatusViewProperties),
		alignof(FStatusViewProperties),
		Z_Construct_UScriptStruct_FStatusViewProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusViewProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusViewProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatusViewProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatusViewProperties"), sizeof(FStatusViewProperties), Get_Z_Construct_UScriptStruct_FStatusViewProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatusViewProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatusViewProperties_Hash() { return 666348398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
