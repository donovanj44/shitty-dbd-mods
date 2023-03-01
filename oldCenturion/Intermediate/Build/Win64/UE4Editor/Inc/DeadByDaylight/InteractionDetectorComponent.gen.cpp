// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionDetectorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDetectorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionDetectorComponent::execAddIgnoredActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ignored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIgnoredActor(Z_Param_ignored);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionDetectorComponent::execBeginOverlapCallback)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_fromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlapCallback(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionDetectorComponent::execEndOverlapCallback)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlapCallback(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionDetectorComponent::execGetDetectionPrimitive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetDetectionPrimitive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionDetectorComponent::execOnLocallyObservedChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionDetectorComponent::execSetDetectionPrimitive)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_detectionPrimitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectionPrimitive(Z_Param_detectionPrimitive);
		P_NATIVE_END;
	}
	void UInteractionDetectorComponent::StaticRegisterNativesUInteractionDetectorComponent()
	{
		UClass* Class = UInteractionDetectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIgnoredActor", &UInteractionDetectorComponent::execAddIgnoredActor },
			{ "BeginOverlapCallback", &UInteractionDetectorComponent::execBeginOverlapCallback },
			{ "EndOverlapCallback", &UInteractionDetectorComponent::execEndOverlapCallback },
			{ "GetDetectionPrimitive", &UInteractionDetectorComponent::execGetDetectionPrimitive },
			{ "OnLocallyObservedChanged", &UInteractionDetectorComponent::execOnLocallyObservedChanged },
			{ "SetDetectionPrimitive", &UInteractionDetectorComponent::execSetDetectionPrimitive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics
	{
		struct InteractionDetectorComponent_eventAddIgnoredActor_Parms
		{
			AActor* ignored;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::NewProp_ignored = { "ignored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventAddIgnoredActor_Parms, ignored), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::NewProp_ignored,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "AddIgnoredActor", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventAddIgnoredActor_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics
	{
		struct InteractionDetectorComponent_eventBeginOverlapCallback_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventBeginOverlapCallback_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((InteractionDetectorComponent_eventBeginOverlapCallback_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionDetectorComponent_eventBeginOverlapCallback_Parms), &Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventBeginOverlapCallback_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventBeginOverlapCallback_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventBeginOverlapCallback_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventBeginOverlapCallback_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "BeginOverlapCallback", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventBeginOverlapCallback_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics
	{
		struct InteractionDetectorComponent_eventEndOverlapCallback_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventEndOverlapCallback_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventEndOverlapCallback_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventEndOverlapCallback_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventEndOverlapCallback_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "EndOverlapCallback", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventEndOverlapCallback_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics
	{
		struct InteractionDetectorComponent_eventGetDetectionPrimitive_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventGetDetectionPrimitive_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "GetDetectionPrimitive", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventGetDetectionPrimitive_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics
	{
		struct InteractionDetectorComponent_eventOnLocallyObservedChanged_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventOnLocallyObservedChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventOnLocallyObservedChanged_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics
	{
		struct InteractionDetectorComponent_eventSetDetectionPrimitive_Parms
		{
			UPrimitiveComponent* detectionPrimitive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_detectionPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_detectionPrimitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::NewProp_detectionPrimitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::NewProp_detectionPrimitive = { "detectionPrimitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionDetectorComponent_eventSetDetectionPrimitive_Parms, detectionPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::NewProp_detectionPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::NewProp_detectionPrimitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::NewProp_detectionPrimitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionDetectorComponent, nullptr, "SetDetectionPrimitive", nullptr, nullptr, sizeof(InteractionDetectorComponent_eventSetDetectionPrimitive_Parms), Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionDetectorComponent_NoRegister()
	{
		return UInteractionDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__ignoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoredActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingPrimitiveComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__overlappingPrimitiveComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingPrimitiveComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlappingInteractables_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__overlappingInteractables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlappingInteractables_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectionPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__detectionPrimitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionDetectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_AddIgnoredActor, "AddIgnoredActor" }, // 4156629381
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_BeginOverlapCallback, "BeginOverlapCallback" }, // 1213837312
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_EndOverlapCallback, "EndOverlapCallback" }, // 510762586
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_GetDetectionPrimitive, "GetDetectionPrimitive" }, // 4268281971
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 3340270994
		{ &Z_Construct_UFunction_UInteractionDetectorComponent_SetDetectionPrimitive, "SetDetectionPrimitive" }, // 2659937789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InteractionDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors = { "_ignoredActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionDetectorComponent, _ignoredActors), METADATA_PARAMS(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors_ElementProp = { "_ignoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents = { "_overlappingPrimitiveComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionDetectorComponent, _overlappingPrimitiveComponents), METADATA_PARAMS(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents_ElementProp = { "_overlappingPrimitiveComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables = { "_overlappingInteractables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionDetectorComponent, _overlappingInteractables), METADATA_PARAMS(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables_ElementProp = { "_overlappingInteractables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__detectionPrimitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__detectionPrimitive = { "_detectionPrimitive", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionDetectorComponent, _detectionPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__detectionPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__detectionPrimitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__ignoredActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingPrimitiveComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__overlappingInteractables_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionDetectorComponent_Statics::NewProp__detectionPrimitive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionDetectorComponent_Statics::ClassParams = {
		&UInteractionDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionDetectorComponent, 3826584744);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInteractionDetectorComponent>()
	{
		return UInteractionDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionDetectorComponent(Z_Construct_UClass_UInteractionDetectorComponent, &UInteractionDetectorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInteractionDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
