// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorOutlineUpdateStrategy::execGetEffectsProtectingFromKillerAuraReading)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_subject);
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayModifierContainer*>*)Z_Param__Result=USurvivorOutlineUpdateStrategy::GetEffectsProtectingFromKillerAuraReading(Z_Param_subject,Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorOutlineUpdateStrategy::execIsActivelyHidingAuraFromKiller)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_subject);
		P_GET_OBJECT(ASlasherPlayer,Z_Param_witness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USurvivorOutlineUpdateStrategy::IsActivelyHidingAuraFromKiller(Z_Param_subject,Z_Param_witness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorOutlineUpdateStrategy::execIsBlockingAuraReadingFromKiller)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlockingAuraReadingFromKiller(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorOutlineUpdateStrategy::execSetTrappedIconActive)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrappedIconActive(Z_Param_value);
		P_NATIVE_END;
	}
	void USurvivorOutlineUpdateStrategy::StaticRegisterNativesUSurvivorOutlineUpdateStrategy()
	{
		UClass* Class = USurvivorOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectsProtectingFromKillerAuraReading", &USurvivorOutlineUpdateStrategy::execGetEffectsProtectingFromKillerAuraReading },
			{ "IsActivelyHidingAuraFromKiller", &USurvivorOutlineUpdateStrategy::execIsActivelyHidingAuraFromKiller },
			{ "IsBlockingAuraReadingFromKiller", &USurvivorOutlineUpdateStrategy::execIsBlockingAuraReadingFromKiller },
			{ "SetTrappedIconActive", &USurvivorOutlineUpdateStrategy::execSetTrappedIconActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics
	{
		struct SurvivorOutlineUpdateStrategy_eventGetEffectsProtectingFromKillerAuraReading_Parms
		{
			const ACamperPlayer* subject;
			const ASlasherPlayer* killer;
			TArray<UGameplayModifierContainer*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventGetEffectsProtectingFromKillerAuraReading_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_killer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventGetEffectsProtectingFromKillerAuraReading_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_killer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_subject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventGetEffectsProtectingFromKillerAuraReading_Parms, subject), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_subject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_killer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::NewProp_subject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorOutlineUpdateStrategy, nullptr, "GetEffectsProtectingFromKillerAuraReading", nullptr, nullptr, sizeof(SurvivorOutlineUpdateStrategy_eventGetEffectsProtectingFromKillerAuraReading_Parms), Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics
	{
		struct SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms
		{
			const ACamperPlayer* subject;
			const ASlasherPlayer* witness;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_witness_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_witness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms), &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_witness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_witness = { "witness", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms, witness), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_witness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_witness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_subject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms, subject), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_subject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_witness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::NewProp_subject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorOutlineUpdateStrategy, nullptr, "IsActivelyHidingAuraFromKiller", nullptr, nullptr, sizeof(SurvivorOutlineUpdateStrategy_eventIsActivelyHidingAuraFromKiller_Parms), Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics
	{
		struct SurvivorOutlineUpdateStrategy_eventIsBlockingAuraReadingFromKiller_Parms
		{
			const ASlasherPlayer* killer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorOutlineUpdateStrategy_eventIsBlockingAuraReadingFromKiller_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorOutlineUpdateStrategy_eventIsBlockingAuraReadingFromKiller_Parms), &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_killer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorOutlineUpdateStrategy_eventIsBlockingAuraReadingFromKiller_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_killer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorOutlineUpdateStrategy, nullptr, "IsBlockingAuraReadingFromKiller", nullptr, nullptr, sizeof(SurvivorOutlineUpdateStrategy_eventIsBlockingAuraReadingFromKiller_Parms), Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics
	{
		struct SurvivorOutlineUpdateStrategy_eventSetTrappedIconActive_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SurvivorOutlineUpdateStrategy_eventSetTrappedIconActive_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorOutlineUpdateStrategy_eventSetTrappedIconActive_Parms), &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorOutlineUpdateStrategy, nullptr, "SetTrappedIconActive", nullptr, nullptr, sizeof(SurvivorOutlineUpdateStrategy_eventSetTrappedIconActive_Parms), Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorOutlineUpdateStrategy_NoRegister()
	{
		return USurvivorOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trappedIconActive_MetaData[];
#endif
		static void NewProp__trappedIconActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__trappedIconActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonRevealedGradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nonRevealedGradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedGradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedGradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__colorForKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__colorForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__saviourColorForSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__saviourColorForSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fullRecoveryDyingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fullRecoveryDyingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__noRecoveryDyingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__noRecoveryDyingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inDangerColorForSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inDangerColorForSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_GetEffectsProtectingFromKillerAuraReading, "GetEffectsProtectingFromKillerAuraReading" }, // 1986250211
		{ &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller, "IsActivelyHidingAuraFromKiller" }, // 1373250096
		{ &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_IsBlockingAuraReadingFromKiller, "IsBlockingAuraReadingFromKiller" }, // 645716963
		{ &Z_Construct_UFunction_USurvivorOutlineUpdateStrategy_SetTrappedIconActive, "SetTrappedIconActive" }, // 1122598532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive_SetBit(void* Obj)
	{
		((USurvivorOutlineUpdateStrategy*)Obj)->_trappedIconActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive = { "_trappedIconActive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorOutlineUpdateStrategy), &Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__nonRevealedGradient_MetaData[] = {
		{ "Category", "SurvivorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__nonRevealedGradient = { "_nonRevealedGradient", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _nonRevealedGradient), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__nonRevealedGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__nonRevealedGradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__revealedGradient_MetaData[] = {
		{ "Category", "SurvivorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__revealedGradient = { "_revealedGradient", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _revealedGradient), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__revealedGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__revealedGradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__colorForKiller_MetaData[] = {
		{ "Category", "SurvivorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__colorForKiller = { "_colorForKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _colorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__colorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__colorForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__saviourColorForSurvivor_MetaData[] = {
		{ "Category", "SurvivorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__saviourColorForSurvivor = { "_saviourColorForSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _saviourColorForSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__saviourColorForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__saviourColorForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__fullRecoveryDyingColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__fullRecoveryDyingColor = { "_fullRecoveryDyingColor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _fullRecoveryDyingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__fullRecoveryDyingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__fullRecoveryDyingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__noRecoveryDyingColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__noRecoveryDyingColor = { "_noRecoveryDyingColor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _noRecoveryDyingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__noRecoveryDyingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__noRecoveryDyingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__inDangerColorForSurvivor_MetaData[] = {
		{ "Category", "SurvivorOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/SurvivorOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__inDangerColorForSurvivor = { "_inDangerColorForSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorOutlineUpdateStrategy, _inDangerColorForSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__inDangerColorForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__inDangerColorForSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__trappedIconActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__nonRevealedGradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__revealedGradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__colorForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__saviourColorForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__fullRecoveryDyingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__noRecoveryDyingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::NewProp__inDangerColorForSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::ClassParams = {
		&USurvivorOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorOutlineUpdateStrategy, 3885546897);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurvivorOutlineUpdateStrategy>()
	{
		return USurvivorOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorOutlineUpdateStrategy(Z_Construct_UClass_USurvivorOutlineUpdateStrategy, &USurvivorOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurvivorOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
