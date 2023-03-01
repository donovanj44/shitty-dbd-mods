// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/PigAmbushAttackHittingSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAmbushAttackHittingSubstate() {}
// Cross Module References
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackHittingSubstate_NoRegister();
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackHittingSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackHittingSubstate();
	UPackage* Z_Construct_UPackage__Script_ThePig();
// End Cross Module References
	void UPigAmbushAttackHittingSubstate::StaticRegisterNativesUPigAmbushAttackHittingSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPigAmbushAttackHittingSubstate_NoRegister()
	{
		return UPigAmbushAttackHittingSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackHittingSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PigAmbushAttackHittingSubstate.h" },
		{ "ModuleRelativePath", "Public/PigAmbushAttackHittingSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAmbushAttackHittingSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::ClassParams = {
		&UPigAmbushAttackHittingSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAmbushAttackHittingSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAmbushAttackHittingSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAmbushAttackHittingSubstate, 539345698);
	template<> THEPIG_API UClass* StaticClass<UPigAmbushAttackHittingSubstate>()
	{
		return UPigAmbushAttackHittingSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAmbushAttackHittingSubstate(Z_Construct_UClass_UPigAmbushAttackHittingSubstate, &UPigAmbushAttackHittingSubstate::StaticClass, TEXT("/Script/ThePig"), TEXT("UPigAmbushAttackHittingSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAmbushAttackHittingSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
