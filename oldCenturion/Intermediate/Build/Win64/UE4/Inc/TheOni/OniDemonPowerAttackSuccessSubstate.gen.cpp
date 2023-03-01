// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonPowerAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonPowerAttackSuccessSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonPowerAttackSuccessSubstate::StaticRegisterNativesUOniDemonPowerAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_NoRegister()
	{
		return UOniDemonPowerAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonPowerAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonPowerAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonPowerAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::ClassParams = {
		&UOniDemonPowerAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonPowerAttackSuccessSubstate, 3022744018);
	template<> THEONI_API UClass* StaticClass<UOniDemonPowerAttackSuccessSubstate>()
	{
		return UOniDemonPowerAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonPowerAttackSuccessSubstate(Z_Construct_UClass_UOniDemonPowerAttackSuccessSubstate, &UOniDemonPowerAttackSuccessSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonPowerAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonPowerAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
