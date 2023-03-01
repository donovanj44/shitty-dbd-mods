// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedBloodwebNodeGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedBloodwebNodeGate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeGateTypes();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FLegacySavedBloodwebNodeGate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedBloodwebNodeGate"), sizeof(FLegacySavedBloodwebNodeGate), Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedBloodwebNodeGate>()
{
	return FLegacySavedBloodwebNodeGate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedBloodwebNodeGate(FLegacySavedBloodwebNodeGate::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedBloodwebNodeGate"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebNodeGate
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebNodeGate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedBloodwebNodeGate")),new UScriptStruct::TCppStructOps<FLegacySavedBloodwebNodeGate>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebNodeGate;
	struct Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Param;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GateType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GateType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedBloodwebNodeGate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Param_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebNodeGate, Param), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Param_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType = { "GateType", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebNodeGate, GateType), Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeGateTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebNodeGate, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebNodeGate, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebNodeGate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebNodeGate, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_GateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedBloodwebNodeGate",
		sizeof(FLegacySavedBloodwebNodeGate),
		alignof(FLegacySavedBloodwebNodeGate),
		Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedBloodwebNodeGate"), sizeof(FLegacySavedBloodwebNodeGate), Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebNodeGate_Hash() { return 491005795U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
