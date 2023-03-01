// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/PartySessionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartySessionSettings() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartySessionSettings();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
class UScriptStruct* FPartySessionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FPartySessionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartySessionSettings, Z_Construct_UPackage__Script_SocialParty(), TEXT("PartySessionSettings"), sizeof(FPartySessionSettings), Get_Z_Construct_UScriptStruct_FPartySessionSettings_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FPartySessionSettings>()
{
	return FPartySessionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartySessionSettings(FPartySessionSettings::StaticStruct, TEXT("/Script/SocialParty"), TEXT("PartySessionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFPartySessionSettings
{
	FScriptStruct_SocialParty_StaticRegisterNativesFPartySessionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PartySessionSettings")),new UScriptStruct::TCppStructOps<FPartySessionSettings>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFPartySessionSettings;
	struct Z_Construct_UScriptStruct_FPartySessionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matchmakingTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__matchmakingTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDedicated_MetaData[];
#endif
		static void NewProp__isDedicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDedicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__owningUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__owningUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameSessionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__gameSessionInfos;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__gameSessionInfos_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__gameSessionInfos_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__sessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartySessionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__matchmakingTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__matchmakingTimestamp = { "_matchmakingTimestamp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartySessionSettings, _matchmakingTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__matchmakingTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__matchmakingTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated_SetBit(void* Obj)
	{
		((FPartySessionSettings*)Obj)->_isDedicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated = { "_isDedicated", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPartySessionSettings), &Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserName = { "_owningUserName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartySessionSettings, _owningUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserId = { "_owningUserId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartySessionSettings, _owningUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos = { "_gameSessionInfos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartySessionSettings, _gameSessionInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_Key_KeyProp = { "_gameSessionInfos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_ValueProp = { "_gameSessionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__sessionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartySessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__sessionId = { "_sessionId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartySessionSettings, _sessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__sessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__sessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartySessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__matchmakingTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__isDedicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__owningUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__gameSessionInfos_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartySessionSettings_Statics::NewProp__sessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartySessionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"PartySessionSettings",
		sizeof(FPartySessionSettings),
		alignof(FPartySessionSettings),
		Z_Construct_UScriptStruct_FPartySessionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartySessionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartySessionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartySessionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartySessionSettings"), sizeof(FPartySessionSettings), Get_Z_Construct_UScriptStruct_FPartySessionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartySessionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartySessionSettings_Hash() { return 289705611U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
