// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDetectorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorDetectorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventActorDetectorComponentOnActorDetected_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventActorDetectorComponentOnActorDetected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "ActorDetectorComponentOnActorDetected__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventActorDetectorComponentOnActorDetected_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UActorDetectorComponent::execOnOverlapEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnter(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorDetectorComponent::execSetDetectionPrimitive)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectionPrimitive(Z_Param_primitive);
		P_NATIVE_END;
	}
	void UActorDetectorComponent::StaticRegisterNativesUActorDetectorComponent()
	{
		UClass* Class = UActorDetectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapEnter", &UActorDetectorComponent::execOnOverlapEnter },
			{ "SetDetectionPrimitive", &UActorDetectorComponent::execSetDetectionPrimitive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics
	{
		struct ActorDetectorComponent_eventOnOverlapEnter_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventOnOverlapEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ActorDetectorComponent_eventOnOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorDetectorComponent_eventOnOverlapEnter_Parms), &Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventOnOverlapEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventOnOverlapEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventOnOverlapEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventOnOverlapEnter_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorDetectorComponent, nullptr, "OnOverlapEnter", nullptr, nullptr, sizeof(ActorDetectorComponent_eventOnOverlapEnter_Parms), Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics
	{
		struct ActorDetectorComponent_eventSetDetectionPrimitive_Parms
		{
			UPrimitiveComponent* primitive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::NewProp_primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::NewProp_primitive = { "primitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorDetectorComponent_eventSetDetectionPrimitive_Parms, primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::NewProp_primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::NewProp_primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::NewProp_primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorDetectorComponent, nullptr, "SetDetectionPrimitive", nullptr, nullptr, sizeof(ActorDetectorComponent_eventSetDetectionPrimitive_Parms), Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorDetectorComponent_NoRegister()
	{
		return UActorDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__primitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectedTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollectedTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CollectedTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorDetected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDetected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorDetectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorDetectorComponent_OnOverlapEnter, "OnOverlapEnter" }, // 3751411091
		{ &Z_Construct_UFunction_UActorDetectorComponent_SetDetectionPrimitive, "SetDetectionPrimitive" }, // 2222687994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp__primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp__primitive = { "_primitive", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorDetectorComponent, _primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp__primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp__primitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes_MetaData[] = {
		{ "Category", "ActorDetectorComponent" },
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes = { "CollectedTypes", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorDetectorComponent, CollectedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes_Inner = { "CollectedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_OnActorDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_OnActorDetected = { "OnActorDetected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorDetectorComponent, OnActorDetected), Z_Construct_UDelegateFunction_DeadByDaylight_ActorDetectorComponentOnActorDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_OnActorDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_OnActorDetected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp__primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_CollectedTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDetectorComponent_Statics::NewProp_OnActorDetected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorDetectorComponent_Statics::ClassParams = {
		&UActorDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorDetectorComponent, 1966654401);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorDetectorComponent>()
	{
		return UActorDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorDetectorComponent(Z_Construct_UClass_UActorDetectorComponent, &UActorDetectorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
