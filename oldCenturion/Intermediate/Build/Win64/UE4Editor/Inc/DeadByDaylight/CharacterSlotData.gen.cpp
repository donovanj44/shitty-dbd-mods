// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSlotData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlotData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventUIInfo();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
// End Cross Module References
class UScriptStruct* FCharacterSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSlotData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterSlotData"), sizeof(FCharacterSlotData), Get_Z_Construct_UScriptStruct_FCharacterSlotData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterSlotData>()
{
	return FCharacterSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSlotData(FCharacterSlotData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlotData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSlotData")),new UScriptStruct::TCppStructOps<FCharacterSlotData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlotData;
	struct Z_Construct_UScriptStruct_FCharacterSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeTicketAffectedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeTicketAffectedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasNonSelectedPerks_MetaData[];
#endif
		static void NewProp_HasNonSelectedPerks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasNonSelectedPerks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDlcLockedKiller_MetaData[];
#endif
		static void NewProp_IsDlcLockedKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDlcLockedKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowNew_MetaData[];
#endif
		static void NewProp_ShowNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsOwned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchaseDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDLCPurchasable_MetaData[];
#endif
		static void NewProp_IsDLCPurchasable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDLCPurchasable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnlocked_MetaData[];
#endif
		static void NewProp_IsUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biography_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Biography;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackgroundImagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole = { "PlayerRole", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, PlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_FreeTicketAffectedData_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_FreeTicketAffectedData = { "FreeTicketAffectedData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, FreeTicketAffectedData), Z_Construct_UScriptStruct_FAtlantaFreeTicketAffectedUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_FreeTicketAffectedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_FreeTicketAffectedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->HasNonSelectedPerks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks = { "HasNonSelectedPerks", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_EventInfo_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, EventInfo), Z_Construct_UScriptStruct_FSpecialEventUIInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_EventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_EventInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->IsDlcLockedKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller = { "IsDlcLockedKiller", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->ShowNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew = { "ShowNew", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_TotalItems_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_TotalItems = { "TotalItems", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, TotalItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_TotalItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_TotalItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ItemsOwned_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ItemsOwned = { "ItemsOwned", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, ItemsOwned), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ItemsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ItemsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList = { "PurchaseDataList", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, PurchaseDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList_Inner = { "PurchaseDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPurchaseCurrencyData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->IsDLCPurchasable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable = { "IsDLCPurchasable", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked_SetBit(void* Obj)
	{
		((FCharacterSlotData*)Obj)->IsUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked = { "IsUnlocked", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSlotData), &Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, Difficulty), Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Prestige_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCTitle_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCTitle = { "DLCTitle", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, DLCTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCId_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCId = { "DLCId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, DLCId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Biography_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Biography = { "Biography", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, Biography), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Biography_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Biography_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_BackgroundImagePath_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_BackgroundImagePath = { "BackgroundImagePath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, BackgroundImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_BackgroundImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_BackgroundImagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IconFilePath_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, IconFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IconFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IconFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, CharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_CharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "CharacterSlotData" },
		{ "ModuleRelativePath", "Public/CharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlotData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PlayerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_FreeTicketAffectedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_HasNonSelectedPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_EventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDlcLockedKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ShowNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_TotalItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_ItemsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_PurchaseDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsDLCPurchasable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DLCId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Biography,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_BackgroundImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_IconFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_CharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlotData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterSlotData",
		sizeof(FCharacterSlotData),
		alignof(FCharacterSlotData),
		Z_Construct_UScriptStruct_FCharacterSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSlotData"), sizeof(FCharacterSlotData), Get_Z_Construct_UScriptStruct_FCharacterSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSlotData_Hash() { return 1273061536U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
