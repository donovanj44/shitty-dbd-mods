// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/GeneratorDamageInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorDamageInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorDamageInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorDamageInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorDamageInteraction::execAuthority_DamageGenerator)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_damageBy);
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DamageGenerator(Z_Param_damageBy,Z_Param_generator);
		P_NATIVE_END;
	}
	void UGeneratorDamageInteraction::StaticRegisterNativesUGeneratorDamageInteraction()
	{
		UClass* Class = UGeneratorDamageInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_DamageGenerator", &UGeneratorDamageInteraction::execAuthority_DamageGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics
	{
		struct GeneratorDamageInteraction_eventAuthority_DamageGenerator_Parms
		{
			ADBDPlayer* damageBy;
			AGenerator* generator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDamageInteraction_eventAuthority_DamageGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::NewProp_damageBy = { "damageBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDamageInteraction_eventAuthority_DamageGenerator_Parms, damageBy), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::NewProp_generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::NewProp_damageBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDamageInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorDamageInteraction, nullptr, "Authority_DamageGenerator", nullptr, nullptr, sizeof(GeneratorDamageInteraction_eventAuthority_DamageGenerator_Parms), Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorDamageInteraction_NoRegister()
	{
		return UGeneratorDamageInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorDamageInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorDamageInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorDamageInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorDamageInteraction_Authority_DamageGenerator, "Authority_DamageGenerator" }, // 1556652598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorDamageInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeneratorDamageInteraction.h" },
		{ "ModuleRelativePath", "Public/GeneratorDamageInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorDamageInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorDamageInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorDamageInteraction_Statics::ClassParams = {
		&UGeneratorDamageInteraction::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorDamageInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorDamageInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorDamageInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorDamageInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorDamageInteraction, 4040717084);
	template<> DBDINTERACTION_API UClass* StaticClass<UGeneratorDamageInteraction>()
	{
		return UGeneratorDamageInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorDamageInteraction(Z_Construct_UClass_UGeneratorDamageInteraction, &UGeneratorDamageInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UGeneratorDamageInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorDamageInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
