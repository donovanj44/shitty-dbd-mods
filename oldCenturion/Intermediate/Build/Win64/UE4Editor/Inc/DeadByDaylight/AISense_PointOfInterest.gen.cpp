// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISense_PointOfInterest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_PointOfInterest() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_PointOfInterest_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_PointOfInterest();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAISense_PointOfInterest::StaticRegisterNativesUAISense_PointOfInterest()
	{
	}
	UClass* Z_Construct_UClass_UAISense_PointOfInterest_NoRegister()
	{
		return UAISense_PointOfInterest::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_PointOfInterest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__sources;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_PointOfInterest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_PointOfInterest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISense_PointOfInterest.h" },
		{ "ModuleRelativePath", "Public/AISense_PointOfInterest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISense_PointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources = { "_sources", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_PointOfInterest, _sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources_Inner = { "_sources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_PointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_PointOfInterest_Statics::NewProp__sources_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_PointOfInterest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_PointOfInterest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_PointOfInterest_Statics::ClassParams = {
		&UAISense_PointOfInterest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_PointOfInterest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_PointOfInterest_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_PointOfInterest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_PointOfInterest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_PointOfInterest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_PointOfInterest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_PointOfInterest, 4003050859);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISense_PointOfInterest>()
	{
		return UAISense_PointOfInterest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_PointOfInterest(Z_Construct_UClass_UAISense_PointOfInterest, &UAISense_PointOfInterest::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISense_PointOfInterest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_PointOfInterest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
