// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegalMenuScreenScaleform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegalMenuScreenScaleform() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreenScaleform_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreenScaleform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULegalMenuScreenScaleform::StaticRegisterNativesULegalMenuScreenScaleform()
	{
	}
	UClass* Z_Construct_UClass_ULegalMenuScreenScaleform_NoRegister()
	{
		return ULegalMenuScreenScaleform::StaticClass();
	}
	struct Z_Construct_UClass_ULegalMenuScreenScaleform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULegalMenuScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LegalMenuScreenScaleform.h" },
		{ "ModuleRelativePath", "Public/LegalMenuScreenScaleform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegalMenuScreenScaleform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::ClassParams = {
		&ULegalMenuScreenScaleform::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegalMenuScreenScaleform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegalMenuScreenScaleform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegalMenuScreenScaleform, 23035348);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULegalMenuScreenScaleform>()
	{
		return ULegalMenuScreenScaleform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegalMenuScreenScaleform(Z_Construct_UClass_ULegalMenuScreenScaleform, &ULegalMenuScreenScaleform::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULegalMenuScreenScaleform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegalMenuScreenScaleform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
