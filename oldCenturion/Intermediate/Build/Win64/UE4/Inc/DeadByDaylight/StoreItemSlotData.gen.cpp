// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreItemSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreItemSlotData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreItemSlotData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTransformation();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventUIInfo();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
// End Cross Module References
class UScriptStruct* FStoreItemSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStoreItemSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreItemSlotData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StoreItemSlotData"), sizeof(FStoreItemSlotData), Get_Z_Construct_UScriptStruct_FStoreItemSlotData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStoreItemSlotData>()
{
	return FStoreItemSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreItemSlotData(FStoreItemSlotData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StoreItemSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreItemSlotData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreItemSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreItemSlotData")),new UScriptStruct::TCppStructOps<FStoreItemSlotData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreItemSlotData;
	struct Z_Construct_UScriptStruct_FStoreItemSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssociatedRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssociatedRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInStore_MetaData[];
#endif
		static void NewProp_IsInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNewInStore_MetaData[];
#endif
		static void NewProp_IsNewInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNewInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipped_MetaData[];
#endif
		static void NewProp_IsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBuyable_MetaData[];
#endif
		static void NewProp_IsBuyable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBuyable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTransformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomTransformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildrenItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildrenItemIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildrenItemIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentBundleIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentBundleIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentBundleIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchaseDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityPartInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RarityPartInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleCategoryInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleCategoryInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayCollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayCollectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreItemSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ReleaseDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ReleaseDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole = { "AssociatedRole", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, AssociatedRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore = { "IsInStore", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsNewInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore = { "IsNewInStore", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped = { "IsEquipped", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsBuyable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable = { "IsBuyable", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FStoreItemSlotData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreItemSlotData), &Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_CustomTransformation_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_CustomTransformation = { "CustomTransformation", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, CustomTransformation), Z_Construct_UScriptStruct_FCustomTransformation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_CustomTransformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_CustomTransformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds = { "ChildrenItemIds", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, ChildrenItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds_Inner = { "ChildrenItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds = { "ParentBundleIds", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, ParentBundleIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds_Inner = { "ParentBundleIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList = { "PurchaseDataList", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, PurchaseDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList_Inner = { "PurchaseDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPurchaseCurrencyData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_EventInfo_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, EventInfo), Z_Construct_UScriptStruct_FSpecialEventUIInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_EventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_EventInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RarityPartInfo_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RarityPartInfo = { "RarityPartInfo", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, RarityPartInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RarityPartInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RarityPartInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RoleCategoryInfo_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RoleCategoryInfo = { "RoleCategoryInfo", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, RoleCategoryInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RoleCategoryInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RoleCategoryInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayCollectionName_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayCollectionName = { "DisplayCollectionName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, DisplayCollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayCollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayCollectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_MirrorsId_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_MirrorsId = { "MirrorsId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, MirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_MirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_MirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, Category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "StoreItemSlotData" },
		{ "ModuleRelativePath", "Public/StoreItemSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreItemSlotData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ReleaseDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_AssociatedRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsNewInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsBuyable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_CustomTransformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ChildrenItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ParentBundleIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_PurchaseDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_EventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RarityPartInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_RoleCategoryInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayCollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_IconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_MirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StoreItemSlotData",
		sizeof(FStoreItemSlotData),
		alignof(FStoreItemSlotData),
		Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreItemSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreItemSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreItemSlotData"), sizeof(FStoreItemSlotData), Get_Z_Construct_UScriptStruct_FStoreItemSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreItemSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreItemSlotData_Hash() { return 2380329529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
