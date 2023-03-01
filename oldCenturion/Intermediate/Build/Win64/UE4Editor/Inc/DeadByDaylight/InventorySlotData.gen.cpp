// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InventorySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlotData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventUIInfo();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingCategory();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory();
// End Cross Module References
class UScriptStruct* FInventorySlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInventorySlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlotData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InventorySlotData"), sizeof(FInventorySlotData), Get_Z_Construct_UScriptStruct_FInventorySlotData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInventorySlotData>()
{
	return FInventorySlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventorySlotData(FInventorySlotData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InventorySlotData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInventorySlotData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInventorySlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventorySlotData")),new UScriptStruct::TCppStructOps<FInventorySlotData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInventorySlotData;
	struct Z_Construct_UScriptStruct_FInventorySlotData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPrivateIcon_MetaData[];
#endif
		static void NewProp_IsPrivateIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPrivateIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLimitedItem_MetaData[];
#endif
		static void NewProp_IsLimitedItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLimitedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockableLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeachableLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeachableLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPerkAvailableInBloodWeb_MetaData[];
#endif
		static void NewProp_IsPerkAvailableInBloodWeb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPerkAvailableInBloodWeb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPerkAvailableInFearMarket_MetaData[];
#endif
		static void NewProp_IsPerkAvailableInFearMarket_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPerkAvailableInFearMarket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasherPerk_MetaData[];
#endif
		static void NewProp_IsSlasherPerk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasherPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTeachablePerk_MetaData[];
#endif
		static void NewProp_IsTeachablePerk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTeachablePerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OfferingCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OfferingCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkCategory;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerkCategory_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerkCategory_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsPrivateIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon = { "IsPrivateIcon", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsLimitedItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem = { "IsLimitedItem", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_UnlockableLevel_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_UnlockableLevel = { "UnlockableLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, UnlockableLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_UnlockableLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_UnlockableLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_EventInfo_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, EventInfo), Z_Construct_UScriptStruct_FSpecialEventUIInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_EventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_EventInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DlcDisplayName_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DlcDisplayName = { "DlcDisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, DlcDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DlcDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DlcDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_TeachableLevel_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_TeachableLevel = { "TeachableLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, TeachableLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_TeachableLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_TeachableLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsPerkAvailableInBloodWeb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb = { "IsPerkAvailableInBloodWeb", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsPerkAvailableInFearMarket = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket = { "IsPerkAvailableInFearMarket", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsSlasherPerk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk = { "IsSlasherPerk", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk_SetBit(void* Obj)
	{
		((FInventorySlotData*)Obj)->IsTeachablePerk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk = { "IsTeachablePerk", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventorySlotData), &Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, Availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, ItemType), Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory = { "OfferingCategory", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, OfferingCategory), Z_Construct_UEnum_DeadByDaylight_EOfferingCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory = { "PerkCategory", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, PerkCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_Inner = { "PerkCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EPerkCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ParentDisplayName_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ParentDisplayName = { "ParentDisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, ParentDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ParentDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ParentDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "InventorySlotData" },
		{ "ModuleRelativePath", "Public/InventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPrivateIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLimitedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_UnlockableLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_EventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DlcDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_TeachableLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInBloodWeb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsPerkAvailableInFearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsSlasherPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IsTeachablePerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_OfferingCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_PerkCategory_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ParentDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotData_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InventorySlotData",
		sizeof(FInventorySlotData),
		alignof(FInventorySlotData),
		Z_Construct_UScriptStruct_FInventorySlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventorySlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventorySlotData"), sizeof(FInventorySlotData), Get_Z_Construct_UScriptStruct_FInventorySlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventorySlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventorySlotData_Hash() { return 3476955888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
