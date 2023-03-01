// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EffectCameraTypeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectCameraTypeSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEffectCameraTypeSettings();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
// End Cross Module References
class UScriptStruct* FEffectCameraTypeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectCameraTypeSettings, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EffectCameraTypeSettings"), sizeof(FEffectCameraTypeSettings), Get_Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEffectCameraTypeSettings>()
{
	return FEffectCameraTypeSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectCameraTypeSettings(FEffectCameraTypeSettings::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EffectCameraTypeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectCameraTypeSettings
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectCameraTypeSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EffectCameraTypeSettings")),new UScriptStruct::TCppStructOps<FEffectCameraTypeSettings>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEffectCameraTypeSettings;
	struct Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityInThirdPerson_MetaData[];
#endif
		static void NewProp_VisibilityInThirdPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityInThirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityInFirstPerson_MetaData[];
#endif
		static void NewProp_VisibilityInFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibilityInFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffectCameraTypeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectCameraTypeSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson_MetaData[] = {
		{ "Category", "EffectCameraTypeSettings" },
		{ "ModuleRelativePath", "Public/EffectCameraTypeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson_SetBit(void* Obj)
	{
		((FEffectCameraTypeSettings*)Obj)->VisibilityInThirdPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson = { "VisibilityInThirdPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEffectCameraTypeSettings), &Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson_MetaData[] = {
		{ "Category", "EffectCameraTypeSettings" },
		{ "ModuleRelativePath", "Public/EffectCameraTypeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson_SetBit(void* Obj)
	{
		((FEffectCameraTypeSettings*)Obj)->VisibilityInFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson = { "VisibilityInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEffectCameraTypeSettings), &Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "EffectCameraTypeSettings" },
		{ "ModuleRelativePath", "Public/EffectCameraTypeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectCameraTypeSettings, Category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInThirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_VisibilityInFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::NewProp_Category_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EffectCameraTypeSettings",
		sizeof(FEffectCameraTypeSettings),
		alignof(FEffectCameraTypeSettings),
		Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectCameraTypeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectCameraTypeSettings"), sizeof(FEffectCameraTypeSettings), Get_Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectCameraTypeSettings_Hash() { return 3339763666U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
