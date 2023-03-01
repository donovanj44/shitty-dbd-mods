// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoPackUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoPackUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPromoPackUtilities::StaticRegisterNativesUPromoPackUtilities()
	{
	}
	UClass* Z_Construct_UClass_UPromoPackUtilities_NoRegister()
	{
		return UPromoPackUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPromoPackUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromoPackUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromoPackUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PromoPackUtilities.h" },
		{ "ModuleRelativePath", "Public/PromoPackUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromoPackUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromoPackUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPromoPackUtilities_Statics::ClassParams = {
		&UPromoPackUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPromoPackUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPromoPackUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPromoPackUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPromoPackUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPromoPackUtilities, 3000046035);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPromoPackUtilities>()
	{
		return UPromoPackUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPromoPackUtilities(Z_Construct_UClass_UPromoPackUtilities, &UPromoPackUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPromoPackUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromoPackUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
