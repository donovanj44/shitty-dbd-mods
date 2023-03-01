// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DisciplineEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisciplineEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisciplineEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDisciplineEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UDisciplineEffect::execShouldShowFakeKillerStain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowFakeKillerStain();
		P_NATIVE_END;
	}
	void UDisciplineEffect::StaticRegisterNativesUDisciplineEffect()
	{
		UClass* Class = UDisciplineEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShouldShowFakeKillerStain", &UDisciplineEffect::execShouldShowFakeKillerStain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics
	{
		struct DisciplineEffect_eventShouldShowFakeKillerStain_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisciplineEffect_eventShouldShowFakeKillerStain_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DisciplineEffect_eventShouldShowFakeKillerStain_Parms), &Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisciplineEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisciplineEffect, nullptr, "ShouldShowFakeKillerStain", nullptr, nullptr, sizeof(DisciplineEffect_eventShouldShowFakeKillerStain_Parms), Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDisciplineEffect_NoRegister()
	{
		return UDisciplineEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDisciplineEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deactivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deactivationDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisciplineEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisciplineEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisciplineEffect_ShouldShowFakeKillerStain, "ShouldShowFakeKillerStain" }, // 3804915708
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisciplineEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisciplineEffect.h" },
		{ "ModuleRelativePath", "Public/DisciplineEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisciplineEffect_Statics::NewProp__deactivationDelay_MetaData[] = {
		{ "Category", "DisciplineEffect" },
		{ "ModuleRelativePath", "Public/DisciplineEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisciplineEffect_Statics::NewProp__deactivationDelay = { "_deactivationDelay", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDisciplineEffect, _deactivationDelay), METADATA_PARAMS(Z_Construct_UClass_UDisciplineEffect_Statics::NewProp__deactivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisciplineEffect_Statics::NewProp__deactivationDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisciplineEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisciplineEffect_Statics::NewProp__deactivationDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisciplineEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisciplineEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisciplineEffect_Statics::ClassParams = {
		&UDisciplineEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisciplineEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisciplineEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisciplineEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisciplineEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisciplineEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisciplineEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisciplineEffect, 2077115930);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDisciplineEffect>()
	{
		return UDisciplineEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisciplineEffect(Z_Construct_UClass_UDisciplineEffect, &UDisciplineEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDisciplineEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisciplineEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
