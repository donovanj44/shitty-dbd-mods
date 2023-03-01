// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/LamentConfigurationChainHuntComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLamentConfigurationChainHuntComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationChainHuntComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationChainHuntComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainHuntState();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FChainHuntStateData();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(ULamentConfigurationChainHuntComponent::execGetChainHuntProgressPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChainHuntProgressPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULamentConfigurationChainHuntComponent::execOnRep_ChainHuntStateData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChainHuntStateData();
		P_NATIVE_END;
	}
	void ULamentConfigurationChainHuntComponent::StaticRegisterNativesULamentConfigurationChainHuntComponent()
	{
		UClass* Class = ULamentConfigurationChainHuntComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainHuntProgressPercentage", &ULamentConfigurationChainHuntComponent::execGetChainHuntProgressPercentage },
			{ "OnRep_ChainHuntStateData", &ULamentConfigurationChainHuntComponent::execOnRep_ChainHuntStateData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics
	{
		struct LamentConfigurationChainHuntComponent_eventGetChainHuntProgressPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfigurationChainHuntComponent_eventGetChainHuntProgressPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULamentConfigurationChainHuntComponent, nullptr, "GetChainHuntProgressPercentage", nullptr, nullptr, sizeof(LamentConfigurationChainHuntComponent_eventGetChainHuntProgressPercentage_Parms), Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULamentConfigurationChainHuntComponent, nullptr, "OnRep_ChainHuntStateData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULamentConfigurationChainHuntComponent_NoRegister()
	{
		return ULamentConfigurationChainHuntComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__oldChainHuntState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__oldChainHuntState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__oldChainHuntState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainHuntStateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainHuntStateData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedAdditiveChainStrikeDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cachedAdditiveChainStrikeDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainHuntEffectsComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chainHuntEffectsComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainHuntEffectsComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerChainHuntEffectsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerChainHuntEffectsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorChainHuntEffectsComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__survivorChainHuntEffectsComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerChainHuntEffectsComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__killerChainHuntEffectsComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenChainHuntClusterStrikes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timeBetweenChainHuntClusterStrikes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainNumberPerChainHuntCluster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainNumberPerChainHuntCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainHuntChargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainHuntChargeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__floorChainHuntTimeBetweenChainStrikes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__floorChainHuntTimeBetweenChainStrikes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage, "GetChainHuntProgressPercentage" }, // 2177396290
		{ &Z_Construct_UFunction_ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData, "OnRep_ChainHuntStateData" }, // 922757236
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LamentConfigurationChainHuntComponent.h" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState = { "_oldChainHuntState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _oldChainHuntState), Z_Construct_UEnum_TheK25_EChainHuntState, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntStateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntStateData = { "_chainHuntStateData", "OnRep_ChainHuntStateData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntStateData), Z_Construct_UScriptStruct_FChainHuntStateData, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntStateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntStateData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__cachedAdditiveChainStrikeDelayTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__cachedAdditiveChainStrikeDelayTime = { "_cachedAdditiveChainStrikeDelayTime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _cachedAdditiveChainStrikeDelayTime), METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__cachedAdditiveChainStrikeDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__cachedAdditiveChainStrikeDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents = { "_chainHuntEffectsComponents", nullptr, (EPropertyFlags)0x0040008000002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntEffectsComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents_Inner = { "_chainHuntEffectsComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponent = { "_killerChainHuntEffectsComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _killerChainHuntEffectsComponent), Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__survivorChainHuntEffectsComponentClass_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__survivorChainHuntEffectsComponentClass = { "_survivorChainHuntEffectsComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _survivorChainHuntEffectsComponentClass), Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__survivorChainHuntEffectsComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__survivorChainHuntEffectsComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponentClass_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponentClass = { "_killerChainHuntEffectsComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _killerChainHuntEffectsComponentClass), Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__timeBetweenChainHuntClusterStrikes_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__timeBetweenChainHuntClusterStrikes = { "_timeBetweenChainHuntClusterStrikes", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _timeBetweenChainHuntClusterStrikes), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__timeBetweenChainHuntClusterStrikes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__timeBetweenChainHuntClusterStrikes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainNumberPerChainHuntCluster_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainNumberPerChainHuntCluster = { "_chainNumberPerChainHuntCluster", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainNumberPerChainHuntCluster), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainNumberPerChainHuntCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainNumberPerChainHuntCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntChargeTime_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntChargeTime = { "_chainHuntChargeTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _chainHuntChargeTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntChargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntChargeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__floorChainHuntTimeBetweenChainStrikes_MetaData[] = {
		{ "Category", "LamentConfigurationChainHuntComponent" },
		{ "ModuleRelativePath", "Public/LamentConfigurationChainHuntComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__floorChainHuntTimeBetweenChainStrikes = { "_floorChainHuntTimeBetweenChainStrikes", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULamentConfigurationChainHuntComponent, _floorChainHuntTimeBetweenChainStrikes), METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__floorChainHuntTimeBetweenChainStrikes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__floorChainHuntTimeBetweenChainStrikes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__oldChainHuntState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntStateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__cachedAdditiveChainStrikeDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntEffectsComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__survivorChainHuntEffectsComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__killerChainHuntEffectsComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__timeBetweenChainHuntClusterStrikes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainNumberPerChainHuntCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__chainHuntChargeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::NewProp__floorChainHuntTimeBetweenChainStrikes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULamentConfigurationChainHuntComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::ClassParams = {
		&ULamentConfigurationChainHuntComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULamentConfigurationChainHuntComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULamentConfigurationChainHuntComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULamentConfigurationChainHuntComponent, 865079907);
	template<> THEK25_API UClass* StaticClass<ULamentConfigurationChainHuntComponent>()
	{
		return ULamentConfigurationChainHuntComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULamentConfigurationChainHuntComponent(Z_Construct_UClass_ULamentConfigurationChainHuntComponent, &ULamentConfigurationChainHuntComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("ULamentConfigurationChainHuntComponent"), false, nullptr, nullptr, nullptr);

	void ULamentConfigurationChainHuntComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__chainHuntEffectsComponents(TEXT("_chainHuntEffectsComponents"));
		static const FName Name__chainHuntStateData(TEXT("_chainHuntStateData"));

		const bool bIsValid = true
			&& Name__chainHuntEffectsComponents == ClassReps[(int32)ENetFields_Private::_chainHuntEffectsComponents].Property->GetFName()
			&& Name__chainHuntStateData == ClassReps[(int32)ENetFields_Private::_chainHuntStateData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULamentConfigurationChainHuntComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULamentConfigurationChainHuntComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
