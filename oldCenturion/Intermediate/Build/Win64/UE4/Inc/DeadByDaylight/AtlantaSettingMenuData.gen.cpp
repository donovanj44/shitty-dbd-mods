// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaSettingMenuData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaSettingMenuData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSettingMenuData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaSettingMenuType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOverlayMode();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOverlayTabs();
// End Cross Module References
class UScriptStruct* FAtlantaSettingMenuData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaSettingMenuData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaSettingMenuData"), sizeof(FAtlantaSettingMenuData), Get_Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaSettingMenuData>()
{
	return FAtlantaSettingMenuData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaSettingMenuData(FAtlantaSettingMenuData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaSettingMenuData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSettingMenuData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSettingMenuData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaSettingMenuData")),new UScriptStruct::TCppStructOps<FAtlantaSettingMenuData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaSettingMenuData;
	struct Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverlayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverlayTab;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlayTab_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSettingMenuData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaSettingMenuData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType_MetaData[] = {
		{ "Category", "AtlantaSettingMenuData" },
		{ "ModuleRelativePath", "Public/AtlantaSettingMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType = { "MenuType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSettingMenuData, MenuType), Z_Construct_UEnum_DeadByDaylight_EAtlantaSettingMenuType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AtlantaSettingMenuData" },
		{ "ModuleRelativePath", "Public/AtlantaSettingMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSettingMenuData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode_MetaData[] = {
		{ "Category", "AtlantaSettingMenuData" },
		{ "ModuleRelativePath", "Public/AtlantaSettingMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode = { "OverlayMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSettingMenuData, OverlayMode), Z_Construct_UEnum_DeadByDaylight_EOverlayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab_MetaData[] = {
		{ "Category", "AtlantaSettingMenuData" },
		{ "ModuleRelativePath", "Public/AtlantaSettingMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab = { "OverlayTab", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaSettingMenuData, OverlayTab), Z_Construct_UEnum_DeadByDaylight_EOverlayTabs, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_MenuType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::NewProp_OverlayTab_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaSettingMenuData",
		sizeof(FAtlantaSettingMenuData),
		alignof(FAtlantaSettingMenuData),
		Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSettingMenuData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaSettingMenuData"), sizeof(FAtlantaSettingMenuData), Get_Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaSettingMenuData_Hash() { return 4292184405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
