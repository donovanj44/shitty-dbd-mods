// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/BoonTotemIsActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoonTotemIsActive() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBoonTotemIsActive_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBoonTotemIsActive();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UBoonTotemIsActive::StaticRegisterNativesUBoonTotemIsActive()
	{
	}
	UClass* Z_Construct_UClass_UBoonTotemIsActive_NoRegister()
	{
		return UBoonTotemIsActive::StaticClass();
	}
	struct Z_Construct_UClass_UBoonTotemIsActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoonTotemIsActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoonTotemIsActive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoonTotemIsActive.h" },
		{ "ModuleRelativePath", "Public/BoonTotemIsActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoonTotemIsActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoonTotemIsActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoonTotemIsActive_Statics::ClassParams = {
		&UBoonTotemIsActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoonTotemIsActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoonTotemIsActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoonTotemIsActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoonTotemIsActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoonTotemIsActive, 1873617065);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBoonTotemIsActive>()
	{
		return UBoonTotemIsActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoonTotemIsActive(Z_Construct_UClass_UBoonTotemIsActive, &UBoonTotemIsActive::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBoonTotemIsActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoonTotemIsActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
