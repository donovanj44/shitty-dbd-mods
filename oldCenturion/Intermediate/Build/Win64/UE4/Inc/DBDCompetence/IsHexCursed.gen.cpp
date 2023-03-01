// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsHexCursed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsHexCursed() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHexCursed_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsHexCursed();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsHexCursed::StaticRegisterNativesUIsHexCursed()
	{
	}
	UClass* Z_Construct_UClass_UIsHexCursed_NoRegister()
	{
		return UIsHexCursed::StaticClass();
	}
	struct Z_Construct_UClass_UIsHexCursed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsHexCursed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsHexCursed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsHexCursed.h" },
		{ "ModuleRelativePath", "Public/IsHexCursed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsHexCursed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsHexCursed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsHexCursed_Statics::ClassParams = {
		&UIsHexCursed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsHexCursed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsHexCursed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsHexCursed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsHexCursed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsHexCursed, 614499700);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsHexCursed>()
	{
		return UIsHexCursed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsHexCursed(Z_Construct_UClass_UIsHexCursed, &UIsHexCursed::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsHexCursed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsHexCursed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
