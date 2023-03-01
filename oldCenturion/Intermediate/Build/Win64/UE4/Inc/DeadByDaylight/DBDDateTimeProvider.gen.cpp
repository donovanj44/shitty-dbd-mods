// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDateTimeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDateTimeProvider() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDateTimeProvider_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDateTimeProvider();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimeProvider();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDDateTimeProvider::StaticRegisterNativesUDBDDateTimeProvider()
	{
	}
	UClass* Z_Construct_UClass_UDBDDateTimeProvider_NoRegister()
	{
		return UDBDDateTimeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDateTimeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDateTimeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDateTimeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDateTimeProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDDateTimeProvider.h" },
		{ "ModuleRelativePath", "Public/DBDDateTimeProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDateTimeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDateTimeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDateTimeProvider_Statics::ClassParams = {
		&UDBDDateTimeProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDDateTimeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDateTimeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDateTimeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDateTimeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDateTimeProvider, 867271179);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDDateTimeProvider>()
	{
		return UDBDDateTimeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDateTimeProvider(Z_Construct_UClass_UDBDDateTimeProvider, &UDBDDateTimeProvider::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDDateTimeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDateTimeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
