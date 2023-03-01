// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonPounceAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPounceAttackObstructSubstate() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
// End Cross Module References
	void UDemogorgonPounceAttackObstructSubstate::StaticRegisterNativesUDemogorgonPounceAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_NoRegister()
	{
		return UDemogorgonPounceAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPounceAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPounceAttackObstructSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPounceAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::ClassParams = {
		&UDemogorgonPounceAttackObstructSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPounceAttackObstructSubstate, 4016318257);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonPounceAttackObstructSubstate>()
	{
		return UDemogorgonPounceAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPounceAttackObstructSubstate(Z_Construct_UClass_UDemogorgonPounceAttackObstructSubstate, &UDemogorgonPounceAttackObstructSubstate::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonPounceAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPounceAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
