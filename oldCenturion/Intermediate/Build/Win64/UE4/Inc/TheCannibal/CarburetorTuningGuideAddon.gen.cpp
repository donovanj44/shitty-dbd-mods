// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CarburetorTuningGuideAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarburetorTuningGuideAddon() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCarburetorTuningGuideAddon_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCarburetorTuningGuideAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UCarburetorTuningGuideAddon::StaticRegisterNativesUCarburetorTuningGuideAddon()
	{
	}
	UClass* Z_Construct_UClass_UCarburetorTuningGuideAddon_NoRegister()
	{
		return UCarburetorTuningGuideAddon::StaticClass();
	}
	struct Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarburetorTuningGuideAddon.h" },
		{ "ModuleRelativePath", "Public/CarburetorTuningGuideAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarburetorTuningGuideAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::ClassParams = {
		&UCarburetorTuningGuideAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarburetorTuningGuideAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarburetorTuningGuideAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarburetorTuningGuideAddon, 3539456058);
	template<> THECANNIBAL_API UClass* StaticClass<UCarburetorTuningGuideAddon>()
	{
		return UCarburetorTuningGuideAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarburetorTuningGuideAddon(Z_Construct_UClass_UCarburetorTuningGuideAddon, &UCarburetorTuningGuideAddon::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCarburetorTuningGuideAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarburetorTuningGuideAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
