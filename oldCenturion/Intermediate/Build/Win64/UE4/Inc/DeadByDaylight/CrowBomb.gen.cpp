// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CrowBomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowBomb() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACrowBomb_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACrowBomb();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorDrivenActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACrowBomb::execTriggerLand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrowBomb::execTriggerTakeOff)
	{
		P_GET_STRUCT(FVector,Z_Param_triggerLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTakeOff(Z_Param_triggerLocation);
		P_NATIVE_END;
	}
	void ACrowBomb::StaticRegisterNativesACrowBomb()
	{
		UClass* Class = ACrowBomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerLand", &ACrowBomb::execTriggerLand },
			{ "TriggerTakeOff", &ACrowBomb::execTriggerTakeOff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowBomb, nullptr, "TriggerLand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrowBomb_TriggerLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrowBomb_TriggerLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics
	{
		struct CrowBomb_eventTriggerTakeOff_Parms
		{
			FVector triggerLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::NewProp_triggerLocation = { "triggerLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrowBomb_eventTriggerTakeOff_Parms, triggerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::NewProp_triggerLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowBomb, nullptr, "TriggerTakeOff", nullptr, nullptr, sizeof(CrowBomb_eventTriggerTakeOff_Parms), Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrowBomb_TriggerTakeOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrowBomb_TriggerTakeOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrowBomb_NoRegister()
	{
		return ACrowBomb::StaticClass();
	}
	struct Z_Construct_UClass_ACrowBomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__landed_MetaData[];
#endif
		static void NewProp__landed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__landed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__traceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__traceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__traceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__traceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__crows;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__meshComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eliminationStddev_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__eliminationStddev;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eliminationSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__eliminationSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crowOuterDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__crowOuterDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crowCenterDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__crowCenterDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numCrows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numCrows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTakeoffDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxTakeoffDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__outerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__innerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__innerRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrowBomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneratorDrivenActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrowBomb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrowBomb_TriggerLand, "TriggerLand" }, // 2175941918
		{ &Z_Construct_UFunction_ACrowBomb_TriggerTakeOff, "TriggerTakeOff" }, // 375375486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrowBomb.h" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	void Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed_SetBit(void* Obj)
	{
		((ACrowBomb*)Obj)->_landed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed = { "_landed", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACrowBomb), &Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowBomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceEnd = { "_traceEnd", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _traceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CrowBomb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceStart = { "_traceStart", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _traceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__root = { "_root", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows = { "_crows", nullptr, (EPropertyFlags)0x0040008000002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _crows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows_Inner = { "_crows", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__meshComponentClass_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__meshComponentClass = { "_meshComponentClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _meshComponentClass), Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__meshComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__meshComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationStddev_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationStddev = { "_eliminationStddev", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _eliminationStddev), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationStddev_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationStddev_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationSamples_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationSamples = { "_eliminationSamples", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _eliminationSamples), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowOuterDistance_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowOuterDistance = { "_crowOuterDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _crowOuterDistance), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowOuterDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowOuterDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowCenterDistance_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowCenterDistance = { "_crowCenterDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _crowCenterDistance), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowCenterDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowCenterDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__numCrows_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__numCrows = { "_numCrows", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _numCrows), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__numCrows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__numCrows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__maxTakeoffDelay_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__maxTakeoffDelay = { "_maxTakeoffDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _maxTakeoffDelay), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__maxTakeoffDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__maxTakeoffDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__outerRadius_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__outerRadius = { "_outerRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _outerRadius), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__outerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__outerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowBomb_Statics::NewProp__innerRadius_MetaData[] = {
		{ "Category", "CrowBomb" },
		{ "ModuleRelativePath", "Public/CrowBomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowBomb_Statics::NewProp__innerRadius = { "_innerRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrowBomb, _innerRadius), METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::NewProp__innerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::NewProp__innerRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrowBomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__landed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__traceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__crows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__meshComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationStddev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__eliminationSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowOuterDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__crowCenterDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__numCrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__maxTakeoffDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__outerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowBomb_Statics::NewProp__innerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrowBomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrowBomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrowBomb_Statics::ClassParams = {
		&ACrowBomb::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrowBomb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrowBomb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrowBomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrowBomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrowBomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrowBomb, 1691772230);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACrowBomb>()
	{
		return ACrowBomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrowBomb(Z_Construct_UClass_ACrowBomb, &ACrowBomb::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACrowBomb"), false, nullptr, nullptr, nullptr);

	void ACrowBomb::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__crows(TEXT("_crows"));

		const bool bIsValid = true
			&& Name__crows == ClassReps[(int32)ENetFields_Private::_crows].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACrowBomb"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrowBomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
