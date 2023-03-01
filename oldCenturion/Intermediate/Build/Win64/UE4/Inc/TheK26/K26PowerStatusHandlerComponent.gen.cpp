// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PowerStatusHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PowerStatusHandlerComponent() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26SurvivorStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execAuthority_OnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execAuthority_OnKillerInstinctTimePassed)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnKillerInstinctTimePassed(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execAuthority_OnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorAdded(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnCrowAttached)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnCrowAttached_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnCrowDamagedSurvivor)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnCrowDamagedSurvivor_Implementation(Z_Param_killer,Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnCrowDetached)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnCrowDetached_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnIdleCrowInterrupt)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnIdleCrowInterrupt_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnStartRemovingCrow)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStartRemovingCrow_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerStatusHandlerComponent::execMulticast_OnStopRemovingCrow)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStopRemovingCrow_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor = FName(TEXT("Cosmetic_OnCrowDamagedSurvivor"));
	void UK26PowerStatusHandlerComponent::Cosmetic_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventCosmetic_OnCrowDamagedSurvivor_Parms Parms;
		Parms.killer=killer;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt = FName(TEXT("Cosmetic_OnCrowIdleInterrupt"));
	void UK26PowerStatusHandlerComponent::Cosmetic_OnCrowIdleInterrupt(ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventCosmetic_OnCrowIdleInterrupt_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached = FName(TEXT("Multicast_OnCrowAttached"));
	void UK26PowerStatusHandlerComponent::Multicast_OnCrowAttached(const ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnCrowAttached_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor = FName(TEXT("Multicast_OnCrowDamagedSurvivor"));
	void UK26PowerStatusHandlerComponent::Multicast_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnCrowDamagedSurvivor_Parms Parms;
		Parms.killer=killer;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached = FName(TEXT("Multicast_OnCrowDetached"));
	void UK26PowerStatusHandlerComponent::Multicast_OnCrowDetached(const ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnCrowDetached_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt = FName(TEXT("Multicast_OnIdleCrowInterrupt"));
	void UK26PowerStatusHandlerComponent::Multicast_OnIdleCrowInterrupt(ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnIdleCrowInterrupt_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow = FName(TEXT("Multicast_OnStartRemovingCrow"));
	void UK26PowerStatusHandlerComponent::Multicast_OnStartRemovingCrow(const ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnStartRemovingCrow_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow),&Parms);
	}
	static FName NAME_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow = FName(TEXT("Multicast_OnStopRemovingCrow"));
	void UK26PowerStatusHandlerComponent::Multicast_OnStopRemovingCrow(const ACamperPlayer* survivor)
	{
		K26PowerStatusHandlerComponent_eventMulticast_OnStopRemovingCrow_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow),&Parms);
	}
	void UK26PowerStatusHandlerComponent::StaticRegisterNativesUK26PowerStatusHandlerComponent()
	{
		UClass* Class = UK26PowerStatusHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIntroCompleted", &UK26PowerStatusHandlerComponent::execAuthority_OnIntroCompleted },
			{ "Authority_OnKillerInstinctTimePassed", &UK26PowerStatusHandlerComponent::execAuthority_OnKillerInstinctTimePassed },
			{ "Authority_OnSurvivorAdded", &UK26PowerStatusHandlerComponent::execAuthority_OnSurvivorAdded },
			{ "Multicast_OnCrowAttached", &UK26PowerStatusHandlerComponent::execMulticast_OnCrowAttached },
			{ "Multicast_OnCrowDamagedSurvivor", &UK26PowerStatusHandlerComponent::execMulticast_OnCrowDamagedSurvivor },
			{ "Multicast_OnCrowDetached", &UK26PowerStatusHandlerComponent::execMulticast_OnCrowDetached },
			{ "Multicast_OnIdleCrowInterrupt", &UK26PowerStatusHandlerComponent::execMulticast_OnIdleCrowInterrupt },
			{ "Multicast_OnStartRemovingCrow", &UK26PowerStatusHandlerComponent::execMulticast_OnStartRemovingCrow },
			{ "Multicast_OnStopRemovingCrow", &UK26PowerStatusHandlerComponent::execMulticast_OnStopRemovingCrow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Authority_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics
	{
		struct K26PowerStatusHandlerComponent_eventAuthority_OnKillerInstinctTimePassed_Parms
		{
			const ACamperPlayer* survivor;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventAuthority_OnKillerInstinctTimePassed_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Authority_OnKillerInstinctTimePassed", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventAuthority_OnKillerInstinctTimePassed_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics
	{
		struct K26PowerStatusHandlerComponent_eventAuthority_OnSurvivorAdded_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventAuthority_OnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Authority_OnSurvivorAdded", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventAuthority_OnSurvivorAdded_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventCosmetic_OnCrowDamagedSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventCosmetic_OnCrowDamagedSurvivor_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::NewProp_survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Cosmetic_OnCrowDamagedSurvivor", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventCosmetic_OnCrowDamagedSurvivor_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventCosmetic_OnCrowIdleInterrupt_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Cosmetic_OnCrowIdleInterrupt", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventCosmetic_OnCrowIdleInterrupt_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnCrowAttached_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnCrowAttached", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnCrowAttached_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnCrowDamagedSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnCrowDamagedSurvivor_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::NewProp_survivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnCrowDamagedSurvivor", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnCrowDamagedSurvivor_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnCrowDetached_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnCrowDetached", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnCrowDetached_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnIdleCrowInterrupt_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnIdleCrowInterrupt", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnIdleCrowInterrupt_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnStartRemovingCrow_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnStartRemovingCrow", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnStartRemovingCrow_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerStatusHandlerComponent_eventMulticast_OnStopRemovingCrow_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerStatusHandlerComponent, nullptr, "Multicast_OnStopRemovingCrow", nullptr, nullptr, sizeof(K26PowerStatusHandlerComponent_eventMulticast_OnStopRemovingCrow_Parms), Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent_NoRegister()
	{
		return UK26PowerStatusHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorStatusList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorStatusList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorStatusList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k26KillerInstinctStatusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__k26KillerInstinctStatusEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusIndicatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__statusIndicatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerInstinctGracePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__killerInstinctGracePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerInstinctDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__killerInstinctDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__invincibilityTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__invincibilityTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionsDuringWhichTheCrowIsIgnored_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactionsDuringWhichTheCrowIsIgnored;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__interactionsDuringWhichTheCrowIsIgnored_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted, "Authority_OnIntroCompleted" }, // 1975455939
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed, "Authority_OnKillerInstinctTimePassed" }, // 3251823131
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded, "Authority_OnSurvivorAdded" }, // 4076422607
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor, "Cosmetic_OnCrowDamagedSurvivor" }, // 1740279115
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt, "Cosmetic_OnCrowIdleInterrupt" }, // 3536441430
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached, "Multicast_OnCrowAttached" }, // 2893642972
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor, "Multicast_OnCrowDamagedSurvivor" }, // 264846250
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached, "Multicast_OnCrowDetached" }, // 4115106504
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt, "Multicast_OnIdleCrowInterrupt" }, // 428341526
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow, "Multicast_OnStartRemovingCrow" }, // 2169963561
		{ &Z_Construct_UFunction_UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow, "Multicast_OnStopRemovingCrow" }, // 2430485877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K26PowerStatusHandlerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList = { "_survivorStatusList", nullptr, (EPropertyFlags)0x0040008000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _survivorStatusList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList_Inner = { "_survivorStatusList", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FK26SurvivorStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__k26KillerInstinctStatusEffectName_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__k26KillerInstinctStatusEffectName = { "_k26KillerInstinctStatusEffectName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _k26KillerInstinctStatusEffectName), METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__k26KillerInstinctStatusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__k26KillerInstinctStatusEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__statusIndicatorClass_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__statusIndicatorClass = { "_statusIndicatorClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _statusIndicatorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__statusIndicatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__statusIndicatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctGracePeriod_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctGracePeriod = { "_killerInstinctGracePeriod", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _killerInstinctGracePeriod), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctGracePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctGracePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctDelay_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctDelay = { "_killerInstinctDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _killerInstinctDelay), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__invincibilityTime_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__invincibilityTime = { "_invincibilityTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _invincibilityTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__invincibilityTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__invincibilityTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored_MetaData[] = {
		{ "Category", "K26PowerStatusHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PowerStatusHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored = { "_interactionsDuringWhichTheCrowIsIgnored", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _interactionsDuringWhichTheCrowIsIgnored), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored_Inner = { "_interactionsDuringWhichTheCrowIsIgnored", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__survivorStatusList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__k26KillerInstinctStatusEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__statusIndicatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctGracePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__killerInstinctDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__invincibilityTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::NewProp__interactionsDuringWhichTheCrowIsIgnored_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26PowerStatusHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::ClassParams = {
		&UK26PowerStatusHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26PowerStatusHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26PowerStatusHandlerComponent, 3904100879);
	template<> THEK26_API UClass* StaticClass<UK26PowerStatusHandlerComponent>()
	{
		return UK26PowerStatusHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26PowerStatusHandlerComponent(Z_Construct_UClass_UK26PowerStatusHandlerComponent, &UK26PowerStatusHandlerComponent::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26PowerStatusHandlerComponent"), false, nullptr, nullptr, nullptr);

	void UK26PowerStatusHandlerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__survivorStatusList(TEXT("_survivorStatusList"));

		const bool bIsValid = true
			&& Name__survivorStatusList == ClassReps[(int32)ENetFields_Private::_survivorStatusList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK26PowerStatusHandlerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26PowerStatusHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
