// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsActivationTimerActiveAndNotPaused.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsActivationTimerActiveAndNotPaused() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsActivationTimerActiveAndNotPaused::StaticRegisterNativesUIsActivationTimerActiveAndNotPaused()
	{
	}
	UClass* Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_NoRegister()
	{
		return UIsActivationTimerActiveAndNotPaused::StaticClass();
	}
	struct Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsActivationTimerActiveAndNotPaused.h" },
		{ "ModuleRelativePath", "Public/IsActivationTimerActiveAndNotPaused.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsActivationTimerActiveAndNotPaused>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::ClassParams = {
		&UIsActivationTimerActiveAndNotPaused::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsActivationTimerActiveAndNotPaused, 1120472244);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsActivationTimerActiveAndNotPaused>()
	{
		return UIsActivationTimerActiveAndNotPaused::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsActivationTimerActiveAndNotPaused(Z_Construct_UClass_UIsActivationTimerActiveAndNotPaused, &UIsActivationTimerActiveAndNotPaused::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsActivationTimerActiveAndNotPaused"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsActivationTimerActiveAndNotPaused);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
