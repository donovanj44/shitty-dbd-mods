// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LobbyPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FLobbyPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLobbyPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPlayerData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LobbyPlayerData"), sizeof(FLobbyPlayerData), Get_Z_Construct_UScriptStruct_FLobbyPlayerData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLobbyPlayerData>()
{
	return FLobbyPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyPlayerData(FLobbyPlayerData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LobbyPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLobbyPlayerData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLobbyPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyPlayerData")),new UScriptStruct::TCppStructOps<FLobbyPlayerData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLobbyPlayerData;
	struct Z_Construct_UScriptStruct_FLobbyPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPlayerData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LobbyPlayerData",
		sizeof(FLobbyPlayerData),
		alignof(FLobbyPlayerData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyPlayerData"), sizeof(FLobbyPlayerData), Get_Z_Construct_UScriptStruct_FLobbyPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyPlayerData_Hash() { return 984034215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
