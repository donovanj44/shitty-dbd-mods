// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/PigAmbushAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAmbushAttackObstructSubstate() {}
// Cross Module References
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackObstructSubstate_NoRegister();
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackObstructSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_ThePig();
// End Cross Module References
	void UPigAmbushAttackObstructSubstate::StaticRegisterNativesUPigAmbushAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPigAmbushAttackObstructSubstate_NoRegister()
	{
		return UPigAmbushAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PigAmbushAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/PigAmbushAttackObstructSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAmbushAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::ClassParams = {
		&UPigAmbushAttackObstructSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAmbushAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAmbushAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAmbushAttackObstructSubstate, 1666748499);
	template<> THEPIG_API UClass* StaticClass<UPigAmbushAttackObstructSubstate>()
	{
		return UPigAmbushAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAmbushAttackObstructSubstate(Z_Construct_UClass_UPigAmbushAttackObstructSubstate, &UPigAmbushAttackObstructSubstate::StaticClass, TEXT("/Script/ThePig"), TEXT("UPigAmbushAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAmbushAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
