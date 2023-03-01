// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TheExecutionerCheatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheExecutionerCheatComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTheExecutionerCheatComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTheExecutionerCheatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	DEFINE_FUNCTION(UTheExecutionerCheatComponent::execDBD_DeathBedPlayStruggleHitReaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_DeathBedPlayStruggleHitReaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheExecutionerCheatComponent::execDBD_DisplayAllDeathBed)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_DisplayAllDeathBed(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheExecutionerCheatComponent::execDBD_LocalKillSurvivorInDeathBed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_LocalKillSurvivorInDeathBed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheExecutionerCheatComponent::execDBD_SetAgonyOnLocallyControlledPlayer)
	{
		P_GET_UBOOL(Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_localPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetAgonyOnLocallyControlledPlayer(Z_Param_value,Z_Param_localPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheExecutionerCheatComponent::execDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer)
	{
		P_GET_UBOOL(Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_localPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(Z_Param_value,Z_Param_localPlayerId);
		P_NATIVE_END;
	}
	void UTheExecutionerCheatComponent::StaticRegisterNativesUTheExecutionerCheatComponent()
	{
		UClass* Class = UTheExecutionerCheatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_DeathBedPlayStruggleHitReaction", &UTheExecutionerCheatComponent::execDBD_DeathBedPlayStruggleHitReaction },
			{ "DBD_DisplayAllDeathBed", &UTheExecutionerCheatComponent::execDBD_DisplayAllDeathBed },
			{ "DBD_LocalKillSurvivorInDeathBed", &UTheExecutionerCheatComponent::execDBD_LocalKillSurvivorInDeathBed },
			{ "DBD_SetAgonyOnLocallyControlledPlayer", &UTheExecutionerCheatComponent::execDBD_SetAgonyOnLocallyControlledPlayer },
			{ "DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer", &UTheExecutionerCheatComponent::execDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerCheatComponent, nullptr, "DBD_DeathBedPlayStruggleHitReaction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics
	{
		struct TheExecutionerCheatComponent_eventDBD_DisplayAllDeathBed_Parms
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
	void Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TheExecutionerCheatComponent_eventDBD_DisplayAllDeathBed_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheExecutionerCheatComponent_eventDBD_DisplayAllDeathBed_Parms), &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerCheatComponent, nullptr, "DBD_DisplayAllDeathBed", nullptr, nullptr, sizeof(TheExecutionerCheatComponent_eventDBD_DisplayAllDeathBed_Parms), Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerCheatComponent, nullptr, "DBD_LocalKillSurvivorInDeathBed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics
	{
		struct TheExecutionerCheatComponent_eventDBD_SetAgonyOnLocallyControlledPlayer_Parms
		{
			bool value;
			FString localPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_localPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_localPlayerId = { "localPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheExecutionerCheatComponent_eventDBD_SetAgonyOnLocallyControlledPlayer_Parms, localPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TheExecutionerCheatComponent_eventDBD_SetAgonyOnLocallyControlledPlayer_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheExecutionerCheatComponent_eventDBD_SetAgonyOnLocallyControlledPlayer_Parms), &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_localPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerCheatComponent, nullptr, "DBD_SetAgonyOnLocallyControlledPlayer", nullptr, nullptr, sizeof(TheExecutionerCheatComponent_eventDBD_SetAgonyOnLocallyControlledPlayer_Parms), Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics
	{
		struct TheExecutionerCheatComponent_eventDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Parms
		{
			bool value;
			FString localPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_localPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_localPlayerId = { "localPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheExecutionerCheatComponent_eventDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Parms, localPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_localPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TheExecutionerCheatComponent_eventDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheExecutionerCheatComponent_eventDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Parms), &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_localPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerCheatComponent, nullptr, "DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer", nullptr, nullptr, sizeof(TheExecutionerCheatComponent_eventDBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Parms), Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheExecutionerCheatComponent_NoRegister()
	{
		return UTheExecutionerCheatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTheExecutionerCheatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction, "DBD_DeathBedPlayStruggleHitReaction" }, // 756930502
		{ &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed, "DBD_DisplayAllDeathBed" }, // 1974021927
		{ &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed, "DBD_LocalKillSurvivorInDeathBed" }, // 868417397
		{ &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer, "DBD_SetAgonyOnLocallyControlledPlayer" }, // 1091908721
		{ &Z_Construct_UFunction_UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer, "DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer" }, // 1847087421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TheExecutionerCheatComponent.h" },
		{ "ModuleRelativePath", "Public/TheExecutionerCheatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheExecutionerCheatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::ClassParams = {
		&UTheExecutionerCheatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheExecutionerCheatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheExecutionerCheatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheExecutionerCheatComponent, 1977116794);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTheExecutionerCheatComponent>()
	{
		return UTheExecutionerCheatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheExecutionerCheatComponent(Z_Construct_UClass_UTheExecutionerCheatComponent, &UTheExecutionerCheatComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTheExecutionerCheatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheExecutionerCheatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
