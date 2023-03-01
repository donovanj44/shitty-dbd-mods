// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInfoData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfoData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPlayerInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInfoData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerInfoData"), sizeof(FPlayerInfoData), Get_Z_Construct_UScriptStruct_FPlayerInfoData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerInfoData>()
{
	return FPlayerInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerInfoData(FPlayerInfoData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerInfoData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerInfoData")),new UScriptStruct::TCppStructOps<FPlayerInfoData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerInfoData;
	struct Z_Construct_UScriptStruct_FPlayerInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasActiveSubscription_MetaData[];
#endif
		static void NewProp_HasActiveSubscription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasActiveSubscription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPortraitBorder_MetaData[];
#endif
		static void NewProp_ShowPortraitBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowPortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ready_MetaData[];
#endif
		static void NewProp_Ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ready;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPipsToNextRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPipsToNextRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActivePips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevotionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DevotionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanPrestige_MetaData[];
#endif
		static void NewProp_CanPrestige_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanPrestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterIconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription_SetBit(void* Obj)
	{
		((FPlayerInfoData*)Obj)->HasActiveSubscription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription = { "HasActiveSubscription", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInfoData), &Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder_SetBit(void* Obj)
	{
		((FPlayerInfoData*)Obj)->ShowPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder = { "ShowPortraitBorder", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInfoData), &Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((FPlayerInfoData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInfoData), &Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready_SetBit(void* Obj)
	{
		((FPlayerInfoData*)Obj)->Ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInfoData), &Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_NumPipsToNextRank_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_NumPipsToNextRank = { "NumPipsToNextRank", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, NumPipsToNextRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_NumPipsToNextRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_NumPipsToNextRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ActivePips_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ActivePips = { "ActivePips", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, ActivePips), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ActivePips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ActivePips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerRank_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, PlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_DevotionLevel_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_DevotionLevel = { "DevotionLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, DevotionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_DevotionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_DevotionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige_SetBit(void* Obj)
	{
		((FPlayerInfoData*)Obj)->CanPrestige = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige = { "CanPrestige", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInfoData), &Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, CharacterLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterIconPath_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterIconPath = { "CharacterIconPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, CharacterIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterIconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "PlayerInfoData" },
		{ "ModuleRelativePath", "Public/PlayerInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfoData, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_HasActiveSubscription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ShowPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_IsSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_Ready,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_NumPipsToNextRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_ActivePips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_DevotionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CanPrestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterIconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfoData_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerInfoData",
		sizeof(FPlayerInfoData),
		alignof(FPlayerInfoData),
		Z_Construct_UScriptStruct_FPlayerInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerInfoData"), sizeof(FPlayerInfoData), Get_Z_Construct_UScriptStruct_FPlayerInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerInfoData_Hash() { return 2472166843U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
