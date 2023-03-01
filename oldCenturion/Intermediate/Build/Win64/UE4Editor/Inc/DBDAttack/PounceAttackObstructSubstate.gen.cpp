// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAttack/Public/PounceAttackObstructSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePounceAttackObstructSubstate() {}
// Cross Module References
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate_NoRegister();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackObstructSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackObstructSubstate();
	UPackage* Z_Construct_UPackage__Script_DBDAttack();
// End Cross Module References
	void UPounceAttackObstructSubstate::StaticRegisterNativesUPounceAttackObstructSubstate()
	{
	}
	UClass* Z_Construct_UClass_UPounceAttackObstructSubstate_NoRegister()
	{
		return UPounceAttackObstructSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UPounceAttackObstructSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fullObstructMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__fullObstructMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackObstructSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PounceAttackObstructSubstate.h" },
		{ "ModuleRelativePath", "Public/PounceAttackObstructSubstate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::NewProp__fullObstructMontage_MetaData[] = {
		{ "Category", "PounceAttackObstructSubstate" },
		{ "ModuleRelativePath", "Public/PounceAttackObstructSubstate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::NewProp__fullObstructMontage = { "_fullObstructMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPounceAttackObstructSubstate, _fullObstructMontage), METADATA_PARAMS(Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::NewProp__fullObstructMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::NewProp__fullObstructMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::NewProp__fullObstructMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPounceAttackObstructSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::ClassParams = {
		&UPounceAttackObstructSubstate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPounceAttackObstructSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPounceAttackObstructSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPounceAttackObstructSubstate, 3755935057);
	template<> DBDATTACK_API UClass* StaticClass<UPounceAttackObstructSubstate>()
	{
		return UPounceAttackObstructSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPounceAttackObstructSubstate(Z_Construct_UClass_UPounceAttackObstructSubstate, &UPounceAttackObstructSubstate::StaticClass, TEXT("/Script/DBDAttack"), TEXT("UPounceAttackObstructSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPounceAttackObstructSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
