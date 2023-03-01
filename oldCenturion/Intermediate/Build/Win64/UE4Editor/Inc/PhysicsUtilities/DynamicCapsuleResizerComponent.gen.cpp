// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsUtilities/Public/DynamicCapsuleResizerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicCapsuleResizerComponent() {}
// Cross Module References
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UDynamicCapsuleResizerComponent_NoRegister();
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UDynamicCapsuleResizerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PhysicsUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDynamicCapsuleResizerComponent::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicCapsuleResizerComponent::execOnRep_IsShrinkingAlwaysEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsShrinkingAlwaysEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicCapsuleResizerComponent::execSetShrinkingEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShrinkingEnabled(Z_Param_enabled);
		P_NATIVE_END;
	}
	void UDynamicCapsuleResizerComponent::StaticRegisterNativesUDynamicCapsuleResizerComponent()
	{
		UClass* Class = UDynamicCapsuleResizerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &UDynamicCapsuleResizerComponent::execOnHit },
			{ "OnRep_IsShrinkingAlwaysEnabled", &UDynamicCapsuleResizerComponent::execOnRep_IsShrinkingAlwaysEnabled },
			{ "SetShrinkingEnabled", &UDynamicCapsuleResizerComponent::execSetShrinkingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics
	{
		struct DynamicCapsuleResizerComponent_eventOnHit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicCapsuleResizerComponent_eventOnHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicCapsuleResizerComponent_eventOnHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicCapsuleResizerComponent_eventOnHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicCapsuleResizerComponent_eventOnHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicCapsuleResizerComponent_eventOnHit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_normalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicCapsuleResizerComponent, nullptr, "OnHit", nullptr, nullptr, sizeof(DynamicCapsuleResizerComponent_eventOnHit_Parms), Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicCapsuleResizerComponent, nullptr, "OnRep_IsShrinkingAlwaysEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics
	{
		struct DynamicCapsuleResizerComponent_eventSetShrinkingEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((DynamicCapsuleResizerComponent_eventSetShrinkingEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DynamicCapsuleResizerComponent_eventSetShrinkingEnabled_Parms), &Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicCapsuleResizerComponent, nullptr, "SetShrinkingEnabled", nullptr, nullptr, sizeof(DynamicCapsuleResizerComponent_eventSetShrinkingEnabled_Parms), Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicCapsuleResizerComponent_NoRegister()
	{
		return UDynamicCapsuleResizerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isShrinkingAlwaysEnabled_MetaData[];
#endif
		static void NewProp__isShrinkingAlwaysEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isShrinkingAlwaysEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isShrinkingEnabled_MetaData[];
#endif
		static void NewProp__isShrinkingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isShrinkingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__expandOverlapTestMinDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__expandOverlapTestMinDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stayShrunkenDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__stayShrunkenDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__expandDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__expandDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shrinkDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__shrinkDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shrinkPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__shrinkPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__capsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnHit, "OnHit" }, // 2871390259
		{ &Z_Construct_UFunction_UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled, "OnRep_IsShrinkingAlwaysEnabled" }, // 3013020395
		{ &Z_Construct_UFunction_UDynamicCapsuleResizerComponent_SetShrinkingEnabled, "SetShrinkingEnabled" }, // 3043925173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicCapsuleResizerComponent.h" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled_SetBit(void* Obj)
	{
		((UDynamicCapsuleResizerComponent*)Obj)->_isShrinkingAlwaysEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled = { "_isShrinkingAlwaysEnabled", "OnRep_IsShrinkingAlwaysEnabled", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicCapsuleResizerComponent), &Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled_SetBit(void* Obj)
	{
		((UDynamicCapsuleResizerComponent*)Obj)->_isShrinkingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled = { "_isShrinkingEnabled", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicCapsuleResizerComponent), &Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandOverlapTestMinDeltaTime_MetaData[] = {
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandOverlapTestMinDeltaTime = { "_expandOverlapTestMinDeltaTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _expandOverlapTestMinDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandOverlapTestMinDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandOverlapTestMinDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__stayShrunkenDuration_MetaData[] = {
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__stayShrunkenDuration = { "_stayShrunkenDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _stayShrunkenDuration), METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__stayShrunkenDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__stayShrunkenDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandDuration_MetaData[] = {
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandDuration = { "_expandDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _expandDuration), METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkDuration_MetaData[] = {
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkDuration = { "_shrinkDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _shrinkDuration), METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkPercent_MetaData[] = {
		{ "Category", "DynamicCapsuleResizerComponent" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkPercent = { "_shrinkPercent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _shrinkPercent), METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__capsule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicCapsuleResizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__capsule = { "_capsule", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicCapsuleResizerComponent, _capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__capsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingAlwaysEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__isShrinkingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandOverlapTestMinDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__stayShrunkenDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__expandDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__shrinkPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::NewProp__capsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicCapsuleResizerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::ClassParams = {
		&UDynamicCapsuleResizerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicCapsuleResizerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicCapsuleResizerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicCapsuleResizerComponent, 2258134531);
	template<> PHYSICSUTILITIES_API UClass* StaticClass<UDynamicCapsuleResizerComponent>()
	{
		return UDynamicCapsuleResizerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicCapsuleResizerComponent(Z_Construct_UClass_UDynamicCapsuleResizerComponent, &UDynamicCapsuleResizerComponent::StaticClass, TEXT("/Script/PhysicsUtilities"), TEXT("UDynamicCapsuleResizerComponent"), false, nullptr, nullptr, nullptr);

	void UDynamicCapsuleResizerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isShrinkingAlwaysEnabled(TEXT("_isShrinkingAlwaysEnabled"));

		const bool bIsValid = true
			&& Name__isShrinkingAlwaysEnabled == ClassReps[(int32)ENetFields_Private::_isShrinkingAlwaysEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDynamicCapsuleResizerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicCapsuleResizerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
