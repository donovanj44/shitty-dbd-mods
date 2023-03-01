// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAttack/Public/PounceAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePounceAttackMissSubstate() {}
// Cross Module References
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate_NoRegister();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_DBDAttack();
// End Cross Module References
	void UPounceAttackMissSubstate::StaticRegisterNativesUPounceAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPounceAttackMissSubstate_NoRegister()
	{
		return UPounceAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPounceAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPounceAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PounceAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/PounceAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPounceAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPounceAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPounceAttackMissSubstate_Statics::ClassParams = {
		&UPounceAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPounceAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPounceAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPounceAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPounceAttackMissSubstate, 2035430276);
	template<> DBDATTACK_API UClass* StaticClass<UPounceAttackMissSubstate>()
	{
		return UPounceAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPounceAttackMissSubstate(Z_Construct_UClass_UPounceAttackMissSubstate, &UPounceAttackMissSubstate::StaticClass, TEXT("/Script/DBDAttack"), TEXT("UPounceAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPounceAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
