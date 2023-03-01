// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutfitViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutfitViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutfitViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutfitDropdown();
// End Cross Module References
class UScriptStruct* FOutfitViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOutfitViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutfitViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OutfitViewSetting"), sizeof(FOutfitViewSetting), Get_Z_Construct_UScriptStruct_FOutfitViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOutfitViewSetting>()
{
	return FOutfitViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutfitViewSetting(FOutfitViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OutfitViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutfitViewSetting")),new UScriptStruct::TCppStructOps<FOutfitViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitViewSetting;
	struct Z_Construct_UScriptStruct_FOutfitViewSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitDropdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutfitDropdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OutfitViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutfitViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "OutfitViewSetting" },
		{ "ModuleRelativePath", "Public/OutfitViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitViewSetting, Settings), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_OutfitDropdown_MetaData[] = {
		{ "Category", "OutfitViewSetting" },
		{ "ModuleRelativePath", "Public/OutfitViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_OutfitDropdown = { "OutfitDropdown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitViewSetting, OutfitDropdown), Z_Construct_UScriptStruct_FOutfitDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_OutfitDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_OutfitDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "OutfitViewSetting" },
		{ "ModuleRelativePath", "Public/OutfitViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitViewSetting, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_OutfitDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OutfitViewSetting",
		sizeof(FOutfitViewSetting),
		alignof(FOutfitViewSetting),
		Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutfitViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutfitViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutfitViewSetting"), sizeof(FOutfitViewSetting), Get_Z_Construct_UScriptStruct_FOutfitViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutfitViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutfitViewSetting_Hash() { return 4174561419U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
