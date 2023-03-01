// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/RemoveOnOriginatingSurvivorGoneStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveOnOriginatingSurvivorGoneStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URemoveOnOriginatingSurvivorGoneStatusEffect::execAuthority_OnSurvivorRemoved)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorRemoved(Z_Param_survivor);
		P_NATIVE_END;
	}
	void URemoveOnOriginatingSurvivorGoneStatusEffect::StaticRegisterNativesURemoveOnOriginatingSurvivorGoneStatusEffect()
	{
		UClass* Class = URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorRemoved", &URemoveOnOriginatingSurvivorGoneStatusEffect::execAuthority_OnSurvivorRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics
	{
		struct RemoveOnOriginatingSurvivorGoneStatusEffect_eventAuthority_OnSurvivorRemoved_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoveOnOriginatingSurvivorGoneStatusEffect_eventAuthority_OnSurvivorRemoved_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoveOnOriginatingSurvivorGoneStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect, nullptr, "Authority_OnSurvivorRemoved", nullptr, nullptr, sizeof(RemoveOnOriginatingSurvivorGoneStatusEffect_eventAuthority_OnSurvivorRemoved_Parms), Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_NoRegister()
	{
		return URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved, "Authority_OnSurvivorRemoved" }, // 3514357670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoveOnOriginatingSurvivorGoneStatusEffect.h" },
		{ "ModuleRelativePath", "Public/RemoveOnOriginatingSurvivorGoneStatusEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOnOriginatingSurvivorGoneStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::ClassParams = {
		&URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoveOnOriginatingSurvivorGoneStatusEffect, 1457531908);
	template<> DBDCOMPETENCE_API UClass* StaticClass<URemoveOnOriginatingSurvivorGoneStatusEffect>()
	{
		return URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect(Z_Construct_UClass_URemoveOnOriginatingSurvivorGoneStatusEffect, &URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("URemoveOnOriginatingSurvivorGoneStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOnOriginatingSurvivorGoneStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
