// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/FurtiveChase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurtiveChase() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFurtiveChase_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFurtiveChase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UFurtiveChase::StaticRegisterNativesUFurtiveChase()
	{
	}
	UClass* Z_Construct_UClass_UFurtiveChase_NoRegister()
	{
		return UFurtiveChase::StaticClass();
	}
	struct Z_Construct_UClass_UFurtiveChase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__terrorRadiusSuppressionPerToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__terrorRadiusSuppressionPerToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTokensByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTokensByLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFurtiveChase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFurtiveChase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FurtiveChase.h" },
		{ "ModuleRelativePath", "Public/FurtiveChase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFurtiveChase_Statics::NewProp__terrorRadiusSuppressionPerToken_MetaData[] = {
		{ "Category", "FurtiveChase" },
		{ "ModuleRelativePath", "Public/FurtiveChase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurtiveChase_Statics::NewProp__terrorRadiusSuppressionPerToken = { "_terrorRadiusSuppressionPerToken", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFurtiveChase, _terrorRadiusSuppressionPerToken), METADATA_PARAMS(Z_Construct_UClass_UFurtiveChase_Statics::NewProp__terrorRadiusSuppressionPerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFurtiveChase_Statics::NewProp__terrorRadiusSuppressionPerToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFurtiveChase_Statics::NewProp__maxTokensByLevel_MetaData[] = {
		{ "Category", "FurtiveChase" },
		{ "ModuleRelativePath", "Public/FurtiveChase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurtiveChase_Statics::NewProp__maxTokensByLevel = { "_maxTokensByLevel", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_maxTokensByLevel, UFurtiveChase), STRUCT_OFFSET(UFurtiveChase, _maxTokensByLevel), METADATA_PARAMS(Z_Construct_UClass_UFurtiveChase_Statics::NewProp__maxTokensByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFurtiveChase_Statics::NewProp__maxTokensByLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFurtiveChase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurtiveChase_Statics::NewProp__terrorRadiusSuppressionPerToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurtiveChase_Statics::NewProp__maxTokensByLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFurtiveChase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurtiveChase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFurtiveChase_Statics::ClassParams = {
		&UFurtiveChase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFurtiveChase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFurtiveChase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFurtiveChase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFurtiveChase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFurtiveChase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFurtiveChase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFurtiveChase, 3145203872);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UFurtiveChase>()
	{
		return UFurtiveChase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFurtiveChase(Z_Construct_UClass_UFurtiveChase, &UFurtiveChase::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UFurtiveChase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFurtiveChase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
