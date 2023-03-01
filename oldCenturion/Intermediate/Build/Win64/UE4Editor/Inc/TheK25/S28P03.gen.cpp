// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/S28P03.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS28P03() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_US28P03_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_US28P03();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBoonPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void US28P03::StaticRegisterNativesUS28P03()
	{
	}
	UClass* Z_Construct_UClass_US28P03_NoRegister()
	{
		return US28P03::StaticClass();
	}
	struct Z_Construct_UClass_US28P03_Statics
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
	UObject* (*const Z_Construct_UClass_US28P03_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoonPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P03_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S28P03.h" },
		{ "ModuleRelativePath", "Public/S28P03.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P03_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "S28P03" },
		{ "ModuleRelativePath", "Public/S28P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US28P03_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_lingerDuration, US28P03), STRUCT_OFFSET(US28P03, _lingerDuration), METADATA_PARAMS(Z_Construct_UClass_US28P03_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P03_Statics::NewProp__lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_US28P03_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P03_Statics::NewProp__lingerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_US28P03_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US28P03>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US28P03_Statics::ClassParams = {
		&US28P03::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_US28P03_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_US28P03_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_US28P03_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US28P03_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US28P03()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US28P03_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US28P03, 3658803569);
	template<> THEK25_API UClass* StaticClass<US28P03>()
	{
		return US28P03::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US28P03(Z_Construct_UClass_US28P03, &US28P03::StaticClass, TEXT("/Script/TheK25"), TEXT("US28P03"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US28P03);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
