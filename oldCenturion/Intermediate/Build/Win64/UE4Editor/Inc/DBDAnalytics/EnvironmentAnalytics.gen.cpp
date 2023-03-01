// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EnvironmentAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FEnvironmentAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FEnvironmentAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvironmentAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EnvironmentAnalytics"), sizeof(FEnvironmentAnalytics), Get_Z_Construct_UScriptStruct_FEnvironmentAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FEnvironmentAnalytics>()
{
	return FEnvironmentAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvironmentAnalytics(FEnvironmentAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("EnvironmentAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFEnvironmentAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFEnvironmentAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvironmentAnalytics")),new UScriptStruct::TCppStructOps<FEnvironmentAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFEnvironmentAnalytics;
	struct Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControllerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingKeyboard_MetaData[];
#endif
		static void NewProp_IsUsingKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperatingSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperatingSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineResolutionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineResolutionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineResolutionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineResolutionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenResolutionSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenResolutionSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAutomaticResolution_MetaData[];
#endif
		static void NewProp_IsAutomaticResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAutomaticResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFullScreen_MetaData[];
#endif
		static void NewProp_IsFullScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFullScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualitySetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualitySetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cpu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cpu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GpuDriverVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GpuDriverVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GpuProviderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GpuProviderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GpuAdapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GpuAdapter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timezone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timezone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCountry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Endpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Endpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvironmentAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ControllerType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, ControllerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ControllerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard_SetBit(void* Obj)
	{
		((FEnvironmentAnalytics*)Obj)->IsUsingKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard = { "IsUsingKeyboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnvironmentAnalytics), &Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ContentVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ContentVersion = { "ContentVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, ContentVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ContentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ContentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_KrakenVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_KrakenVersion = { "KrakenVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, KrakenVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_KrakenVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_KrakenVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_OperatingSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_OperatingSystem = { "OperatingSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, OperatingSystem), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_OperatingSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_OperatingSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Device_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Device), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Provider_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionY = { "EngineResolutionY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, EngineResolutionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionX = { "EngineResolutionX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, EngineResolutionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ScreenResolutionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ScreenResolutionSetting = { "ScreenResolutionSetting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, ScreenResolutionSetting), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ScreenResolutionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ScreenResolutionSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution_SetBit(void* Obj)
	{
		((FEnvironmentAnalytics*)Obj)->IsAutomaticResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution = { "IsAutomaticResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnvironmentAnalytics), &Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen_SetBit(void* Obj)
	{
		((FEnvironmentAnalytics*)Obj)->IsFullScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen = { "IsFullScreen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEnvironmentAnalytics), &Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_QualitySetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_QualitySetting = { "QualitySetting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, QualitySetting), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_QualitySetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_QualitySetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Cpu_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Cpu = { "Cpu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Cpu), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Cpu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Cpu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuDriverVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuDriverVersion = { "GpuDriverVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, GpuDriverVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuDriverVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuDriverVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuProviderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuProviderName = { "GpuProviderName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, GpuProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuProviderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuAdapter_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuAdapter = { "GpuAdapter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, GpuAdapter), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuAdapter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_DeviceProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_DeviceProfile = { "DeviceProfile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, DeviceProfile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_DeviceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_DeviceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Timezone_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Timezone = { "Timezone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Timezone), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Timezone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Timezone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_SelectedCountry_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_SelectedCountry = { "SelectedCountry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, SelectedCountry), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_SelectedCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_SelectedCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Language_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Endpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Endpoint = { "Endpoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Endpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Endpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Endpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Environment_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Environment = { "Environment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnvironmentAnalytics, Environment), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Environment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsUsingKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ContentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_KrakenVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_OperatingSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_EngineResolutionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_ScreenResolutionSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsAutomaticResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_IsFullScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_QualitySetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Cpu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuDriverVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuProviderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_GpuAdapter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_DeviceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Timezone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_SelectedCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Endpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::NewProp_Environment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"EnvironmentAnalytics",
		sizeof(FEnvironmentAnalytics),
		alignof(FEnvironmentAnalytics),
		Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvironmentAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvironmentAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvironmentAnalytics"), sizeof(FEnvironmentAnalytics), Get_Z_Construct_UScriptStruct_FEnvironmentAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnvironmentAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvironmentAnalytics_Hash() { return 4253781410U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
