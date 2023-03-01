// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/TestDBDGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestDBDGameState() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ATestDBDGameState_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ATestDBDGameState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameState();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void ATestDBDGameState::StaticRegisterNativesATestDBDGameState()
	{
	}
	UClass* Z_Construct_UClass_ATestDBDGameState_NoRegister()
	{
		return ATestDBDGameState::StaticClass();
	}
	struct Z_Construct_UClass_ATestDBDGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestDBDGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestDBDGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestDBDGameState.h" },
		{ "ModuleRelativePath", "Public/TestDBDGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestDBDGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestDBDGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestDBDGameState_Statics::ClassParams = {
		&ATestDBDGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestDBDGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestDBDGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestDBDGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestDBDGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestDBDGameState, 1490761241);
	template<> DBDCOMPETENCE_API UClass* StaticClass<ATestDBDGameState>()
	{
		return ATestDBDGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestDBDGameState(Z_Construct_UClass_ATestDBDGameState, &ATestDBDGameState::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("ATestDBDGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestDBDGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
