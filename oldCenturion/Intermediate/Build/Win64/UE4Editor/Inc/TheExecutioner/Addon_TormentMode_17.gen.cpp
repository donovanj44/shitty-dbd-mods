// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Addon_TormentMode_17.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TormentMode_17() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_17_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_17();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAddon_TormentMode_17::StaticRegisterNativesUAddon_TormentMode_17()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TormentMode_17_NoRegister()
	{
		return UAddon_TormentMode_17::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TormentMode_17_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obliviousDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__obliviousDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TormentMode_17_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_17_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TormentMode_17.h" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_17.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_17_Statics::NewProp__obliviousDuration_MetaData[] = {
		{ "Category", "Addon_TormentMode_17" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TormentMode_17_Statics::NewProp__obliviousDuration = { "_obliviousDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TormentMode_17, _obliviousDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_17_Statics::NewProp__obliviousDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_17_Statics::NewProp__obliviousDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TormentMode_17_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_17_Statics::NewProp__obliviousDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TormentMode_17_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TormentMode_17>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TormentMode_17_Statics::ClassParams = {
		&UAddon_TormentMode_17::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_TormentMode_17_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_17_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_17_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_17_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TormentMode_17()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TormentMode_17_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TormentMode_17, 2642109182);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAddon_TormentMode_17>()
	{
		return UAddon_TormentMode_17::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TormentMode_17(Z_Construct_UClass_UAddon_TormentMode_17, &UAddon_TormentMode_17::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAddon_TormentMode_17"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TormentMode_17);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
