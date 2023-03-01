// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlindingFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindingFXComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlindingFXComponent::execSetPostProcess)
	{
		P_GET_OBJECT(UPostProcessComponent,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcess(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlindingFXComponent::execSetPostProcessMaterial)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessMaterial(Z_Param_value);
		P_NATIVE_END;
	}
	void UBlindingFXComponent::StaticRegisterNativesUBlindingFXComponent()
	{
		UClass* Class = UBlindingFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPostProcess", &UBlindingFXComponent::execSetPostProcess },
			{ "SetPostProcessMaterial", &UBlindingFXComponent::execSetPostProcessMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics
	{
		struct BlindingFXComponent_eventSetPostProcess_Parms
		{
			UPostProcessComponent* value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindingFXComponent_eventSetPostProcess_Parms, value), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindingFXComponent, nullptr, "SetPostProcess", nullptr, nullptr, sizeof(BlindingFXComponent_eventSetPostProcess_Parms), Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics
	{
		struct BlindingFXComponent_eventSetPostProcessMaterial_Parms
		{
			UMaterialInstanceDynamic* value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlindingFXComponent_eventSetPostProcessMaterial_Parms, value), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlindingFXComponent, nullptr, "SetPostProcessMaterial", nullptr, nullptr, sizeof(BlindingFXComponent_eventSetPostProcessMaterial_Parms), Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlindingFXComponent_NoRegister()
	{
		return UBlindingFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlindingFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__postProcessMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__postProcessMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__postProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__postProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindnessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindnessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindnessMaterialCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindnessMaterialCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindnessIntensityParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__blindnessIntensityParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlindingFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlindingFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlindingFXComponent_SetPostProcess, "SetPostProcess" }, // 1826566670
		{ &Z_Construct_UFunction_UBlindingFXComponent_SetPostProcessMaterial, "SetPostProcessMaterial" }, // 3952880462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlindingFXComponent.h" },
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcessMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcessMaterial = { "_postProcessMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindingFXComponent, _postProcessMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcess_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcess = { "_postProcess", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindingFXComponent, _postProcess), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessCurve_MetaData[] = {
		{ "Category", "BlindingFXComponent" },
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessCurve = { "_blindnessCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindingFXComponent, _blindnessCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessMaterialCurve_MetaData[] = {
		{ "Category", "BlindingFXComponent" },
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessMaterialCurve = { "_blindnessMaterialCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindingFXComponent, _blindnessMaterialCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessMaterialCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessMaterialCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessIntensityParameter_MetaData[] = {
		{ "Category", "BlindingFXComponent" },
		{ "ModuleRelativePath", "Public/BlindingFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessIntensityParameter = { "_blindnessIntensityParameter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlindingFXComponent, _blindnessIntensityParameter), METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessIntensityParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessIntensityParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlindingFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcessMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__postProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessMaterialCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlindingFXComponent_Statics::NewProp__blindnessIntensityParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlindingFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlindingFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlindingFXComponent_Statics::ClassParams = {
		&UBlindingFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlindingFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlindingFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlindingFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlindingFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlindingFXComponent, 2392245962);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlindingFXComponent>()
	{
		return UBlindingFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlindingFXComponent(Z_Construct_UClass_UBlindingFXComponent, &UBlindingFXComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlindingFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlindingFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
