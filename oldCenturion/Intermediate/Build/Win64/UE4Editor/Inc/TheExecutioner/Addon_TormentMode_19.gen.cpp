// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Addon_TormentMode_19.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TormentMode_19() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_19_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_19();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAddon_TormentMode_19::StaticRegisterNativesUAddon_TormentMode_19()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TormentMode_19_NoRegister()
	{
		return UAddon_TormentMode_19::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TormentMode_19_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lingerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TormentMode_19_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_19_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TormentMode_19.h" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_19.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_19_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "Addon_TormentMode_19" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_19.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TormentMode_19_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TormentMode_19, _lingerDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_19_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_19_Statics::NewProp__lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TormentMode_19_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_19_Statics::NewProp__lingerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TormentMode_19_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TormentMode_19>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TormentMode_19_Statics::ClassParams = {
		&UAddon_TormentMode_19::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_TormentMode_19_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_19_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_19_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_19_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TormentMode_19()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TormentMode_19_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TormentMode_19, 414939752);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAddon_TormentMode_19>()
	{
		return UAddon_TormentMode_19::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TormentMode_19(Z_Construct_UClass_UAddon_TormentMode_19, &UAddon_TormentMode_19::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAddon_TormentMode_19"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TormentMode_19);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
