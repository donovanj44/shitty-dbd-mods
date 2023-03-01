// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/PartyMatchmakingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyMatchmakingSettings() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMatchmakingSettings();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EMatchmakingState();
// End Cross Module References
class UScriptStruct* FPartyMatchmakingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMatchmakingSettings, Z_Construct_UPackage__Script_SocialParty(), TEXT("PartyMatchmakingSettings"), sizeof(FPartyMatchmakingSettings), Get_Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FPartyMatchmakingSettings>()
{
	return FPartyMatchmakingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyMatchmakingSettings(FPartyMatchmakingSettings::StaticStruct, TEXT("/Script/SocialParty"), TEXT("PartyMatchmakingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFPartyMatchmakingSettings
{
	FScriptStruct_SocialParty_StaticRegisterNativesFPartyMatchmakingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PartyMatchmakingSettings")),new UScriptStruct::TCppStructOps<FPartyMatchmakingSettings>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFPartyMatchmakingSettings;
	struct Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInFinalCountdown_MetaData[];
#endif
		static void NewProp__isInFinalCountdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInFinalCountdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startMatchmakingDateTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__startMatchmakingDateTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matchmakingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__matchmakingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__matchmakingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartyMatchmakingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMatchmakingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyMatchmakingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown_SetBit(void* Obj)
	{
		((FPartyMatchmakingSettings*)Obj)->_isInFinalCountdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown = { "_isInFinalCountdown", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPartyMatchmakingSettings), &Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__startMatchmakingDateTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyMatchmakingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__startMatchmakingDateTimestamp = { "_startMatchmakingDateTimestamp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMatchmakingSettings, _startMatchmakingDateTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__startMatchmakingDateTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__startMatchmakingDateTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyMatchmakingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState = { "_matchmakingState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMatchmakingSettings, _matchmakingState), Z_Construct_UEnum_SocialParty_EMatchmakingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyMatchmakingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds = { "_playerIds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMatchmakingSettings, _playerIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds_Inner = { "_playerIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__isInFinalCountdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__startMatchmakingDateTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__matchmakingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::NewProp__playerIds_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"PartyMatchmakingSettings",
		sizeof(FPartyMatchmakingSettings),
		alignof(FPartyMatchmakingSettings),
		Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMatchmakingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyMatchmakingSettings"), sizeof(FPartyMatchmakingSettings), Get_Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyMatchmakingSettings_Hash() { return 1295062727U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
