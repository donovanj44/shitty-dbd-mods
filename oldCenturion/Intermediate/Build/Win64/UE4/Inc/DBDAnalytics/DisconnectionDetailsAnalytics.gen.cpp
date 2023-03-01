// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DisconnectionDetailsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisconnectionDetailsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EDoorStatus();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EHatchStatus();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_ECharacterStatus();
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EHealthStatus();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FDisconnectionDetailsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DisconnectionDetailsAnalytics"), sizeof(FDisconnectionDetailsAnalytics), Get_Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDisconnectionDetailsAnalytics>()
{
	return FDisconnectionDetailsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDisconnectionDetailsAnalytics(FDisconnectionDetailsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DisconnectionDetailsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionDetailsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionDetailsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DisconnectionDetailsAnalytics")),new UScriptStruct::TCppStructOps<FDisconnectionDetailsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionDetailsAnalytics;
	struct Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisconnectionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisconnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HatchStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HatchStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HatchStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratorActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterStatus;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterStatus_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterStatus_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Health_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisconnectionDetailsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType = { "DisconnectionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, DisconnectionType), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus = { "DoorStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, DoorStatus), Z_Construct_UEnum_DBDAnalytics_EDoorStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus = { "HatchStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, HatchStatus), Z_Construct_UEnum_DBDAnalytics_EHatchStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_GeneratorActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_GeneratorActivated = { "GeneratorActivated", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, GeneratorActivated), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_GeneratorActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_GeneratorActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus = { "CharacterStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, CharacterStatus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_Inner = { "CharacterStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDAnalytics_ECharacterStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, Health), Z_Construct_UEnum_DBDAnalytics_EHealthStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Reason_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_InGameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_InGameTime = { "InGameTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, InGameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_InGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_InGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_PlayerPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionDetailsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_PlayerPlatform = { "PlayerPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionDetailsAnalytics, PlayerPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_PlayerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_PlayerPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DisconnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_DoorStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_HatchStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_GeneratorActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_CharacterStatus_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Health_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_InGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::NewProp_PlayerPlatform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DisconnectionDetailsAnalytics",
		sizeof(FDisconnectionDetailsAnalytics),
		alignof(FDisconnectionDetailsAnalytics),
		Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DisconnectionDetailsAnalytics"), sizeof(FDisconnectionDetailsAnalytics), Get_Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDisconnectionDetailsAnalytics_Hash() { return 4123500280U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
