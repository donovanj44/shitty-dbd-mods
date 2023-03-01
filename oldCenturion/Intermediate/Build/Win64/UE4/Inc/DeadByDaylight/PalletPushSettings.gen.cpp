// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PalletPushSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalletPushSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPalletPushSettings();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy();
// End Cross Module References
class UScriptStruct* FPalletPushSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPalletPushSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPalletPushSettings, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PalletPushSettings"), sizeof(FPalletPushSettings), Get_Z_Construct_UScriptStruct_FPalletPushSettings_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPalletPushSettings>()
{
	return FPalletPushSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPalletPushSettings(FPalletPushSettings::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PalletPushSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPalletPushSettings
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPalletPushSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PalletPushSettings")),new UScriptStruct::TCppStructOps<FPalletPushSettings>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPalletPushSettings;
	struct Z_Construct_UScriptStruct_FPalletPushSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletPushSideStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PalletPushSideStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PalletPushSideStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnorePlayerExecutingPulldown_MetaData[];
#endif
		static void NewProp_IgnorePlayerExecutingPulldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnorePlayerExecutingPulldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPalletPushSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PalletPushSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPalletPushSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy_MetaData[] = {
		{ "Category", "PalletPushSettings" },
		{ "ModuleRelativePath", "Public/PalletPushSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy = { "PalletPushSideStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPalletPushSettings, PalletPushSideStrategy), Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown_MetaData[] = {
		{ "Category", "PalletPushSettings" },
		{ "ModuleRelativePath", "Public/PalletPushSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown_SetBit(void* Obj)
	{
		((FPalletPushSettings*)Obj)->IgnorePlayerExecutingPulldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown = { "IgnorePlayerExecutingPulldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPalletPushSettings), &Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPalletPushSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_PalletPushSideStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPalletPushSettings_Statics::NewProp_IgnorePlayerExecutingPulldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPalletPushSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PalletPushSettings",
		sizeof(FPalletPushSettings),
		alignof(FPalletPushSettings),
		Z_Construct_UScriptStruct_FPalletPushSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPalletPushSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPalletPushSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPalletPushSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PalletPushSettings"), sizeof(FPalletPushSettings), Get_Z_Construct_UScriptStruct_FPalletPushSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPalletPushSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPalletPushSettings_Hash() { return 2866388922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
