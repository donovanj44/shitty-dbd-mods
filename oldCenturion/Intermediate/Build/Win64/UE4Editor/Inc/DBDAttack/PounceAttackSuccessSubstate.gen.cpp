// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAttack/Public/PounceAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePounceAttackSuccessSubstate() {}
// Cross Module References
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate_NoRegister();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_DBDAttack();
// End Cross Module References
	void UPounceAttackSuccessSubstate::StaticRegisterNativesUPounceAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate_NoRegister()
	{
		return UPounceAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PounceAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/PounceAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPounceAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::ClassParams = {
		&UPounceAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPounceAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPounceAttackSuccessSubstate, 2774750694);
	template<> DBDATTACK_API UClass* StaticClass<UPounceAttackSuccessSubstate>()
	{
		return UPounceAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPounceAttackSuccessSubstate(Z_Construct_UClass_UPounceAttackSuccessSubstate, &UPounceAttackSuccessSubstate::StaticClass, TEXT("/Script/DBDAttack"), TEXT("UPounceAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPounceAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
