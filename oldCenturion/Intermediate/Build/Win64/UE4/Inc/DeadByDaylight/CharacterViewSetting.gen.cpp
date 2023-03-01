// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDropdown();
// End Cross Module References
class UScriptStruct* FCharacterViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterViewSetting"), sizeof(FCharacterViewSetting), Get_Z_Construct_UScriptStruct_FCharacterViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterViewSetting>()
{
	return FCharacterViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterViewSetting(FCharacterViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterViewSetting")),new UScriptStruct::TCppStructOps<FCharacterViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterViewSetting;
	struct Z_Construct_UScriptStruct_FCharacterViewSetting_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "CharacterViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterViewSetting, Settings), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_CharacterDropdown_MetaData[] = {
		{ "Category", "CharacterViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_CharacterDropdown = { "CharacterDropdown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterViewSetting, CharacterDropdown), Z_Construct_UScriptStruct_FCharacterDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_CharacterDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_CharacterDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "CharacterViewSetting" },
		{ "ModuleRelativePath", "Public/CharacterViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterViewSetting, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_CharacterDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterViewSetting",
		sizeof(FCharacterViewSetting),
		alignof(FCharacterViewSetting),
		Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterViewSetting"), sizeof(FCharacterViewSetting), Get_Z_Construct_UScriptStruct_FCharacterViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterViewSetting_Hash() { return 1844538638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
