// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsPerkUsableCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPerkUsableCondition() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPerkUsableCondition_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsPerkUsableCondition();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseIsPerkUsableCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsPerkUsableCondition::StaticRegisterNativesUIsPerkUsableCondition()
	{
	}
	UClass* Z_Construct_UClass_UIsPerkUsableCondition_NoRegister()
	{
		return UIsPerkUsableCondition::StaticClass();
	}
	struct Z_Construct_UClass_UIsPerkUsableCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPerkUsableCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIsPerkUsableCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPerkUsableCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsPerkUsableCondition.h" },
		{ "ModuleRelativePath", "Public/IsPerkUsableCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPerkUsableCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPerkUsableCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPerkUsableCondition_Statics::ClassParams = {
		&UIsPerkUsableCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsPerkUsableCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPerkUsableCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPerkUsableCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPerkUsableCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPerkUsableCondition, 3214493201);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsPerkUsableCondition>()
	{
		return UIsPerkUsableCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPerkUsableCondition(Z_Construct_UClass_UIsPerkUsableCondition, &UIsPerkUsableCondition::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsPerkUsableCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPerkUsableCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
