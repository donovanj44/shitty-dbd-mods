// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TerrorRadiusReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrorRadiusReceiverComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTerrorRadiusReceiverComponent::execIsInTerrorRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTerrorRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusReceiverComponent::execIsInTerrorRadiusRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTerrorRadiusRange();
		P_NATIVE_END;
	}
	void UTerrorRadiusReceiverComponent::StaticRegisterNativesUTerrorRadiusReceiverComponent()
	{
		UClass* Class = UTerrorRadiusReceiverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInTerrorRadius", &UTerrorRadiusReceiverComponent::execIsInTerrorRadius },
			{ "IsInTerrorRadiusRange", &UTerrorRadiusReceiverComponent::execIsInTerrorRadiusRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics
	{
		struct TerrorRadiusReceiverComponent_eventIsInTerrorRadius_Parms
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
	void Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusReceiverComponent_eventIsInTerrorRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusReceiverComponent_eventIsInTerrorRadius_Parms), &Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusReceiverComponent, nullptr, "IsInTerrorRadius", nullptr, nullptr, sizeof(TerrorRadiusReceiverComponent_eventIsInTerrorRadius_Parms), Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics
	{
		struct TerrorRadiusReceiverComponent_eventIsInTerrorRadiusRange_Parms
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
	void Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusReceiverComponent_eventIsInTerrorRadiusRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusReceiverComponent_eventIsInTerrorRadiusRange_Parms), &Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusReceiverComponent, nullptr, "IsInTerrorRadiusRange", nullptr, nullptr, sizeof(TerrorRadiusReceiverComponent_eventIsInTerrorRadiusRange_Parms), Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister()
	{
		return UTerrorRadiusReceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__heartbeatMasterVolumeInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__heartbeatMasterVolumeInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trVerticalDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trVerticalDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsInTerrorRadiusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsInTerrorRadiusChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadius, "IsInTerrorRadius" }, // 1135957504
		{ &Z_Construct_UFunction_UTerrorRadiusReceiverComponent_IsInTerrorRadiusRange, "IsInTerrorRadiusRange" }, // 1923133646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TerrorRadiusReceiverComponent.h" },
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__heartbeatMasterVolumeInterpolationSpeed_MetaData[] = {
		{ "Category", "TerrorRadiusReceiverComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__heartbeatMasterVolumeInterpolationSpeed = { "_heartbeatMasterVolumeInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusReceiverComponent, _heartbeatMasterVolumeInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__heartbeatMasterVolumeInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__heartbeatMasterVolumeInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__trVerticalDistanceFactor_MetaData[] = {
		{ "Category", "TerrorRadiusReceiverComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__trVerticalDistanceFactor = { "_trVerticalDistanceFactor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusReceiverComponent, _trVerticalDistanceFactor), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__trVerticalDistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__trVerticalDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp_OnIsInTerrorRadiusChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp_OnIsInTerrorRadiusChanged = { "OnIsInTerrorRadiusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusReceiverComponent, OnIsInTerrorRadiusChanged), Z_Construct_UDelegateFunction_DeadByDaylight_TerrorRadiusReceiverComponentOnIsInTerrorRadiusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp_OnIsInTerrorRadiusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp_OnIsInTerrorRadiusChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__heartbeatMasterVolumeInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp__trVerticalDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::NewProp_OnIsInTerrorRadiusChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrorRadiusReceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::ClassParams = {
		&UTerrorRadiusReceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerrorRadiusReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTerrorRadiusReceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTerrorRadiusReceiverComponent, 3564007974);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTerrorRadiusReceiverComponent>()
	{
		return UTerrorRadiusReceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTerrorRadiusReceiverComponent(Z_Construct_UClass_UTerrorRadiusReceiverComponent, &UTerrorRadiusReceiverComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTerrorRadiusReceiverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerrorRadiusReceiverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
