// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonPounceAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPounceAttackSuccessSubstate() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
// End Cross Module References
	void UDemogorgonPounceAttackSuccessSubstate::StaticRegisterNativesUDemogorgonPounceAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_NoRegister()
	{
		return UDemogorgonPounceAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DemogorgonPounceAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPounceAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPounceAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::ClassParams = {
		&UDemogorgonPounceAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPounceAttackSuccessSubstate, 2774959131);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonPounceAttackSuccessSubstate>()
	{
		return UDemogorgonPounceAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPounceAttackSuccessSubstate(Z_Construct_UClass_UDemogorgonPounceAttackSuccessSubstate, &UDemogorgonPounceAttackSuccessSubstate::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonPounceAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPounceAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
