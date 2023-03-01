// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightDashAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightDashAttackSuccessSubstate() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackSuccessSubstate_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightDashAttackSuccessSubstate::StaticRegisterNativesUBlightDashAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UBlightDashAttackSuccessSubstate_NoRegister()
	{
		return UBlightDashAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightDashAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/BlightDashAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightDashAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::ClassParams = {
		&UBlightDashAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightDashAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightDashAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightDashAttackSuccessSubstate, 510204161);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightDashAttackSuccessSubstate>()
	{
		return UBlightDashAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightDashAttackSuccessSubstate(Z_Construct_UClass_UBlightDashAttackSuccessSubstate, &UBlightDashAttackSuccessSubstate::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightDashAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightDashAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
