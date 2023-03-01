// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NatAudioAmbienceBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNatAudioAmbienceBox() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNatAudioAmbienceBox_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNatAudioAmbienceBox();
	DBDAUDIO_API UClass* Z_Construct_UClass_UAmbienceBoxComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNatAudioAmbienceBox::execOnBeginOverlapAudioAmbience)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapAudioAmbience(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNatAudioAmbienceBox::execOnEndOverlapAudioAmbience)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapAudioAmbience(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	void UNatAudioAmbienceBox::StaticRegisterNativesUNatAudioAmbienceBox()
	{
		UClass* Class = UNatAudioAmbienceBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapAudioAmbience", &UNatAudioAmbienceBox::execOnBeginOverlapAudioAmbience },
			{ "OnEndOverlapAudioAmbience", &UNatAudioAmbienceBox::execOnEndOverlapAudioAmbience },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics
	{
		struct NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms
		{
			UPrimitiveComponent* overlappedComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms), &Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NatAudioAmbienceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNatAudioAmbienceBox, nullptr, "OnBeginOverlapAudioAmbience", nullptr, nullptr, sizeof(NatAudioAmbienceBox_eventOnBeginOverlapAudioAmbience_Parms), Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics
	{
		struct NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms
		{
			UPrimitiveComponent* overlappedComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NatAudioAmbienceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNatAudioAmbienceBox, nullptr, "OnEndOverlapAudioAmbience", nullptr, nullptr, sizeof(NatAudioAmbienceBox_eventOnEndOverlapAudioAmbience_Parms), Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNatAudioAmbienceBox_NoRegister()
	{
		return UNatAudioAmbienceBox::StaticClass();
	}
	struct Z_Construct_UClass_UNatAudioAmbienceBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onEndOverlapAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onEndOverlapAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onBeginOverlapAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onBeginOverlapAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNatAudioAmbienceBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAmbienceBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNatAudioAmbienceBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNatAudioAmbienceBox_OnBeginOverlapAudioAmbience, "OnBeginOverlapAudioAmbience" }, // 2501703418
		{ &Z_Construct_UFunction_UNatAudioAmbienceBox_OnEndOverlapAudioAmbience, "OnEndOverlapAudioAmbience" }, // 2363629838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNatAudioAmbienceBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "NatAudioAmbienceBox.h" },
		{ "ModuleRelativePath", "Public/NatAudioAmbienceBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onEndOverlapAudioEvent_MetaData[] = {
		{ "Category", "NatAudioAmbienceBox" },
		{ "ModuleRelativePath", "Public/NatAudioAmbienceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onEndOverlapAudioEvent = { "_onEndOverlapAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNatAudioAmbienceBox, _onEndOverlapAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onEndOverlapAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onEndOverlapAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onBeginOverlapAudioEvent_MetaData[] = {
		{ "Category", "NatAudioAmbienceBox" },
		{ "ModuleRelativePath", "Public/NatAudioAmbienceBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onBeginOverlapAudioEvent = { "_onBeginOverlapAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNatAudioAmbienceBox, _onBeginOverlapAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onBeginOverlapAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onBeginOverlapAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNatAudioAmbienceBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onEndOverlapAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNatAudioAmbienceBox_Statics::NewProp__onBeginOverlapAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNatAudioAmbienceBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNatAudioAmbienceBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNatAudioAmbienceBox_Statics::ClassParams = {
		&UNatAudioAmbienceBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNatAudioAmbienceBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNatAudioAmbienceBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNatAudioAmbienceBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNatAudioAmbienceBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNatAudioAmbienceBox, 837177323);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNatAudioAmbienceBox>()
	{
		return UNatAudioAmbienceBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNatAudioAmbienceBox(Z_Construct_UClass_UNatAudioAmbienceBox, &UNatAudioAmbienceBox::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNatAudioAmbienceBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNatAudioAmbienceBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
