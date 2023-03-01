// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInfoData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfoData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKillerAttributesData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTeachableData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlotData();
// End Cross Module References
class UScriptStruct* FCharacterInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterInfoData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterInfoData"), sizeof(FCharacterInfoData), Get_Z_Construct_UScriptStruct_FCharacterInfoData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterInfoData>()
{
	return FCharacterInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterInfoData(FCharacterInfoData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterInfoData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterInfoData")),new UScriptStruct::TCppStructOps<FCharacterInfoData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterInfoData;
	struct Z_Construct_UScriptStruct_FCharacterInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKiller_MetaData[];
#endif
		static void NewProp_IsKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killerAttributesData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_killerAttributesData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PowerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeachablePerksData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeachablePerksData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeachablePerksData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCharacterInfoData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterInfoData), &Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller_SetBit(void* Obj)
	{
		((FCharacterInfoData*)Obj)->IsKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller = { "IsKiller", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterInfoData), &Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_killerAttributesData_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_killerAttributesData = { "killerAttributesData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfoData, killerAttributesData), Z_Construct_UScriptStruct_FKillerAttributesData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_killerAttributesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_killerAttributesData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_PowerData_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_PowerData = { "PowerData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfoData, PowerData), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_PowerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_PowerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData = { "TeachablePerksData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfoData, TeachablePerksData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData_Inner = { "TeachablePerksData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTeachableData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfoData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_SlotData_MetaData[] = {
		{ "Category", "CharacterInfoData" },
		{ "ModuleRelativePath", "Public/CharacterInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfoData, SlotData), Z_Construct_UScriptStruct_FCharacterSlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_SlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_SlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_IsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_killerAttributesData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_PowerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_TeachablePerksData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfoData_Statics::NewProp_SlotData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterInfoData",
		sizeof(FCharacterInfoData),
		alignof(FCharacterInfoData),
		Z_Construct_UScriptStruct_FCharacterInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterInfoData"), sizeof(FCharacterInfoData), Get_Z_Construct_UScriptStruct_FCharacterInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterInfoData_Hash() { return 646125181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
