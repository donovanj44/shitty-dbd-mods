// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritHuskOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritHuskOutlineUpdateStrategy() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpiritHuskOutlineUpdateStrategy::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	void USpiritHuskOutlineUpdateStrategy::StaticRegisterNativesUSpiritHuskOutlineUpdateStrategy()
	{
		UClass* Class = USpiritHuskOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSlasherSet", &USpiritHuskOutlineUpdateStrategy::execOnSlasherSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics
	{
		struct SpiritHuskOutlineUpdateStrategy_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiritHuskOutlineUpdateStrategy_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritHuskOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(SpiritHuskOutlineUpdateStrategy_eventOnSlasherSet_Parms), Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_NoRegister()
	{
		return USpiritHuskOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpiritHuskOutlineUpdateStrategy_OnSlasherSet, "OnSlasherSet" }, // 3438500515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiritHuskOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/SpiritHuskOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiritHuskOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::ClassParams = {
		&USpiritHuskOutlineUpdateStrategy::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiritHuskOutlineUpdateStrategy, 325087339);
	template<> THESPIRIT_API UClass* StaticClass<USpiritHuskOutlineUpdateStrategy>()
	{
		return USpiritHuskOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiritHuskOutlineUpdateStrategy(Z_Construct_UClass_USpiritHuskOutlineUpdateStrategy, &USpiritHuskOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheSpirit"), TEXT("USpiritHuskOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiritHuskOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
