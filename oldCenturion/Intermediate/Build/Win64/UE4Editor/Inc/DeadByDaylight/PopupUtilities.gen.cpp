// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PopupUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopupUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPopupUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPopupUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPopupUtilities::StaticRegisterNativesUPopupUtilities()
	{
	}
	UClass* Z_Construct_UClass_UPopupUtilities_NoRegister()
	{
		return UPopupUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPopupUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPopupUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PopupUtilities.h" },
		{ "ModuleRelativePath", "Public/PopupUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPopupUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopupUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPopupUtilities_Statics::ClassParams = {
		&UPopupUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPopupUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPopupUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPopupUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPopupUtilities, 639483425);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPopupUtilities>()
	{
		return UPopupUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPopupUtilities(Z_Construct_UClass_UPopupUtilities, &UPopupUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPopupUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPopupUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
