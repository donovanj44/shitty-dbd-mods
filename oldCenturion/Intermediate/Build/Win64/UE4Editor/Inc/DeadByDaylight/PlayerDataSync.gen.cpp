// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerDataSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDataSync() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerDataSync();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateData();
// End Cross Module References
class UScriptStruct* FPlayerDataSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerDataSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerDataSync, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerDataSync"), sizeof(FPlayerDataSync), Get_Z_Construct_UScriptStruct_FPlayerDataSync_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerDataSync>()
{
	return FPlayerDataSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerDataSync(FPlayerDataSync::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerDataSync"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerDataSync
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerDataSync()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerDataSync")),new UScriptStruct::TCppStructOps<FPlayerDataSync>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerDataSync;
	struct Z_Construct_UScriptStruct_FPlayerDataSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedItemAddonIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipedItemAddonIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipedItemAddonIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipedItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizationCharms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizationCharms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomizationMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomizationMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerDataSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds = { "EquipedItemAddonIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDataSync, EquipedItemAddonIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds_Inner = { "EquipedItemAddonIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemId = { "EquipedItemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDataSync, EquipedItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms = { "CustomizationCharms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDataSync, CustomizationCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms_Inner = { "CustomizationCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh = { "CustomizationMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDataSync, CustomizationMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh_Inner = { "CustomizationMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDataSync, PlayerData), Z_Construct_UScriptStruct_FPlayerStateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerDataSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemAddonIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_EquipedItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_CustomizationMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDataSync_Statics::NewProp_PlayerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerDataSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerDataSync",
		sizeof(FPlayerDataSync),
		alignof(FPlayerDataSync),
		Z_Construct_UScriptStruct_FPlayerDataSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDataSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerDataSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerDataSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerDataSync"), sizeof(FPlayerDataSync), Get_Z_Construct_UScriptStruct_FPlayerDataSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerDataSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerDataSync_Hash() { return 1013237859U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
