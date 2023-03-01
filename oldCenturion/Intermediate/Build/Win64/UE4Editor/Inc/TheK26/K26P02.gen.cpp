// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26P02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26P02() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26P02_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26P02();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK26P02::execAuthority_OnSurvivorHookedOnScourgeHook)
	{
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorHookedOnScourgeHook(Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26P02::execGetScreamRevealLocationDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScreamRevealLocationDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26P02::execMulticast_TriggerPerk)
	{
		P_GET_OBJECT(AGenerator,Z_Param_explodingGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerPerk_Implementation(Z_Param_explodingGenerator);
		P_NATIVE_END;
	}
	static FName NAME_UK26P02_Cosmetic_MakeSurvivorScream = FName(TEXT("Cosmetic_MakeSurvivorScream"));
	void UK26P02::Cosmetic_MakeSurvivorScream(const ADBDPlayer* screamingSurvivor)
	{
		K26P02_eventCosmetic_MakeSurvivorScream_Parms Parms;
		Parms.screamingSurvivor=screamingSurvivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26P02_Cosmetic_MakeSurvivorScream),&Parms);
	}
	static FName NAME_UK26P02_Multicast_TriggerPerk = FName(TEXT("Multicast_TriggerPerk"));
	void UK26P02::Multicast_TriggerPerk(AGenerator* explodingGenerator)
	{
		K26P02_eventMulticast_TriggerPerk_Parms Parms;
		Parms.explodingGenerator=explodingGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UK26P02_Multicast_TriggerPerk),&Parms);
	}
	void UK26P02::StaticRegisterNativesUK26P02()
	{
		UClass* Class = UK26P02::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorHookedOnScourgeHook", &UK26P02::execAuthority_OnSurvivorHookedOnScourgeHook },
			{ "GetScreamRevealLocationDuration", &UK26P02::execGetScreamRevealLocationDuration },
			{ "Multicast_TriggerPerk", &UK26P02::execMulticast_TriggerPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics
	{
		struct K26P02_eventAuthority_OnSurvivorHookedOnScourgeHook_Parms
		{
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26P02_eventAuthority_OnSurvivorHookedOnScourgeHook_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::NewProp_gameEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P02, nullptr, "Authority_OnSurvivorHookedOnScourgeHook", nullptr, nullptr, sizeof(K26P02_eventAuthority_OnSurvivorHookedOnScourgeHook_Parms), Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::NewProp_screamingSurvivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::NewProp_screamingSurvivor = { "screamingSurvivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26P02_eventCosmetic_MakeSurvivorScream_Parms, screamingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::NewProp_screamingSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::NewProp_screamingSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::NewProp_screamingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P02, nullptr, "Cosmetic_MakeSurvivorScream", nullptr, nullptr, sizeof(K26P02_eventCosmetic_MakeSurvivorScream_Parms), Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics
	{
		struct K26P02_eventGetScreamRevealLocationDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26P02_eventGetScreamRevealLocationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P02, nullptr, "GetScreamRevealLocationDuration", nullptr, nullptr, sizeof(K26P02_eventGetScreamRevealLocationDuration_Parms), Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explodingGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::NewProp_explodingGenerator = { "explodingGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26P02_eventMulticast_TriggerPerk_Parms, explodingGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::NewProp_explodingGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26P02, nullptr, "Multicast_TriggerPerk", nullptr, nullptr, sizeof(K26P02_eventMulticast_TriggerPerk_Parms), Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26P02_NoRegister()
	{
		return UK26P02::StaticClass();
	}
	struct Z_Construct_UClass_UK26P02_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorRegressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorRegressPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26P02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26P02_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26P02_Authority_OnSurvivorHookedOnScourgeHook, "Authority_OnSurvivorHookedOnScourgeHook" }, // 526714474
		{ &Z_Construct_UFunction_UK26P02_Cosmetic_MakeSurvivorScream, "Cosmetic_MakeSurvivorScream" }, // 1952737454
		{ &Z_Construct_UFunction_UK26P02_GetScreamRevealLocationDuration, "GetScreamRevealLocationDuration" }, // 199734118
		{ &Z_Construct_UFunction_UK26P02_Multicast_TriggerPerk, "Multicast_TriggerPerk" }, // 2113495105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P02_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26P02.h" },
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P02_Statics::NewProp__screamRevealLocationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "K26P02" },
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26P02_Statics::NewProp__screamRevealLocationDuration = { "_screamRevealLocationDuration", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26P02, _screamRevealLocationDuration), METADATA_PARAMS(Z_Construct_UClass_UK26P02_Statics::NewProp__screamRevealLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P02_Statics::NewProp__screamRevealLocationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26P02_Statics::NewProp__generatorRegressPercentage_MetaData[] = {
		{ "Category", "K26P02" },
		{ "ModuleRelativePath", "Public/K26P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26P02_Statics::NewProp__generatorRegressPercentage = { "_generatorRegressPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorRegressPercentage, UK26P02), STRUCT_OFFSET(UK26P02, _generatorRegressPercentage), METADATA_PARAMS(Z_Construct_UClass_UK26P02_Statics::NewProp__generatorRegressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P02_Statics::NewProp__generatorRegressPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26P02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P02_Statics::NewProp__screamRevealLocationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26P02_Statics::NewProp__generatorRegressPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26P02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26P02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26P02_Statics::ClassParams = {
		&UK26P02::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26P02_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26P02_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26P02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26P02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26P02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26P02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26P02, 3213134754);
	template<> THEK26_API UClass* StaticClass<UK26P02>()
	{
		return UK26P02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26P02(Z_Construct_UClass_UK26P02, &UK26P02::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26P02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26P02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
