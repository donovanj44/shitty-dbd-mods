// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavigationQueryFilter_CamperStealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter_CamperStealth() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_CamperStealth();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Camper();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavigationQueryFilter_CamperStealth::StaticRegisterNativesUNavigationQueryFilter_CamperStealth()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_NoRegister()
	{
		return UNavigationQueryFilter_CamperStealth::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter_Camper,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationQueryFilter_CamperStealth.h" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_CamperStealth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter_CamperStealth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::ClassParams = {
		&UNavigationQueryFilter_CamperStealth::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter_CamperStealth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationQueryFilter_CamperStealth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationQueryFilter_CamperStealth, 1652603119);
	template<> DBDBOTS_API UClass* StaticClass<UNavigationQueryFilter_CamperStealth>()
	{
		return UNavigationQueryFilter_CamperStealth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter_CamperStealth(Z_Construct_UClass_UNavigationQueryFilter_CamperStealth, &UNavigationQueryFilter_CamperStealth::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavigationQueryFilter_CamperStealth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter_CamperStealth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
