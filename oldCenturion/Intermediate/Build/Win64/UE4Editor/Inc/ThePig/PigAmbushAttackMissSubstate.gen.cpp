// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/PigAmbushAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAmbushAttackMissSubstate() {}
// Cross Module References
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackMissSubstate_NoRegister();
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_ThePig();
// End Cross Module References
	void UPigAmbushAttackMissSubstate::StaticRegisterNativesUPigAmbushAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPigAmbushAttackMissSubstate_NoRegister()
	{
		return UPigAmbushAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PigAmbushAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/PigAmbushAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAmbushAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::ClassParams = {
		&UPigAmbushAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAmbushAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAmbushAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAmbushAttackMissSubstate, 3364990616);
	template<> THEPIG_API UClass* StaticClass<UPigAmbushAttackMissSubstate>()
	{
		return UPigAmbushAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAmbushAttackMissSubstate(Z_Construct_UClass_UPigAmbushAttackMissSubstate, &UPigAmbushAttackMissSubstate::StaticClass, TEXT("/Script/ThePig"), TEXT("UPigAmbushAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAmbushAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
