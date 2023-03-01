// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/ChargeableUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargeableUtilities() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UChargeableUtilities_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UChargeableUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UChargeableUtilities::execConvertSecondsToAddToRateMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_secondsToAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_baseMaxSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_baseRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UChargeableUtilities::ConvertSecondsToAddToRateMultiplier(Z_Param_secondsToAdd,Z_Param_baseMaxSeconds,Z_Param_baseRate);
		P_NATIVE_END;
	}
	void UChargeableUtilities::StaticRegisterNativesUChargeableUtilities()
	{
		UClass* Class = UChargeableUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertSecondsToAddToRateMultiplier", &UChargeableUtilities::execConvertSecondsToAddToRateMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics
	{
		struct ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms
		{
			float secondsToAdd;
			float baseMaxSeconds;
			float baseRate;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseMaxSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secondsToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_baseRate = { "baseRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms, baseRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_baseMaxSeconds = { "baseMaxSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms, baseMaxSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_secondsToAdd = { "secondsToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms, secondsToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_baseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_baseMaxSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::NewProp_secondsToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargeableUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargeableUtilities, nullptr, "ConvertSecondsToAddToRateMultiplier", nullptr, nullptr, sizeof(ChargeableUtilities_eventConvertSecondsToAddToRateMultiplier_Parms), Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChargeableUtilities_NoRegister()
	{
		return UChargeableUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UChargeableUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChargeableUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChargeableUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChargeableUtilities_ConvertSecondsToAddToRateMultiplier, "ConvertSecondsToAddToRateMultiplier" }, // 3921008520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeableUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChargeableUtilities.h" },
		{ "ModuleRelativePath", "Public/ChargeableUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChargeableUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargeableUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChargeableUtilities_Statics::ClassParams = {
		&UChargeableUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChargeableUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeableUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChargeableUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChargeableUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChargeableUtilities, 618266978);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UChargeableUtilities>()
	{
		return UChargeableUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChargeableUtilities(Z_Construct_UClass_UChargeableUtilities, &UChargeableUtilities::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UChargeableUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChargeableUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
