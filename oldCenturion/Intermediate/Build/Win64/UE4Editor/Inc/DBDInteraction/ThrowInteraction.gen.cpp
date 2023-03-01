// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/ThrowInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UThrowInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UThrowInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UThrowInteraction::execHasCancelledThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCancelledThrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThrowInteraction::execInitThrowCancellationExitTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitThrowCancellationExitTime(Z_Param_value);
		P_NATIVE_END;
	}
	void UThrowInteraction::StaticRegisterNativesUThrowInteraction()
	{
		UClass* Class = UThrowInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasCancelledThrow", &UThrowInteraction::execHasCancelledThrow },
			{ "InitThrowCancellationExitTime", &UThrowInteraction::execInitThrowCancellationExitTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics
	{
		struct ThrowInteraction_eventHasCancelledThrow_Parms
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
	void Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThrowInteraction_eventHasCancelledThrow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowInteraction_eventHasCancelledThrow_Parms), &Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrowInteraction, nullptr, "HasCancelledThrow", nullptr, nullptr, sizeof(ThrowInteraction_eventHasCancelledThrow_Parms), Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics
	{
		struct ThrowInteraction_eventInitThrowCancellationExitTime_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowInteraction_eventInitThrowCancellationExitTime_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrowInteraction, nullptr, "InitThrowCancellationExitTime", nullptr, nullptr, sizeof(ThrowInteraction_eventInitThrowCancellationExitTime_Parms), Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThrowInteraction_NoRegister()
	{
		return UThrowInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UThrowInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwCancellationExitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__throwCancellationExitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__throwCancelledSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__throwCancelledSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThrowInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrowInteraction_HasCancelledThrow, "HasCancelledThrow" }, // 2608590920
		{ &Z_Construct_UFunction_UThrowInteraction_InitThrowCancellationExitTime, "InitThrowCancellationExitTime" }, // 3910856810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ThrowInteraction.h" },
		{ "ModuleRelativePath", "Public/ThrowInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancellationExitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ThrowInteraction" },
		{ "ModuleRelativePath", "Public/ThrowInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancellationExitTime = { "_throwCancellationExitTime", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowInteraction, _throwCancellationExitTime), METADATA_PARAMS(Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancellationExitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancellationExitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancelledSpeedCurve_MetaData[] = {
		{ "Category", "ThrowInteraction" },
		{ "ModuleRelativePath", "Public/ThrowInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancelledSpeedCurve = { "_throwCancelledSpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrowInteraction, _throwCancelledSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancelledSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancelledSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancellationExitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowInteraction_Statics::NewProp__throwCancelledSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThrowInteraction_Statics::ClassParams = {
		&UThrowInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UThrowInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThrowInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrowInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThrowInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThrowInteraction, 4256160176);
	template<> DBDINTERACTION_API UClass* StaticClass<UThrowInteraction>()
	{
		return UThrowInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrowInteraction(Z_Construct_UClass_UThrowInteraction, &UThrowInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UThrowInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
