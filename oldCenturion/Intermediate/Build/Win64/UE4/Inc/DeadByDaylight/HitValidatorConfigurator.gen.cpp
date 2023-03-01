// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HitValidatorConfigurator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidatorConfigurator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorConfigurator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorConfigurator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseHitValidationConfigurator();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UHitValidatorConfigurator::StaticRegisterNativesUHitValidatorConfigurator()
	{
	}
	UClass* Z_Construct_UClass_UHitValidatorConfigurator_NoRegister()
	{
		return UHitValidatorConfigurator::StaticClass();
	}
	struct Z_Construct_UClass_UHitValidatorConfigurator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitValidatorConfigurator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseHitValidationConfigurator,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitValidatorConfigurator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitValidatorConfigurator.h" },
		{ "ModuleRelativePath", "Public/HitValidatorConfigurator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitValidatorConfigurator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitValidatorConfigurator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitValidatorConfigurator_Statics::ClassParams = {
		&UHitValidatorConfigurator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHitValidatorConfigurator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidatorConfigurator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitValidatorConfigurator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitValidatorConfigurator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitValidatorConfigurator, 3294142231);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHitValidatorConfigurator>()
	{
		return UHitValidatorConfigurator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitValidatorConfigurator(Z_Construct_UClass_UHitValidatorConfigurator, &UHitValidatorConfigurator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHitValidatorConfigurator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitValidatorConfigurator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
