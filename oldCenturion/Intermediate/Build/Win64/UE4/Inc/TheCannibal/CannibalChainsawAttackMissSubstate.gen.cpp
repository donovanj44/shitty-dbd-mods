// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalChainsawAttackMissSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalChainsawAttackMissSubstate() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawAttackMissSubstate();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UCannibalChainsawAttackMissSubstate::StaticRegisterNativesUCannibalChainsawAttackMissSubstate()
	{
	}
	UClass* Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_NoRegister()
	{
		return UCannibalChainsawAttackMissSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHillbillyChainsawAttackMissSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannibalChainsawAttackMissSubstate.h" },
		{ "ModuleRelativePath", "Public/CannibalChainsawAttackMissSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalChainsawAttackMissSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::ClassParams = {
		&UCannibalChainsawAttackMissSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalChainsawAttackMissSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalChainsawAttackMissSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalChainsawAttackMissSubstate, 1734055768);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalChainsawAttackMissSubstate>()
	{
		return UCannibalChainsawAttackMissSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalChainsawAttackMissSubstate(Z_Construct_UClass_UCannibalChainsawAttackMissSubstate, &UCannibalChainsawAttackMissSubstate::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalChainsawAttackMissSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalChainsawAttackMissSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
