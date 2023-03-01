// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/OwningPlayerInSpiritHuskRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningPlayerInSpiritHuskRange() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UOwningPlayerInSpiritHuskRange();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOwningPlayerInSpiritHuskRange::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UOwningPlayerInSpiritHuskRange::StaticRegisterNativesUOwningPlayerInSpiritHuskRange()
	{
		UClass* Class = UOwningPlayerInSpiritHuskRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &UOwningPlayerInSpiritHuskRange::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics
	{
		struct OwningPlayerInSpiritHuskRange_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OwningPlayerInSpiritHuskRange_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OwningPlayerInSpiritHuskRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOwningPlayerInSpiritHuskRange, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(OwningPlayerInSpiritHuskRange_eventOnKillerSet_Parms), Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_NoRegister()
	{
		return UOwningPlayerInSpiritHuskRange::StaticClass();
	}
	struct Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOwningPlayerInSpiritHuskRange_OnKillerSet, "OnKillerSet" }, // 1856104289
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningPlayerInSpiritHuskRange.h" },
		{ "ModuleRelativePath", "Public/OwningPlayerInSpiritHuskRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningPlayerInSpiritHuskRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::ClassParams = {
		&UOwningPlayerInSpiritHuskRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningPlayerInSpiritHuskRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningPlayerInSpiritHuskRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningPlayerInSpiritHuskRange, 1620127873);
	template<> THESPIRIT_API UClass* StaticClass<UOwningPlayerInSpiritHuskRange>()
	{
		return UOwningPlayerInSpiritHuskRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningPlayerInSpiritHuskRange(Z_Construct_UClass_UOwningPlayerInSpiritHuskRange, &UOwningPlayerInSpiritHuskRange::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UOwningPlayerInSpiritHuskRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningPlayerInSpiritHuskRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
