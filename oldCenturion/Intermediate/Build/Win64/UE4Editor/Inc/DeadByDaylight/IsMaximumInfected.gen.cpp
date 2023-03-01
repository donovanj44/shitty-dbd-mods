// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/IsMaximumInfected.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsMaximumInfected() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UIsMaximumInfected_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UIsMaximumInfected();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UIsMaximumInfected::StaticRegisterNativesUIsMaximumInfected()
	{
	}
	UClass* Z_Construct_UClass_UIsMaximumInfected_NoRegister()
	{
		return UIsMaximumInfected::StaticClass();
	}
	struct Z_Construct_UClass_UIsMaximumInfected_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsMaximumInfected_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsMaximumInfected_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsMaximumInfected.h" },
		{ "ModuleRelativePath", "Public/IsMaximumInfected.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsMaximumInfected_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsMaximumInfected>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsMaximumInfected_Statics::ClassParams = {
		&UIsMaximumInfected::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsMaximumInfected_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsMaximumInfected_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsMaximumInfected()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsMaximumInfected_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsMaximumInfected, 812542197);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UIsMaximumInfected>()
	{
		return UIsMaximumInfected::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsMaximumInfected(Z_Construct_UClass_UIsMaximumInfected, &UIsMaximumInfected::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UIsMaximumInfected"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsMaximumInfected);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
