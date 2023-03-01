// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavigationQueryFilter_Slasher_Limited.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter_Slasher_Limited() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavigationQueryFilter_Player();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavigationQueryFilter_Slasher_Limited::StaticRegisterNativesUNavigationQueryFilter_Slasher_Limited()
	{
	}
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_NoRegister()
	{
		return UNavigationQueryFilter_Slasher_Limited::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter_Player,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationQueryFilter_Slasher_Limited.h" },
		{ "ModuleRelativePath", "Public/NavigationQueryFilter_Slasher_Limited.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter_Slasher_Limited>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::ClassParams = {
		&UNavigationQueryFilter_Slasher_Limited::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationQueryFilter_Slasher_Limited, 1945967424);
	template<> DBDBOTS_API UClass* StaticClass<UNavigationQueryFilter_Slasher_Limited>()
	{
		return UNavigationQueryFilter_Slasher_Limited::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationQueryFilter_Slasher_Limited(Z_Construct_UClass_UNavigationQueryFilter_Slasher_Limited, &UNavigationQueryFilter_Slasher_Limited::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavigationQueryFilter_Slasher_Limited"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter_Slasher_Limited);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
