// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerPersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPersistentData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPersistentData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EProviderFlag();
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EPlatformFlag();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualInstance();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FPlayerPersistentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerPersistentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPersistentData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerPersistentData"), sizeof(FPlayerPersistentData), Get_Z_Construct_UScriptStruct_FPlayerPersistentData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerPersistentData>()
{
	return FPlayerPersistentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerPersistentData(FPlayerPersistentData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerPersistentData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerPersistentData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerPersistentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerPersistentData")),new UScriptStruct::TCppStructOps<FPlayerPersistentData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerPersistentData;
	struct Z_Construct_UScriptStruct_FPlayerPersistentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startSessionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__startSessionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__contentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerProvider;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlayerProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerPlatform;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PlayerPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAvailableRitual_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedAvailableRitual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPersistentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__startSessionTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__startSessionTime = { "_startSessionTime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, _startSessionTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__startSessionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__startSessionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__contentVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__contentVersion = { "_contentVersion", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, _contentVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__contentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__contentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__playerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__playerId = { "_playerId", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, _playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider = { "PlayerProvider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, PlayerProvider), Z_Construct_UEnum_PlatformsProviders_EProviderFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform = { "PlayerPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, PlayerPlatform), Z_Construct_UEnum_PlatformsProviders_EPlatformFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_SavedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_SavedData = { "SavedData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, SavedData), Z_Construct_UScriptStruct_FPlayerSavedProfileData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_SavedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_SavedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CachedAvailableRitual_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CachedAvailableRitual = { "CachedAvailableRitual", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, CachedAvailableRitual), Z_Construct_UScriptStruct_FDailyRitualInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CachedAvailableRitual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CachedAvailableRitual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CurrentLoadout_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CurrentLoadout = { "CurrentLoadout", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, CurrentLoadout), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CurrentLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CurrentLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_StartingLoadout_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_StartingLoadout = { "StartingLoadout", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, StartingLoadout), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_StartingLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_StartingLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole = { "GameRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPersistentData, GameRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__startSessionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__contentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp__playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_PlayerPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_SavedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CachedAvailableRitual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_CurrentLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_StartingLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::NewProp_GameRole_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerPersistentData",
		sizeof(FPlayerPersistentData),
		alignof(FPlayerPersistentData),
		Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerPersistentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerPersistentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerPersistentData"), sizeof(FPlayerPersistentData), Get_Z_Construct_UScriptStruct_FPlayerPersistentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerPersistentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerPersistentData_Hash() { return 3757258504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
