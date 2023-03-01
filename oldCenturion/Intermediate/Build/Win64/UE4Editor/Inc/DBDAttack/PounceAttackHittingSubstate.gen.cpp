// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAttack/Public/PounceAttackHittingSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePounceAttackHittingSubstate() {}
// Cross Module References
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackHittingSubstate_NoRegister();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackHittingSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackHittingSubstate();
	UPackage* Z_Construct_UPackage__Script_DBDAttack();
// End Cross Module References
	void UPounceAttackHittingSubstate::StaticRegisterNativesUPounceAttackHittingSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPounceAttackHittingSubstate_NoRegister()
	{
		return UPounceAttackHittingSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPounceAttackHittingSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackHittingSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PounceAttackHittingSubstate.h" },
		{ "ModuleRelativePath", "Public/PounceAttackHittingSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPounceAttackHittingSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::ClassParams = {
		&UPounceAttackHittingSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPounceAttackHittingSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPounceAttackHittingSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPounceAttackHittingSubstate, 3048716123);
	template<> DBDATTACK_API UClass* StaticClass<UPounceAttackHittingSubstate>()
	{
		return UPounceAttackHittingSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPounceAttackHittingSubstate(Z_Construct_UClass_UPounceAttackHittingSubstate, &UPounceAttackHittingSubstate::StaticClass, TEXT("/Script/DBDAttack"), TEXT("UPounceAttackHittingSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPounceAttackHittingSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
