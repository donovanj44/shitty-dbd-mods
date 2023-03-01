// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Hysteria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHysteria() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UHysteria_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UHysteria();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UHysteria::StaticRegisterNativesUHysteria()
	{
	}
	UClass* Z_Construct_UClass_UHysteria_NoRegister()
	{
		return UHysteria::StaticClass();
	}
	struct Z_Construct_UClass_UHysteria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obliviousEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__obliviousEffectDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHysteria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHysteria_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hysteria.h" },
		{ "ModuleRelativePath", "Public/Hysteria.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHysteria_Statics::NewProp__perkCooldownDuration_MetaData[] = {
		{ "Category", "Hysteria" },
		{ "ModuleRelativePath", "Public/Hysteria.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHysteria_Statics::NewProp__perkCooldownDuration = { "_perkCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkCooldownDuration, UHysteria), STRUCT_OFFSET(UHysteria, _perkCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UHysteria_Statics::NewProp__perkCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHysteria_Statics::NewProp__perkCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHysteria_Statics::NewProp__obliviousEffectDuration_MetaData[] = {
		{ "Category", "Hysteria" },
		{ "ModuleRelativePath", "Public/Hysteria.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHysteria_Statics::NewProp__obliviousEffectDuration = { "_obliviousEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_obliviousEffectDuration, UHysteria), STRUCT_OFFSET(UHysteria, _obliviousEffectDuration), METADATA_PARAMS(Z_Construct_UClass_UHysteria_Statics::NewProp__obliviousEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHysteria_Statics::NewProp__obliviousEffectDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHysteria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHysteria_Statics::NewProp__perkCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHysteria_Statics::NewProp__obliviousEffectDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHysteria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHysteria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHysteria_Statics::ClassParams = {
		&UHysteria::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHysteria_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHysteria_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHysteria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHysteria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHysteria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHysteria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHysteria, 514164276);
	template<> THEK24_API UClass* StaticClass<UHysteria>()
	{
		return UHysteria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHysteria(Z_Construct_UClass_UHysteria, &UHysteria::StaticClass, TEXT("/Script/TheK24"), TEXT("UHysteria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHysteria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
