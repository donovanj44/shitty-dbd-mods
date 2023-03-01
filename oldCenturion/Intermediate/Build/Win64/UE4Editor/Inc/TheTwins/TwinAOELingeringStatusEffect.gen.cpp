// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinAOELingeringStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinAOELingeringStatusEffect() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinAOELingeringStatusEffect_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinAOELingeringStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBaseLingeringStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UTwinAOELingeringStatusEffect::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UTwinAOELingeringStatusEffect::StaticRegisterNativesUTwinAOELingeringStatusEffect()
	{
		UClass* Class = UTwinAOELingeringStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInRangeChanged", &UTwinAOELingeringStatusEffect::execAuthority_OnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics
	{
		struct TwinAOELingeringStatusEffect_eventAuthority_OnInRangeChanged_Parms
		{
			bool inRange;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((TwinAOELingeringStatusEffect_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinAOELingeringStatusEffect_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAOELingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAOELingeringStatusEffect, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(TwinAOELingeringStatusEffect_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinAOELingeringStatusEffect_NoRegister()
	{
		return UTwinAOELingeringStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shriekingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__shriekingRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLingeringStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 3366723522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinAOELingeringStatusEffect.h" },
		{ "ModuleRelativePath", "Public/TwinAOELingeringStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::NewProp__shriekingRange_MetaData[] = {
		{ "Category", "TwinAOELingeringStatusEffect" },
		{ "ModuleRelativePath", "Public/TwinAOELingeringStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::NewProp__shriekingRange = { "_shriekingRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinAOELingeringStatusEffect, _shriekingRange), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::NewProp__shriekingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::NewProp__shriekingRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::NewProp__shriekingRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinAOELingeringStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::ClassParams = {
		&UTwinAOELingeringStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinAOELingeringStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinAOELingeringStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinAOELingeringStatusEffect, 3794903427);
	template<> THETWINS_API UClass* StaticClass<UTwinAOELingeringStatusEffect>()
	{
		return UTwinAOELingeringStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinAOELingeringStatusEffect(Z_Construct_UClass_UTwinAOELingeringStatusEffect, &UTwinAOELingeringStatusEffect::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinAOELingeringStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinAOELingeringStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
