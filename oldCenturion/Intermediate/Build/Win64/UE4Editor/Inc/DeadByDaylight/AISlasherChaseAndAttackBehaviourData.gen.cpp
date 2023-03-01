// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISlasherChaseAndAttackBehaviourData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISlasherChaseAndAttackBehaviourData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAISlasherChaseAndAttackBehaviourData::execInit)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_targetSurvivor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackRangeDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_locationDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_targetSurvivor,Z_Param_attackRangeDistance,Z_Param_locationDistance);
		P_NATIVE_END;
	}
	void UAISlasherChaseAndAttackBehaviourData::StaticRegisterNativesUAISlasherChaseAndAttackBehaviourData()
	{
		UClass* Class = UAISlasherChaseAndAttackBehaviourData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAISlasherChaseAndAttackBehaviourData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics
	{
		struct AISlasherChaseAndAttackBehaviourData_eventInit_Parms
		{
			ACamperPlayer* targetSurvivor;
			float attackRangeDistance;
			float locationDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_locationDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackRangeDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_locationDistance = { "locationDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISlasherChaseAndAttackBehaviourData_eventInit_Parms, locationDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_attackRangeDistance = { "attackRangeDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISlasherChaseAndAttackBehaviourData_eventInit_Parms, attackRangeDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_targetSurvivor = { "targetSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISlasherChaseAndAttackBehaviourData_eventInit_Parms, targetSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_locationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_attackRangeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::NewProp_targetSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData, nullptr, "Init", nullptr, nullptr, sizeof(AISlasherChaseAndAttackBehaviourData_eventInit_Parms), Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_NoRegister()
	{
		return UAISlasherChaseAndAttackBehaviourData::StaticClass();
	}
	struct Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sqrtMaxTargetPositionDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sqrtMaxTargetPositionDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sqrtAttackRangeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sqrtAttackRangeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISlasherChaseAndAttackBehaviourData_Init, "Init" }, // 3056028560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISlasherChaseAndAttackBehaviourData.h" },
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviourData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtMaxTargetPositionDiff_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtMaxTargetPositionDiff = { "_sqrtMaxTargetPositionDiff", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviourData, _sqrtMaxTargetPositionDiff), METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtMaxTargetPositionDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtMaxTargetPositionDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtAttackRangeDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtAttackRangeDistance = { "_sqrtAttackRangeDistance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviourData, _sqrtAttackRangeDistance), METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtAttackRangeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtAttackRangeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__targetSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISlasherChaseAndAttackBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__targetSurvivor = { "_targetSurvivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISlasherChaseAndAttackBehaviourData, _targetSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__targetSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__targetSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtMaxTargetPositionDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__sqrtAttackRangeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::NewProp__targetSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISlasherChaseAndAttackBehaviourData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::ClassParams = {
		&UAISlasherChaseAndAttackBehaviourData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISlasherChaseAndAttackBehaviourData, 821254852);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISlasherChaseAndAttackBehaviourData>()
	{
		return UAISlasherChaseAndAttackBehaviourData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISlasherChaseAndAttackBehaviourData(Z_Construct_UClass_UAISlasherChaseAndAttackBehaviourData, &UAISlasherChaseAndAttackBehaviourData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISlasherChaseAndAttackBehaviourData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISlasherChaseAndAttackBehaviourData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
