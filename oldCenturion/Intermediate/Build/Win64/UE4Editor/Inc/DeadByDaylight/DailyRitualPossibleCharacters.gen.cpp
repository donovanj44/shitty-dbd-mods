// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualPossibleCharacters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualPossibleCharacters() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FDailyRitualPossibleCharacters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRitualPossibleCharacters"), sizeof(FDailyRitualPossibleCharacters), Get_Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRitualPossibleCharacters>()
{
	return FDailyRitualPossibleCharacters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualPossibleCharacters(FDailyRitualPossibleCharacters::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRitualPossibleCharacters"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualPossibleCharacters
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualPossibleCharacters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualPossibleCharacters")),new UScriptStruct::TCppStructOps<FDailyRitualPossibleCharacters>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualPossibleCharacters;
	struct Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectOneCharacterFromRoles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectOneCharacterFromRoles;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectOneCharacterFromRoles_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectOneCharacterFromRoles_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Roles_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Roles_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualPossibleCharacters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualPossibleCharacters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_MetaData[] = {
		{ "Category", "DailyRitualPossibleCharacters" },
		{ "ModuleRelativePath", "Public/DailyRitualPossibleCharacters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles = { "SelectOneCharacterFromRoles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualPossibleCharacters, SelectOneCharacterFromRoles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_Inner = { "SelectOneCharacterFromRoles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "DailyRitualPossibleCharacters" },
		{ "ModuleRelativePath", "Public/DailyRitualPossibleCharacters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualPossibleCharacters, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs_MetaData[] = {
		{ "Category", "DailyRitualPossibleCharacters" },
		{ "ModuleRelativePath", "Public/DailyRitualPossibleCharacters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs = { "CharacterIDs", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualPossibleCharacters, CharacterIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs_Inner = { "CharacterIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_SelectOneCharacterFromRoles_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_Roles_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::NewProp_CharacterIDs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DailyRitualPossibleCharacters",
		sizeof(FDailyRitualPossibleCharacters),
		alignof(FDailyRitualPossibleCharacters),
		Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualPossibleCharacters"), sizeof(FDailyRitualPossibleCharacters), Get_Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualPossibleCharacters_Hash() { return 1816010505U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
