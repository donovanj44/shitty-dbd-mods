// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/CompetenceDebugger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompetenceDebugger() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceDebugger_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceDebugger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UCompetenceDebugger::StaticRegisterNativesUCompetenceDebugger()
	{
	}
	UClass* Z_Construct_UClass_UCompetenceDebugger_NoRegister()
	{
		return UCompetenceDebugger::StaticClass();
	}
	struct Z_Construct_UClass_UCompetenceDebugger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompetenceDebugger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompetenceDebugger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompetenceDebugger.h" },
		{ "ModuleRelativePath", "Public/CompetenceDebugger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompetenceDebugger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompetenceDebugger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompetenceDebugger_Statics::ClassParams = {
		&UCompetenceDebugger::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompetenceDebugger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompetenceDebugger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompetenceDebugger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompetenceDebugger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompetenceDebugger, 784941304);
	template<> COMPETENCE_API UClass* StaticClass<UCompetenceDebugger>()
	{
		return UCompetenceDebugger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompetenceDebugger(Z_Construct_UClass_UCompetenceDebugger, &UCompetenceDebugger::StaticClass, TEXT("/Script/Competence"), TEXT("UCompetenceDebugger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompetenceDebugger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
