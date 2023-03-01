// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterPositionRecorderConfigurator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPositionRecorderConfigurator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterPositionRecorderConfigurator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterPositionRecorderConfigurator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseHitValidationConfigurator();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCharacterPositionRecorderConfigurator::StaticRegisterNativesUCharacterPositionRecorderConfigurator()
	{
	}
	UClass* Z_Construct_UClass_UCharacterPositionRecorderConfigurator_NoRegister()
	{
		return UCharacterPositionRecorderConfigurator::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseHitValidationConfigurator,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterPositionRecorderConfigurator.h" },
		{ "ModuleRelativePath", "Public/CharacterPositionRecorderConfigurator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterPositionRecorderConfigurator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::ClassParams = {
		&UCharacterPositionRecorderConfigurator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterPositionRecorderConfigurator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterPositionRecorderConfigurator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterPositionRecorderConfigurator, 2200429925);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterPositionRecorderConfigurator>()
	{
		return UCharacterPositionRecorderConfigurator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterPositionRecorderConfigurator(Z_Construct_UClass_UCharacterPositionRecorderConfigurator, &UCharacterPositionRecorderConfigurator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterPositionRecorderConfigurator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterPositionRecorderConfigurator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
