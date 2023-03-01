// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperStillnessTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperStillnessTrackerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperStillnessTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperStillnessTrackerComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStillnessTrackerComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperExposerInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCamperStillnessTrackerComponent::execEnterInteriorZone)
	{
		P_GET_OBJECT(UExposerInteriorZoneComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterInteriorZone(Z_Param_zone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperStillnessTrackerComponent::execExitInteriorZone)
	{
		P_GET_OBJECT(UExposerInteriorZoneComponent,Z_Param_zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitInteriorZone(Z_Param_zone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperStillnessTrackerComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCamperStillnessTrackerComponent::execOnOverlapEnter)
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
	DEFINE_FUNCTION(UCamperStillnessTrackerComponent::execOnOverlapExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapExit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	void UCamperStillnessTrackerComponent::StaticRegisterNativesUCamperStillnessTrackerComponent()
	{
		UClass* Class = UCamperStillnessTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterInteriorZone", &UCamperStillnessTrackerComponent::execEnterInteriorZone },
			{ "ExitInteriorZone", &UCamperStillnessTrackerComponent::execExitInteriorZone },
			{ "OnLevelReadyToPlay", &UCamperStillnessTrackerComponent::execOnLevelReadyToPlay },
			{ "OnOverlapEnter", &UCamperStillnessTrackerComponent::execOnOverlapEnter },
			{ "OnOverlapExit", &UCamperStillnessTrackerComponent::execOnOverlapExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics
	{
		struct CamperStillnessTrackerComponent_eventEnterInteriorZone_Parms
		{
			UExposerInteriorZoneComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventEnterInteriorZone_Parms, zone), Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperStillnessTrackerComponent, nullptr, "EnterInteriorZone", nullptr, nullptr, sizeof(CamperStillnessTrackerComponent_eventEnterInteriorZone_Parms), Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics
	{
		struct CamperStillnessTrackerComponent_eventExitInteriorZone_Parms
		{
			UExposerInteriorZoneComponent* zone;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::NewProp_zone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventExitInteriorZone_Parms, zone), Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::NewProp_zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperStillnessTrackerComponent, nullptr, "ExitInteriorZone", nullptr, nullptr, sizeof(CamperStillnessTrackerComponent_eventExitInteriorZone_Parms), Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperStillnessTrackerComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics
	{
		struct CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms), &Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperStillnessTrackerComponent, nullptr, "OnOverlapEnter", nullptr, nullptr, sizeof(CamperStillnessTrackerComponent_eventOnOverlapEnter_Parms), Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics
	{
		struct CamperStillnessTrackerComponent_eventOnOverlapExit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CamperStillnessTrackerComponent_eventOnOverlapExit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamperStillnessTrackerComponent, nullptr, "OnOverlapExit", nullptr, nullptr, sizeof(CamperStillnessTrackerComponent_eventOnOverlapExit_Parms), Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamperStillnessTrackerComponent_NoRegister()
	{
		return UCamperStillnessTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interiorZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interiorZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exposerInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__exposerInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exposerInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exposerInstanceToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__exposerInstanceToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposerDespawnTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExposerDespawnTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExposerDespawnTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposerSpawnTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExposerSpawnTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExposerSpawnTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudNoiseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudNoiseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChickenShitModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChickenShitModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStillnessTrackerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamperStillnessTrackerComponent_EnterInteriorZone, "EnterInteriorZone" }, // 2647115387
		{ &Z_Construct_UFunction_UCamperStillnessTrackerComponent_ExitInteriorZone, "ExitInteriorZone" }, // 2807254084
		{ &Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1661508320
		{ &Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapEnter, "OnOverlapEnter" }, // 422390270
		{ &Z_Construct_UFunction_UCamperStillnessTrackerComponent_OnOverlapExit, "OnOverlapExit" }, // 1476404481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperStillnessTrackerComponent.h" },
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__interiorZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__interiorZone = { "_interiorZone", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, _interiorZone), Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__interiorZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__interiorZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances = { "_exposerInstances", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, _exposerInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances_Inner = { "_exposerInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperExposerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstanceToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstanceToSpawn = { "_exposerInstanceToSpawn", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, _exposerInstanceToSpawn), Z_Construct_UClass_ACamperExposerInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstanceToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstanceToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes = { "ExposerDespawnTimes", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, ExposerDespawnTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes_Inner = { "ExposerDespawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes = { "ExposerSpawnTimes", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, ExposerSpawnTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes_Inner = { "ExposerSpawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_LoudNoiseTime_MetaData[] = {
		{ "Category", "CamperStillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_LoudNoiseTime = { "LoudNoiseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, LoudNoiseTime), METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_LoudNoiseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_LoudNoiseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ChickenShitModifier_MetaData[] = {
		{ "Category", "CamperStillnessTrackerComponent" },
		{ "ModuleRelativePath", "Public/CamperStillnessTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ChickenShitModifier = { "ChickenShitModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCamperStillnessTrackerComponent, ChickenShitModifier), METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ChickenShitModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ChickenShitModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__interiorZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp__exposerInstanceToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerDespawnTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ExposerSpawnTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_LoudNoiseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::NewProp_ChickenShitModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperStillnessTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::ClassParams = {
		&UCamperStillnessTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperStillnessTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperStillnessTrackerComponent, 619679274);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperStillnessTrackerComponent>()
	{
		return UCamperStillnessTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperStillnessTrackerComponent(Z_Construct_UClass_UCamperStillnessTrackerComponent, &UCamperStillnessTrackerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperStillnessTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperStillnessTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
