// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StillnessTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStillnessTrackerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStillnessTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStillnessTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStillnessTrackerComponent::execStartTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTracking();
		P_NATIVE_END;
	}
	void UStillnessTrackerComponent::StaticRegisterNativesUStillnessTrackerComponent()
	{
		UClass* Class = UStillnessTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTracking", &UStillnessTrackerComponent::execStartTracking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStillnessTrackerComponent, nullptr, "StartTracking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStillnessTrackerComponent_NoRegister()
	{
		return UStillnessTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStillnessTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trackedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__trackedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecaySpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecaySpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StillnessTimerLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StillnessTimerLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StillnessThreshhold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StillnessThreshhold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayWhileMoving_MetaData[];
#endif
		static void NewProp_DecayWhileMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DecayWhileMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStillnessTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStillnessTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStillnessTrackerComponent_StartTracking, "StartTracking" }, // 3157859646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StillnessTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp__trackedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp__trackedPlayer = { "_trackedPlayer", nullptr, (EPropertyFlags)0x0024080000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, _trackedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp__trackedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp__trackedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecaySpeedMultiplier_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecaySpeedMultiplier = { "DecaySpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, DecaySpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecaySpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecaySpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessTimerLimit_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessTimerLimit = { "StillnessTimerLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, StillnessTimerLimit), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessTimerLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessTimerLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessThreshhold_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessThreshhold = { "StillnessThreshhold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, StillnessThreshhold), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessThreshhold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessThreshhold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving_SetBit(void* Obj)
	{
		((UStillnessTrackerComponent*)Obj)->DecayWhileMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving = { "DecayWhileMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStillnessTrackerComponent), &Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceDecay_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceDecay = { "DistanceDecay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, DistanceDecay), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceThreshold_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceThreshold = { "DistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, DistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_SpeedThreshold_MetaData[] = {
		{ "Category", "StillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/StillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_SpeedThreshold = { "SpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStillnessTrackerComponent, SpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_SpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_SpeedThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStillnessTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp__trackedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecaySpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessTimerLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_StillnessThreshhold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DecayWhileMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_DistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStillnessTrackerComponent_Statics::NewProp_SpeedThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStillnessTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStillnessTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStillnessTrackerComponent_Statics::ClassParams = {
		&UStillnessTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStillnessTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStillnessTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStillnessTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStillnessTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStillnessTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStillnessTrackerComponent, 2385687246);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStillnessTrackerComponent>()
	{
		return UStillnessTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStillnessTrackerComponent(Z_Construct_UClass_UStillnessTrackerComponent, &UStillnessTrackerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStillnessTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStillnessTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
