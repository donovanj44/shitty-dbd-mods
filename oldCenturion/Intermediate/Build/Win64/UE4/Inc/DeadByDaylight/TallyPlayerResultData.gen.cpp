// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TallyPlayerResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallyPlayerResultData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTallyPlayerResultData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
// End Cross Module References
class UScriptStruct* FTallyPlayerResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTallyPlayerResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTallyPlayerResultData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TallyPlayerResultData"), sizeof(FTallyPlayerResultData), Get_Z_Construct_UScriptStruct_FTallyPlayerResultData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTallyPlayerResultData>()
{
	return FTallyPlayerResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTallyPlayerResultData(FTallyPlayerResultData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TallyPlayerResultData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyPlayerResultData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyPlayerResultData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TallyPlayerResultData")),new UScriptStruct::TCppStructOps<FTallyPlayerResultData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyPlayerResultData;
	struct Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsABot_MetaData[];
#endif
		static void NewProp_IsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPortraitBorder_MetaData[];
#endif
		static void NewProp_ShowPortraitBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowPortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOffNetwork_MetaData[];
#endif
		static void NewProp_IsOffNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOffNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMyScore_MetaData[];
#endif
		static void NewProp_IsMyScore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMyScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReported_MetaData[];
#endif
		static void NewProp_IsReported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddonsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddonsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerksData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerksData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfferingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterIconPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTallyPlayerResultData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->IsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot = { "IsABot", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->ShowPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder = { "ShowPortraitBorder", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->IsOffNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork = { "IsOffNetwork", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->IsMyScore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore = { "IsMyScore", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported_SetBit(void* Obj)
	{
		((FTallyPlayerResultData*)Obj)->IsReported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported = { "IsReported", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyPlayerResultData), &Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData = { "AddonsData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, AddonsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData_Inner = { "AddonsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, ItemData), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData = { "PerksData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PerksData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData_Inner = { "PerksData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_OfferingData_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_OfferingData = { "OfferingData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, OfferingData), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_OfferingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_OfferingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus = { "PlayerStatus", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlayerStatus), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerRank_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlayerScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_MirrorsId_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_MirrorsId = { "MirrorsId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, MirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_MirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_MirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlatformAccountId_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlatformAccountId = { "PlatformAccountId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlatformAccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlatformAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlatformAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_CharacterIconPath_MetaData[] = {
		{ "Category", "TallyPlayerResultData" },
		{ "ModuleRelativePath", "Public/TallyPlayerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_CharacterIconPath = { "CharacterIconPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyPlayerResultData, CharacterIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_CharacterIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_CharacterIconPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ShowPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsOffNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsMyScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_IsReported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_AddonsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PerksData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_OfferingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_MirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlatformAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::NewProp_CharacterIconPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TallyPlayerResultData",
		sizeof(FTallyPlayerResultData),
		alignof(FTallyPlayerResultData),
		Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTallyPlayerResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTallyPlayerResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TallyPlayerResultData"), sizeof(FTallyPlayerResultData), Get_Z_Construct_UScriptStruct_FTallyPlayerResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTallyPlayerResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTallyPlayerResultData_Hash() { return 253671346U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
