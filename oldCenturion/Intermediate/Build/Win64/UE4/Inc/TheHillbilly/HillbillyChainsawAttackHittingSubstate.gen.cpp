// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttackHittingSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttackHittingSubstate() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackHittingSubstate();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawAttackHittingSubstate::StaticRegisterNativesUHillbillyChainsawAttackHittingSubstate()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_NoRegister()
	{
		return UHillbillyChainsawAttackHittingSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackHittingSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttackHittingSubstate.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttackHittingSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttackHittingSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::ClassParams = {
		&UHillbillyChainsawAttackHittingSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttackHittingSubstate, 2341655263);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttackHittingSubstate>()
	{
		return UHillbillyChainsawAttackHittingSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttackHittingSubstate(Z_Construct_UClass_UHillbillyChainsawAttackHittingSubstate, &UHillbillyChainsawAttackHittingSubstate::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttackHittingSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttackHittingSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
