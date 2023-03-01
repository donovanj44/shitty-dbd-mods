// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26IsLastCrowRemovalReasonDueToInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26IsLastCrowRemovalReasonDueToInteraction() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_AK26AttachedCrow_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK26_API UEnum* Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK26IsLastCrowRemovalReasonDueToInteraction::execAuthority_OnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsLastCrowRemovalReasonDueToInteraction::execAuthority_OnSurvivorStatusIndicatorSet)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_OBJECT(AK26AttachedCrow,Z_Param_attachedCrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorStatusIndicatorSet(Z_Param_survivor,Z_Param_attachedCrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsLastCrowRemovalReasonDueToInteraction::execOnLastRemovalReasonSet)
	{
		P_GET_ENUM(FK26AttachedCrowRemovalReason,Z_Param_lastCrowRemovalReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason(Z_Param_lastCrowRemovalReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsLastCrowRemovalReasonDueToInteraction::execOnRep_OwningAttachedCrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwningAttachedCrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsLastCrowRemovalReasonDueToInteraction::execOnSurvivorStatusIndicatorSet)
	{
		P_GET_OBJECT(AK26AttachedCrow,Z_Param_attachedCrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorStatusIndicatorSet(Z_Param_attachedCrow);
		P_NATIVE_END;
	}
	void UK26IsLastCrowRemovalReasonDueToInteraction::StaticRegisterNativesUK26IsLastCrowRemovalReasonDueToInteraction()
	{
		UClass* Class = UK26IsLastCrowRemovalReasonDueToInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnKillerSet", &UK26IsLastCrowRemovalReasonDueToInteraction::execAuthority_OnKillerSet },
			{ "Authority_OnSurvivorStatusIndicatorSet", &UK26IsLastCrowRemovalReasonDueToInteraction::execAuthority_OnSurvivorStatusIndicatorSet },
			{ "OnLastRemovalReasonSet", &UK26IsLastCrowRemovalReasonDueToInteraction::execOnLastRemovalReasonSet },
			{ "OnRep_OwningAttachedCrow", &UK26IsLastCrowRemovalReasonDueToInteraction::execOnRep_OwningAttachedCrow },
			{ "OnSurvivorStatusIndicatorSet", &UK26IsLastCrowRemovalReasonDueToInteraction::execOnSurvivorStatusIndicatorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics
	{
		struct K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, nullptr, "Authority_OnKillerSet", nullptr, nullptr, sizeof(K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnKillerSet_Parms), Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics
	{
		struct K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnSurvivorStatusIndicatorSet_Parms
		{
			const ACamperPlayer* survivor;
			AK26AttachedCrow* attachedCrow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachedCrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow = { "attachedCrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnSurvivorStatusIndicatorSet_Parms, attachedCrow), Z_Construct_UClass_AK26AttachedCrow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnSurvivorStatusIndicatorSet_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, nullptr, "Authority_OnSurvivorStatusIndicatorSet", nullptr, nullptr, sizeof(K26IsLastCrowRemovalReasonDueToInteraction_eventAuthority_OnSurvivorStatusIndicatorSet_Parms), Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics
	{
		struct K26IsLastCrowRemovalReasonDueToInteraction_eventOnLastRemovalReasonSet_Parms
		{
			FK26AttachedCrowRemovalReason lastCrowRemovalReason;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lastCrowRemovalReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lastCrowRemovalReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::NewProp_lastCrowRemovalReason = { "lastCrowRemovalReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsLastCrowRemovalReasonDueToInteraction_eventOnLastRemovalReasonSet_Parms, lastCrowRemovalReason), Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::NewProp_lastCrowRemovalReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::NewProp_lastCrowRemovalReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::NewProp_lastCrowRemovalReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, nullptr, "OnLastRemovalReasonSet", nullptr, nullptr, sizeof(K26IsLastCrowRemovalReasonDueToInteraction_eventOnLastRemovalReasonSet_Parms), Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, nullptr, "OnRep_OwningAttachedCrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics
	{
		struct K26IsLastCrowRemovalReasonDueToInteraction_eventOnSurvivorStatusIndicatorSet_Parms
		{
			AK26AttachedCrow* attachedCrow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachedCrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow = { "attachedCrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsLastCrowRemovalReasonDueToInteraction_eventOnSurvivorStatusIndicatorSet_Parms, attachedCrow), Z_Construct_UClass_AK26AttachedCrow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::NewProp_attachedCrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, nullptr, "OnSurvivorStatusIndicatorSet", nullptr, nullptr, sizeof(K26IsLastCrowRemovalReasonDueToInteraction_eventOnSurvivorStatusIndicatorSet_Parms), Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_NoRegister()
	{
		return UK26IsLastCrowRemovalReasonDueToInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusHandlerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusHandlerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningAttachedCrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningAttachedCrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet, "Authority_OnKillerSet" }, // 2444566066
		{ &Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet, "Authority_OnSurvivorStatusIndicatorSet" }, // 3243992506
		{ &Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet, "OnLastRemovalReasonSet" }, // 186710414
		{ &Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow, "OnRep_OwningAttachedCrow" }, // 1848805019
		{ &Z_Construct_UFunction_UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet, "OnSurvivorStatusIndicatorSet" }, // 2963148704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26IsLastCrowRemovalReasonDueToInteraction.h" },
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__statusHandlerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__statusHandlerComponent = { "_statusHandlerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26IsLastCrowRemovalReasonDueToInteraction, _statusHandlerComponent), Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__statusHandlerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__statusHandlerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__owningAttachedCrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26IsLastCrowRemovalReasonDueToInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__owningAttachedCrow = { "_owningAttachedCrow", "OnRep_OwningAttachedCrow", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26IsLastCrowRemovalReasonDueToInteraction, _owningAttachedCrow), Z_Construct_UClass_AK26AttachedCrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__owningAttachedCrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__owningAttachedCrow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__statusHandlerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::NewProp__owningAttachedCrow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26IsLastCrowRemovalReasonDueToInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::ClassParams = {
		&UK26IsLastCrowRemovalReasonDueToInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26IsLastCrowRemovalReasonDueToInteraction, 104890837);
	template<> THEK26_API UClass* StaticClass<UK26IsLastCrowRemovalReasonDueToInteraction>()
	{
		return UK26IsLastCrowRemovalReasonDueToInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26IsLastCrowRemovalReasonDueToInteraction(Z_Construct_UClass_UK26IsLastCrowRemovalReasonDueToInteraction, &UK26IsLastCrowRemovalReasonDueToInteraction::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26IsLastCrowRemovalReasonDueToInteraction"), false, nullptr, nullptr, nullptr);

	void UK26IsLastCrowRemovalReasonDueToInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__owningAttachedCrow(TEXT("_owningAttachedCrow"));

		const bool bIsValid = true
			&& Name__owningAttachedCrow == ClassReps[(int32)ENetFields_Private::_owningAttachedCrow].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK26IsLastCrowRemovalReasonDueToInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26IsLastCrowRemovalReasonDueToInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
