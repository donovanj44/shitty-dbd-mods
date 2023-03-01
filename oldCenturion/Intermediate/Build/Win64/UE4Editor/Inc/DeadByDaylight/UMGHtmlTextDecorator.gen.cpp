// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHtmlTextDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHtmlTextDecorator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlTextDecorator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlTextDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGHtmlTextDecorator::StaticRegisterNativesUUMGHtmlTextDecorator()
	{
	}
	UClass* Z_Construct_UClass_UUMGHtmlTextDecorator_NoRegister()
	{
		return UUMGHtmlTextDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHtmlTextDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHtmlTextDecorator.h" },
		{ "ModuleRelativePath", "Public/UMGHtmlTextDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHtmlTextDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::ClassParams = {
		&UUMGHtmlTextDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHtmlTextDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHtmlTextDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHtmlTextDecorator, 3284460791);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHtmlTextDecorator>()
	{
		return UUMGHtmlTextDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHtmlTextDecorator(Z_Construct_UClass_UUMGHtmlTextDecorator, &UUMGHtmlTextDecorator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHtmlTextDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHtmlTextDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
