// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AnimTagProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTagProvider() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimTagProvider_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimTagProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAnimTagProvider::StaticRegisterNativesUAnimTagProvider()
	{
	}
	UClass* Z_Construct_UClass_UAnimTagProvider_NoRegister()
	{
		return UAnimTagProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTagProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTagProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTagProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimTagProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTagProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimTagProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimTagProvider_Statics::ClassParams = {
		&UAnimTagProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimTagProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTagProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimTagProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimTagProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimTagProvider, 2735791396);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAnimTagProvider>()
	{
		return UAnimTagProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimTagProvider(Z_Construct_UClass_UAnimTagProvider, &UAnimTagProvider::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAnimTagProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTagProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
