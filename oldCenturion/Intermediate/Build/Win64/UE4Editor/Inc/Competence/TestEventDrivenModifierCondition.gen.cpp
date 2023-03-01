// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/TestEventDrivenModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestEventDrivenModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UTestEventDrivenModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UTestEventDrivenModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UTestEventDrivenModifierCondition::StaticRegisterNativesUTestEventDrivenModifierCondition()
	{
	}
	UClass* Z_Construct_UClass_UTestEventDrivenModifierCondition_NoRegister()
	{
		return UTestEventDrivenModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestEventDrivenModifierCondition.h" },
		{ "ModuleRelativePath", "Public/TestEventDrivenModifierCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestEventDrivenModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::ClassParams = {
		&UTestEventDrivenModifierCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestEventDrivenModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestEventDrivenModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestEventDrivenModifierCondition, 3306046681);
	template<> COMPETENCE_API UClass* StaticClass<UTestEventDrivenModifierCondition>()
	{
		return UTestEventDrivenModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestEventDrivenModifierCondition(Z_Construct_UClass_UTestEventDrivenModifierCondition, &UTestEventDrivenModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UTestEventDrivenModifierCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestEventDrivenModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
