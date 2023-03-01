// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/PigAmbushAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAmbushAttackOpenSubstate() {}
// Cross Module References
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackOpenSubstate_NoRegister();
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_ThePig();
// End Cross Module References
	void UPigAmbushAttackOpenSubstate::StaticRegisterNativesUPigAmbushAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPigAmbushAttackOpenSubstate_NoRegister()
	{
		return UPigAmbushAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PigAmbushAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/PigAmbushAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAmbushAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::ClassParams = {
		&UPigAmbushAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAmbushAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAmbushAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAmbushAttackOpenSubstate, 3002250416);
	template<> THEPIG_API UClass* StaticClass<UPigAmbushAttackOpenSubstate>()
	{
		return UPigAmbushAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAmbushAttackOpenSubstate(Z_Construct_UClass_UPigAmbushAttackOpenSubstate, &UPigAmbushAttackOpenSubstate::StaticClass, TEXT("/Script/ThePig"), TEXT("UPigAmbushAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAmbushAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
