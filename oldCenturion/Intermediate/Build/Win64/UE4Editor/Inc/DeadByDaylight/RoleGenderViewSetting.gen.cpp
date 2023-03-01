// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RoleGenderViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoleGenderViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleGenderViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGender();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleDropdown();
// End Cross Module References
class UScriptStruct* FRoleGenderViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRoleGenderViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoleGenderViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RoleGenderViewSetting"), sizeof(FRoleGenderViewSetting), Get_Z_Construct_UScriptStruct_FRoleGenderViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRoleGenderViewSetting>()
{
	return FRoleGenderViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoleGenderViewSetting(FRoleGenderViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RoleGenderViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleGenderViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleGenderViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoleGenderViewSetting")),new UScriptStruct::TCppStructOps<FRoleGenderViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRoleGenderViewSetting;
	struct Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleDropdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoleDropdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoleGenderViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoleGenderViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "RoleGenderViewSetting" },
		{ "ModuleRelativePath", "Public/RoleGenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleGenderViewSetting, Settings), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "RoleGenderViewSetting" },
		{ "ModuleRelativePath", "Public/RoleGenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleGenderViewSetting, Gender), Z_Construct_UEnum_DBDSharedTypes_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_RoleDropdown_MetaData[] = {
		{ "Category", "RoleGenderViewSetting" },
		{ "ModuleRelativePath", "Public/RoleGenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_RoleDropdown = { "RoleDropdown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleGenderViewSetting, RoleDropdown), Z_Construct_UScriptStruct_FRoleDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_RoleDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_RoleDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "RoleGenderViewSetting" },
		{ "ModuleRelativePath", "Public/RoleGenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoleGenderViewSetting, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_RoleDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RoleGenderViewSetting",
		sizeof(FRoleGenderViewSetting),
		alignof(FRoleGenderViewSetting),
		Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoleGenderViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoleGenderViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoleGenderViewSetting"), sizeof(FRoleGenderViewSetting), Get_Z_Construct_UScriptStruct_FRoleGenderViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoleGenderViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoleGenderViewSetting_Hash() { return 1513192136U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
