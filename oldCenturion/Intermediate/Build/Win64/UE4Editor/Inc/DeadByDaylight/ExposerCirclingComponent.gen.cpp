// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ExposerCirclingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposerCirclingComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExposerCirclingComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExposerCirclingComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UExposerCirclingComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExposerCirclingComponent::execSetIsCircling)
	{
		P_GET_UBOOL(Z_Param_circling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCircling(Z_Param_circling);
		P_NATIVE_END;
	}
	void UExposerCirclingComponent::StaticRegisterNativesUExposerCirclingComponent()
	{
		UClass* Class = UExposerCirclingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &UExposerCirclingComponent::execReset },
			{ "SetIsCircling", &UExposerCirclingComponent::execSetIsCircling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposerCirclingComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExposerCirclingComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExposerCirclingComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics
	{
		struct ExposerCirclingComponent_eventSetIsCircling_Parms
		{
			bool circling;
		};
		static void NewProp_circling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_circling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::NewProp_circling_SetBit(void* Obj)
	{
		((ExposerCirclingComponent_eventSetIsCircling_Parms*)Obj)->circling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::NewProp_circling = { "circling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExposerCirclingComponent_eventSetIsCircling_Parms), &Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::NewProp_circling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::NewProp_circling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposerCirclingComponent, nullptr, "SetIsCircling", nullptr, nullptr, sizeof(ExposerCirclingComponent_eventSetIsCircling_Parms), Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExposerCirclingComponent_NoRegister()
	{
		return UExposerCirclingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExposerCirclingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Samples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezierModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BezierModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CirclingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CirclingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionFollows_MetaData[];
#endif
		static void NewProp_DirectionFollows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DirectionFollows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExposerCirclingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExposerCirclingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExposerCirclingComponent_Reset, "Reset" }, // 1806038648
		{ &Z_Construct_UFunction_UExposerCirclingComponent_SetIsCircling, "SetIsCircling" }, // 370812857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ExposerCirclingComponent.h" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, Samples), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_Samples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_Samples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_BezierModifier_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_BezierModifier = { "BezierModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, BezierModifier), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_BezierModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_BezierModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DistanceBetweenPoints_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DistanceBetweenPoints = { "DistanceBetweenPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, DistanceBetweenPoints), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DistanceBetweenPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DistanceBetweenPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_CirclingSpeed_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_CirclingSpeed = { "CirclingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, CirclingSpeed), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_CirclingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_CirclingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxRadius_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, MaxRadius), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, MinRadius), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerCirclingComponent, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows_MetaData[] = {
		{ "Category", "ExposerCirclingComponent" },
		{ "ModuleRelativePath", "Public/ExposerCirclingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows_SetBit(void* Obj)
	{
		((UExposerCirclingComponent*)Obj)->DirectionFollows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows = { "DirectionFollows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExposerCirclingComponent), &Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExposerCirclingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_Samples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_BezierModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DistanceBetweenPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_CirclingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_MinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerCirclingComponent_Statics::NewProp_DirectionFollows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExposerCirclingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExposerCirclingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExposerCirclingComponent_Statics::ClassParams = {
		&UExposerCirclingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExposerCirclingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExposerCirclingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerCirclingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExposerCirclingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExposerCirclingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExposerCirclingComponent, 3395697522);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UExposerCirclingComponent>()
	{
		return UExposerCirclingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExposerCirclingComponent(Z_Construct_UClass_UExposerCirclingComponent, &UExposerCirclingComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UExposerCirclingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExposerCirclingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
