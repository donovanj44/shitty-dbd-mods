// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TeachableTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeachableTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTeachableTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETeachableStatus();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FTeachableTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTeachableTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeachableTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TeachableTooltipData"), sizeof(FTeachableTooltipData), Get_Z_Construct_UScriptStruct_FTeachableTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTeachableTooltipData>()
{
	return FTeachableTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeachableTooltipData(FTeachableTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TeachableTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTeachableTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTeachableTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TeachableTooltipData")),new UScriptStruct::TCppStructOps<FTeachableTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTeachableTooltipData;
	struct Z_Construct_UScriptStruct_FTeachableTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeachableStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeachableStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeachableStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseInCharacterSelectionScreen_MetaData[];
#endif
		static void NewProp_UseInCharacterSelectionScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseInCharacterSelectionScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailabilityMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvailabilityMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeachableTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus = { "TeachableStatus", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, TeachableStatus), Z_Construct_UEnum_DeadByDaylight_ETeachableStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen_SetBit(void* Obj)
	{
		((FTeachableTooltipData*)Obj)->UseInCharacterSelectionScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen = { "UseInCharacterSelectionScreen", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTeachableTooltipData), &Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_EffectMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_EffectMessage = { "EffectMessage", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, EffectMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_EffectMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_EffectMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_AvailabilityMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_AvailabilityMessage = { "AvailabilityMessage", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, AvailabilityMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_AvailabilityMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_AvailabilityMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, ItemType), Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeachableTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeachableTooltipData, ItemRarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_TeachableStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_UseInCharacterSelectionScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_EffectMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_AvailabilityMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::NewProp_ItemRarity_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"TeachableTooltipData",
		sizeof(FTeachableTooltipData),
		alignof(FTeachableTooltipData),
		Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeachableTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeachableTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeachableTooltipData"), sizeof(FTeachableTooltipData), Get_Z_Construct_UScriptStruct_FTeachableTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeachableTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeachableTooltipData_Hash() { return 792071905U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
