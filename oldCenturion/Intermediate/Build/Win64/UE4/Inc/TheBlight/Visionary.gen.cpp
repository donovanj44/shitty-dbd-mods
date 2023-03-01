// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/Visionary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisionary() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UVisionary_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UVisionary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UVisionary::StaticRegisterNativesUVisionary()
	{
	}
	UClass* Z_Construct_UClass_UVisionary_NoRegister()
	{
		return UVisionary::StaticClass();
	}
	struct Z_Construct_UClass_UVisionary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraVisibilityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraVisibilityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisionary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisionary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Visionary.h" },
		{ "ModuleRelativePath", "Public/Visionary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisionary_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "Visionary" },
		{ "ModuleRelativePath", "Public/Visionary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisionary_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, UVisionary), STRUCT_OFFSET(UVisionary, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UVisionary_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisionary_Statics::NewProp__cooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisionary_Statics::NewProp__auraVisibilityRange_MetaData[] = {
		{ "Category", "Visionary" },
		{ "ModuleRelativePath", "Public/Visionary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisionary_Statics::NewProp__auraVisibilityRange = { "_auraVisibilityRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraVisibilityRange, UVisionary), STRUCT_OFFSET(UVisionary, _auraVisibilityRange), METADATA_PARAMS(Z_Construct_UClass_UVisionary_Statics::NewProp__auraVisibilityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVisionary_Statics::NewProp__auraVisibilityRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisionary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisionary_Statics::NewProp__cooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisionary_Statics::NewProp__auraVisibilityRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisionary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisionary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisionary_Statics::ClassParams = {
		&UVisionary::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVisionary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVisionary_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVisionary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisionary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisionary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisionary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisionary, 461282425);
	template<> THEBLIGHT_API UClass* StaticClass<UVisionary>()
	{
		return UVisionary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisionary(Z_Construct_UClass_UVisionary, &UVisionary::StaticClass, TEXT("/Script/TheBlight"), TEXT("UVisionary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisionary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
