// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackSuccessSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackSuccessSubstate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSuccessSubstate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSuccessSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSubstate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDAttackSuccessSubstate::StaticRegisterNativesUDBDAttackSuccessSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDBDAttackSuccessSubstate_NoRegister()
	{
		return UDBDAttackSuccessSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAttackSuccessSubstate.h" },
		{ "ModuleRelativePath", "Public/DBDAttackSuccessSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttackSuccessSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::ClassParams = {
		&UDBDAttackSuccessSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttackSuccessSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttackSuccessSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttackSuccessSubstate, 663596912);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttackSuccessSubstate>()
	{
		return UDBDAttackSuccessSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttackSuccessSubstate(Z_Construct_UClass_UDBDAttackSuccessSubstate, &UDBDAttackSuccessSubstate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttackSuccessSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttackSuccessSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
