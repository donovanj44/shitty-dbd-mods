// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
// End Cross Module References
class UScriptStruct* FPlayerStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStateData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerStateData"), sizeof(FPlayerStateData), Get_Z_Construct_UScriptStruct_FPlayerStateData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerStateData>()
{
	return FPlayerStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStateData(FPlayerStateData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerStateData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerStateData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerStateData")),new UScriptStruct::TCppStructOps<FPlayerStateData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerStateData;
	struct Z_Construct_UScriptStruct_FPlayerStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__prestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__prestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEscapeHatch_MetaData[];
#endif
		static void NewProp__isEscapeHatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEscapeHatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__playerGameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__playerGameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeavingMatch_MetaData[];
#endif
		static void NewProp_IsLeavingMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeavingMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedPerkLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipedPerkLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipedPerkLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedPerkIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipedPerkIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipedPerkIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedFavorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipedFavorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__prestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__prestigeLevel = { "_prestigeLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, _prestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__prestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__prestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch_SetBit(void* Obj)
	{
		((FPlayerStateData*)Obj)->_isEscapeHatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch = { "_isEscapeHatch", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStateData), &Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState = { "_playerGameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, _playerGameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch_SetBit(void* Obj)
	{
		((FPlayerStateData*)Obj)->IsLeavingMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch = { "IsLeavingMatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStateData), &Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels = { "EquipedPerkLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, EquipedPerkLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels_Inner = { "EquipedPerkLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds = { "EquipedPerkIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, EquipedPerkIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds_Inner = { "EquipedPerkIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedFavorId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedFavorId = { "EquipedFavorId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, EquipedFavorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedFavorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedFavorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStateData, CharacterLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_CharacterLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__prestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__isEscapeHatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp__playerGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_IsLeavingMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedPerkIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_EquipedFavorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStateData_Statics::NewProp_CharacterLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerStateData",
		sizeof(FPlayerStateData),
		alignof(FPlayerStateData),
		Z_Construct_UScriptStruct_FPlayerStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStateData"), sizeof(FPlayerStateData), Get_Z_Construct_UScriptStruct_FPlayerStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStateData_Hash() { return 2249213406U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
