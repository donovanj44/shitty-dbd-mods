// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbOverlapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbOverlapComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbOverlapComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbOverlapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbOverlapComponent::execAuthority_OnBloodOrbBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBloodOrbBeginOverlap(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbOverlapComponent::execAuthority_OnBloodOrbEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBloodOrbEndOverlap(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbOverlapComponent::execAuthority_OnBloodOrbVisibilityModeChanged)
	{
		P_GET_ENUM(EBloodOrbVisibilityMode,Z_Param_visibilityMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode(Z_Param_visibilityMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbOverlapComponent::execAuthority_OnDestroyedBloodOrb)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDestroyedBloodOrb(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBloodOrbOverlapComponent::execOnRep_CurrentOverlappingOrbs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_previousOverlappingOrbs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentOverlappingOrbs(Z_Param_previousOverlappingOrbs);
		P_NATIVE_END;
	}
	void UBloodOrbOverlapComponent::StaticRegisterNativesUBloodOrbOverlapComponent()
	{
		UClass* Class = UBloodOrbOverlapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnBloodOrbBeginOverlap", &UBloodOrbOverlapComponent::execAuthority_OnBloodOrbBeginOverlap },
			{ "Authority_OnBloodOrbEndOverlap", &UBloodOrbOverlapComponent::execAuthority_OnBloodOrbEndOverlap },
			{ "Authority_OnBloodOrbVisibilityModeChanged", &UBloodOrbOverlapComponent::execAuthority_OnBloodOrbVisibilityModeChanged },
			{ "Authority_OnDestroyedBloodOrb", &UBloodOrbOverlapComponent::execAuthority_OnDestroyedBloodOrb },
			{ "OnRep_CurrentOverlappingOrbs", &UBloodOrbOverlapComponent::execOnRep_CurrentOverlappingOrbs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics
	{
		struct BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms), &Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapComponent, nullptr, "Authority_OnBloodOrbBeginOverlap", nullptr, nullptr, sizeof(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbBeginOverlap_Parms), Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics
	{
		struct BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapComponent, nullptr, "Authority_OnBloodOrbEndOverlap", nullptr, nullptr, sizeof(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbEndOverlap_Parms), Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics
	{
		struct BloodOrbOverlapComponent_eventAuthority_OnBloodOrbVisibilityModeChanged_Parms
		{
			EBloodOrbVisibilityMode visibilityMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_visibilityMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_visibilityMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::NewProp_visibilityMode = { "visibilityMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbVisibilityModeChanged_Parms, visibilityMode), Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::NewProp_visibilityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::NewProp_visibilityMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::NewProp_visibilityMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapComponent, nullptr, "Authority_OnBloodOrbVisibilityModeChanged", nullptr, nullptr, sizeof(BloodOrbOverlapComponent_eventAuthority_OnBloodOrbVisibilityModeChanged_Parms), Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics
	{
		struct BloodOrbOverlapComponent_eventAuthority_OnDestroyedBloodOrb_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventAuthority_OnDestroyedBloodOrb_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapComponent, nullptr, "Authority_OnDestroyedBloodOrb", nullptr, nullptr, sizeof(BloodOrbOverlapComponent_eventAuthority_OnDestroyedBloodOrb_Parms), Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics
	{
		struct BloodOrbOverlapComponent_eventOnRep_CurrentOverlappingOrbs_Parms
		{
			int32 previousOverlappingOrbs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previousOverlappingOrbs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::NewProp_previousOverlappingOrbs = { "previousOverlappingOrbs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapComponent_eventOnRep_CurrentOverlappingOrbs_Parms, previousOverlappingOrbs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::NewProp_previousOverlappingOrbs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapComponent, nullptr, "OnRep_CurrentOverlappingOrbs", nullptr, nullptr, sizeof(BloodOrbOverlapComponent_eventOnRep_CurrentOverlappingOrbs_Parms), Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbOverlapComponent_NoRegister()
	{
		return UBloodOrbOverlapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbOverlapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentOverlappingOrbs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentOverlappingOrbs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap, "Authority_OnBloodOrbBeginOverlap" }, // 757248083
		{ &Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap, "Authority_OnBloodOrbEndOverlap" }, // 4262640616
		{ &Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged, "Authority_OnBloodOrbVisibilityModeChanged" }, // 1562992966
		{ &Z_Construct_UFunction_UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb, "Authority_OnDestroyedBloodOrb" }, // 1081900725
		{ &Z_Construct_UFunction_UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs, "OnRep_CurrentOverlappingOrbs" }, // 1873735786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbOverlapComponent.h" },
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::NewProp__currentOverlappingOrbs_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::NewProp__currentOverlappingOrbs = { "_currentOverlappingOrbs", "OnRep_CurrentOverlappingOrbs", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbOverlapComponent, _currentOverlappingOrbs), METADATA_PARAMS(Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::NewProp__currentOverlappingOrbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::NewProp__currentOverlappingOrbs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::NewProp__currentOverlappingOrbs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbOverlapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::ClassParams = {
		&UBloodOrbOverlapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbOverlapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbOverlapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbOverlapComponent, 2972711993);
	template<> THEONI_API UClass* StaticClass<UBloodOrbOverlapComponent>()
	{
		return UBloodOrbOverlapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbOverlapComponent(Z_Construct_UClass_UBloodOrbOverlapComponent, &UBloodOrbOverlapComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbOverlapComponent"), false, nullptr, nullptr, nullptr);

	void UBloodOrbOverlapComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentOverlappingOrbs(TEXT("_currentOverlappingOrbs"));

		const bool bIsValid = true
			&& Name__currentOverlappingOrbs == ClassReps[(int32)ENetFields_Private::_currentOverlappingOrbs].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBloodOrbOverlapComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbOverlapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
