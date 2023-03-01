// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsBestProveThyselfEffectInRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsBestProveThyselfEffectInRange() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsBestProveThyselfEffectInRange_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsBestProveThyselfEffectInRange();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UProveThyselfEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsBestProveThyselfEffectInRange::execOnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_GET_OBJECT(UProveThyselfEffect,Z_Param_proveThyselfEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeChanged(Z_Param_inRange,Z_Param_proveThyselfEffect);
		P_NATIVE_END;
	}
	void UIsBestProveThyselfEffectInRange::StaticRegisterNativesUIsBestProveThyselfEffectInRange()
	{
		UClass* Class = UIsBestProveThyselfEffectInRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeChanged", &UIsBestProveThyselfEffectInRange::execOnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics
	{
		struct IsBestProveThyselfEffectInRange_eventOnInRangeChanged_Parms
		{
			bool inRange;
			UProveThyselfEffect* proveThyselfEffect;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proveThyselfEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proveThyselfEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_proveThyselfEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_proveThyselfEffect = { "proveThyselfEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsBestProveThyselfEffectInRange_eventOnInRangeChanged_Parms, proveThyselfEffect), Z_Construct_UClass_UProveThyselfEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_proveThyselfEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_proveThyselfEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((IsBestProveThyselfEffectInRange_eventOnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsBestProveThyselfEffectInRange_eventOnInRangeChanged_Parms), &Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_proveThyselfEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsBestProveThyselfEffectInRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsBestProveThyselfEffectInRange, nullptr, "OnInRangeChanged", nullptr, nullptr, sizeof(IsBestProveThyselfEffectInRange_eventOnInRangeChanged_Parms), Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsBestProveThyselfEffectInRange_NoRegister()
	{
		return UIsBestProveThyselfEffectInRange::StaticClass();
	}
	struct Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsBestProveThyselfEffectInRange_OnInRangeChanged, "OnInRangeChanged" }, // 3326164563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsBestProveThyselfEffectInRange.h" },
		{ "ModuleRelativePath", "Public/IsBestProveThyselfEffectInRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsBestProveThyselfEffectInRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::ClassParams = {
		&UIsBestProveThyselfEffectInRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsBestProveThyselfEffectInRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsBestProveThyselfEffectInRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsBestProveThyselfEffectInRange, 2938173751);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsBestProveThyselfEffectInRange>()
	{
		return UIsBestProveThyselfEffectInRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsBestProveThyselfEffectInRange(Z_Construct_UClass_UIsBestProveThyselfEffectInRange, &UIsBestProveThyselfEffectInRange::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsBestProveThyselfEffectInRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsBestProveThyselfEffectInRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
