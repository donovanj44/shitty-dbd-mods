// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperMovementComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperMovementComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
// End Cross Module References
	DEFINE_FUNCTION(UCamperMovementComponent::execGetDefaultRotationRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetDefaultRotationRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperMovementComponent::execGetRotationRateWhileCrawling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationRateWhileCrawling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperMovementComponent::execOnCamperHealthStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperHealthStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	void UCamperMovementComponent::StaticRegisterNativesUCamperMovementComponent()
	{
		UClass* Class = UCamperMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultRotationRate", &UCamperMovementComponent::execGetDefaultRotationRate },
			{ "GetRotationRateWhileCrawling", &UCamperMovementComponent::execGetRotationRateWhileCrawling },
			{ "OnCamperHealthStateChanged", &UCamperMovementComponent::execOnCamperHealthStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics
	{
		struct CamperMovementComponent_eventGetDefaultRotationRate_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperMovementComponent_eventGetDefaultRotationRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperMovementComponent, nullptr, "GetDefaultRotationRate", nullptr, nullptr, sizeof(CamperMovementComponent_eventGetDefaultRotationRate_Parms), Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics
	{
		struct CamperMovementComponent_eventGetRotationRateWhileCrawling_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperMovementComponent_eventGetRotationRateWhileCrawling_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperMovementComponent, nullptr, "GetRotationRateWhileCrawling", nullptr, nullptr, sizeof(CamperMovementComponent_eventGetRotationRateWhileCrawling_Parms), Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics
	{
		struct CamperMovementComponent_eventOnCamperHealthStateChanged_Parms
		{
			ECamperDamageState oldDamageState;
			ECamperDamageState currentDamageState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentDamageState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperMovementComponent_eventOnCamperHealthStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperMovementComponent_eventOnCamperHealthStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperMovementComponent, nullptr, "OnCamperHealthStateChanged", nullptr, nullptr, sizeof(CamperMovementComponent_eventOnCamperHealthStateChanged_Parms), Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamperMovementComponent_NoRegister()
	{
		return UCamperMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCamperMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationRateWhileCrawling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rotationRateWhileCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrawlSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCrawlSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamperMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamperMovementComponent_GetDefaultRotationRate, "GetDefaultRotationRate" }, // 676222249
		{ &Z_Construct_UFunction_UCamperMovementComponent_GetRotationRateWhileCrawling, "GetRotationRateWhileCrawling" }, // 3077961881
		{ &Z_Construct_UFunction_UCamperMovementComponent_OnCamperHealthStateChanged, "OnCamperHealthStateChanged" }, // 1907027900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperMovementComponent.h" },
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__rotationRateWhileCrawling_MetaData[] = {
		{ "Category", "CamperMovementComponent" },
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__rotationRateWhileCrawling = { "_rotationRateWhileCrawling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperMovementComponent, _rotationRateWhileCrawling), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__rotationRateWhileCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__rotationRateWhileCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__defaultRotationRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__defaultRotationRate = { "_defaultRotationRate", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperMovementComponent, _defaultRotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__defaultRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__defaultRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData[] = {
		{ "Category", "CamperMovementComponent" },
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxRunSpeed = { "MaxRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperMovementComponent, MaxRunSpeed), METADATA_PARAMS(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData[] = {
		{ "Category", "CamperMovementComponent" },
		{ "ModuleRelativePath", "Public/CamperMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxCrawlSpeed = { "MaxCrawlSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperMovementComponent, MaxCrawlSpeed), METADATA_PARAMS(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamperMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__rotationRateWhileCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp__defaultRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperMovementComponent_Statics::NewProp_MaxCrawlSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperMovementComponent_Statics::ClassParams = {
		&UCamperMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamperMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperMovementComponent, 470489101);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperMovementComponent>()
	{
		return UCamperMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperMovementComponent(Z_Construct_UClass_UCamperMovementComponent, &UCamperMovementComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
