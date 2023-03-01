// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WorldRunawayMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldRunawayMeshComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWorldRunawayMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UWorldRunawayMeshComponent::execGetShouldRunAway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldRunAway();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldRunawayMeshComponent::execSetShouldRunAway)
	{
		P_GET_UBOOL(Z_Param_should);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldRunAway(Z_Param_should);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldRunawayMeshComponent::execSetShouldRunAwayWithDelay)
	{
		P_GET_UBOOL(Z_Param_should);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldRunAwayWithDelay(Z_Param_should,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldRunawayMeshComponent::execSetShouldRunAwayWithRandomDelay)
	{
		P_GET_UBOOL(Z_Param_should);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delayRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldRunAwayWithRandomDelay(Z_Param_should,Z_Param_delayRange);
		P_NATIVE_END;
	}
	void UWorldRunawayMeshComponent::StaticRegisterNativesUWorldRunawayMeshComponent()
	{
		UClass* Class = UWorldRunawayMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShouldRunAway", &UWorldRunawayMeshComponent::execGetShouldRunAway },
			{ "SetShouldRunAway", &UWorldRunawayMeshComponent::execSetShouldRunAway },
			{ "SetShouldRunAwayWithDelay", &UWorldRunawayMeshComponent::execSetShouldRunAwayWithDelay },
			{ "SetShouldRunAwayWithRandomDelay", &UWorldRunawayMeshComponent::execSetShouldRunAwayWithRandomDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics
	{
		struct WorldRunawayMeshComponent_eventGetShouldRunAway_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldRunawayMeshComponent_eventGetShouldRunAway_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldRunawayMeshComponent_eventGetShouldRunAway_Parms), &Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldRunawayMeshComponent, nullptr, "GetShouldRunAway", nullptr, nullptr, sizeof(WorldRunawayMeshComponent_eventGetShouldRunAway_Parms), Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics
	{
		struct WorldRunawayMeshComponent_eventSetShouldRunAway_Parms
		{
			bool should;
		};
		static void NewProp_should_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_should;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::NewProp_should_SetBit(void* Obj)
	{
		((WorldRunawayMeshComponent_eventSetShouldRunAway_Parms*)Obj)->should = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::NewProp_should = { "should", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldRunawayMeshComponent_eventSetShouldRunAway_Parms), &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::NewProp_should_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::NewProp_should,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldRunawayMeshComponent, nullptr, "SetShouldRunAway", nullptr, nullptr, sizeof(WorldRunawayMeshComponent_eventSetShouldRunAway_Parms), Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics
	{
		struct WorldRunawayMeshComponent_eventSetShouldRunAwayWithDelay_Parms
		{
			bool should;
			float delay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static void NewProp_should_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_should;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldRunawayMeshComponent_eventSetShouldRunAwayWithDelay_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_should_SetBit(void* Obj)
	{
		((WorldRunawayMeshComponent_eventSetShouldRunAwayWithDelay_Parms*)Obj)->should = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_should = { "should", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldRunawayMeshComponent_eventSetShouldRunAwayWithDelay_Parms), &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_should_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::NewProp_should,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldRunawayMeshComponent, nullptr, "SetShouldRunAwayWithDelay", nullptr, nullptr, sizeof(WorldRunawayMeshComponent_eventSetShouldRunAwayWithDelay_Parms), Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics
	{
		struct WorldRunawayMeshComponent_eventSetShouldRunAwayWithRandomDelay_Parms
		{
			bool should;
			float delayRange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayRange;
		static void NewProp_should_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_should;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_delayRange = { "delayRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldRunawayMeshComponent_eventSetShouldRunAwayWithRandomDelay_Parms, delayRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_should_SetBit(void* Obj)
	{
		((WorldRunawayMeshComponent_eventSetShouldRunAwayWithRandomDelay_Parms*)Obj)->should = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_should = { "should", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WorldRunawayMeshComponent_eventSetShouldRunAwayWithRandomDelay_Parms), &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_should_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_delayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::NewProp_should,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldRunawayMeshComponent, nullptr, "SetShouldRunAwayWithRandomDelay", nullptr, nullptr, sizeof(WorldRunawayMeshComponent_eventSetShouldRunAwayWithRandomDelay_Parms), Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister()
	{
		return UWorldRunawayMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWorldRunawayMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__returnMustTickDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__returnMustTickDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__runAwayMustTickDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__runAwayMustTickDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldRunawayMeshComponent_GetShouldRunAway, "GetShouldRunAway" }, // 2082969711
		{ &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAway, "SetShouldRunAway" }, // 1040994759
		{ &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay, "SetShouldRunAwayWithDelay" }, // 2569269915
		{ &Z_Construct_UFunction_UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay, "SetShouldRunAwayWithRandomDelay" }, // 2937612891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "WorldRunawayMeshComponent.h" },
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__returnMustTickDuration_MetaData[] = {
		{ "Category", "WorldRunawayMeshComponent" },
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__returnMustTickDuration = { "_returnMustTickDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldRunawayMeshComponent, _returnMustTickDuration), METADATA_PARAMS(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__returnMustTickDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__returnMustTickDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__runAwayMustTickDuration_MetaData[] = {
		{ "Category", "WorldRunawayMeshComponent" },
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__runAwayMustTickDuration = { "_runAwayMustTickDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldRunawayMeshComponent, _runAwayMustTickDuration), METADATA_PARAMS(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__runAwayMustTickDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__runAwayMustTickDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp_ResetCooldown_MetaData[] = {
		{ "Category", "WorldRunawayMeshComponent" },
		{ "ModuleRelativePath", "Public/WorldRunawayMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp_ResetCooldown = { "ResetCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldRunawayMeshComponent, ResetCooldown), METADATA_PARAMS(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp_ResetCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp_ResetCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__returnMustTickDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp__runAwayMustTickDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::NewProp_ResetCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldRunawayMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::ClassParams = {
		&UWorldRunawayMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldRunawayMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldRunawayMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldRunawayMeshComponent, 1558886856);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UWorldRunawayMeshComponent>()
	{
		return UWorldRunawayMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldRunawayMeshComponent(Z_Construct_UClass_UWorldRunawayMeshComponent, &UWorldRunawayMeshComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UWorldRunawayMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldRunawayMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
