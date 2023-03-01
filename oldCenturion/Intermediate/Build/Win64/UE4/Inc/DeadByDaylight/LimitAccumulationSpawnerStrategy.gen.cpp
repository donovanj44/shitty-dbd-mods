// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LimitAccumulationSpawnerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimitAccumulationSpawnerStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULimitAccumulationSpawnerStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnerStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ULimitAccumulationSpawnerStrategy::execSetMaxOverlapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxOverlapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxOverlapping(Z_Param_maxOverlapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULimitAccumulationSpawnerStrategy::execSetRecycleDistancePercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_recycleDistancePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecycleDistancePercentage(Z_Param_recycleDistancePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULimitAccumulationSpawnerStrategy::execSetRecycleThresholdPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_recycleThresholdPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecycleThresholdPercentage(Z_Param_recycleThresholdPercentage);
		P_NATIVE_END;
	}
	void ULimitAccumulationSpawnerStrategy::StaticRegisterNativesULimitAccumulationSpawnerStrategy()
	{
		UClass* Class = ULimitAccumulationSpawnerStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaxOverlapping", &ULimitAccumulationSpawnerStrategy::execSetMaxOverlapping },
			{ "SetRecycleDistancePercentage", &ULimitAccumulationSpawnerStrategy::execSetRecycleDistancePercentage },
			{ "SetRecycleThresholdPercentage", &ULimitAccumulationSpawnerStrategy::execSetRecycleThresholdPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics
	{
		struct LimitAccumulationSpawnerStrategy_eventSetMaxOverlapping_Parms
		{
			int32 maxOverlapping;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxOverlapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::NewProp_maxOverlapping = { "maxOverlapping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitAccumulationSpawnerStrategy_eventSetMaxOverlapping_Parms, maxOverlapping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::NewProp_maxOverlapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LimitAccumulationSpawnerStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimitAccumulationSpawnerStrategy, nullptr, "SetMaxOverlapping", nullptr, nullptr, sizeof(LimitAccumulationSpawnerStrategy_eventSetMaxOverlapping_Parms), Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics
	{
		struct LimitAccumulationSpawnerStrategy_eventSetRecycleDistancePercentage_Parms
		{
			float recycleDistancePercentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_recycleDistancePercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::NewProp_recycleDistancePercentage = { "recycleDistancePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitAccumulationSpawnerStrategy_eventSetRecycleDistancePercentage_Parms, recycleDistancePercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::NewProp_recycleDistancePercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LimitAccumulationSpawnerStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimitAccumulationSpawnerStrategy, nullptr, "SetRecycleDistancePercentage", nullptr, nullptr, sizeof(LimitAccumulationSpawnerStrategy_eventSetRecycleDistancePercentage_Parms), Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics
	{
		struct LimitAccumulationSpawnerStrategy_eventSetRecycleThresholdPercentage_Parms
		{
			float recycleThresholdPercentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_recycleThresholdPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::NewProp_recycleThresholdPercentage = { "recycleThresholdPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitAccumulationSpawnerStrategy_eventSetRecycleThresholdPercentage_Parms, recycleThresholdPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::NewProp_recycleThresholdPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LimitAccumulationSpawnerStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimitAccumulationSpawnerStrategy, nullptr, "SetRecycleThresholdPercentage", nullptr, nullptr, sizeof(LimitAccumulationSpawnerStrategy_eventSetRecycleThresholdPercentage_Parms), Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_NoRegister()
	{
		return ULimitAccumulationSpawnerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetMaxOverlapping, "SetMaxOverlapping" }, // 3909473066
		{ &Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleDistancePercentage, "SetRecycleDistancePercentage" }, // 1845900710
		{ &Z_Construct_UFunction_ULimitAccumulationSpawnerStrategy_SetRecycleThresholdPercentage, "SetRecycleThresholdPercentage" }, // 1225342907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LimitAccumulationSpawnerStrategy.h" },
		{ "ModuleRelativePath", "Public/LimitAccumulationSpawnerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimitAccumulationSpawnerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::ClassParams = {
		&ULimitAccumulationSpawnerStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULimitAccumulationSpawnerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULimitAccumulationSpawnerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULimitAccumulationSpawnerStrategy, 817983283);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULimitAccumulationSpawnerStrategy>()
	{
		return ULimitAccumulationSpawnerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULimitAccumulationSpawnerStrategy(Z_Construct_UClass_ULimitAccumulationSpawnerStrategy, &ULimitAccumulationSpawnerStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULimitAccumulationSpawnerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULimitAccumulationSpawnerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
