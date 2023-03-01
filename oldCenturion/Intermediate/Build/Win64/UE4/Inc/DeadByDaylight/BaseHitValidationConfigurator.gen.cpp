// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseHitValidationConfigurator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHitValidationConfigurator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseHitValidationConfigurator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseHitValidationConfigurator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBaseHitValidationConfigurator::StaticRegisterNativesUBaseHitValidationConfigurator()
	{
	}
	UClass* Z_Construct_UClass_UBaseHitValidationConfigurator_NoRegister()
	{
		return UBaseHitValidationConfigurator::StaticClass();
	}
	struct Z_Construct_UClass_UBaseHitValidationConfigurator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseHitValidationConfigurator.h" },
		{ "ModuleRelativePath", "Public/BaseHitValidationConfigurator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseHitValidationConfigurator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::ClassParams = {
		&UBaseHitValidationConfigurator::StaticClass,
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
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseHitValidationConfigurator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseHitValidationConfigurator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseHitValidationConfigurator, 1380141592);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBaseHitValidationConfigurator>()
	{
		return UBaseHitValidationConfigurator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseHitValidationConfigurator(Z_Construct_UClass_UBaseHitValidationConfigurator, &UBaseHitValidationConfigurator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBaseHitValidationConfigurator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseHitValidationConfigurator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
