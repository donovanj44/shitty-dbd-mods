// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttackOpenSubstate() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawAttackOpenSubstate::StaticRegisterNativesUHillbillyChainsawAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_NoRegister()
	{
		return UHillbillyChainsawAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::ClassParams = {
		&UHillbillyChainsawAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttackOpenSubstate, 3931865822);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttackOpenSubstate>()
	{
		return UHillbillyChainsawAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttackOpenSubstate(Z_Construct_UClass_UHillbillyChainsawAttackOpenSubstate, &UHillbillyChainsawAttackOpenSubstate::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
