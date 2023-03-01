// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSettingsPerUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettingsPerUser() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UAkSettingsPerUser::StaticRegisterNativesUAkSettingsPerUser()
	{
	}
	UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister()
	{
		return UAkSettingsPerUser::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettingsPerUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDataGenerationSkipLanguage_MetaData[];
#endif
		static void NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SoundDataGenerationSkipLanguage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSyncSelection_MetaData[];
#endif
		static void NewProp_AutoSyncSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoSyncSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WaapiPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiIPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WaapiIPAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettingsPerUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettingsPerUser.h" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->SoundDataGenerationSkipLanguage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage = { "SoundDataGenerationSkipLanguage", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData[] = {
		{ "Category", "AkSettingsPerUser" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->AutoSyncSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection = { "AutoSyncSelection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData[] = {
		{ "Category", "AkSettingsPerUser" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort = { "WaapiPort", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiPort), METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData[] = {
		{ "Category", "AkSettingsPerUser" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress = { "WaapiIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiIPAddress), METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "Category", "AkSettingsPerUser" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "Category", "AkSettingsPerUser" },
		{ "ModuleRelativePath", "Public/AkSettingsPerUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettingsPerUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettingsPerUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams = {
		&UAkSettingsPerUser::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSettingsPerUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettingsPerUser, 1419383321);
	template<> AKAUDIO_API UClass* StaticClass<UAkSettingsPerUser>()
	{
		return UAkSettingsPerUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettingsPerUser(Z_Construct_UClass_UAkSettingsPerUser, &UAkSettingsPerUser::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettingsPerUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettingsPerUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
