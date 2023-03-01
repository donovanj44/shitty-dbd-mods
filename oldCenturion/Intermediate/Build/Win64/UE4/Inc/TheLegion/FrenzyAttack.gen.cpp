// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/FrenzyAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrenzyAttack() {}
// Cross Module References
	THELEGION_API UClass* Z_Construct_UClass_UFrenzyAttack_NoRegister();
	THELEGION_API UClass* Z_Construct_UClass_UFrenzyAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
// End Cross Module References
	void UFrenzyAttack::StaticRegisterNativesUFrenzyAttack()
	{
	}
	UClass* Z_Construct_UClass_UFrenzyAttack_NoRegister()
	{
		return UFrenzyAttack::StaticClass();
	}
	struct Z_Construct_UClass_UFrenzyAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFrenzyAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrenzyAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FrenzyAttack.h" },
		{ "ModuleRelativePath", "Public/FrenzyAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFrenzyAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrenzyAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFrenzyAttack_Statics::ClassParams = {
		&UFrenzyAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFrenzyAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFrenzyAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFrenzyAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFrenzyAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFrenzyAttack, 2419120864);
	template<> THELEGION_API UClass* StaticClass<UFrenzyAttack>()
	{
		return UFrenzyAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFrenzyAttack(Z_Construct_UClass_UFrenzyAttack, &UFrenzyAttack::StaticClass, TEXT("/Script/TheLegion"), TEXT("UFrenzyAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrenzyAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
