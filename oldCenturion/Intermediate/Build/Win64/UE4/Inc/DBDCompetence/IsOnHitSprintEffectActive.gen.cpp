// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOnHitSprintEffectActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOnHitSprintEffectActive() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOnHitSprintEffectActive_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOnHitSprintEffectActive();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsOnHitSprintEffectActive::StaticRegisterNativesUIsOnHitSprintEffectActive()
	{
	}
	UClass* Z_Construct_UClass_UIsOnHitSprintEffectActive_NoRegister()
	{
		return UIsOnHitSprintEffectActive::StaticClass();
	}
	struct Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOnHitSprintEffectActive.h" },
		{ "ModuleRelativePath", "Public/IsOnHitSprintEffectActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOnHitSprintEffectActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::ClassParams = {
		&UIsOnHitSprintEffectActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOnHitSprintEffectActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOnHitSprintEffectActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOnHitSprintEffectActive, 595119149);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOnHitSprintEffectActive>()
	{
		return UIsOnHitSprintEffectActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOnHitSprintEffectActive(Z_Construct_UClass_UIsOnHitSprintEffectActive, &UIsOnHitSprintEffectActive::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOnHitSprintEffectActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOnHitSprintEffectActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
