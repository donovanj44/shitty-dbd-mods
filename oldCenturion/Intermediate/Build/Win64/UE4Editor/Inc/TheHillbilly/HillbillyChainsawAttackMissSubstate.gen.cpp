// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawAttackMissSubstate() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawAttackMissSubstate::StaticRegisterNativesUHillbillyChainsawAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_NoRegister()
	{
		return UHillbillyChainsawAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyChainsawAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::ClassParams = {
		&UHillbillyChainsawAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawAttackMissSubstate, 3879661612);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawAttackMissSubstate>()
	{
		return UHillbillyChainsawAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawAttackMissSubstate(Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate, &UHillbillyChainsawAttackMissSubstate::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
