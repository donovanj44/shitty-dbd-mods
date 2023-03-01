// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LevelReadyToPlayRequirements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelReadyToPlayRequirements() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelReadyToPlayRequirements::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LevelReadyToPlayRequirements"), sizeof(FLevelReadyToPlayRequirements), Get_Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLevelReadyToPlayRequirements>()
{
	return FLevelReadyToPlayRequirements::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelReadyToPlayRequirements(FLevelReadyToPlayRequirements::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LevelReadyToPlayRequirements"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLevelReadyToPlayRequirements
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLevelReadyToPlayRequirements()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelReadyToPlayRequirements")),new UScriptStruct::TCppStructOps<FLevelReadyToPlayRequirements>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLevelReadyToPlayRequirements;
	struct Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addonCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_addonCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_itemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_perkCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelReadyToPlayRequirements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelReadyToPlayRequirements>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_addonCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayRequirements.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_addonCount = { "addonCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelReadyToPlayRequirements, addonCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_addonCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_addonCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_itemCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayRequirements.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelReadyToPlayRequirements, itemCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_itemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_itemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_perkCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayRequirements.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_perkCount = { "perkCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelReadyToPlayRequirements, perkCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_perkCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_perkCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayRequirements.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelReadyToPlayRequirements, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_addonCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_itemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_perkCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::NewProp_player,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LevelReadyToPlayRequirements",
		sizeof(FLevelReadyToPlayRequirements),
		alignof(FLevelReadyToPlayRequirements),
		Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelReadyToPlayRequirements"), sizeof(FLevelReadyToPlayRequirements), Get_Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements_Hash() { return 408577387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
