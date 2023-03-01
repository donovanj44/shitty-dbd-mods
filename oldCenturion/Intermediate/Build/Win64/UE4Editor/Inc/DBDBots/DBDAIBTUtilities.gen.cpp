// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDAIBTUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIBTUtilities() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIBTUtilities_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDAIBTUtilities();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAIUtilities();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UDBDAIBTUtilities::StaticRegisterNativesUDBDAIBTUtilities()
	{
	}
	UClass* Z_Construct_UClass_UDBDAIBTUtilities_NoRegister()
	{
		return UDBDAIBTUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAIBTUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAIBTUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAIUtilities,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIBTUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAIBTUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDAIBTUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAIBTUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAIBTUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAIBTUtilities_Statics::ClassParams = {
		&UDBDAIBTUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAIBTUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIBTUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAIBTUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAIBTUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAIBTUtilities, 1337862951);
	template<> DBDBOTS_API UClass* StaticClass<UDBDAIBTUtilities>()
	{
		return UDBDAIBTUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAIBTUtilities(Z_Construct_UClass_UDBDAIBTUtilities, &UDBDAIBTUtilities::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDAIBTUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAIBTUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
