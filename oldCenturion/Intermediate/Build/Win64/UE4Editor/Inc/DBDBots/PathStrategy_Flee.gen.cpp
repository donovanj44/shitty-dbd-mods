// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategy_Flee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategy_Flee() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_Flee_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_Flee();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UPathStrategy_Flee::StaticRegisterNativesUPathStrategy_Flee()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategy_Flee_NoRegister()
	{
		return UPathStrategy_Flee::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategy_Flee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategy_Flee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_Flee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategy_Flee.h" },
		{ "ModuleRelativePath", "Public/PathStrategy_Flee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategy_Flee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategy_Flee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategy_Flee_Statics::ClassParams = {
		&UPathStrategy_Flee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_Flee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_Flee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategy_Flee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategy_Flee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategy_Flee, 4031143494);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategy_Flee>()
	{
		return UPathStrategy_Flee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategy_Flee(Z_Construct_UClass_UPathStrategy_Flee, &UPathStrategy_Flee::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategy_Flee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategy_Flee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
