// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNurse/Public/BlinkAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkAttackSuccessSubstate() {}
// Cross Module References
	THENURSE_API UClass* Z_Construct_UClass_UBlinkAttackSuccessSubstate_NoRegister();
	THENURSE_API UClass* Z_Construct_UClass_UBlinkAttackSuccessSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackSuccessSubstate();
	UPackage* Z_Construct_UPackage__Script_TheNurse();
// End Cross Module References
	void UBlinkAttackSuccessSubstate::StaticRegisterNativesUBlinkAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UBlinkAttackSuccessSubstate_NoRegister()
	{
		return UBlinkAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackSuccessSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNurse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlinkAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/BlinkAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlinkAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::ClassParams = {
		&UBlinkAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlinkAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlinkAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlinkAttackSuccessSubstate, 1181438677);
	template<> THENURSE_API UClass* StaticClass<UBlinkAttackSuccessSubstate>()
	{
		return UBlinkAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlinkAttackSuccessSubstate(Z_Construct_UClass_UBlinkAttackSuccessSubstate, &UBlinkAttackSuccessSubstate::StaticClass, TEXT("/Script/TheNurse"), TEXT("UBlinkAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlinkAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
