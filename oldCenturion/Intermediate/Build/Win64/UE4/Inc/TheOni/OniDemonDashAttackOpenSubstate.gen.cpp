// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonDashAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonDashAttackOpenSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonDashAttackOpenSubstate();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonDashAttackOpenSubstate::StaticRegisterNativesUOniDemonDashAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_NoRegister()
	{
		return UOniDemonDashAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOniDemonPowerAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonDashAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonDashAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonDashAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::ClassParams = {
		&UOniDemonDashAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonDashAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonDashAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonDashAttackOpenSubstate, 3297423543);
	template<> THEONI_API UClass* StaticClass<UOniDemonDashAttackOpenSubstate>()
	{
		return UOniDemonDashAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonDashAttackOpenSubstate(Z_Construct_UClass_UOniDemonDashAttackOpenSubstate, &UOniDemonDashAttackOpenSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonDashAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonDashAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
