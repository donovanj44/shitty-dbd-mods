// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GenderViewSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenderViewSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGenderViewSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGender();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown();
// End Cross Module References
class UScriptStruct* FGenderViewSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGenderViewSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenderViewSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GenderViewSetting"), sizeof(FGenderViewSetting), Get_Z_Construct_UScriptStruct_FGenderViewSetting_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGenderViewSetting>()
{
	return FGenderViewSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGenderViewSetting(FGenderViewSetting::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GenderViewSetting"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGenderViewSetting
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGenderViewSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GenderViewSetting")),new UScriptStruct::TCppStructOps<FGenderViewSetting>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGenderViewSetting;
	struct Z_Construct_UScriptStruct_FGenderViewSetting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoleItemCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenderViewSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GenderViewSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenderViewSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "GenderViewSetting" },
		{ "ModuleRelativePath", "Public/GenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenderViewSetting, Settings), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "GenderViewSetting" },
		{ "ModuleRelativePath", "Public/GenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenderViewSetting, Gender), Z_Construct_UEnum_DBDSharedTypes_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_RoleItemCategory_MetaData[] = {
		{ "Category", "GenderViewSetting" },
		{ "ModuleRelativePath", "Public/GenderViewSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_RoleItemCategory = { "RoleItemCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenderViewSetting, RoleItemCategory), Z_Construct_UScriptStruct_FRoleItemCategoryDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_RoleItemCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_RoleItemCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenderViewSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenderViewSetting_Statics::NewProp_RoleItemCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenderViewSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GenderViewSetting",
		sizeof(FGenderViewSetting),
		alignof(FGenderViewSetting),
		Z_Construct_UScriptStruct_FGenderViewSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenderViewSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenderViewSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGenderViewSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GenderViewSetting"), sizeof(FGenderViewSetting), Get_Z_Construct_UScriptStruct_FGenderViewSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGenderViewSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGenderViewSetting_Hash() { return 1413764387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
