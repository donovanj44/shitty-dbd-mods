// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAttackHittingSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAttackHittingSubstate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackHittingSubstate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackHittingSubstate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackSubstate();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatProperty();
// End Cross Module References
	void UDBDAttackHittingSubstate::StaticRegisterNativesUDBDAttackHittingSubstate()
	{
	}
	UClass* Z_Construct_UClass_UDBDAttackHittingSubstate_NoRegister()
	{
		return UDBDAttackHittingSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAttackHittingSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hittingPercentDamageBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hittingPercentDamageBegin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDAttackSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAttackHittingSubstate.h" },
		{ "ModuleRelativePath", "Public/DBDAttackHittingSubstate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::NewProp__hittingPercentDamageBegin_MetaData[] = {
		{ "Category", "DBDAttackHittingSubstate" },
		{ "ModuleRelativePath", "Public/DBDAttackHittingSubstate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::NewProp__hittingPercentDamageBegin = { "_hittingPercentDamageBegin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAttackHittingSubstate, _hittingPercentDamageBegin), Z_Construct_UScriptStruct_FStatProperty, METADATA_PARAMS(Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::NewProp__hittingPercentDamageBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::NewProp__hittingPercentDamageBegin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::NewProp__hittingPercentDamageBegin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAttackHittingSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::ClassParams = {
		&UDBDAttackHittingSubstate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAttackHittingSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAttackHittingSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAttackHittingSubstate, 4003999112);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAttackHittingSubstate>()
	{
		return UDBDAttackHittingSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAttackHittingSubstate(Z_Construct_UClass_UDBDAttackHittingSubstate, &UDBDAttackHittingSubstate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAttackHittingSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAttackHittingSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
