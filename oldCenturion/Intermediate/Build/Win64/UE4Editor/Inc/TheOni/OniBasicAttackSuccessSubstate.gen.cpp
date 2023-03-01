// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniBasicAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniBasicAttackSuccessSubstate() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniBasicAttackSuccessSubstate_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniBasicAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniBasicAttackSuccessSubstate::StaticRegisterNativesUOniBasicAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UOniBasicAttackSuccessSubstate_NoRegister()
	{
		return UOniBasicAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniBasicAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/OniBasicAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniBasicAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::ClassParams = {
		&UOniBasicAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniBasicAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniBasicAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniBasicAttackSuccessSubstate, 1993990657);
	template<> THEONI_API UClass* StaticClass<UOniBasicAttackSuccessSubstate>()
	{
		return UOniBasicAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniBasicAttackSuccessSubstate(Z_Construct_UClass_UOniBasicAttackSuccessSubstate, &UOniBasicAttackSuccessSubstate::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniBasicAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniBasicAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
