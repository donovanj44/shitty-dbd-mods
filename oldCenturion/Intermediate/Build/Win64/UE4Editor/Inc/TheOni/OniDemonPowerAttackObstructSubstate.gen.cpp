// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonPowerAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonPowerAttackObstructSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonPowerAttackObstructSubstate::StaticRegisterNativesUOniDemonPowerAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_NoRegister()
	{
		return UOniDemonPowerAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonPowerAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonPowerAttackObstructSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonPowerAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::ClassParams = {
		&UOniDemonPowerAttackObstructSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonPowerAttackObstructSubstate, 3872410749);
	template<> THEONI_API UClass* StaticClass<UOniDemonPowerAttackObstructSubstate>()
	{
		return UOniDemonPowerAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonPowerAttackObstructSubstate(Z_Construct_UClass_UOniDemonPowerAttackObstructSubstate, &UOniDemonPowerAttackObstructSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonPowerAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonPowerAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
