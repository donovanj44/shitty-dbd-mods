// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsBoonBlessed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsBoonBlessed() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsBoonBlessed_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsBoonBlessed();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsBoonBlessed::StaticRegisterNativesUIsBoonBlessed()
	{
	}
	UClass* Z_Construct_UClass_UIsBoonBlessed_NoRegister()
	{
		return UIsBoonBlessed::StaticClass();
	}
	struct Z_Construct_UClass_UIsBoonBlessed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsBoonBlessed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsBoonBlessed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsBoonBlessed.h" },
		{ "ModuleRelativePath", "Public/IsBoonBlessed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsBoonBlessed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsBoonBlessed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsBoonBlessed_Statics::ClassParams = {
		&UIsBoonBlessed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsBoonBlessed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsBoonBlessed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsBoonBlessed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsBoonBlessed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsBoonBlessed, 4214558312);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsBoonBlessed>()
	{
		return UIsBoonBlessed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsBoonBlessed(Z_Construct_UClass_UIsBoonBlessed, &UIsBoonBlessed::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsBoonBlessed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsBoonBlessed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
