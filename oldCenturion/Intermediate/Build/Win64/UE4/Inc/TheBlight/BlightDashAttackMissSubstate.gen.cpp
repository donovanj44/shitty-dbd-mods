// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightDashAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightDashAttackMissSubstate() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackMissSubstate_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightDashAttackMissSubstate::StaticRegisterNativesUBlightDashAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UBlightDashAttackMissSubstate_NoRegister()
	{
		return UBlightDashAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightDashAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/BlightDashAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightDashAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::ClassParams = {
		&UBlightDashAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightDashAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightDashAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightDashAttackMissSubstate, 3430523506);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightDashAttackMissSubstate>()
	{
		return UBlightDashAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightDashAttackMissSubstate(Z_Construct_UClass_UBlightDashAttackMissSubstate, &UBlightDashAttackMissSubstate::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightDashAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightDashAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif