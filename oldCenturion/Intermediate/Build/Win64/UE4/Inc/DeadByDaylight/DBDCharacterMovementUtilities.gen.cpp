// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDCharacterMovementUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDCharacterMovementUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDCharacterMovementUtilities::execLocal_AddMaxSpeedMultiplierCurve)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_UBOOL(Z_Param_autoReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDCharacterMovementUtilities::Local_AddMaxSpeedMultiplierCurve(Z_Param_character,Z_Param_curve,Z_Param_duration,Z_Param_autoReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementUtilities::execLocal_RemoveMaxSpeedMultiplierCurve)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_GET_OBJECT(UCurveFloat,Z_Param_curveToReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDCharacterMovementUtilities::Local_RemoveMaxSpeedMultiplierCurve(Z_Param_character,Z_Param_curveToReset);
		P_NATIVE_END;
	}
	void UDBDCharacterMovementUtilities::StaticRegisterNativesUDBDCharacterMovementUtilities()
	{
		UClass* Class = UDBDCharacterMovementUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_AddMaxSpeedMultiplierCurve", &UDBDCharacterMovementUtilities::execLocal_AddMaxSpeedMultiplierCurve },
			{ "Local_RemoveMaxSpeedMultiplierCurve", &UDBDCharacterMovementUtilities::execLocal_RemoveMaxSpeedMultiplierCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics
	{
		struct DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms
		{
			ACharacter* character;
			const UCurveFloat* curve;
			float duration;
			bool autoReset;
		};
		static void NewProp_autoReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoReset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoReset_SetBit(void* Obj)
	{
		((DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms*)Obj)->autoReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoReset = { "autoReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms), &Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementUtilities, nullptr, "Local_AddMaxSpeedMultiplierCurve", nullptr, nullptr, sizeof(DBDCharacterMovementUtilities_eventLocal_AddMaxSpeedMultiplierCurve_Parms), Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics
	{
		struct DBDCharacterMovementUtilities_eventLocal_RemoveMaxSpeedMultiplierCurve_Parms
		{
			ACharacter* character;
			const UCurveFloat* curveToReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveToReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curveToReset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_curveToReset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_curveToReset = { "curveToReset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementUtilities_eventLocal_RemoveMaxSpeedMultiplierCurve_Parms, curveToReset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_curveToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_curveToReset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementUtilities_eventLocal_RemoveMaxSpeedMultiplierCurve_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_curveToReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementUtilities, nullptr, "Local_RemoveMaxSpeedMultiplierCurve", nullptr, nullptr, sizeof(DBDCharacterMovementUtilities_eventLocal_RemoveMaxSpeedMultiplierCurve_Parms), Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDCharacterMovementUtilities_NoRegister()
	{
		return UDBDCharacterMovementUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_AddMaxSpeedMultiplierCurve, "Local_AddMaxSpeedMultiplierCurve" }, // 4099771069
		{ &Z_Construct_UFunction_UDBDCharacterMovementUtilities_Local_RemoveMaxSpeedMultiplierCurve, "Local_RemoveMaxSpeedMultiplierCurve" }, // 3191511939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDCharacterMovementUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDCharacterMovementUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::ClassParams = {
		&UDBDCharacterMovementUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDCharacterMovementUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDCharacterMovementUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDCharacterMovementUtilities, 1928362605);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDCharacterMovementUtilities>()
	{
		return UDBDCharacterMovementUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDCharacterMovementUtilities(Z_Construct_UClass_UDBDCharacterMovementUtilities, &UDBDCharacterMovementUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDCharacterMovementUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDCharacterMovementUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
