// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/SocialPartyMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPartyMember() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPartyMember();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EPartyPostMatchmakingState();
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EPartyPostMatchmakingRole();
// End Cross Module References
class UScriptStruct* FSocialPartyMember::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FSocialPartyMember_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialPartyMember, Z_Construct_UPackage__Script_SocialParty(), TEXT("SocialPartyMember"), sizeof(FSocialPartyMember), Get_Z_Construct_UScriptStruct_FSocialPartyMember_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FSocialPartyMember>()
{
	return FSocialPartyMember::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialPartyMember(FSocialPartyMember::StaticStruct, TEXT("/Script/SocialParty"), TEXT("SocialPartyMember"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyMember
{
	FScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyMember()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialPartyMember")),new UScriptStruct::TCppStructOps<FSocialPartyMember>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFSocialPartyMember;
	struct Z_Construct_UScriptStruct_FSocialPartyMember_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disconnectionPenaltyEndOfBan_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__disconnectionPenaltyEndOfBan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isStateInitialized_MetaData[];
#endif
		static void NewProp__isStateInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isStateInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__roleRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__roleRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__postMatchmakingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__postMatchmakingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__postMatchmakingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__postMatchmakingRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__postMatchmakingRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__postMatchmakingRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crossplayAllowed_MetaData[];
#endif
		static void NewProp__crossplayAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__crossplayAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ready_MetaData[];
#endif
		static void NewProp__ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__ready;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__powerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__gameRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__prestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__prestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__playerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__uniquePlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__uniquePlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__platformSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__platformSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customizationMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__customizationMesh_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialPartyMember>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__disconnectionPenaltyEndOfBan_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__disconnectionPenaltyEndOfBan = { "_disconnectionPenaltyEndOfBan", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _disconnectionPenaltyEndOfBan), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__disconnectionPenaltyEndOfBan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__disconnectionPenaltyEndOfBan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized_SetBit(void* Obj)
	{
		((FSocialPartyMember*)Obj)->_isStateInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized = { "_isStateInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocialPartyMember), &Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__roleRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__roleRequested = { "_roleRequested", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _roleRequested), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__roleRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__roleRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState = { "_postMatchmakingState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _postMatchmakingState), Z_Construct_UEnum_SocialParty_EPartyPostMatchmakingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole = { "_postMatchmakingRole", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _postMatchmakingRole), Z_Construct_UEnum_SocialParty_EPartyPostMatchmakingRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerProvider = { "_playerProvider", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _playerProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerPlatform = { "_playerPlatform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _playerPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed_SetBit(void* Obj)
	{
		((FSocialPartyMember*)Obj)->_crossplayAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed = { "_crossplayAllowed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocialPartyMember), &Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready_SetBit(void* Obj)
	{
		((FSocialPartyMember*)Obj)->_ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready = { "_ready", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocialPartyMember), &Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__location_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _location), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__powerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__powerId = { "_powerId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _powerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__powerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__powerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterId = { "_characterId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _characterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__gameRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__gameRole = { "_gameRole", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _gameRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__gameRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__gameRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__prestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__prestigeLevel = { "_prestigeLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _prestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__prestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__prestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterLevel = { "_characterLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _characterLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerRank_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerRank = { "_playerRank", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _playerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__uniquePlayerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__uniquePlayerId = { "_uniquePlayerId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _uniquePlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__uniquePlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__uniquePlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__platformSessionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__platformSessionId = { "_platformSessionId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _platformSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__platformSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__platformSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerName = { "_playerName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _playerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialPartyMember.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh = { "_customizationMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialPartyMember, _customizationMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh_Inner = { "_customizationMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialPartyMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__disconnectionPenaltyEndOfBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__isStateInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__roleRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__postMatchmakingRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__crossplayAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__ready,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__powerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__gameRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__prestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__characterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__uniquePlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__platformSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPartyMember_Statics::NewProp__customizationMesh_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialPartyMember_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"SocialPartyMember",
		sizeof(FSocialPartyMember),
		alignof(FSocialPartyMember),
		Z_Construct_UScriptStruct_FSocialPartyMember_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPartyMember_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialPartyMember()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialPartyMember_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialPartyMember"), sizeof(FSocialPartyMember), Get_Z_Construct_UScriptStruct_FSocialPartyMember_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialPartyMember_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialPartyMember_Hash() { return 1127368739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
