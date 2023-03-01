// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinBaseKillerInstinctEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinBaseKillerInstinctEffect() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinBaseKillerInstinctEffect_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinBaseKillerInstinctEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UTwinBaseKillerInstinctEffect::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UTwinBaseKillerInstinctEffect::StaticRegisterNativesUTwinBaseKillerInstinctEffect()
	{
		UClass* Class = UTwinBaseKillerInstinctEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInRangeChanged", &UTwinBaseKillerInstinctEffect::execAuthority_OnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics
	{
		struct TwinBaseKillerInstinctEffect_eventAuthority_OnInRangeChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((TwinBaseKillerInstinctEffect_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinBaseKillerInstinctEffect_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinBaseKillerInstinctEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinBaseKillerInstinctEffect, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(TwinBaseKillerInstinctEffect_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinBaseKillerInstinctEffect_NoRegister()
	{
		return UTwinBaseKillerInstinctEffect::StaticClass();
	}
	struct Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lullabyRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lullabyRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 2001268608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinBaseKillerInstinctEffect.h" },
		{ "ModuleRelativePath", "Public/TwinBaseKillerInstinctEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "TwinBaseKillerInstinctEffect" },
		{ "ModuleRelativePath", "Public/TwinBaseKillerInstinctEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinBaseKillerInstinctEffect, _lingerDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lullabyRange_MetaData[] = {
		{ "Category", "TwinBaseKillerInstinctEffect" },
		{ "ModuleRelativePath", "Public/TwinBaseKillerInstinctEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lullabyRange = { "_lullabyRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinBaseKillerInstinctEffect, _lullabyRange), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lullabyRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lullabyRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::NewProp__lullabyRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBaseKillerInstinctEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::ClassParams = {
		&UTwinBaseKillerInstinctEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinBaseKillerInstinctEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinBaseKillerInstinctEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinBaseKillerInstinctEffect, 77403115);
	template<> THETWINS_API UClass* StaticClass<UTwinBaseKillerInstinctEffect>()
	{
		return UTwinBaseKillerInstinctEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinBaseKillerInstinctEffect(Z_Construct_UClass_UTwinBaseKillerInstinctEffect, &UTwinBaseKillerInstinctEffect::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinBaseKillerInstinctEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinBaseKillerInstinctEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
