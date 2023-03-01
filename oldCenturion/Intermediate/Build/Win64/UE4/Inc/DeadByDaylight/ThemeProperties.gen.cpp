// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ThemeProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FThemeProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementSubstitutions();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EThemeColorId();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
class UScriptStruct* FThemeProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FThemeProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FThemeProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ThemeProperties"), sizeof(FThemeProperties), Get_Z_Construct_UScriptStruct_FThemeProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FThemeProperties>()
{
	return FThemeProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FThemeProperties(FThemeProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ThemeProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFThemeProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFThemeProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ThemeProperties")),new UScriptStruct::TCppStructOps<FThemeProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFThemeProperties;
	struct Z_Construct_UScriptStruct_FThemeProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gesture_MetaData[];
#endif
		static void NewProp_Gesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Gesture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcIDString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcIDString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstitutionElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubstitutionElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubstitutionElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeSelectionOfferingEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeSelectionOfferingEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeSelectionOfferingEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeColorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeColorId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeColorId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThemeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeSoundBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioThemeSoundBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioThemeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateWeather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateWeather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateThemes_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateThemes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Weather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FThemeProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThemeProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture_SetBit(void* Obj)
	{
		((FThemeProperties*)Obj)->Gesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FThemeProperties), &Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Blackboard_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Blackboard = { "Blackboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, Blackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Blackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DlcIDString_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DlcIDString = { "DlcIDString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, DlcIDString), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DlcIDString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DlcIDString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements = { "SubstitutionElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, SubstitutionElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements_Inner = { "SubstitutionElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayElementSubstitutions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType = { "ThemeSelectionOfferingEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, ThemeSelectionOfferingEffectType), Z_Construct_UEnum_DeadByDaylight_EOfferingEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId = { "ThemeColorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, ThemeColorId), Z_Construct_UEnum_DBDSharedTypes_EThemeColorId, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeNumber_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeNumber = { "ThemeNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, ThemeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_MapPath_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, MapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_MapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_MapPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_TilePath_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_TilePath = { "TilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, TilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_TilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_TilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeSoundBank_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeSoundBank = { "AudioThemeSoundBank", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, AudioThemeSoundBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeSoundBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeSoundBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeEvent_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeEvent = { "AudioThemeEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, AudioThemeEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateWeather_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateWeather = { "AudioStateWeather", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, AudioStateWeather), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateWeather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateThemes_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateThemes = { "AudioStateThemes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, AudioStateThemes), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateThemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateThemes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Weather_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Weather = { "Weather", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, Weather), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Weather_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Weather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ThemeProperties" },
		{ "ModuleRelativePath", "Public/ThemeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FThemeProperties, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThemeProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Gesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Blackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DlcIDString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_SubstitutionElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeSelectionOfferingEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeColorId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_ThemeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_MapPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_TilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeSoundBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioThemeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateWeather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_AudioStateThemes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Weather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThemeProperties_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThemeProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ThemeProperties",
		sizeof(FThemeProperties),
		alignof(FThemeProperties),
		Z_Construct_UScriptStruct_FThemeProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FThemeProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThemeProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FThemeProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FThemeProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ThemeProperties"), sizeof(FThemeProperties), Get_Z_Construct_UScriptStruct_FThemeProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FThemeProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FThemeProperties_Hash() { return 1452162428U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
