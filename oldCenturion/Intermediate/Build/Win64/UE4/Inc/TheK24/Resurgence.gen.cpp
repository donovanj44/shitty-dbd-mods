// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Resurgence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResurgence() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UResurgence_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UResurgence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UResurgence::StaticRegisterNativesUResurgence()
	{
	}
	UClass* Z_Construct_UClass_UResurgence_NoRegister()
	{
		return UResurgence::StaticClass();
	}
	struct Z_Construct_UClass_UResurgence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healRegainPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__healRegainPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResurgence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResurgence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Resurgence.h" },
		{ "ModuleRelativePath", "Public/Resurgence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResurgence_Statics::NewProp__healRegainPercentage_MetaData[] = {
		{ "Category", "Resurgence" },
		{ "ModuleRelativePath", "Public/Resurgence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResurgence_Statics::NewProp__healRegainPercentage = { "_healRegainPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_healRegainPercentage, UResurgence), STRUCT_OFFSET(UResurgence, _healRegainPercentage), METADATA_PARAMS(Z_Construct_UClass_UResurgence_Statics::NewProp__healRegainPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResurgence_Statics::NewProp__healRegainPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResurgence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResurgence_Statics::NewProp__healRegainPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResurgence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResurgence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResurgence_Statics::ClassParams = {
		&UResurgence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResurgence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResurgence_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UResurgence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResurgence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResurgence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResurgence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResurgence, 3060565950);
	template<> THEK24_API UClass* StaticClass<UResurgence>()
	{
		return UResurgence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResurgence(Z_Construct_UClass_UResurgence, &UResurgence::StaticClass, TEXT("/Script/TheK24"), TEXT("UResurgence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResurgence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
