// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TerrorRadiusEmitterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrorRadiusEmitterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execGetGeneratesChaseMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGeneratesChaseMusic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execGetImitatesAudioOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImitatesAudioOnly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execGetIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execGetSimulatedFixedDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulatedFixedDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execIsInTerrorRadius)
	{
		P_GET_OBJECT(UTerrorRadiusReceiverComponent,Z_Param_receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTerrorRadius(Z_Param_receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execRemoveEmitterFromList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEmitterFromList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execSetGeneratesChaseMusic)
	{
		P_GET_UBOOL(Z_Param_generatesChaseMusic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGeneratesChaseMusic(Z_Param_generatesChaseMusic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execSetImitatesAudioOnly)
	{
		P_GET_UBOOL(Z_Param_imitatesAudioOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImitatesAudioOnly(Z_Param_imitatesAudioOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execSetIsActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsActive(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execSetSimulatedFixedDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimulatedFixedDistance(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerrorRadiusEmitterComponent::execSetTerrorRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTerrorRadius(Z_Param_radius);
		P_NATIVE_END;
	}
	void UTerrorRadiusEmitterComponent::StaticRegisterNativesUTerrorRadiusEmitterComponent()
	{
		UClass* Class = UTerrorRadiusEmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeneratesChaseMusic", &UTerrorRadiusEmitterComponent::execGetGeneratesChaseMusic },
			{ "GetImitatesAudioOnly", &UTerrorRadiusEmitterComponent::execGetImitatesAudioOnly },
			{ "GetIsActive", &UTerrorRadiusEmitterComponent::execGetIsActive },
			{ "GetRadius", &UTerrorRadiusEmitterComponent::execGetRadius },
			{ "GetSimulatedFixedDistance", &UTerrorRadiusEmitterComponent::execGetSimulatedFixedDistance },
			{ "IsInTerrorRadius", &UTerrorRadiusEmitterComponent::execIsInTerrorRadius },
			{ "RemoveEmitterFromList", &UTerrorRadiusEmitterComponent::execRemoveEmitterFromList },
			{ "SetGeneratesChaseMusic", &UTerrorRadiusEmitterComponent::execSetGeneratesChaseMusic },
			{ "SetImitatesAudioOnly", &UTerrorRadiusEmitterComponent::execSetImitatesAudioOnly },
			{ "SetIsActive", &UTerrorRadiusEmitterComponent::execSetIsActive },
			{ "SetSimulatedFixedDistance", &UTerrorRadiusEmitterComponent::execSetSimulatedFixedDistance },
			{ "SetTerrorRadius", &UTerrorRadiusEmitterComponent::execSetTerrorRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics
	{
		struct TerrorRadiusEmitterComponent_eventGetGeneratesChaseMusic_Parms
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
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventGetGeneratesChaseMusic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventGetGeneratesChaseMusic_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "GetGeneratesChaseMusic", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventGetGeneratesChaseMusic_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics
	{
		struct TerrorRadiusEmitterComponent_eventGetImitatesAudioOnly_Parms
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
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventGetImitatesAudioOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventGetImitatesAudioOnly_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "GetImitatesAudioOnly", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventGetImitatesAudioOnly_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics
	{
		struct TerrorRadiusEmitterComponent_eventGetIsActive_Parms
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
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventGetIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventGetIsActive_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "GetIsActive", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventGetIsActive_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics
	{
		struct TerrorRadiusEmitterComponent_eventGetRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusEmitterComponent_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "GetRadius", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventGetRadius_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics
	{
		struct TerrorRadiusEmitterComponent_eventGetSimulatedFixedDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusEmitterComponent_eventGetSimulatedFixedDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "GetSimulatedFixedDistance", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventGetSimulatedFixedDistance_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics
	{
		struct TerrorRadiusEmitterComponent_eventIsInTerrorRadius_Parms
		{
			const UTerrorRadiusReceiverComponent* receiver;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_receiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_receiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventIsInTerrorRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventIsInTerrorRadius_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_receiver_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusEmitterComponent_eventIsInTerrorRadius_Parms, receiver), Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_receiver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::NewProp_receiver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "IsInTerrorRadius", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventIsInTerrorRadius_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "RemoveEmitterFromList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics
	{
		struct TerrorRadiusEmitterComponent_eventSetGeneratesChaseMusic_Parms
		{
			bool generatesChaseMusic;
		};
		static void NewProp_generatesChaseMusic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_generatesChaseMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::NewProp_generatesChaseMusic_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventSetGeneratesChaseMusic_Parms*)Obj)->generatesChaseMusic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::NewProp_generatesChaseMusic = { "generatesChaseMusic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventSetGeneratesChaseMusic_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::NewProp_generatesChaseMusic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::NewProp_generatesChaseMusic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "SetGeneratesChaseMusic", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventSetGeneratesChaseMusic_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics
	{
		struct TerrorRadiusEmitterComponent_eventSetImitatesAudioOnly_Parms
		{
			bool imitatesAudioOnly;
		};
		static void NewProp_imitatesAudioOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_imitatesAudioOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::NewProp_imitatesAudioOnly_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventSetImitatesAudioOnly_Parms*)Obj)->imitatesAudioOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::NewProp_imitatesAudioOnly = { "imitatesAudioOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventSetImitatesAudioOnly_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::NewProp_imitatesAudioOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::NewProp_imitatesAudioOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "SetImitatesAudioOnly", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventSetImitatesAudioOnly_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics
	{
		struct TerrorRadiusEmitterComponent_eventSetIsActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((TerrorRadiusEmitterComponent_eventSetIsActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TerrorRadiusEmitterComponent_eventSetIsActive_Parms), &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "SetIsActive", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventSetIsActive_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics
	{
		struct TerrorRadiusEmitterComponent_eventSetSimulatedFixedDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusEmitterComponent_eventSetSimulatedFixedDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "SetSimulatedFixedDistance", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventSetSimulatedFixedDistance_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics
	{
		struct TerrorRadiusEmitterComponent_eventSetTerrorRadius_Parms
		{
			float radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusEmitterComponent_eventSetTerrorRadius_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::NewProp_radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent, nullptr, "SetTerrorRadius", nullptr, nullptr, sizeof(TerrorRadiusEmitterComponent_eventSetTerrorRadius_Parms), Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister()
	{
		return UTerrorRadiusEmitterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__receiversPhysicallyInRadiusRangeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__receiversPhysicallyInRadiusRangeMap;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__receiversPhysicallyInRadiusRangeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__receiversPhysicallyInRadiusRangeMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__receiversInTerrorRadiusMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__receiversInTerrorRadiusMap;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__receiversInTerrorRadiusMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__receiversInTerrorRadiusMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFakeTerrorRadius_MetaData[];
#endif
		static void NewProp__isFakeTerrorRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFakeTerrorRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__active_MetaData[];
#endif
		static void NewProp__active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatesChaseMusic_MetaData[];
#endif
		static void NewProp__generatesChaseMusic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__generatesChaseMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__imitatesAudioOnly_MetaData[];
#endif
		static void NewProp__imitatesAudioOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__imitatesAudioOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__simulatedFixedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__simulatedFixedDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetGeneratesChaseMusic, "GetGeneratesChaseMusic" }, // 1489348696
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetImitatesAudioOnly, "GetImitatesAudioOnly" }, // 2509871173
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetIsActive, "GetIsActive" }, // 3064016267
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetRadius, "GetRadius" }, // 2200129522
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_GetSimulatedFixedDistance, "GetSimulatedFixedDistance" }, // 319051036
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_IsInTerrorRadius, "IsInTerrorRadius" }, // 2247280194
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_RemoveEmitterFromList, "RemoveEmitterFromList" }, // 1143175357
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetGeneratesChaseMusic, "SetGeneratesChaseMusic" }, // 3402131124
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetImitatesAudioOnly, "SetImitatesAudioOnly" }, // 629971893
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetIsActive, "SetIsActive" }, // 725966942
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetSimulatedFixedDistance, "SetSimulatedFixedDistance" }, // 3094035573
		{ &Z_Construct_UFunction_UTerrorRadiusEmitterComponent_SetTerrorRadius, "SetTerrorRadius" }, // 4137857206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TerrorRadiusEmitterComponent.h" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap = { "_receiversPhysicallyInRadiusRangeMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _receiversPhysicallyInRadiusRangeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_Key_KeyProp = { "_receiversPhysicallyInRadiusRangeMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_ValueProp = { "_receiversPhysicallyInRadiusRangeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap = { "_receiversInTerrorRadiusMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _receiversInTerrorRadiusMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_Key_KeyProp = { "_receiversInTerrorRadiusMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTerrorRadiusReceiverComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_ValueProp = { "_receiversInTerrorRadiusMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__radius_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _radius), METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius_SetBit(void* Obj)
	{
		((UTerrorRadiusEmitterComponent*)Obj)->_isFakeTerrorRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius = { "_isFakeTerrorRadius", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTerrorRadiusEmitterComponent), &Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active_SetBit(void* Obj)
	{
		((UTerrorRadiusEmitterComponent*)Obj)->_active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active = { "_active", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTerrorRadiusEmitterComponent), &Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic_SetBit(void* Obj)
	{
		((UTerrorRadiusEmitterComponent*)Obj)->_generatesChaseMusic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic = { "_generatesChaseMusic", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTerrorRadiusEmitterComponent), &Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly_SetBit(void* Obj)
	{
		((UTerrorRadiusEmitterComponent*)Obj)->_imitatesAudioOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly = { "_imitatesAudioOnly", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTerrorRadiusEmitterComponent), &Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__simulatedFixedDistance_MetaData[] = {
		{ "Category", "TerrorRadiusEmitterComponent" },
		{ "ModuleRelativePath", "Public/TerrorRadiusEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__simulatedFixedDistance = { "_simulatedFixedDistance", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _simulatedFixedDistance), METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__simulatedFixedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__simulatedFixedDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversPhysicallyInRadiusRangeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__receiversInTerrorRadiusMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__isFakeTerrorRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__generatesChaseMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__imitatesAudioOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::NewProp__simulatedFixedDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrorRadiusEmitterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::ClassParams = {
		&UTerrorRadiusEmitterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTerrorRadiusEmitterComponent, 2153105241);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTerrorRadiusEmitterComponent>()
	{
		return UTerrorRadiusEmitterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTerrorRadiusEmitterComponent(Z_Construct_UClass_UTerrorRadiusEmitterComponent, &UTerrorRadiusEmitterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTerrorRadiusEmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerrorRadiusEmitterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
