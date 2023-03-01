// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTransformation();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FItemUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemUIData"), sizeof(FItemUIData), Get_Z_Construct_UScriptStruct_FItemUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemUIData>()
{
	return FItemUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemUIData(FItemUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemUIData")),new UScriptStruct::TCppStructOps<FItemUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemUIData;
	struct Z_Construct_UScriptStruct_FItemUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedCharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionUnlicensedOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DescriptionUnlicensedOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameUnlicensedOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayNameUnlicensedOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LicenseExpirationOverride_MetaData[];
#endif
		static void NewProp_LicenseExpirationOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LicenseExpirationOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconUnlicensedFilePathListOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconUnlicensedFilePathListOverride;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconUnlicensedFilePathListOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsForIconUnlicensedFilePathListOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlatformsForIconUnlicensedFilePathListOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsUnlicensedDescriptionOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlatformsUnlicensedDescriptionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsUnlicensedNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlatformsUnlicensedNameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTransformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomTransformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconAssetList;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconAssetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconFilePathList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePathList_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_AssociatedCharacterIndex_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_AssociatedCharacterIndex = { "AssociatedCharacterIndex", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, AssociatedCharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_AssociatedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_AssociatedCharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DescriptionUnlicensedOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DescriptionUnlicensedOverride = { "DescriptionUnlicensedOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, DescriptionUnlicensedOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DescriptionUnlicensedOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DescriptionUnlicensedOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayNameUnlicensedOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayNameUnlicensedOverride = { "DisplayNameUnlicensedOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, DisplayNameUnlicensedOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayNameUnlicensedOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayNameUnlicensedOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride_SetBit(void* Obj)
	{
		((FItemUIData*)Obj)->LicenseExpirationOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride = { "LicenseExpirationOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemUIData), &Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride = { "IconUnlicensedFilePathListOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, IconUnlicensedFilePathListOverride), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride_Inner = { "IconUnlicensedFilePathListOverride", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsForIconUnlicensedFilePathListOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsForIconUnlicensedFilePathListOverride = { "PlatformsForIconUnlicensedFilePathListOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, PlatformsForIconUnlicensedFilePathListOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsForIconUnlicensedFilePathListOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsForIconUnlicensedFilePathListOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedDescriptionOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedDescriptionOverride = { "PlatformsUnlicensedDescriptionOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, PlatformsUnlicensedDescriptionOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedDescriptionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedDescriptionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedNameOverride_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedNameOverride = { "PlatformsUnlicensedNameOverride", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, PlatformsUnlicensedNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedNameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_CustomTransformation_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_CustomTransformation = { "CustomTransformation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, CustomTransformation), Z_Construct_UScriptStruct_FCustomTransformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_CustomTransformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_CustomTransformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList = { "IconAssetList", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, IconAssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList_Inner = { "IconAssetList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList = { "IconFilePathList", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, IconFilePathList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList_Inner = { "IconFilePathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ItemUIData" },
		{ "ModuleRelativePath", "Public/ItemUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemUIData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_AssociatedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DescriptionUnlicensedOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayNameUnlicensedOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_LicenseExpirationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconUnlicensedFilePathListOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsForIconUnlicensedFilePathListOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedDescriptionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_PlatformsUnlicensedNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_CustomTransformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_IconFilePathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemUIData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ItemUIData",
		sizeof(FItemUIData),
		alignof(FItemUIData),
		Z_Construct_UScriptStruct_FItemUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemUIData"), sizeof(FItemUIData), Get_Z_Construct_UScriptStruct_FItemUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemUIData_Hash() { return 1627639732U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
