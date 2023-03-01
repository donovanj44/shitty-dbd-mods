// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemsAssetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemsAssetLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemsAssetLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemsAssetLibrary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UItemsAssetLibrary::StaticRegisterNativesUItemsAssetLibrary()
	{
	}
	UClass* Z_Construct_UClass_UItemsAssetLibrary_NoRegister()
	{
		return UItemsAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UItemsAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemsAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemsAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemsAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/ItemsAssetLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemsAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemsAssetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemsAssetLibrary_Statics::ClassParams = {
		&UItemsAssetLibrary::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemsAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemsAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemsAssetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemsAssetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemsAssetLibrary, 765922317);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemsAssetLibrary>()
	{
		return UItemsAssetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemsAssetLibrary(Z_Construct_UClass_UItemsAssetLibrary, &UItemsAssetLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemsAssetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemsAssetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
