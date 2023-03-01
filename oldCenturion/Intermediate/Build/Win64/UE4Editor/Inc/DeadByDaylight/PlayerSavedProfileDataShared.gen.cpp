// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerSavedProfileDataShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSavedProfileDataShared() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
// End Cross Module References
class UScriptStruct* FPlayerSavedProfileDataShared::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerSavedProfileDataShared"), sizeof(FPlayerSavedProfileDataShared), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerSavedProfileDataShared>()
{
	return FPlayerSavedProfileDataShared::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerSavedProfileDataShared(FPlayerSavedProfileDataShared::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerSavedProfileDataShared"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataShared
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataShared()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerSavedProfileDataShared")),new UScriptStruct::TCppStructOps<FPlayerSavedProfileDataShared>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataShared;
	struct Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperStreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamperStreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedCharacterCharms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedCharacterCharms_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSavedProfileDataShared>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlatformId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataShared*)Obj)->HasActiveSubscription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription = { "HasActiveSubscription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataShared), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataShared*)Obj)->ShowPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder = { "ShowPortraitBorder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataShared), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak = { "CamperStreak", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, CamperStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms = { "SelectedCharacterCharms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, SelectedCharacterCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms_Inner = { "SelectedCharacterCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization = { "SelectedCharacterCustomization", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, SelectedCharacterCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_Inner = { "SelectedCharacterCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex = { "SelectedSlasherIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, SelectedSlasherIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex = { "SelectedCamperIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, SelectedCamperIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataShared, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_HasActiveSubscription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_ShowPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_CamperStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCharacterCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedSlasherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_SelectedCamperIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerSavedProfileDataShared",
		sizeof(FPlayerSavedProfileDataShared),
		alignof(FPlayerSavedProfileDataShared),
		Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerSavedProfileDataShared"), sizeof(FPlayerSavedProfileDataShared), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataShared_Hash() { return 2111082939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
