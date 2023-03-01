// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/SocialPartyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPartyState() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPartyState();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMatchmakingSettings();
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartySessionSettings();
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGamePresetData();
// End Cross Module References
class UScriptStruct* FSocialPartyState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FSocialPartyState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialPartyState, Z_Construct_UPackage__Script_SocialParty(), TEXT("SocialPartyState"), sizeof(FSocialPartyState), Get_Z_Construct_UScriptStruct_FSocialPartyState_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FSocialPartyState>()
{
	return FSocialPartyState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialPartyState(FSocialPartyState::StaticStruct, TEXT("/Script/SocialParty"), TEXT("SocialPartyState"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyState
{
	FScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialPartyState")),new UScriptStruct::TCppStructOps<FSocialPartyState>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyState;
	struct Z_Construct_UScriptStruct_FSocialPartyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastSentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__lastSentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastUpdatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__lastUpdatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingDedicatedServer_MetaData[];
#endif
		static void NewProp__isUsingDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrowdPlay_MetaData[];
#endif
		static void NewProp__isCrowdPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrowdPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__gameType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerChatIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__playerChatIndices;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__playerChatIndices_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__playerChatIndices_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerJoinOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerJoinOrder;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__playerJoinOrder_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyMatchmakingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partyMatchmakingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partySessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partySessionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customGamePresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__customGamePresetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialPartyState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastSentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastSentTime = { "_lastSentTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _lastSentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastSentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastSentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastUpdatedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastUpdatedTime = { "_lastUpdatedTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _lastUpdatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastUpdatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastUpdatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__version_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__version = { "_version", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _version), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer_SetBit(void* Obj)
	{
		((FSocialPartyState*)Obj)->_isUsingDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer = { "_isUsingDedicatedServer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocialPartyState), &Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay_SetBit(void* Obj)
	{
		((FSocialPartyState*)Obj)->_isCrowdPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay = { "_isCrowdPlay", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocialPartyState), &Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__gameType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__gameType = { "_gameType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _gameType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__gameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__gameType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices = { "_playerChatIndices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _playerChatIndices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_Key_KeyProp = { "_playerChatIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_ValueProp = { "_playerChatIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder = { "_playerJoinOrder", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _playerJoinOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder_Inner = { "_playerJoinOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partyMatchmakingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partyMatchmakingSettings = { "_partyMatchmakingSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _partyMatchmakingSettings), Z_Construct_UScriptStruct_FPartyMatchmakingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partyMatchmakingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partyMatchmakingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partySessionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partySessionSettings = { "_partySessionSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _partySessionSettings), Z_Construct_UScriptStruct_FPartySessionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partySessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partySessionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__customGamePresetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__customGamePresetData = { "_customGamePresetData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyState, _customGamePresetData), Z_Construct_UScriptStruct_FCustomGamePresetData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__customGamePresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__customGamePresetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialPartyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastSentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__lastUpdatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isUsingDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__isCrowdPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__gameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerChatIndices_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__playerJoinOrder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partyMatchmakingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__partySessionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyState_Statics::NewProp__customGamePresetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialPartyState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"SocialPartyState",
		sizeof(FSocialPartyState),
		alignof(FSocialPartyState),
		Z_Construct_UScriptStruct_FSocialPartyState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialPartyState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialPartyState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialPartyState"), sizeof(FSocialPartyState), Get_Z_Construct_UScriptStruct_FSocialPartyState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialPartyState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialPartyState_Hash() { return 340965956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
