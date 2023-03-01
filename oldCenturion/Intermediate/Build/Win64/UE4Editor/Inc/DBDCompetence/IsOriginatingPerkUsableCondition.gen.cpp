// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOriginatingPerkUsableCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOriginatingPerkUsableCondition() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOriginatingPerkUsableCondition_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOriginatingPerkUsableCondition();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseIsPerkUsableCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsOriginatingPerkUsableCondition::StaticRegisterNativesUIsOriginatingPerkUsableCondition()
	{
	}
	UClass* Z_Construct_UClass_UIsOriginatingPerkUsableCondition_NoRegister()
	{
		return UIsOriginatingPerkUsableCondition::StaticClass();
	}
	struct Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIsPerkUsableCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOriginatingPerkUsableCondition.h" },
		{ "ModuleRelativePath", "Public/IsOriginatingPerkUsableCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOriginatingPerkUsableCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::ClassParams = {
		&UIsOriginatingPerkUsableCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOriginatingPerkUsableCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOriginatingPerkUsableCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOriginatingPerkUsableCondition, 3099529415);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOriginatingPerkUsableCondition>()
	{
		return UIsOriginatingPerkUsableCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOriginatingPerkUsableCondition(Z_Construct_UClass_UIsOriginatingPerkUsableCondition, &UIsOriginatingPerkUsableCondition::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOriginatingPerkUsableCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOriginatingPerkUsableCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
