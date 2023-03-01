// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/CoupDeGrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoupDeGrace() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UCoupDeGrace_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UCoupDeGrace();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	void UCoupDeGrace::StaticRegisterNativesUCoupDeGrace()
	{
	}
	UClass* Z_Construct_UClass_UCoupDeGrace_NoRegister()
	{
		return UCoupDeGrace::StaticClass();
	}
	struct Z_Construct_UClass_UCoupDeGrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__completedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__completedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__completedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lungeAttackAddDurationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lungeAttackAddDurationMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoupDeGrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoupDeGrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoupDeGrace.h" },
		{ "ModuleRelativePath", "Public/CoupDeGrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoupDeGrace.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators = { "_completedGenerators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoupDeGrace, _completedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators_Inner = { "_completedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__lungeAttackAddDurationMultiplier_MetaData[] = {
		{ "Category", "CoupDeGrace" },
		{ "ModuleRelativePath", "Public/CoupDeGrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__lungeAttackAddDurationMultiplier = { "_lungeAttackAddDurationMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_lungeAttackAddDurationMultiplier, UCoupDeGrace), STRUCT_OFFSET(UCoupDeGrace, _lungeAttackAddDurationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__lungeAttackAddDurationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__lungeAttackAddDurationMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoupDeGrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__completedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoupDeGrace_Statics::NewProp__lungeAttackAddDurationMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoupDeGrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoupDeGrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoupDeGrace_Statics::ClassParams = {
		&UCoupDeGrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoupDeGrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoupDeGrace_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCoupDeGrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoupDeGrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoupDeGrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoupDeGrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoupDeGrace, 4030092985);
	template<> THETWINS_API UClass* StaticClass<UCoupDeGrace>()
	{
		return UCoupDeGrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoupDeGrace(Z_Construct_UClass_UCoupDeGrace, &UCoupDeGrace::StaticClass, TEXT("/Script/TheTwins"), TEXT("UCoupDeGrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoupDeGrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
