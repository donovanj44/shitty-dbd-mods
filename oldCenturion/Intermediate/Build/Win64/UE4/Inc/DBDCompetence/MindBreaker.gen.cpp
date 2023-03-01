// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/MindBreaker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMindBreaker() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UMindBreaker_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UMindBreaker();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UMindBreaker::StaticRegisterNativesUMindBreaker()
	{
	}
	UClass* Z_Construct_UClass_UMindBreaker_NoRegister()
	{
		return UMindBreaker::StaticClass();
	}
	struct Z_Construct_UClass_UMindBreaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectDurationAfterRepair_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectDurationAfterRepair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMindBreaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMindBreaker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MindBreaker.h" },
		{ "ModuleRelativePath", "Public/MindBreaker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMindBreaker_Statics::NewProp__effectDurationAfterRepair_MetaData[] = {
		{ "Category", "MindBreaker" },
		{ "ModuleRelativePath", "Public/MindBreaker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMindBreaker_Statics::NewProp__effectDurationAfterRepair = { "_effectDurationAfterRepair", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_effectDurationAfterRepair, UMindBreaker), STRUCT_OFFSET(UMindBreaker, _effectDurationAfterRepair), METADATA_PARAMS(Z_Construct_UClass_UMindBreaker_Statics::NewProp__effectDurationAfterRepair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMindBreaker_Statics::NewProp__effectDurationAfterRepair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMindBreaker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMindBreaker_Statics::NewProp__effectDurationAfterRepair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMindBreaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMindBreaker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMindBreaker_Statics::ClassParams = {
		&UMindBreaker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMindBreaker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMindBreaker_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMindBreaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMindBreaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMindBreaker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMindBreaker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMindBreaker, 2632906732);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UMindBreaker>()
	{
		return UMindBreaker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMindBreaker(Z_Construct_UClass_UMindBreaker, &UMindBreaker::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UMindBreaker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMindBreaker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
