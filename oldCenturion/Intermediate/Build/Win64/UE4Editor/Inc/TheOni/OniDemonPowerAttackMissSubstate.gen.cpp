// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniDemonPowerAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniDemonPowerAttackMissSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniDemonPowerAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniDemonPowerAttackMissSubstate::StaticRegisterNativesUOniDemonPowerAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_NoRegister()
	{
		return UOniDemonPowerAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniDemonPowerAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/OniDemonPowerAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniDemonPowerAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::ClassParams = {
		&UOniDemonPowerAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniDemonPowerAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniDemonPowerAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniDemonPowerAttackMissSubstate, 1167119874);
	template<> THEONI_API UClass* StaticClass<UOniDemonPowerAttackMissSubstate>()
	{
		return UOniDemonPowerAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniDemonPowerAttackMissSubstate(Z_Construct_UClass_UOniDemonPowerAttackMissSubstate, &UOniDemonPowerAttackMissSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniDemonPowerAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniDemonPowerAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
