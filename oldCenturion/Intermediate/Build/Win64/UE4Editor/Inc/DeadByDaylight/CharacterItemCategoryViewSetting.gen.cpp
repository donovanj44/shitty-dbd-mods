// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterItemCategoryViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterItemCategoryViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown();
// End Cross Module References
class UScriptStruct* FCharacterItemCategoryViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterItemCategoryViewSetting"), sizeof(FCharacterItemCategoryViewSetting), Get_Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterItemCategoryViewSetting>()
{
	return FCharacterItemCategoryViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterItemCategoryViewSetting(FCharacterItemCategoryViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterItemCategoryViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterItemCategoryViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterItemCategoryViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterItemCategoryViewSetting")),new UScriptStruct::TCppStructOps<FCharacterItemCategoryViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterItemCategoryViewSetting;
	struct Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDropdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterDropdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterItemCategoryViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterItemCategoryViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "CharacterItemCategoryViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterItemCategoryViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterItemCategoryViewSetting, Settings), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_CharacterDropdown_MetaData[] = {
		{ "Category", "CharacterItemCategoryViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterItemCategoryViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_CharacterDropdown = { "CharacterDropdown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterItemCategoryViewSetting, CharacterDropdown), Z_Construct_UScriptStruct_FRoleItemCategoryDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_CharacterDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_CharacterDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "CharacterItemCategoryViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterItemCategoryViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterItemCategoryViewSetting, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_CharacterDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterItemCategoryViewSetting",
		sizeof(FCharacterItemCategoryViewSetting),
		alignof(FCharacterItemCategoryViewSetting),
		Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterItemCategoryViewSetting"), sizeof(FCharacterItemCategoryViewSetting), Get_Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting_Hash() { return 2779748687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
