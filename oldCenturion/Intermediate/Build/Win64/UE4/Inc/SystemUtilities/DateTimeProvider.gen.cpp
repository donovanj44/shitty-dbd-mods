// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/DateTimeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeProvider() {}
// Cross Module References
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimeProvider_NoRegister();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimeProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
	void UDateTimeProvider::StaticRegisterNativesUDateTimeProvider()
	{
	}
	UClass* Z_Construct_UClass_UDateTimeProvider_NoRegister()
	{
		return UDateTimeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DateTimeProvider.h" },
		{ "ModuleRelativePath", "Public/DateTimeProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDateTimeProvider_Statics::ClassParams = {
		&UDateTimeProvider::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDateTimeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDateTimeProvider, 173110464);
	template<> SYSTEMUTILITIES_API UClass* StaticClass<UDateTimeProvider>()
	{
		return UDateTimeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDateTimeProvider(Z_Construct_UClass_UDateTimeProvider, &UDateTimeProvider::StaticClass, TEXT("/Script/SystemUtilities"), TEXT("UDateTimeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
