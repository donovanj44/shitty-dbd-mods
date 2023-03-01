// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/SupplyCrateOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSupplyCrateOutlineUpdateStrategy() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void USupplyCrateOutlineUpdateStrategy::StaticRegisterNativesUSupplyCrateOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_NoRegister()
	{
		return USupplyCrateOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SupplyCrateOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/SupplyCrateOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USupplyCrateOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::ClassParams = {
		&USupplyCrateOutlineUpdateStrategy::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USupplyCrateOutlineUpdateStrategy, 1226141686);
	template<> THEK24_API UClass* StaticClass<USupplyCrateOutlineUpdateStrategy>()
	{
		return USupplyCrateOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USupplyCrateOutlineUpdateStrategy(Z_Construct_UClass_USupplyCrateOutlineUpdateStrategy, &USupplyCrateOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheK24"), TEXT("USupplyCrateOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USupplyCrateOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
