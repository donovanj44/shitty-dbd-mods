// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MaterialPerThemeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialPerThemeSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMaterialPerThemeSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMaterialPerThemeSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMaterialPerThemeData_NoRegister();
// End Cross Module References
	void UMaterialPerThemeSettings::StaticRegisterNativesUMaterialPerThemeSettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialPerThemeSettings_NoRegister()
	{
		return UMaterialPerThemeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialPerThemeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__themeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__themeMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__themeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__themeMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialPerThemeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPerThemeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialPerThemeSettings.h" },
		{ "ModuleRelativePath", "Public/MaterialPerThemeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__data_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialPerThemeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialPerThemeSettings, _data), Z_Construct_UClass_UMaterialPerThemeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_MetaData[] = {
		{ "Category", "MaterialPerThemeSettings" },
		{ "ModuleRelativePath", "Public/MaterialPerThemeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap = { "_themeMap", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialPerThemeSettings, _themeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_Key_KeyProp = { "_themeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_ValueProp = { "_themeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialPerThemeData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialPerThemeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPerThemeSettings_Statics::NewProp__themeMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialPerThemeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialPerThemeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialPerThemeSettings_Statics::ClassParams = {
		&UMaterialPerThemeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialPerThemeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPerThemeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialPerThemeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialPerThemeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialPerThemeSettings, 2615178991);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMaterialPerThemeSettings>()
	{
		return UMaterialPerThemeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialPerThemeSettings(Z_Construct_UClass_UMaterialPerThemeSettings, &UMaterialPerThemeSettings::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMaterialPerThemeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialPerThemeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
