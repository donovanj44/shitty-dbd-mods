// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GeneratorOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorOutlineUpdateStrategy::execGetWhiteColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetWhiteColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorOutlineUpdateStrategy::execGetYellowColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetYellowColor();
		P_NATIVE_END;
	}
	void UGeneratorOutlineUpdateStrategy::StaticRegisterNativesUGeneratorOutlineUpdateStrategy()
	{
		UClass* Class = UGeneratorOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWhiteColor", &UGeneratorOutlineUpdateStrategy::execGetWhiteColor },
			{ "GetYellowColor", &UGeneratorOutlineUpdateStrategy::execGetYellowColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics
	{
		struct GeneratorOutlineUpdateStrategy_eventGetWhiteColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorOutlineUpdateStrategy_eventGetWhiteColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorOutlineUpdateStrategy, nullptr, "GetWhiteColor", nullptr, nullptr, sizeof(GeneratorOutlineUpdateStrategy_eventGetWhiteColor_Parms), Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics
	{
		struct GeneratorOutlineUpdateStrategy_eventGetYellowColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorOutlineUpdateStrategy_eventGetYellowColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorOutlineUpdateStrategy, nullptr, "GetYellowColor", nullptr, nullptr, sizeof(GeneratorOutlineUpdateStrategy_eventGetYellowColor_Parms), Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_NoRegister()
	{
		return UGeneratorOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fullyRepairedAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fullyRepairedAuraColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unrepairedAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unrepairedAuraColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetWhiteColor, "GetWhiteColor" }, // 2930807676
		{ &Z_Construct_UFunction_UGeneratorOutlineUpdateStrategy_GetYellowColor, "GetYellowColor" }, // 2118802890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/GeneratorOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__fullyRepairedAuraColor_MetaData[] = {
		{ "Category", "GeneratorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/GeneratorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__fullyRepairedAuraColor = { "_fullyRepairedAuraColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorOutlineUpdateStrategy, _fullyRepairedAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__fullyRepairedAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__fullyRepairedAuraColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__unrepairedAuraColor_MetaData[] = {
		{ "Category", "GeneratorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/GeneratorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__unrepairedAuraColor = { "_unrepairedAuraColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorOutlineUpdateStrategy, _unrepairedAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__unrepairedAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__unrepairedAuraColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__fullyRepairedAuraColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::NewProp__unrepairedAuraColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::ClassParams = {
		&UGeneratorOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorOutlineUpdateStrategy, 915161443);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGeneratorOutlineUpdateStrategy>()
	{
		return UGeneratorOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorOutlineUpdateStrategy(Z_Construct_UClass_UGeneratorOutlineUpdateStrategy, &UGeneratorOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGeneratorOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
