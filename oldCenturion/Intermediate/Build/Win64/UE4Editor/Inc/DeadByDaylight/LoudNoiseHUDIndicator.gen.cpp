// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoiseHUDIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoiseHUDIndicator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseHUDIndicator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseHUDIndicator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoudNoiseIndicatorData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULoudNoiseHUDIndicator::execAddTrackedNoise)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTrackedNoise(Z_Param_location,Z_Param_duration);
		P_NATIVE_END;
	}
	void ULoudNoiseHUDIndicator::StaticRegisterNativesULoudNoiseHUDIndicator()
	{
		UClass* Class = ULoudNoiseHUDIndicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrackedNoise", &ULoudNoiseHUDIndicator::execAddTrackedNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics
	{
		struct LoudNoiseHUDIndicator_eventAddTrackedNoise_Parms
		{
			FVector location;
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseHUDIndicator_eventAddTrackedNoise_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseHUDIndicator_eventAddTrackedNoise_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudNoiseHUDIndicator, nullptr, "AddTrackedNoise", nullptr, nullptr, sizeof(LoudNoiseHUDIndicator_eventAddTrackedNoise_Parms), Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoudNoiseHUDIndicator_NoRegister()
	{
		return ULoudNoiseHUDIndicator::StaticClass();
	}
	struct Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trackedNoises_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__trackedNoises;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__trackedNoises_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudNoiseAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoudNoiseAddedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenFadeOutDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenFadeOutDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerRoundness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CornerRoundness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoudNoiseHUDIndicator_AddTrackedNoise, "AddTrackedNoise" }, // 1445166861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LoudNoiseHUDIndicator.h" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises = { "_trackedNoises", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, _trackedNoises), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises_Inner = { "_trackedNoises", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLoudNoiseIndicatorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_LoudNoiseAddedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_LoudNoiseAddedEvent = { "LoudNoiseAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, LoudNoiseAddedEvent), Z_Construct_UDelegateFunction_DeadByDaylight_LoudNoiseHUDIndicatorLoudNoiseAddedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_LoudNoiseAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_LoudNoiseAddedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_ScreenFadeOutDistance_MetaData[] = {
		{ "Category", "LoudNoiseHUDIndicator" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_ScreenFadeOutDistance = { "ScreenFadeOutDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, ScreenFadeOutDistance), METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_ScreenFadeOutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_ScreenFadeOutDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_CornerRoundness_MetaData[] = {
		{ "Category", "LoudNoiseHUDIndicator" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_CornerRoundness = { "CornerRoundness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, CornerRoundness), METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_CornerRoundness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_CornerRoundness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_EdgePadding_MetaData[] = {
		{ "Category", "LoudNoiseHUDIndicator" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_EdgePadding = { "EdgePadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, EdgePadding), METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_EdgePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_EdgePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_DistortionMesh_MetaData[] = {
		{ "Category", "LoudNoiseHUDIndicator" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_DistortionMesh = { "DistortionMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, DistortionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_DistortionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_DistortionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_MaskMesh_MetaData[] = {
		{ "Category", "LoudNoiseHUDIndicator" },
		{ "ModuleRelativePath", "Public/LoudNoiseHUDIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_MaskMesh = { "MaskMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoudNoiseHUDIndicator, MaskMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_MaskMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_MaskMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp__trackedNoises_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_LoudNoiseAddedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_ScreenFadeOutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_CornerRoundness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_EdgePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_DistortionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::NewProp_MaskMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudNoiseHUDIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::ClassParams = {
		&ULoudNoiseHUDIndicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudNoiseHUDIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoudNoiseHUDIndicator, 388609759);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoudNoiseHUDIndicator>()
	{
		return ULoudNoiseHUDIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoudNoiseHUDIndicator(Z_Construct_UClass_ULoudNoiseHUDIndicator, &ULoudNoiseHUDIndicator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoudNoiseHUDIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudNoiseHUDIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
