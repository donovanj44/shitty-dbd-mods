// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/SerumOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerumOutlineUpdateStrategy() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_USerumOutlineUpdateStrategy_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_USerumOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void USerumOutlineUpdateStrategy::StaticRegisterNativesUSerumOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_USerumOutlineUpdateStrategy_NoRegister()
	{
		return USerumOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SerumOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/SerumOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerumOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::ClassParams = {
		&USerumOutlineUpdateStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerumOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerumOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerumOutlineUpdateStrategy, 2615774846);
	template<> THEK24_API UClass* StaticClass<USerumOutlineUpdateStrategy>()
	{
		return USerumOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerumOutlineUpdateStrategy(Z_Construct_UClass_USerumOutlineUpdateStrategy, &USerumOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheK24"), TEXT("USerumOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerumOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
