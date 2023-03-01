// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Eruption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEruption() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UEruption_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UEruption();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEruption::execGetScreamRevealLocationDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScreamRevealLocationDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEruption::execMulticast_HighlightGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HighlightGenerator_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEruption::execMulticast_TriggerPerk)
	{
		P_GET_TARRAY(AGenerator*,Z_Param_explodingGenerators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerPerk_Implementation(Z_Param_explodingGenerators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEruption::execOnRep_IsPerkEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsPerkEnabled();
		P_NATIVE_END;
	}
	static FName NAME_UEruption_Cosmetic_OnGeneratorHighlightEnd = FName(TEXT("Cosmetic_OnGeneratorHighlightEnd"));
	void UEruption::Cosmetic_OnGeneratorHighlightEnd(AGenerator* highlightedGenerator)
	{
		Eruption_eventCosmetic_OnGeneratorHighlightEnd_Parms Parms;
		Parms.highlightedGenerator=highlightedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UEruption_Cosmetic_OnGeneratorHighlightEnd),&Parms);
	}
	static FName NAME_UEruption_Cosmetic_OnGeneratorHighlightStart = FName(TEXT("Cosmetic_OnGeneratorHighlightStart"));
	void UEruption::Cosmetic_OnGeneratorHighlightStart(AGenerator* highlightedGenerator)
	{
		Eruption_eventCosmetic_OnGeneratorHighlightStart_Parms Parms;
		Parms.highlightedGenerator=highlightedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UEruption_Cosmetic_OnGeneratorHighlightStart),&Parms);
	}
	static FName NAME_UEruption_MakeSurvivorScreamCosmetic = FName(TEXT("MakeSurvivorScreamCosmetic"));
	void UEruption::MakeSurvivorScreamCosmetic(const ADBDPlayer* screamingSurvivor)
	{
		Eruption_eventMakeSurvivorScreamCosmetic_Parms Parms;
		Parms.screamingSurvivor=screamingSurvivor;
		ProcessEvent(FindFunctionChecked(NAME_UEruption_MakeSurvivorScreamCosmetic),&Parms);
	}
	static FName NAME_UEruption_Multicast_HighlightGenerator = FName(TEXT("Multicast_HighlightGenerator"));
	void UEruption::Multicast_HighlightGenerator(AGenerator* generator)
	{
		Eruption_eventMulticast_HighlightGenerator_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UEruption_Multicast_HighlightGenerator),&Parms);
	}
	static FName NAME_UEruption_Multicast_TriggerPerk = FName(TEXT("Multicast_TriggerPerk"));
	void UEruption::Multicast_TriggerPerk(TArray<AGenerator*> const& explodingGenerators)
	{
		Eruption_eventMulticast_TriggerPerk_Parms Parms;
		Parms.explodingGenerators=explodingGenerators;
		ProcessEvent(FindFunctionChecked(NAME_UEruption_Multicast_TriggerPerk),&Parms);
	}
	void UEruption::StaticRegisterNativesUEruption()
	{
		UClass* Class = UEruption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScreamRevealLocationDuration", &UEruption::execGetScreamRevealLocationDuration },
			{ "Multicast_HighlightGenerator", &UEruption::execMulticast_HighlightGenerator },
			{ "Multicast_TriggerPerk", &UEruption::execMulticast_TriggerPerk },
			{ "OnRep_IsPerkEnabled", &UEruption::execOnRep_IsPerkEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_highlightedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::NewProp_highlightedGenerator = { "highlightedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventCosmetic_OnGeneratorHighlightEnd_Parms, highlightedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::NewProp_highlightedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "Cosmetic_OnGeneratorHighlightEnd", nullptr, nullptr, sizeof(Eruption_eventCosmetic_OnGeneratorHighlightEnd_Parms), Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_highlightedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::NewProp_highlightedGenerator = { "highlightedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventCosmetic_OnGeneratorHighlightStart_Parms, highlightedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::NewProp_highlightedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "Cosmetic_OnGeneratorHighlightStart", nullptr, nullptr, sizeof(Eruption_eventCosmetic_OnGeneratorHighlightStart_Parms), Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics
	{
		struct Eruption_eventGetScreamRevealLocationDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventGetScreamRevealLocationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "GetScreamRevealLocationDuration", nullptr, nullptr, sizeof(Eruption_eventGetScreamRevealLocationDuration_Parms), Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screamingSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screamingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::NewProp_screamingSurvivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::NewProp_screamingSurvivor = { "screamingSurvivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventMakeSurvivorScreamCosmetic_Parms, screamingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::NewProp_screamingSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::NewProp_screamingSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::NewProp_screamingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "MakeSurvivorScreamCosmetic", nullptr, nullptr, sizeof(Eruption_eventMakeSurvivorScreamCosmetic_Parms), Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventMulticast_HighlightGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "Multicast_HighlightGenerator", nullptr, nullptr, sizeof(Eruption_eventMulticast_HighlightGenerator_Parms), Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodingGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_explodingGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explodingGenerators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators = { "explodingGenerators", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Eruption_eventMulticast_TriggerPerk_Parms, explodingGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators_Inner = { "explodingGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::NewProp_explodingGenerators_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "Multicast_TriggerPerk", nullptr, nullptr, sizeof(Eruption_eventMulticast_TriggerPerk_Parms), Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_Multicast_TriggerPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_Multicast_TriggerPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEruption, nullptr, "OnRep_IsPerkEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEruption_NoRegister()
	{
		return UEruption::StaticClass();
	}
	struct Z_Construct_UClass_UEruption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screamRevealLocationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__screamRevealLocationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorImposedStatusEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorImposedStatusEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorRegressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorRegressPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerkEnabled_MetaData[];
#endif
		static void NewProp__isPerkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__server_highlightedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__server_highlightedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__server_highlightedGenerators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEruption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEruption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightEnd, "Cosmetic_OnGeneratorHighlightEnd" }, // 3470106274
		{ &Z_Construct_UFunction_UEruption_Cosmetic_OnGeneratorHighlightStart, "Cosmetic_OnGeneratorHighlightStart" }, // 88276903
		{ &Z_Construct_UFunction_UEruption_GetScreamRevealLocationDuration, "GetScreamRevealLocationDuration" }, // 454519320
		{ &Z_Construct_UFunction_UEruption_MakeSurvivorScreamCosmetic, "MakeSurvivorScreamCosmetic" }, // 2065607105
		{ &Z_Construct_UFunction_UEruption_Multicast_HighlightGenerator, "Multicast_HighlightGenerator" }, // 59814011
		{ &Z_Construct_UFunction_UEruption_Multicast_TriggerPerk, "Multicast_TriggerPerk" }, // 4236249028
		{ &Z_Construct_UFunction_UEruption_OnRep_IsPerkEnabled, "OnRep_IsPerkEnabled" }, // 990274880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Eruption.h" },
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__screamRevealLocationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Eruption" },
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__screamRevealLocationDuration = { "_screamRevealLocationDuration", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEruption, _screamRevealLocationDuration), METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__screamRevealLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__screamRevealLocationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__perkCooldownDuration_MetaData[] = {
		{ "Category", "Eruption" },
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__perkCooldownDuration = { "_perkCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkCooldownDuration, UEruption), STRUCT_OFFSET(UEruption, _perkCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__perkCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__perkCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__survivorImposedStatusEffectDuration_MetaData[] = {
		{ "Category", "Eruption" },
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__survivorImposedStatusEffectDuration = { "_survivorImposedStatusEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_survivorImposedStatusEffectDuration, UEruption), STRUCT_OFFSET(UEruption, _survivorImposedStatusEffectDuration), METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__survivorImposedStatusEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__survivorImposedStatusEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__generatorRegressPercentage_MetaData[] = {
		{ "Category", "Eruption" },
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__generatorRegressPercentage = { "_generatorRegressPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorRegressPercentage, UEruption), STRUCT_OFFSET(UEruption, _generatorRegressPercentage), METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__generatorRegressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__generatorRegressPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	void Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled_SetBit(void* Obj)
	{
		((UEruption*)Obj)->_isPerkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled = { "_isPerkEnabled", "OnRep_IsPerkEnabled", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEruption), &Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eruption.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators = { "_server_highlightedGenerators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEruption, _server_highlightedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators_Inner = { "_server_highlightedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEruption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__screamRevealLocationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__perkCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__survivorImposedStatusEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__generatorRegressPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__isPerkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEruption_Statics::NewProp__server_highlightedGenerators_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEruption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEruption>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEruption_Statics::ClassParams = {
		&UEruption::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEruption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEruption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEruption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEruption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEruption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEruption, 1527737436);
	template<> THEK24_API UClass* StaticClass<UEruption>()
	{
		return UEruption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEruption(Z_Construct_UClass_UEruption, &UEruption::StaticClass, TEXT("/Script/TheK24"), TEXT("UEruption"), false, nullptr, nullptr, nullptr);

	void UEruption::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isPerkEnabled(TEXT("_isPerkEnabled"));

		const bool bIsValid = true
			&& Name__isPerkEnabled == ClassReps[(int32)ENetFields_Private::_isPerkEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEruption"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEruption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
