// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DarkSense.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkSense() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDarkSense_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDarkSense();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UDarkSense::StaticRegisterNativesUDarkSense()
	{
	}
	UClass* Z_Construct_UClass_UDarkSense_NoRegister()
	{
		return UDarkSense::StaticClass();
	}
	struct Z_Construct_UClass_UDarkSense_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectDurationOnFinalGeneratorComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectDurationOnFinalGeneratorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectDurationOnGeneratorComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectDurationOnGeneratorComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDarkSense_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkSense_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DarkSense.h" },
		{ "ModuleRelativePath", "Public/DarkSense.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnFinalGeneratorComplete_MetaData[] = {
		{ "Category", "DarkSense" },
		{ "ModuleRelativePath", "Public/DarkSense.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnFinalGeneratorComplete = { "_effectDurationOnFinalGeneratorComplete", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_effectDurationOnFinalGeneratorComplete, UDarkSense), STRUCT_OFFSET(UDarkSense, _effectDurationOnFinalGeneratorComplete), METADATA_PARAMS(Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnFinalGeneratorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnFinalGeneratorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnGeneratorComplete_MetaData[] = {
		{ "Category", "DarkSense" },
		{ "ModuleRelativePath", "Public/DarkSense.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnGeneratorComplete = { "_effectDurationOnGeneratorComplete", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkSense, _effectDurationOnGeneratorComplete), METADATA_PARAMS(Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnGeneratorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnGeneratorComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkSense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnFinalGeneratorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkSense_Statics::NewProp__effectDurationOnGeneratorComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDarkSense_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkSense>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDarkSense_Statics::ClassParams = {
		&UDarkSense::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDarkSense_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDarkSense_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDarkSense_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkSense_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDarkSense()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDarkSense_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDarkSense, 2651702284);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDarkSense>()
	{
		return UDarkSense::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDarkSense(Z_Construct_UClass_UDarkSense, &UDarkSense::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDarkSense"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkSense);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
