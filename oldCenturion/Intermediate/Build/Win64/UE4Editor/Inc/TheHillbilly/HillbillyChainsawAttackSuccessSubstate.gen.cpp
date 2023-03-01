// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttackSuccessSubstate() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawAttackSuccessSubstate::StaticRegisterNativesUHillbillyChainsawAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_NoRegister()
	{
		return UHillbillyChainsawAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::ClassParams = {
		&UHillbillyChainsawAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttackSuccessSubstate, 3930249105);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttackSuccessSubstate>()
	{
		return UHillbillyChainsawAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttackSuccessSubstate(Z_Construct_UClass_UHillbillyChainsawAttackSuccessSubstate, &UHillbillyChainsawAttackSuccessSubstate::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
