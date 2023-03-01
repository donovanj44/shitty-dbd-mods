// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathStrategy_FleeLOS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathStrategy_FleeLOS() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_FleeLOS_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_FleeLOS();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathStrategy_Flee();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UPathStrategy_FleeLOS::StaticRegisterNativesUPathStrategy_FleeLOS()
	{
	}
	UClass* Z_Construct_UClass_UPathStrategy_FleeLOS_NoRegister()
	{
		return UPathStrategy_FleeLOS::StaticClass();
	}
	struct Z_Construct_UClass_UPathStrategy_FleeLOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathStrategy_Flee,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathStrategy_FleeLOS.h" },
		{ "ModuleRelativePath", "Public/PathStrategy_FleeLOS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathStrategy_FleeLOS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::ClassParams = {
		&UPathStrategy_FleeLOS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathStrategy_FleeLOS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathStrategy_FleeLOS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathStrategy_FleeLOS, 2222697600);
	template<> DBDBOTS_API UClass* StaticClass<UPathStrategy_FleeLOS>()
	{
		return UPathStrategy_FleeLOS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathStrategy_FleeLOS(Z_Construct_UClass_UPathStrategy_FleeLOS, &UPathStrategy_FleeLOS::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathStrategy_FleeLOS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathStrategy_FleeLOS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
