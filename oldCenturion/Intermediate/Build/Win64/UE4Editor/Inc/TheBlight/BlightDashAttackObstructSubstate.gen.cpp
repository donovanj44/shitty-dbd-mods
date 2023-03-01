// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightDashAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightDashAttackObstructSubstate() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackObstructSubstate_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackObstructSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightDashAttackObstructSubstate::StaticRegisterNativesUBlightDashAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UBlightDashAttackObstructSubstate_NoRegister()
	{
		return UBlightDashAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightDashAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/BlightDashAttackObstructSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightDashAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::ClassParams = {
		&UBlightDashAttackObstructSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightDashAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightDashAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightDashAttackObstructSubstate, 1360459609);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightDashAttackObstructSubstate>()
	{
		return UBlightDashAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightDashAttackObstructSubstate(Z_Construct_UClass_UBlightDashAttackObstructSubstate, &UBlightDashAttackObstructSubstate::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightDashAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightDashAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
