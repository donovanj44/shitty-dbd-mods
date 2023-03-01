// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/Deliverance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeliverance() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UDeliverance_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UDeliverance();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	void UDeliverance::StaticRegisterNativesUDeliverance()
	{
	}
	UClass* Z_Construct_UClass_UDeliverance_NoRegister()
	{
		return UDeliverance::StaticClass();
	}
	struct Z_Construct_UClass_UDeliverance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__brokenEffectDurationPerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__brokenEffectDurationPerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeliverance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeliverance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deliverance.h" },
		{ "ModuleRelativePath", "Public/Deliverance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeliverance_Statics::NewProp__brokenEffectDurationPerLevel_MetaData[] = {
		{ "Category", "Deliverance" },
		{ "ModuleRelativePath", "Public/Deliverance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeliverance_Statics::NewProp__brokenEffectDurationPerLevel = { "_brokenEffectDurationPerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_brokenEffectDurationPerLevel, UDeliverance), STRUCT_OFFSET(UDeliverance, _brokenEffectDurationPerLevel), METADATA_PARAMS(Z_Construct_UClass_UDeliverance_Statics::NewProp__brokenEffectDurationPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeliverance_Statics::NewProp__brokenEffectDurationPerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeliverance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeliverance_Statics::NewProp__brokenEffectDurationPerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeliverance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeliverance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeliverance_Statics::ClassParams = {
		&UDeliverance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeliverance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeliverance_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeliverance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeliverance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeliverance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeliverance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeliverance, 234639615);
	template<> THESPIRIT_API UClass* StaticClass<UDeliverance>()
	{
		return UDeliverance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeliverance(Z_Construct_UClass_UDeliverance, &UDeliverance::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UDeliverance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeliverance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
