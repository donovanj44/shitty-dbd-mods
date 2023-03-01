// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Deathbound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathbound() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathbound_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathbound();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDeathbound::execGetRevealLocationDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRevealLocationDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathbound::execOnRep_SurvivorsToReveal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SurvivorsToReveal();
		P_NATIVE_END;
	}
	static FName NAME_UDeathbound_MakeSurvivorScream = FName(TEXT("MakeSurvivorScream"));
	void UDeathbound::MakeSurvivorScream(const ACamperPlayer* survivor)
	{
		Deathbound_eventMakeSurvivorScream_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UDeathbound_MakeSurvivorScream),&Parms);
	}
	void UDeathbound::StaticRegisterNativesUDeathbound()
	{
		UClass* Class = UDeathbound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRevealLocationDuration", &UDeathbound::execGetRevealLocationDuration },
			{ "OnRep_SurvivorsToReveal", &UDeathbound::execOnRep_SurvivorsToReveal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics
	{
		struct Deathbound_eventGetRevealLocationDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Deathbound_eventGetRevealLocationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathbound, nullptr, "GetRevealLocationDuration", nullptr, nullptr, sizeof(Deathbound_eventGetRevealLocationDuration_Parms), Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Deathbound_eventMakeSurvivorScream_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathbound, nullptr, "MakeSurvivorScream", nullptr, nullptr, sizeof(Deathbound_eventMakeSurvivorScream_Parms), Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathbound_MakeSurvivorScream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathbound_MakeSurvivorScream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathbound, nullptr, "OnRep_SurvivorsToReveal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeathbound_NoRegister()
	{
		return UDeathbound::StaticClass();
	}
	struct Z_Construct_UClass_UDeathbound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsToReveal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorsToReveal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorsToReveal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obliviousStatusEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__obliviousStatusEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__obliviousStatusEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fromDyingState_MetaData[];
#endif
		static void NewProp__fromDyingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__fromDyingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unhook_MetaData[];
#endif
		static void NewProp__unhook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__unhook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealLocationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealLocationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rescueDistanceFromKillerToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rescueDistanceFromKillerToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceFromRescuedSurvivorForOblivious_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceFromRescuedSurvivorForOblivious;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathbound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeathbound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathbound_GetRevealLocationDuration, "GetRevealLocationDuration" }, // 3708349413
		{ &Z_Construct_UFunction_UDeathbound_MakeSurvivorScream, "MakeSurvivorScream" }, // 1056070410
		{ &Z_Construct_UFunction_UDeathbound_OnRep_SurvivorsToReveal, "OnRep_SurvivorsToReveal" }, // 1334309959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deathbound.h" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal = { "_survivorsToReveal", "OnRep_SurvivorsToReveal", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathbound, _survivorsToReveal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal_Inner = { "_survivorsToReveal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects = { "_obliviousStatusEffects", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathbound, _obliviousStatusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects_Inner = { "_obliviousStatusEffects", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState_MetaData[] = {
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	void Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState_SetBit(void* Obj)
	{
		((UDeathbound*)Obj)->_fromDyingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState = { "_fromDyingState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDeathbound), &Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook_MetaData[] = {
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	void Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook_SetBit(void* Obj)
	{
		((UDeathbound*)Obj)->_unhook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook = { "_unhook", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDeathbound), &Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__revealLocationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__revealLocationDuration = { "_revealLocationDuration", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathbound, _revealLocationDuration), METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__revealLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__revealLocationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__rescueDistanceFromKillerToActivate_MetaData[] = {
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__rescueDistanceFromKillerToActivate = { "_rescueDistanceFromKillerToActivate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathbound, _rescueDistanceFromKillerToActivate), METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__rescueDistanceFromKillerToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__rescueDistanceFromKillerToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__activationDuration_MetaData[] = {
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__activationDuration = { "_activationDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathbound, _activationDuration), METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__activationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__activationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathbound_Statics::NewProp__distanceFromRescuedSurvivorForOblivious_MetaData[] = {
		{ "Category", "Deathbound" },
		{ "ModuleRelativePath", "Public/Deathbound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeathbound_Statics::NewProp__distanceFromRescuedSurvivorForOblivious = { "_distanceFromRescuedSurvivorForOblivious", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_distanceFromRescuedSurvivorForOblivious, UDeathbound), STRUCT_OFFSET(UDeathbound, _distanceFromRescuedSurvivorForOblivious), METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::NewProp__distanceFromRescuedSurvivorForOblivious_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::NewProp__distanceFromRescuedSurvivorForOblivious_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathbound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__survivorsToReveal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__obliviousStatusEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__fromDyingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__unhook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__revealLocationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__rescueDistanceFromKillerToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__activationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathbound_Statics::NewProp__distanceFromRescuedSurvivorForOblivious,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathbound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathbound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathbound_Statics::ClassParams = {
		&UDeathbound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeathbound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathbound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathbound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathbound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathbound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathbound, 3350044818);
	template<> THEEXECUTIONER_API UClass* StaticClass<UDeathbound>()
	{
		return UDeathbound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathbound(Z_Construct_UClass_UDeathbound, &UDeathbound::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UDeathbound"), false, nullptr, nullptr, nullptr);

	void UDeathbound::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__survivorsToReveal(TEXT("_survivorsToReveal"));

		const bool bIsValid = true
			&& Name__survivorsToReveal == ClassReps[(int32)ENetFields_Private::_survivorsToReveal].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDeathbound"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathbound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
