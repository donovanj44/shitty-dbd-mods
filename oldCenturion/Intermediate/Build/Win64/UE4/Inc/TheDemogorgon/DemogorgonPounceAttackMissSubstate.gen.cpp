// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonPounceAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPounceAttackMissSubstate() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
// End Cross Module References
	void UDemogorgonPounceAttackMissSubstate::StaticRegisterNativesUDemogorgonPounceAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_NoRegister()
	{
		return UDemogorgonPounceAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPounceAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPounceAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPounceAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::ClassParams = {
		&UDemogorgonPounceAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPounceAttackMissSubstate, 2434266837);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonPounceAttackMissSubstate>()
	{
		return UDemogorgonPounceAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPounceAttackMissSubstate(Z_Construct_UClass_UDemogorgonPounceAttackMissSubstate, &UDemogorgonPounceAttackMissSubstate::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonPounceAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPounceAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
