// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NavigationScreenScaleform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationScreenScaleform() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreenScaleform_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreenScaleform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UNavigationScreenScaleform::StaticRegisterNativesUNavigationScreenScaleform()
	{
	}
	UClass* Z_Construct_UClass_UNavigationScreenScaleform_NoRegister()
	{
		return UNavigationScreenScaleform::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationScreenScaleform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationScreenScaleform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationScreenScaleform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationScreenScaleform.h" },
		{ "ModuleRelativePath", "Public/NavigationScreenScaleform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationScreenScaleform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationScreenScaleform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationScreenScaleform_Statics::ClassParams = {
		&UNavigationScreenScaleform::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavigationScreenScaleform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationScreenScaleform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationScreenScaleform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationScreenScaleform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationScreenScaleform, 952526427);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNavigationScreenScaleform>()
	{
		return UNavigationScreenScaleform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationScreenScaleform(Z_Construct_UClass_UNavigationScreenScaleform, &UNavigationScreenScaleform::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNavigationScreenScaleform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationScreenScaleform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
