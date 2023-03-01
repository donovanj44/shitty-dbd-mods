// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePig/Public/PigAmbushAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigAmbushAttackSuccessSubstate() {}
// Cross Module References
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_NoRegister();
	THEPIG_API UClass* Z_Construct_UClass_UPigAmbushAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_ThePig();
// End Cross Module References
	void UPigAmbushAttackSuccessSubstate::StaticRegisterNativesUPigAmbushAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_NoRegister()
	{
		return UPigAmbushAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PigAmbushAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/PigAmbushAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPigAmbushAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::ClassParams = {
		&UPigAmbushAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPigAmbushAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPigAmbushAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPigAmbushAttackSuccessSubstate, 1351189390);
	template<> THEPIG_API UClass* StaticClass<UPigAmbushAttackSuccessSubstate>()
	{
		return UPigAmbushAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPigAmbushAttackSuccessSubstate(Z_Construct_UClass_UPigAmbushAttackSuccessSubstate, &UPigAmbushAttackSuccessSubstate::StaticClass, TEXT("/Script/ThePig"), TEXT("UPigAmbushAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPigAmbushAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
