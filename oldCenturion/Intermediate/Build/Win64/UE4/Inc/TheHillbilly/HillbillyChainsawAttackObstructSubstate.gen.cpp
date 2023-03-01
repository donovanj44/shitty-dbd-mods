// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttackObstructSubstate() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawAttackObstructSubstate::StaticRegisterNativesUHillbillyChainsawAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_NoRegister()
	{
		return UHillbillyChainsawAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttackObstructSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::ClassParams = {
		&UHillbillyChainsawAttackObstructSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttackObstructSubstate, 587817324);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttackObstructSubstate>()
	{
		return UHillbillyChainsawAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttackObstructSubstate(Z_Construct_UClass_UHillbillyChainsawAttackObstructSubstate, &UHillbillyChainsawAttackObstructSubstate::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
