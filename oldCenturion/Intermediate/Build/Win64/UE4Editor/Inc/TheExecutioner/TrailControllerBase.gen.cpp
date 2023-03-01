// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TrailControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrailControllerBase() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATrailControllerBase_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATrailControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister();
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_ETrailType();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATrailControllerBase::execOnAcquireChanged)
	{
		P_GET_UBOOL(Z_Param_acquired);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcquireChanged(Z_Param_acquired);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrailControllerBase::execOnTrailPointDeath)
	{
		P_GET_OBJECT(ABaseTormentTrailPoint,Z_Param_baseTrailPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrailPointDeath(Z_Param_baseTrailPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrailControllerBase::execRemoveTormentTrailController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTormentTrailController();
		P_NATIVE_END;
	}
	static FName NAME_ATrailControllerBase_ActivateCosmetic = FName(TEXT("ActivateCosmetic"));
	void ATrailControllerBase::ActivateCosmetic(bool value)
	{
		TrailControllerBase_eventActivateCosmetic_Parms Parms;
		Parms.value=value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATrailControllerBase_ActivateCosmetic),&Parms);
	}
	void ATrailControllerBase::StaticRegisterNativesATrailControllerBase()
	{
		UClass* Class = ATrailControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcquireChanged", &ATrailControllerBase::execOnAcquireChanged },
			{ "OnTrailPointDeath", &ATrailControllerBase::execOnTrailPointDeath },
			{ "RemoveTormentTrailController", &ATrailControllerBase::execRemoveTormentTrailController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TrailControllerBase_eventActivateCosmetic_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TrailControllerBase_eventActivateCosmetic_Parms), &Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrailControllerBase, nullptr, "ActivateCosmetic", nullptr, nullptr, sizeof(TrailControllerBase_eventActivateCosmetic_Parms), Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics
	{
		struct TrailControllerBase_eventOnAcquireChanged_Parms
		{
			bool acquired;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acquired_MetaData[];
#endif
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((TrailControllerBase_eventOnAcquireChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TrailControllerBase_eventOnAcquireChanged_Parms), &Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrailControllerBase, nullptr, "OnAcquireChanged", nullptr, nullptr, sizeof(TrailControllerBase_eventOnAcquireChanged_Parms), Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics
	{
		struct TrailControllerBase_eventOnTrailPointDeath_Parms
		{
			ABaseTormentTrailPoint* baseTrailPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseTrailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::NewProp_baseTrailPoint = { "baseTrailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrailControllerBase_eventOnTrailPointDeath_Parms, baseTrailPoint), Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::NewProp_baseTrailPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrailControllerBase, nullptr, "OnTrailPointDeath", nullptr, nullptr, sizeof(TrailControllerBase_eventOnTrailPointDeath_Parms), Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrailControllerBase, nullptr, "RemoveTormentTrailController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrailControllerBase_NoRegister()
	{
		return ATrailControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATrailControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__trailType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__trailType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__splineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__splineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceBetweenTormentTrailPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__distanceBetweenTormentTrailPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailPointCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailPointCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrailControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrailControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrailControllerBase_ActivateCosmetic, "ActivateCosmetic" }, // 3938422296
		{ &Z_Construct_UFunction_ATrailControllerBase_OnAcquireChanged, "OnAcquireChanged" }, // 446154648
		{ &Z_Construct_UFunction_ATrailControllerBase_OnTrailPointDeath, "OnTrailPointDeath" }, // 3136562381
		{ &Z_Construct_UFunction_ATrailControllerBase_RemoveTormentTrailController, "RemoveTormentTrailController" }, // 931974482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrailControllerBase.h" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType_MetaData[] = {
		{ "Category", "TrailControllerBase" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType = { "_trailType", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrailControllerBase, _trailType), Z_Construct_UEnum_TheExecutioner_ETrailType, METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__poolableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__poolableComponent = { "_poolableComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrailControllerBase, _poolableComponent), Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__poolableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__poolableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__splineComponent_MetaData[] = {
		{ "Category", "TrailControllerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__splineComponent = { "_splineComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrailControllerBase, _splineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__splineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__splineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__distanceBetweenTormentTrailPoint_MetaData[] = {
		{ "Category", "TrailControllerBase" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__distanceBetweenTormentTrailPoint = { "_distanceBetweenTormentTrailPoint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrailControllerBase, _distanceBetweenTormentTrailPoint), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__distanceBetweenTormentTrailPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__distanceBetweenTormentTrailPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__tormentTrailPointCollection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrailControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__tormentTrailPointCollection = { "_tormentTrailPointCollection", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrailControllerBase, _tormentTrailPointCollection), Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__tormentTrailPointCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__tormentTrailPointCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrailControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__trailType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__poolableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__splineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__distanceBetweenTormentTrailPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrailControllerBase_Statics::NewProp__tormentTrailPointCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrailControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrailControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrailControllerBase_Statics::ClassParams = {
		&ATrailControllerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrailControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATrailControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrailControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrailControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrailControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrailControllerBase, 1907975894);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATrailControllerBase>()
	{
		return ATrailControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrailControllerBase(Z_Construct_UClass_ATrailControllerBase, &ATrailControllerBase::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATrailControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrailControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
