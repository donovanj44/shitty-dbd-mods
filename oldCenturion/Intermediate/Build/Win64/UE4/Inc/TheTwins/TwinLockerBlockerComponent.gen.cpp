// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinLockerBlockerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinLockerBlockerComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinLockerBlockerComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinLockerBlockerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execIsTwinAttachedToLocker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTwinAttachedToLocker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execOnPushedMontageEnded)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montageDescriptor);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPushedMontageEnded(Z_Param_montageDescriptor,Z_Param_interrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execOnPushedMontageStarted)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montageDescriptor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPushedMontageStarted(Z_Param_montageDescriptor,Z_Param_rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execOnPushedMontageStopped)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montageDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPushedMontageStopped(Z_Param_montageDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinLockerBlockerComponent::execOnSurvivorInLockerChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_oldSurvivor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_newSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorInLockerChanged(Z_Param_oldSurvivor,Z_Param_newSurvivor);
		P_NATIVE_END;
	}
	static FName NAME_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged = FName(TEXT("Cosmetic_OnTwinOnLockerChanged"));
	void UTwinLockerBlockerComponent::Cosmetic_OnTwinOnLockerChanged(bool isOnLocker)
	{
		TwinLockerBlockerComponent_eventCosmetic_OnTwinOnLockerChanged_Parms Parms;
		Parms.isOnLocker=isOnLocker ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged),&Parms);
	}
	void UTwinLockerBlockerComponent::StaticRegisterNativesUTwinLockerBlockerComponent()
	{
		UClass* Class = UTwinLockerBlockerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnLevelReadyToPlay", &UTwinLockerBlockerComponent::execAuthority_OnLevelReadyToPlay },
			{ "IsTwinAttachedToLocker", &UTwinLockerBlockerComponent::execIsTwinAttachedToLocker },
			{ "OnPushedMontageEnded", &UTwinLockerBlockerComponent::execOnPushedMontageEnded },
			{ "OnPushedMontageStarted", &UTwinLockerBlockerComponent::execOnPushedMontageStarted },
			{ "OnPushedMontageStopped", &UTwinLockerBlockerComponent::execOnPushedMontageStopped },
			{ "OnSurvivorInLockerChanged", &UTwinLockerBlockerComponent::execOnSurvivorInLockerChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics
	{
		static void NewProp_isOnLocker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnLocker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::NewProp_isOnLocker_SetBit(void* Obj)
	{
		((TwinLockerBlockerComponent_eventCosmetic_OnTwinOnLockerChanged_Parms*)Obj)->isOnLocker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::NewProp_isOnLocker = { "isOnLocker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinLockerBlockerComponent_eventCosmetic_OnTwinOnLockerChanged_Parms), &Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::NewProp_isOnLocker_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::NewProp_isOnLocker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "Cosmetic_OnTwinOnLockerChanged", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventCosmetic_OnTwinOnLockerChanged_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics
	{
		struct TwinLockerBlockerComponent_eventIsTwinAttachedToLocker_Parms
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
	void Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinLockerBlockerComponent_eventIsTwinAttachedToLocker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinLockerBlockerComponent_eventIsTwinAttachedToLocker_Parms), &Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "IsTwinAttachedToLocker", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventIsTwinAttachedToLocker_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics
	{
		struct TwinLockerBlockerComponent_eventOnPushedMontageEnded_Parms
		{
			FAnimationMontageDescriptor montageDescriptor;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((TwinLockerBlockerComponent_eventOnPushedMontageEnded_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinLockerBlockerComponent_eventOnPushedMontageEnded_Parms), &Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_montageDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_montageDescriptor = { "montageDescriptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnPushedMontageEnded_Parms, montageDescriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_montageDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_montageDescriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::NewProp_montageDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "OnPushedMontageEnded", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventOnPushedMontageEnded_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics
	{
		struct TwinLockerBlockerComponent_eventOnPushedMontageStarted_Parms
		{
			FAnimationMontageDescriptor montageDescriptor;
			float rate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnPushedMontageStarted_Parms, rate), METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_montageDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_montageDescriptor = { "montageDescriptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnPushedMontageStarted_Parms, montageDescriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_montageDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_montageDescriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::NewProp_montageDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "OnPushedMontageStarted", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventOnPushedMontageStarted_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics
	{
		struct TwinLockerBlockerComponent_eventOnPushedMontageStopped_Parms
		{
			FAnimationMontageDescriptor montageDescriptor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageDescriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::NewProp_montageDescriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::NewProp_montageDescriptor = { "montageDescriptor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnPushedMontageStopped_Parms, montageDescriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::NewProp_montageDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::NewProp_montageDescriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::NewProp_montageDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "OnPushedMontageStopped", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventOnPushedMontageStopped_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics
	{
		struct TwinLockerBlockerComponent_eventOnSurvivorInLockerChanged_Parms
		{
			ADBDPlayer* oldSurvivor;
			ADBDPlayer* newSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::NewProp_newSurvivor = { "newSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnSurvivorInLockerChanged_Parms, newSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::NewProp_oldSurvivor = { "oldSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinLockerBlockerComponent_eventOnSurvivorInLockerChanged_Parms, oldSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::NewProp_newSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::NewProp_oldSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinLockerBlockerComponent, nullptr, "OnSurvivorInLockerChanged", nullptr, nullptr, sizeof(TwinLockerBlockerComponent_eventOnSurvivorInLockerChanged_Parms), Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinLockerBlockerComponent_NoRegister()
	{
		return UTwinLockerBlockerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinLockerBlockerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionsToDisableOnLockerClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactionsToDisableOnLockerClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__interactionsToDisableOnLockerClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactionClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__interactionClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 3757518285
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged, "Cosmetic_OnTwinOnLockerChanged" }, // 1519273861
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_IsTwinAttachedToLocker, "IsTwinAttachedToLocker" }, // 1289747533
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageEnded, "OnPushedMontageEnded" }, // 1335630331
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStarted, "OnPushedMontageStarted" }, // 1389798543
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_OnPushedMontageStopped, "OnPushedMontageStopped" }, // 779479568
		{ &Z_Construct_UFunction_UTwinLockerBlockerComponent_OnSurvivorInLockerChanged, "OnSurvivorInLockerChanged" }, // 1490002819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinLockerBlockerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses_MetaData[] = {
		{ "Category", "TwinLockerBlockerComponent" },
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses = { "_interactionsToDisableOnLockerClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinLockerBlockerComponent, _interactionsToDisableOnLockerClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses_Inner = { "_interactionsToDisableOnLockerClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses_MetaData[] = {
		{ "Category", "TwinLockerBlockerComponent" },
		{ "ModuleRelativePath", "Public/TwinLockerBlockerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses = { "_interactionClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinLockerBlockerComponent, _interactionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses_Inner = { "_interactionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionsToDisableOnLockerClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::NewProp__interactionClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinLockerBlockerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::ClassParams = {
		&UTwinLockerBlockerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinLockerBlockerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinLockerBlockerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinLockerBlockerComponent, 3895141009);
	template<> THETWINS_API UClass* StaticClass<UTwinLockerBlockerComponent>()
	{
		return UTwinLockerBlockerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinLockerBlockerComponent(Z_Construct_UClass_UTwinLockerBlockerComponent, &UTwinLockerBlockerComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinLockerBlockerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinLockerBlockerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
