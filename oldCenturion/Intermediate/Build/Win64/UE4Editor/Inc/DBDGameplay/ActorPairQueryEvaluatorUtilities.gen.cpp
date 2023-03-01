// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/ActorPairQueryEvaluatorUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPairQueryEvaluatorUtilities() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UActorPairQueryEvaluatorUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UActorPairQueryEvaluatorUtilities::StaticRegisterNativesUActorPairQueryEvaluatorUtilities()
	{
	}
	UClass* Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_NoRegister()
	{
		return UActorPairQueryEvaluatorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPairQueryEvaluatorUtilities.h" },
		{ "ModuleRelativePath", "Public/ActorPairQueryEvaluatorUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPairQueryEvaluatorUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::ClassParams = {
		&UActorPairQueryEvaluatorUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPairQueryEvaluatorUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorPairQueryEvaluatorUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorPairQueryEvaluatorUtilities, 2927487757);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UActorPairQueryEvaluatorUtilities>()
	{
		return UActorPairQueryEvaluatorUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorPairQueryEvaluatorUtilities(Z_Construct_UClass_UActorPairQueryEvaluatorUtilities, &UActorPairQueryEvaluatorUtilities::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UActorPairQueryEvaluatorUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPairQueryEvaluatorUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
