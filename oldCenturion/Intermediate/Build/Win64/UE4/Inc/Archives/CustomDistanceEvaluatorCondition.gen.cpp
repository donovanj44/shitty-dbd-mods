// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/CustomDistanceEvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomDistanceEvaluatorCondition() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UCustomDistanceEvaluatorCondition_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UCustomDistanceEvaluatorCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UCustomDistanceEvaluatorCondition::StaticRegisterNativesUCustomDistanceEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_UCustomDistanceEvaluatorCondition_NoRegister()
	{
		return UCustomDistanceEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomDistanceEvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/CustomDistanceEvaluatorCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDistanceEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::ClassParams = {
		&UCustomDistanceEvaluatorCondition::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomDistanceEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomDistanceEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomDistanceEvaluatorCondition, 135371132);
	template<> ARCHIVES_API UClass* StaticClass<UCustomDistanceEvaluatorCondition>()
	{
		return UCustomDistanceEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomDistanceEvaluatorCondition(Z_Construct_UClass_UCustomDistanceEvaluatorCondition, &UCustomDistanceEvaluatorCondition::StaticClass, TEXT("/Script/Archives"), TEXT("UCustomDistanceEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDistanceEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
