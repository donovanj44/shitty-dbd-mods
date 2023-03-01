// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBloodwebSettings::StaticRegisterNativesUBloodwebSettings()
	{
	}
	UClass* Z_Construct_UClass_UBloodwebSettings_NoRegister()
	{
		return UBloodwebSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__duplicableItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__duplicableItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__duplicableItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebSettings.h" },
		{ "ModuleRelativePath", "Public/BloodwebSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems_MetaData[] = {
		{ "Category", "BloodwebSettings" },
		{ "ModuleRelativePath", "Public/BloodwebSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems = { "_duplicableItems", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebSettings, _duplicableItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems_Inner = { "_duplicableItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodwebSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebSettings_Statics::NewProp__duplicableItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebSettings_Statics::ClassParams = {
		&UBloodwebSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodwebSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebSettings, 4092386504);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodwebSettings>()
	{
		return UBloodwebSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebSettings(Z_Construct_UClass_UBloodwebSettings, &UBloodwebSettings::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodwebSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
