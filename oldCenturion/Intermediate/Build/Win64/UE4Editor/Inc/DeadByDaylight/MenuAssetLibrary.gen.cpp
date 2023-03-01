// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MenuAssetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuAssetLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMenuAssetLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMenuAssetLibrary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemsAssetLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UMenuAssetLibrary::StaticRegisterNativesUMenuAssetLibrary()
	{
	}
	UClass* Z_Construct_UClass_UMenuAssetLibrary_NoRegister()
	{
		return UMenuAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMenuAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemsAssetLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MenuAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/MenuAssetLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuAssetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuAssetLibrary_Statics::ClassParams = {
		&UMenuAssetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMenuAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuAssetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuAssetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuAssetLibrary, 1450897245);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMenuAssetLibrary>()
	{
		return UMenuAssetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuAssetLibrary(Z_Construct_UClass_UMenuAssetLibrary, &UMenuAssetLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMenuAssetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuAssetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
