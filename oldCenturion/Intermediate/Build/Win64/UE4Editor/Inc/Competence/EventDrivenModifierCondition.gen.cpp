// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/EventDrivenModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventDrivenModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UEventDrivenModifierCondition::StaticRegisterNativesUEventDrivenModifierCondition()
	{
	}
	UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister()
	{
		return UEventDrivenModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UEventDrivenModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventDrivenModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventDrivenModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventDrivenModifierCondition.h" },
		{ "ModuleRelativePath", "Public/EventDrivenModifierCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventDrivenModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventDrivenModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventDrivenModifierCondition_Statics::ClassParams = {
		&UEventDrivenModifierCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventDrivenModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventDrivenModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventDrivenModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventDrivenModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventDrivenModifierCondition, 801564417);
	template<> COMPETENCE_API UClass* StaticClass<UEventDrivenModifierCondition>()
	{
		return UEventDrivenModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventDrivenModifierCondition(Z_Construct_UClass_UEventDrivenModifierCondition, &UEventDrivenModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UEventDrivenModifierCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventDrivenModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
