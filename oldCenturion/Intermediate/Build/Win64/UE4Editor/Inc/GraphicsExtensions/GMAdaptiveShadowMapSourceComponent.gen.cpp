// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsExtensions/Public/GMAdaptiveShadowMapSourceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMAdaptiveShadowMapSourceComponent() {}
// Cross Module References
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_NoRegister();
	GRAPHICSEXTENSIONS_API UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsExtensions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UGMAdaptiveShadowMapSourceComponent::execSetLightRadiusWithBounds)
	{
		P_GET_STRUCT(FVector,Z_Param_BoundingSphereCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BoundingSphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightRadiusWithBounds(Z_Param_BoundingSphereCenter,Z_Param_BoundingSphereRadius);
		P_NATIVE_END;
	}
	void UGMAdaptiveShadowMapSourceComponent::StaticRegisterNativesUGMAdaptiveShadowMapSourceComponent()
	{
		UClass* Class = UGMAdaptiveShadowMapSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightRadiusWithBounds", &UGMAdaptiveShadowMapSourceComponent::execSetLightRadiusWithBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics
	{
		struct GMAdaptiveShadowMapSourceComponent_eventSetLightRadiusWithBounds_Parms
		{
			FVector BoundingSphereCenter;
			float BoundingSphereRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundingSphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingSphereCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::NewProp_BoundingSphereRadius = { "BoundingSphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMAdaptiveShadowMapSourceComponent_eventSetLightRadiusWithBounds_Parms, BoundingSphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::NewProp_BoundingSphereCenter = { "BoundingSphereCenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMAdaptiveShadowMapSourceComponent_eventSetLightRadiusWithBounds_Parms, BoundingSphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::NewProp_BoundingSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::NewProp_BoundingSphereCenter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent, nullptr, "SetLightRadiusWithBounds", nullptr, nullptr, sizeof(GMAdaptiveShadowMapSourceComponent_eventSetLightRadiusWithBounds_Parms), Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_NoRegister()
	{
		return UGMAdaptiveShadowMapSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreGeneratedLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreGeneratedLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Levels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAutoRadius_MetaData[];
#endif
		static void NewProp_bUseAutoRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAutoRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds, "SetLightRadiusWithBounds" }, // 2167973084
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GMAdaptiveShadowMapSourceComponent.h" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_PreGeneratedLevels_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_PreGeneratedLevels = { "PreGeneratedLevels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceComponent, PreGeneratedLevels), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_PreGeneratedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_PreGeneratedLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Levels_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceComponent, Levels), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Levels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMax_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMax = { "DepthMax", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceComponent, DepthMax), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMin_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMin = { "DepthMin", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceComponent, DepthMin), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGMAdaptiveShadowMapSourceComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius_MetaData[] = {
		{ "Category", "GMAdaptiveShadowMapSourceComponent" },
		{ "ModuleRelativePath", "Public/GMAdaptiveShadowMapSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius_SetBit(void* Obj)
	{
		((UGMAdaptiveShadowMapSourceComponent*)Obj)->bUseAutoRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius = { "bUseAutoRadius", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGMAdaptiveShadowMapSourceComponent), &Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_PreGeneratedLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_DepthMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::NewProp_bUseAutoRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMAdaptiveShadowMapSourceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::ClassParams = {
		&UGMAdaptiveShadowMapSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGMAdaptiveShadowMapSourceComponent, 1583991216);
	template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<UGMAdaptiveShadowMapSourceComponent>()
	{
		return UGMAdaptiveShadowMapSourceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGMAdaptiveShadowMapSourceComponent(Z_Construct_UClass_UGMAdaptiveShadowMapSourceComponent, &UGMAdaptiveShadowMapSourceComponent::StaticClass, TEXT("/Script/GraphicsExtensions"), TEXT("UGMAdaptiveShadowMapSourceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGMAdaptiveShadowMapSourceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
