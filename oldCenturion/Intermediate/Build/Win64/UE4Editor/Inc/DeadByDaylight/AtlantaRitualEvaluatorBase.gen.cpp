// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualEvaluatorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualEvaluatorBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRitualEvaluatorBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRitualEvaluatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAtlantaRitualEvaluatorBase::StaticRegisterNativesUAtlantaRitualEvaluatorBase()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaRitualEvaluatorBase_NoRegister()
	{
		return UAtlantaRitualEvaluatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaRitualEvaluatorBase.h" },
		{ "ModuleRelativePath", "Public/AtlantaRitualEvaluatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaRitualEvaluatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::ClassParams = {
		&UAtlantaRitualEvaluatorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaRitualEvaluatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaRitualEvaluatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaRitualEvaluatorBase, 1694389556);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaRitualEvaluatorBase>()
	{
		return UAtlantaRitualEvaluatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaRitualEvaluatorBase(Z_Construct_UClass_UAtlantaRitualEvaluatorBase, &UAtlantaRitualEvaluatorBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaRitualEvaluatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaRitualEvaluatorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
