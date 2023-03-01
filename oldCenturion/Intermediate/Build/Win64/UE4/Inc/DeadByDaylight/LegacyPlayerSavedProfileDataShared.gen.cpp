// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacyPlayerSavedProfileDataShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyPlayerSavedProfileDataShared() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FLegacyPlayerSavedProfileDataShared::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacyPlayerSavedProfileDataShared"), sizeof(FLegacyPlayerSavedProfileDataShared), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacyPlayerSavedProfileDataShared>()
{
	return FLegacyPlayerSavedProfileDataShared::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacyPlayerSavedProfileDataShared(FLegacyPlayerSavedProfileDataShared::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacyPlayerSavedProfileDataShared"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataShared
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataShared()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacyPlayerSavedProfileDataShared")),new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileDataShared>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataShared;
	struct Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperStreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamperStreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperSkulls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamperSkulls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherSkulls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlasherSkulls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedCharacterCustomization;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedCharacterCustomization_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedSlasherIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedSlasherIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCamperIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedCamperIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileDataShared>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak = { "CamperStreak", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, CamperStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperSkulls_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperSkulls = { "CamperSkulls", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, CamperSkulls), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperSkulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperSkulls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SlasherSkulls_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SlasherSkulls = { "SlasherSkulls", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, SlasherSkulls), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SlasherSkulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SlasherSkulls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization = { "SelectedCharacterCustomization", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, SelectedCharacterCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_Inner = { "SelectedCharacterCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex = { "SelectedSlasherIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, SelectedSlasherIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex = { "SelectedCamperIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, SelectedCamperIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataShared, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_CamperSkulls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SlasherSkulls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacyPlayerSavedProfileDataShared",
		sizeof(FLegacyPlayerSavedProfileDataShared),
		alignof(FLegacyPlayerSavedProfileDataShared),
		Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacyPlayerSavedProfileDataShared"), sizeof(FLegacyPlayerSavedProfileDataShared), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataShared_Hash() { return 2410329958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
