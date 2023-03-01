// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightDashAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightDashAttackOpenSubstate() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackOpenSubstate_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightDashAttackOpenSubstate::StaticRegisterNativesUBlightDashAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UBlightDashAttackOpenSubstate_NoRegister()
	{
		return UBlightDashAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightDashAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/BlightDashAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightDashAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::ClassParams = {
		&UBlightDashAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightDashAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightDashAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightDashAttackOpenSubstate, 2609653157);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightDashAttackOpenSubstate>()
	{
		return UBlightDashAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightDashAttackOpenSubstate(Z_Construct_UClass_UBlightDashAttackOpenSubstate, &UBlightDashAttackOpenSubstate::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightDashAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightDashAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
