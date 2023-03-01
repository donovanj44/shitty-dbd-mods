// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonPowerAttackHittingSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonPowerAttackHittingSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackHittingSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonPowerAttackHittingSubstate::StaticRegisterNativesUOniDemonPowerAttackHittingSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_NoRegister()
	{
		return UOniDemonPowerAttackHittingSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackHittingSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonPowerAttackHittingSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonPowerAttackHittingSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonPowerAttackHittingSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::ClassParams = {
		&UOniDemonPowerAttackHittingSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonPowerAttackHittingSubstate, 1481243377);
	template<> THEONI_API UClass* StaticClass<UOniDemonPowerAttackHittingSubstate>()
	{
		return UOniDemonPowerAttackHittingSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonPowerAttackHittingSubstate(Z_Construct_UClass_UOniDemonPowerAttackHittingSubstate, &UOniDemonPowerAttackHittingSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonPowerAttackHittingSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonPowerAttackHittingSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
