// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AimableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimableComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimableComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointProcessor_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimDirectionProvider_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAimableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAimableComponent::execSetMaxAimDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxAimDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAimDistance(Z_Param_maxAimDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimableComponent::execSetOcclusionIgnoredActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ignoredActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOcclusionIgnoredActors(Z_Param_Out_ignoredActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimableComponent::execSetProcessors)
	{
		P_GET_TARRAY(UAimPointProcessor*,Z_Param_processors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProcessors(Z_Param_processors);
		P_NATIVE_END;
	}
	void UAimableComponent::StaticRegisterNativesUAimableComponent()
	{
		UClass* Class = UAimableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaxAimDistance", &UAimableComponent::execSetMaxAimDistance },
			{ "SetOcclusionIgnoredActors", &UAimableComponent::execSetOcclusionIgnoredActors },
			{ "SetProcessors", &UAimableComponent::execSetProcessors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics
	{
		struct AimableComponent_eventSetMaxAimDistance_Parms
		{
			float maxAimDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxAimDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::NewProp_maxAimDistance = { "maxAimDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimableComponent_eventSetMaxAimDistance_Parms, maxAimDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::NewProp_maxAimDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimableComponent, nullptr, "SetMaxAimDistance", nullptr, nullptr, sizeof(AimableComponent_eventSetMaxAimDistance_Parms), Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics
	{
		struct AimableComponent_eventSetOcclusionIgnoredActors_Parms
		{
			TArray<AActor*> ignoredActors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ignoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors = { "ignoredActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimableComponent_eventSetOcclusionIgnoredActors_Parms, ignoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors_Inner = { "ignoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::NewProp_ignoredActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimableComponent, nullptr, "SetOcclusionIgnoredActors", nullptr, nullptr, sizeof(AimableComponent_eventSetOcclusionIgnoredActors_Parms), Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics
	{
		struct AimableComponent_eventSetProcessors_Parms
		{
			TArray<UAimPointProcessor*> processors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_processors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_processors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_processors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors = { "processors", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimableComponent_eventSetProcessors_Parms, processors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors_Inner = { "processors", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAimPointProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::NewProp_processors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimableComponent, nullptr, "SetProcessors", nullptr, nullptr, sizeof(AimableComponent_eventSetProcessors_Parms), Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimableComponent_SetProcessors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimableComponent_SetProcessors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAimableComponent_NoRegister()
	{
		return UAimableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAimableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preOcclusionAimPointProcessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__preOcclusionAimPointProcessors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__preOcclusionAimPointProcessors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimPointLerpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__aimPointLerpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useOcclusion_MetaData[];
#endif
		static void NewProp__useOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimDirectionProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aimDirectionProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxAimDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxAimDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__occlusionIgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__occlusionIgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__occlusionIgnoredActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAimableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAimableComponent_SetMaxAimDistance, "SetMaxAimDistance" }, // 1147669183
		{ &Z_Construct_UFunction_UAimableComponent_SetOcclusionIgnoredActors, "SetOcclusionIgnoredActors" }, // 310124427
		{ &Z_Construct_UFunction_UAimableComponent_SetProcessors, "SetProcessors" }, // 2919809748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AimableComponent.h" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors = { "_preOcclusionAimPointProcessors", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimableComponent, _preOcclusionAimPointProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors_Inner = { "_preOcclusionAimPointProcessors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAimPointProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimPointLerpFactor_MetaData[] = {
		{ "Category", "AimableComponent" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimPointLerpFactor = { "_aimPointLerpFactor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimableComponent, _aimPointLerpFactor), METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimPointLerpFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimPointLerpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion_MetaData[] = {
		{ "Category", "AimableComponent" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion_SetBit(void* Obj)
	{
		((UAimableComponent*)Obj)->_useOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion = { "_useOcclusion", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAimableComponent), &Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimDirectionProvider_MetaData[] = {
		{ "Category", "AimableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimDirectionProvider = { "_aimDirectionProvider", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimableComponent, _aimDirectionProvider), Z_Construct_UClass_UAimDirectionProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimDirectionProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimDirectionProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__maxAimDistance_MetaData[] = {
		{ "Category", "AimableComponent" },
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__maxAimDistance = { "_maxAimDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimableComponent, _maxAimDistance), METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__maxAimDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__maxAimDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/AimableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors = { "_occlusionIgnoredActors", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimableComponent, _occlusionIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors_Inner = { "_occlusionIgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__preOcclusionAimPointProcessors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimPointLerpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__useOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__aimDirectionProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__maxAimDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimableComponent_Statics::NewProp__occlusionIgnoredActors_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAimableComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAimableInterface_NoRegister, (int32)VTABLE_OFFSET(UAimableComponent, IAimableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimableComponent_Statics::ClassParams = {
		&UAimableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAimableComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAimableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimableComponent, 2170749833);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UAimableComponent>()
	{
		return UAimableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimableComponent(Z_Construct_UClass_UAimableComponent, &UAimableComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UAimableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
