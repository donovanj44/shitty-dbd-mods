// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/BaseCharacterRotationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterRotationStrategy() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UBaseCharacterRotationStrategy::StaticRegisterNativesUBaseCharacterRotationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy_NoRegister()
	{
		return UBaseCharacterRotationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCharacterRotationStrategy.h" },
		{ "ModuleRelativePath", "Public/BaseCharacterRotationStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterRotationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::ClassParams = {
		&UBaseCharacterRotationStrategy::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseCharacterRotationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseCharacterRotationStrategy, 2723258125);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UBaseCharacterRotationStrategy>()
	{
		return UBaseCharacterRotationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseCharacterRotationStrategy(Z_Construct_UClass_UBaseCharacterRotationStrategy, &UBaseCharacterRotationStrategy::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UBaseCharacterRotationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterRotationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
