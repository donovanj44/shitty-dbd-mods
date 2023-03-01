// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackOpenSubstate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackOpenSubstate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackOpenSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSubstate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDAttackOpenSubstate::StaticRegisterNativesUDBDAttackOpenSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDBDAttackOpenSubstate_NoRegister()
	{
		return UDBDAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/DBDAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::ClassParams = {
		&UDBDAttackOpenSubstate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttackOpenSubstate, 3002289695);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttackOpenSubstate>()
	{
		return UDBDAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttackOpenSubstate(Z_Construct_UClass_UDBDAttackOpenSubstate, &UDBDAttackOpenSubstate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
