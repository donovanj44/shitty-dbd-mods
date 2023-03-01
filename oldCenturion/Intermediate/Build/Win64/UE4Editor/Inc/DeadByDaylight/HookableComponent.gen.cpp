// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HookableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UHookableComponent::execAuthority_SetDrainTimerPercentLeft)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetDrainTimerPercentLeft(Z_Param_percentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHookableComponent::execGetDrainTimerPercentLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDrainTimerPercentLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHookableComponent::execMulticast_DebugSetHookDrainStage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_drainStage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugSetHookDrainStage_Implementation(Z_Param_drainStage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHookableComponent::execMulticast_SetDrainTimerPercentLeft)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDrainTimerPercentLeft_Implementation(Z_Param_percentTime);
		P_NATIVE_END;
	}
	static FName NAME_UHookableComponent_Multicast_DebugSetHookDrainStage = FName(TEXT("Multicast_DebugSetHookDrainStage"));
	void UHookableComponent::Multicast_DebugSetHookDrainStage(int32 drainStage)
	{
		HookableComponent_eventMulticast_DebugSetHookDrainStage_Parms Parms;
		Parms.drainStage=drainStage;
		ProcessEvent(FindFunctionChecked(NAME_UHookableComponent_Multicast_DebugSetHookDrainStage),&Parms);
	}
	static FName NAME_UHookableComponent_Multicast_SetDrainTimerPercentLeft = FName(TEXT("Multicast_SetDrainTimerPercentLeft"));
	void UHookableComponent::Multicast_SetDrainTimerPercentLeft(float percentTime)
	{
		HookableComponent_eventMulticast_SetDrainTimerPercentLeft_Parms Parms;
		Parms.percentTime=percentTime;
		ProcessEvent(FindFunctionChecked(NAME_UHookableComponent_Multicast_SetDrainTimerPercentLeft),&Parms);
	}
	void UHookableComponent::StaticRegisterNativesUHookableComponent()
	{
		UClass* Class = UHookableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SetDrainTimerPercentLeft", &UHookableComponent::execAuthority_SetDrainTimerPercentLeft },
			{ "GetDrainTimerPercentLeft", &UHookableComponent::execGetDrainTimerPercentLeft },
			{ "Multicast_DebugSetHookDrainStage", &UHookableComponent::execMulticast_DebugSetHookDrainStage },
			{ "Multicast_SetDrainTimerPercentLeft", &UHookableComponent::execMulticast_SetDrainTimerPercentLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics
	{
		struct HookableComponent_eventAuthority_SetDrainTimerPercentLeft_Parms
		{
			float percentTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::NewProp_percentTime = { "percentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookableComponent_eventAuthority_SetDrainTimerPercentLeft_Parms, percentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::NewProp_percentTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookableComponent, nullptr, "Authority_SetDrainTimerPercentLeft", nullptr, nullptr, sizeof(HookableComponent_eventAuthority_SetDrainTimerPercentLeft_Parms), Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics
	{
		struct HookableComponent_eventGetDrainTimerPercentLeft_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookableComponent_eventGetDrainTimerPercentLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookableComponent, nullptr, "GetDrainTimerPercentLeft", nullptr, nullptr, sizeof(HookableComponent_eventGetDrainTimerPercentLeft_Parms), Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_drainStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::NewProp_drainStage = { "drainStage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookableComponent_eventMulticast_DebugSetHookDrainStage_Parms, drainStage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::NewProp_drainStage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookableComponent, nullptr, "Multicast_DebugSetHookDrainStage", nullptr, nullptr, sizeof(HookableComponent_eventMulticast_DebugSetHookDrainStage_Parms), Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::NewProp_percentTime = { "percentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookableComponent_eventMulticast_SetDrainTimerPercentLeft_Parms, percentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::NewProp_percentTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookableComponent, nullptr, "Multicast_SetDrainTimerPercentLeft", nullptr, nullptr, sizeof(HookableComponent_eventMulticast_SetDrainTimerPercentLeft_Parms), Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHookableComponent_NoRegister()
	{
		return UHookableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHookableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHookableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHookableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHookableComponent_Authority_SetDrainTimerPercentLeft, "Authority_SetDrainTimerPercentLeft" }, // 3153613119
		{ &Z_Construct_UFunction_UHookableComponent_GetDrainTimerPercentLeft, "GetDrainTimerPercentLeft" }, // 3881823625
		{ &Z_Construct_UFunction_UHookableComponent_Multicast_DebugSetHookDrainStage, "Multicast_DebugSetHookDrainStage" }, // 3544830149
		{ &Z_Construct_UFunction_UHookableComponent_Multicast_SetDrainTimerPercentLeft, "Multicast_SetDrainTimerPercentLeft" }, // 218111204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HookableComponent.h" },
		{ "ModuleRelativePath", "Public/HookableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHookableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHookableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHookableComponent_Statics::ClassParams = {
		&UHookableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHookableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHookableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHookableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHookableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHookableComponent, 4134254025);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHookableComponent>()
	{
		return UHookableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHookableComponent(Z_Construct_UClass_UHookableComponent, &UHookableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHookableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHookableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
