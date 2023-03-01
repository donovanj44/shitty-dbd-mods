// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/NearTrackedActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearTrackedActorComponent() {}
// Cross Module References
	ARCHIVES_API UFunction* Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearTrackedActorComponent_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearTrackedActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms
		{
			bool isWithinRange;
			const AActor* trackedActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackedActor;
		static void NewProp_isWithinRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWithinRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_trackedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_trackedActor = { "trackedActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms, trackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_trackedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_trackedActor_MetaData)) };
	void Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_isWithinRange_SetBit(void* Obj)
	{
		((_Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms*)Obj)->isWithinRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_isWithinRange = { "isWithinRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms), &Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_isWithinRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_trackedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::NewProp_isWithinRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Archives, nullptr, "NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms), Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNearTrackedActorComponent::execIsActorWithinRange)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorWithinRange(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearTrackedActorComponent::execSetDistanceThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceThreshold(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearTrackedActorComponent::execStartTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrackingActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearTrackedActorComponent::execStopTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTrackingActor(Z_Param_actor);
		P_NATIVE_END;
	}
	void UNearTrackedActorComponent::StaticRegisterNativesUNearTrackedActorComponent()
	{
		UClass* Class = UNearTrackedActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActorWithinRange", &UNearTrackedActorComponent::execIsActorWithinRange },
			{ "SetDistanceThreshold", &UNearTrackedActorComponent::execSetDistanceThreshold },
			{ "StartTrackingActor", &UNearTrackedActorComponent::execStartTrackingActor },
			{ "StopTrackingActor", &UNearTrackedActorComponent::execStopTrackingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics
	{
		struct NearTrackedActorComponent_eventIsActorWithinRange_Parms
		{
			const AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NearTrackedActorComponent_eventIsActorWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NearTrackedActorComponent_eventIsActorWithinRange_Parms), &Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NearTrackedActorComponent_eventIsActorWithinRange_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearTrackedActorComponent, nullptr, "IsActorWithinRange", nullptr, nullptr, sizeof(NearTrackedActorComponent_eventIsActorWithinRange_Parms), Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics
	{
		struct NearTrackedActorComponent_eventSetDistanceThreshold_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NearTrackedActorComponent_eventSetDistanceThreshold_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearTrackedActorComponent, nullptr, "SetDistanceThreshold", nullptr, nullptr, sizeof(NearTrackedActorComponent_eventSetDistanceThreshold_Parms), Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics
	{
		struct NearTrackedActorComponent_eventStartTrackingActor_Parms
		{
			const AActor* actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NearTrackedActorComponent_eventStartTrackingActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearTrackedActorComponent, nullptr, "StartTrackingActor", nullptr, nullptr, sizeof(NearTrackedActorComponent_eventStartTrackingActor_Parms), Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics
	{
		struct NearTrackedActorComponent_eventStopTrackingActor_Parms
		{
			const AActor* actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NearTrackedActorComponent_eventStopTrackingActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearTrackedActorComponent, nullptr, "StopTrackingActor", nullptr, nullptr, sizeof(NearTrackedActorComponent_eventStopTrackingActor_Parms), Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNearTrackedActorComponent_NoRegister()
	{
		return UNearTrackedActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNearTrackedActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWithinRangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_IsWithinRangeDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearTrackedActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearTrackedActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearTrackedActorComponent_IsActorWithinRange, "IsActorWithinRange" }, // 2928814439
		{ &Z_Construct_UFunction_UNearTrackedActorComponent_SetDistanceThreshold, "SetDistanceThreshold" }, // 541242034
		{ &Z_Construct_UFunction_UNearTrackedActorComponent_StartTrackingActor, "StartTrackingActor" }, // 3599826404
		{ &Z_Construct_UFunction_UNearTrackedActorComponent_StopTrackingActor, "StopTrackingActor" }, // 1054405466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearTrackedActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NearTrackedActorComponent.h" },
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp__distanceThreshold_MetaData[] = {
		{ "Category", "NearTrackedActorComponent" },
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp__distanceThreshold = { "_distanceThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNearTrackedActorComponent, _distanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp__distanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp__distanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp_IsWithinRangeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearTrackedActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp_IsWithinRangeDelegate = { "IsWithinRangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNearTrackedActorComponent, IsWithinRangeDelegate), Z_Construct_UDelegateFunction_Archives_NearTrackedActorComponentIsWithinRangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp_IsWithinRangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp_IsWithinRangeDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearTrackedActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp__distanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearTrackedActorComponent_Statics::NewProp_IsWithinRangeDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearTrackedActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearTrackedActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNearTrackedActorComponent_Statics::ClassParams = {
		&UNearTrackedActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearTrackedActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearTrackedActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNearTrackedActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearTrackedActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearTrackedActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNearTrackedActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNearTrackedActorComponent, 666436158);
	template<> ARCHIVES_API UClass* StaticClass<UNearTrackedActorComponent>()
	{
		return UNearTrackedActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNearTrackedActorComponent(Z_Construct_UClass_UNearTrackedActorComponent, &UNearTrackedActorComponent::StaticClass, TEXT("/Script/Archives"), TEXT("UNearTrackedActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearTrackedActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
