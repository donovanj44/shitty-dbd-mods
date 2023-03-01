// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TallyItemChangedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallyItemChangedData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTallyItemChangedData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEnergyTypeEnum();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
// End Cross Module References
class UScriptStruct* FTallyItemChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTallyItemChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTallyItemChangedData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TallyItemChangedData"), sizeof(FTallyItemChangedData), Get_Z_Construct_UScriptStruct_FTallyItemChangedData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTallyItemChangedData>()
{
	return FTallyItemChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTallyItemChangedData(FTallyItemChangedData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TallyItemChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyItemChangedData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyItemChangedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TallyItemChangedData")),new UScriptStruct::TCppStructOps<FTallyItemChangedData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTallyItemChangedData;
	struct Z_Construct_UScriptStruct_FTallyItemChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnergyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnergyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSet_MetaData[];
#endif
		static void NewProp_IsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTallyItemChangedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyLevel_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyLevel = { "EnergyLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyItemChangedData, EnergyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType = { "EnergyType", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyItemChangedData, EnergyType), Z_Construct_UEnum_DeadByDaylight_EEnergyTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet_SetBit(void* Obj)
	{
		((FTallyItemChangedData*)Obj)->IsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet = { "IsSet", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTallyItemChangedData), &Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon2_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon2 = { "Addon2", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyItemChangedData, Addon2), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon1_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon1 = { "Addon1", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyItemChangedData, Addon1), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "TallyItemChangedData" },
		{ "ModuleRelativePath", "Public/TallyItemChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTallyItemChangedData, Item), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_EnergyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_IsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Addon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TallyItemChangedData",
		sizeof(FTallyItemChangedData),
		alignof(FTallyItemChangedData),
		Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTallyItemChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTallyItemChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TallyItemChangedData"), sizeof(FTallyItemChangedData), Get_Z_Construct_UScriptStruct_FTallyItemChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTallyItemChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTallyItemChangedData_Hash() { return 3399220777U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
