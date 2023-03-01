// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GamePresetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePresetData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGamePresetData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameBotsData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayMode();
// End Cross Module References
class UScriptStruct* FGamePresetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGamePresetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamePresetData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GamePresetData"), sizeof(FGamePresetData), Get_Z_Construct_UScriptStruct_FGamePresetData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGamePresetData>()
{
	return FGamePresetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamePresetData(FGamePresetData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GamePresetData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePresetData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePresetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamePresetData")),new UScriptStruct::TCppStructOps<FGamePresetData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGamePresetData;
	struct Z_Construct_UScriptStruct_FGamePresetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__botsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__botsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__gameplayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__gameplayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__privateMatch_MetaData[];
#endif
		static void NewProp__privateMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__privateMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowDlcContent_MetaData[];
#endif
		static void NewProp__allowDlcContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowDlcContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__characterAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__characterAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customizationItemAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__customizationItemAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemAddonAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__itemAddonAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__itemAddonAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__itemAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__itemAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offeringAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__offeringAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__offeringAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__perkAvailabilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapAvailabilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__mapAvailabilities;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__mapAvailabilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamePresetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamePresetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__botsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__botsData = { "_botsData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _botsData), Z_Construct_UScriptStruct_FGameBotsData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__botsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__botsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode = { "_gameplayMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _gameplayMode), Z_Construct_UEnum_DeadByDaylight_EGameplayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch_SetBit(void* Obj)
	{
		((FGamePresetData*)Obj)->_privateMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch = { "_privateMatch", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGamePresetData), &Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent_SetBit(void* Obj)
	{
		((FGamePresetData*)Obj)->_allowDlcContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent = { "_allowDlcContent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGamePresetData), &Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities = { "_characterAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _characterAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities_Inner = { "_characterAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities = { "_customizationItemAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _customizationItemAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities_Inner = { "_customizationItemAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities = { "_itemAddonAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _itemAddonAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities_Inner = { "_itemAddonAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities = { "_itemAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _itemAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities_Inner = { "_itemAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities = { "_offeringAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _offeringAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities_Inner = { "_offeringAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities = { "_perkAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _perkAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities_Inner = { "_perkAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/GamePresetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities = { "_mapAvailabilities", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePresetData, _mapAvailabilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities_Inner = { "_mapAvailabilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamePresetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__botsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__gameplayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__privateMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__allowDlcContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__characterAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__customizationItemAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAddonAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__itemAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__offeringAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__perkAvailabilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePresetData_Statics::NewProp__mapAvailabilities_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamePresetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GamePresetData",
		sizeof(FGamePresetData),
		alignof(FGamePresetData),
		Z_Construct_UScriptStruct_FGamePresetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePresetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePresetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamePresetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamePresetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamePresetData"), sizeof(FGamePresetData), Get_Z_Construct_UScriptStruct_FGamePresetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamePresetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamePresetData_Hash() { return 1292738780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
