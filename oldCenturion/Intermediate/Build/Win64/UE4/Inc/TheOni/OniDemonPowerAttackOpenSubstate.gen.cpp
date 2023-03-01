// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonPowerAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonPowerAttackOpenSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonPowerAttackOpenSubstate::StaticRegisterNativesUOniDemonPowerAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_NoRegister()
	{
		return UOniDemonPowerAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonPowerAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonPowerAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonPowerAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::ClassParams = {
		&UOniDemonPowerAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonPowerAttackOpenSubstate, 2387834693);
	template<> THEONI_API UClass* StaticClass<UOniDemonPowerAttackOpenSubstate>()
	{
		return UOniDemonPowerAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonPowerAttackOpenSubstate(Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate, &UOniDemonPowerAttackOpenSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonPowerAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonPowerAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
