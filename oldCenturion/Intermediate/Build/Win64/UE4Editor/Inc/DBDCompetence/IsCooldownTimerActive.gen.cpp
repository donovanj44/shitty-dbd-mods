// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsCooldownTimerActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsCooldownTimerActive() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsCooldownTimerActive_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsCooldownTimerActive();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsCooldownTimerActive::StaticRegisterNativesUIsCooldownTimerActive()
	{
	}
	UClass* Z_Construct_UClass_UIsCooldownTimerActive_NoRegister()
	{
		return UIsCooldownTimerActive::StaticClass();
	}
	struct Z_Construct_UClass_UIsCooldownTimerActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsCooldownTimerActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsCooldownTimerActive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsCooldownTimerActive.h" },
		{ "ModuleRelativePath", "Public/IsCooldownTimerActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsCooldownTimerActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsCooldownTimerActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsCooldownTimerActive_Statics::ClassParams = {
		&UIsCooldownTimerActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsCooldownTimerActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsCooldownTimerActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsCooldownTimerActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsCooldownTimerActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsCooldownTimerActive, 1043042908);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsCooldownTimerActive>()
	{
		return UIsCooldownTimerActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsCooldownTimerActive(Z_Construct_UClass_UIsCooldownTimerActive, &UIsCooldownTimerActive::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsCooldownTimerActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsCooldownTimerActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
