// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterBehaviourDropPallet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBehaviourDropPallet() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourDropPallet_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourDropPallet();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAICharacterBehaviourDropPallet::StaticRegisterNativesUAICharacterBehaviourDropPallet()
	{
	}
	UClass* Z_Construct_UClass_UAICharacterBehaviourDropPallet_NoRegister()
	{
		return UAICharacterBehaviourDropPallet::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterBehaviourDropPallet.h" },
		{ "ModuleRelativePath", "Public/AICharacterBehaviourDropPallet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterBehaviourDropPallet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::ClassParams = {
		&UAICharacterBehaviourDropPallet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterBehaviourDropPallet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterBehaviourDropPallet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterBehaviourDropPallet, 321414914);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterBehaviourDropPallet>()
	{
		return UAICharacterBehaviourDropPallet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterBehaviourDropPallet(Z_Construct_UClass_UAICharacterBehaviourDropPallet, &UAICharacterBehaviourDropPallet::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterBehaviourDropPallet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterBehaviourDropPallet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
