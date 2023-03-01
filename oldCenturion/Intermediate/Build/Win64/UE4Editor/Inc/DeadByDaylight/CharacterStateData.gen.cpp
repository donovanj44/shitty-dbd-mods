// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStateData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStateData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FCharacterStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStateData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterStateData"), sizeof(FCharacterStateData), Get_Z_Construct_UScriptStruct_FCharacterStateData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterStateData>()
{
	return FCharacterStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterStateData(FCharacterStateData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterStateData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterStateData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterStateData")),new UScriptStruct::TCppStructOps<FCharacterStateData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterStateData;
	struct Z_Construct_UScriptStruct_FCharacterStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addonIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__addonIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__powerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__pips;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds = { "_addonIds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStateData, _addonIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds_Inner = { "_addonIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__powerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__powerId = { "_powerId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStateData, _powerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__powerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__powerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__pips_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__pips = { "_pips", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStateData, _pips), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__pips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__pips_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__addonIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__powerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStateData_Statics::NewProp__pips,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterStateData",
		sizeof(FCharacterStateData),
		alignof(FCharacterStateData),
		Z_Construct_UScriptStruct_FCharacterStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterStateData"), sizeof(FCharacterStateData), Get_Z_Construct_UScriptStruct_FCharacterStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterStateData_Hash() { return 4095521768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
