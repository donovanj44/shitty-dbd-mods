// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PartyMemberUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyMemberUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPartyMemberUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPartyMemberUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PartyMemberUIData"), sizeof(FPartyMemberUIData), Get_Z_Construct_UScriptStruct_FPartyMemberUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPartyMemberUIData>()
{
	return FPartyMemberUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyMemberUIData(FPartyMemberUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PartyMemberUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPartyMemberUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPartyMemberUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PartyMemberUIData")),new UScriptStruct::TCppStructOps<FPartyMemberUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPartyMemberUIData;
	struct Z_Construct_UScriptStruct_FPartyMemberUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mirrorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__mirrorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isReady_MetaData[];
#endif
		static void NewProp__isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isLocalPlayer_MetaData[];
#endif
		static void NewProp__isLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyMemberUIData" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerId = { "_playerId", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMemberUIData, _playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyMemberUIData" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerName = { "_playerName", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMemberUIData, _playerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__mirrorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyMemberUIData" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__mirrorId = { "_mirrorId", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyMemberUIData, _mirrorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__mirrorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__mirrorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyMemberUIData" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady_SetBit(void* Obj)
	{
		((FPartyMemberUIData*)Obj)->_isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady = { "_isReady", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPartyMemberUIData), &Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyMemberUIData" },
		{ "ModuleRelativePath", "Public/PartyMemberUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer_SetBit(void* Obj)
	{
		((FPartyMemberUIData*)Obj)->_isLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer = { "_isLocalPlayer", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPartyMemberUIData), &Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__mirrorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::NewProp__isLocalPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PartyMemberUIData",
		sizeof(FPartyMemberUIData),
		alignof(FPartyMemberUIData),
		Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyMemberUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyMemberUIData"), sizeof(FPartyMemberUIData), Get_Z_Construct_UScriptStruct_FPartyMemberUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyMemberUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyMemberUIData_Hash() { return 2380776253U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
