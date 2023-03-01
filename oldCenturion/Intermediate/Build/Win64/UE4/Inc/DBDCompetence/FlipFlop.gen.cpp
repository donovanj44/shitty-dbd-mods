// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/FlipFlop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipFlop() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFlipFlop_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFlipFlop();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlipFlop::execAuthority_OnPickedUp)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPickedUp(Z_Param_picker);
		P_NATIVE_END;
	}
	void UFlipFlop::StaticRegisterNativesUFlipFlop()
	{
		UClass* Class = UFlipFlop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnPickedUp", &UFlipFlop::execAuthority_OnPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics
	{
		struct FlipFlop_eventAuthority_OnPickedUp_Parms
		{
			ADBDPlayer* picker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::NewProp_picker = { "picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlipFlop_eventAuthority_OnPickedUp_Parms, picker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::NewProp_picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlipFlop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlipFlop, nullptr, "Authority_OnPickedUp", nullptr, nullptr, sizeof(FlipFlop_eventAuthority_OnPickedUp_Parms), Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlipFlop_NoRegister()
	{
		return UFlipFlop::StaticClass();
	}
	struct Z_Construct_UClass_UFlipFlop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxWiggleProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxWiggleProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recoveryProgressionConversionRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recoveryProgressionConversionRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlipFlop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlipFlop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlipFlop_Authority_OnPickedUp, "Authority_OnPickedUp" }, // 29976761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipFlop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlipFlop.h" },
		{ "ModuleRelativePath", "Public/FlipFlop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipFlop_Statics::NewProp__maxWiggleProgression_MetaData[] = {
		{ "Category", "FlipFlop" },
		{ "ModuleRelativePath", "Public/FlipFlop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlipFlop_Statics::NewProp__maxWiggleProgression = { "_maxWiggleProgression", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_maxWiggleProgression, UFlipFlop), STRUCT_OFFSET(UFlipFlop, _maxWiggleProgression), METADATA_PARAMS(Z_Construct_UClass_UFlipFlop_Statics::NewProp__maxWiggleProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipFlop_Statics::NewProp__maxWiggleProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipFlop_Statics::NewProp__recoveryProgressionConversionRatio_MetaData[] = {
		{ "Category", "FlipFlop" },
		{ "ModuleRelativePath", "Public/FlipFlop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlipFlop_Statics::NewProp__recoveryProgressionConversionRatio = { "_recoveryProgressionConversionRatio", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_recoveryProgressionConversionRatio, UFlipFlop), STRUCT_OFFSET(UFlipFlop, _recoveryProgressionConversionRatio), METADATA_PARAMS(Z_Construct_UClass_UFlipFlop_Statics::NewProp__recoveryProgressionConversionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipFlop_Statics::NewProp__recoveryProgressionConversionRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlipFlop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlipFlop_Statics::NewProp__maxWiggleProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlipFlop_Statics::NewProp__recoveryProgressionConversionRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlipFlop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlipFlop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlipFlop_Statics::ClassParams = {
		&UFlipFlop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlipFlop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlipFlop_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlipFlop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipFlop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlipFlop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlipFlop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlipFlop, 1179257815);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UFlipFlop>()
	{
		return UFlipFlop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlipFlop(Z_Construct_UClass_UFlipFlop, &UFlipFlop::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UFlipFlop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipFlop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
