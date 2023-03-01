// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GeneratorDrivenActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorDrivenActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorDrivenActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorDrivenActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
// End Cross Module References
	DEFINE_FUNCTION(AGeneratorDrivenActor::execAuthority_CheckActivation)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckActivation(Z_Param_isAutoCompleted,Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execAuthority_CheckGeneratorRepairedBySurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CheckGeneratorRepairedBySurvivor(Z_Param_repairingSurvivor,Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execGetSharedTileRandomizer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=P_THIS->GetSharedTileRandomizer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execIsActivated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated(Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execIsValidGeneratorId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidGeneratorId(Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execMulticast_ActivationChecked)
	{
		P_GET_UBOOL(Z_Param_activated);
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ActivationChecked_Implementation(Z_Param_activated,Z_Param_isAutoCompleted,Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execMulticast_GeneratorRepairedBySurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_GeneratorRepairedBySurvivor_Implementation(Z_Param_repairingSurvivor,Z_Param_generatorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent0)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent0(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent1)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent1(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent2)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent2(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent3)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent3(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent4)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent4(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent5)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent5(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent6)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_repairingSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedBySurvivorEvent6(Z_Param_repairingSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent0)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent0(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent1)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent1(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent2)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent2(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent3)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent3(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent4)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent4(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent5)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent5(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execOnGeneratorRepairedEvent6)
	{
		P_GET_UBOOL(Z_Param_isAutoCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratorRepairedEvent6(Z_Param_isAutoCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorDrivenActor::execSetSpawnedObject)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_GET_PROPERTY(FIntProperty,Z_Param_generatorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnedObject(Z_Param_generator,Z_Param_generatorId);
		P_NATIVE_END;
	}
	static FName NAME_AGeneratorDrivenActor_Multicast_ActivationChecked = FName(TEXT("Multicast_ActivationChecked"));
	void AGeneratorDrivenActor::Multicast_ActivationChecked(bool activated, bool isAutoCompleted, int32 generatorId)
	{
		GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms Parms;
		Parms.activated=activated ? true : false;
		Parms.isAutoCompleted=isAutoCompleted ? true : false;
		Parms.generatorId=generatorId;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratorDrivenActor_Multicast_ActivationChecked),&Parms);
	}
	static FName NAME_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor = FName(TEXT("Multicast_GeneratorRepairedBySurvivor"));
	void AGeneratorDrivenActor::Multicast_GeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId)
	{
		GeneratorDrivenActor_eventMulticast_GeneratorRepairedBySurvivor_Parms Parms;
		Parms.repairingSurvivor=repairingSurvivor;
		Parms.generatorId=generatorId;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor),&Parms);
	}
	static FName NAME_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor = FName(TEXT("OnActivateGeneratorDrivenActor"));
	void AGeneratorDrivenActor::OnActivateGeneratorDrivenActor(bool isAutoCompleted, int32 generatorId)
	{
		GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms Parms;
		Parms.isAutoCompleted=isAutoCompleted ? true : false;
		Parms.generatorId=generatorId;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor),&Parms);
	}
	static FName NAME_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor = FName(TEXT("OnGeneratorRepairedBySurvivor"));
	void AGeneratorDrivenActor::OnGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId)
	{
		GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivor_Parms Parms;
		Parms.repairingSurvivor=repairingSurvivor;
		Parms.generatorId=generatorId;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor),&Parms);
	}
	static FName NAME_AGeneratorDrivenActor_OnInitGeneratorDrivenActor = FName(TEXT("OnInitGeneratorDrivenActor"));
	void AGeneratorDrivenActor::OnInitGeneratorDrivenActor(AGenerator* generator, int32 generatorId)
	{
		GeneratorDrivenActor_eventOnInitGeneratorDrivenActor_Parms Parms;
		Parms.generator=generator;
		Parms.generatorId=generatorId;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratorDrivenActor_OnInitGeneratorDrivenActor),&Parms);
	}
	void AGeneratorDrivenActor::StaticRegisterNativesAGeneratorDrivenActor()
	{
		UClass* Class = AGeneratorDrivenActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_CheckActivation", &AGeneratorDrivenActor::execAuthority_CheckActivation },
			{ "Authority_CheckGeneratorRepairedBySurvivor", &AGeneratorDrivenActor::execAuthority_CheckGeneratorRepairedBySurvivor },
			{ "GetSharedTileRandomizer", &AGeneratorDrivenActor::execGetSharedTileRandomizer },
			{ "IsActivated", &AGeneratorDrivenActor::execIsActivated },
			{ "IsValidGeneratorId", &AGeneratorDrivenActor::execIsValidGeneratorId },
			{ "Multicast_ActivationChecked", &AGeneratorDrivenActor::execMulticast_ActivationChecked },
			{ "Multicast_GeneratorRepairedBySurvivor", &AGeneratorDrivenActor::execMulticast_GeneratorRepairedBySurvivor },
			{ "OnGeneratorRepairedBySurvivorEvent0", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent0 },
			{ "OnGeneratorRepairedBySurvivorEvent1", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent1 },
			{ "OnGeneratorRepairedBySurvivorEvent2", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent2 },
			{ "OnGeneratorRepairedBySurvivorEvent3", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent3 },
			{ "OnGeneratorRepairedBySurvivorEvent4", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent4 },
			{ "OnGeneratorRepairedBySurvivorEvent5", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent5 },
			{ "OnGeneratorRepairedBySurvivorEvent6", &AGeneratorDrivenActor::execOnGeneratorRepairedBySurvivorEvent6 },
			{ "OnGeneratorRepairedEvent0", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent0 },
			{ "OnGeneratorRepairedEvent1", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent1 },
			{ "OnGeneratorRepairedEvent2", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent2 },
			{ "OnGeneratorRepairedEvent3", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent3 },
			{ "OnGeneratorRepairedEvent4", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent4 },
			{ "OnGeneratorRepairedEvent5", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent5 },
			{ "OnGeneratorRepairedEvent6", &AGeneratorDrivenActor::execOnGeneratorRepairedEvent6 },
			{ "SetSpawnedObject", &AGeneratorDrivenActor::execSetSpawnedObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics
	{
		struct GeneratorDrivenActor_eventAuthority_CheckActivation_Parms
		{
			bool isAutoCompleted;
			int32 generatorId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventAuthority_CheckActivation_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventAuthority_CheckActivation_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventAuthority_CheckActivation_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "Authority_CheckActivation", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventAuthority_CheckActivation_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics
	{
		struct GeneratorDrivenActor_eventAuthority_CheckGeneratorRepairedBySurvivor_Parms
		{
			ADBDPlayer* repairingSurvivor;
			int32 generatorId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventAuthority_CheckGeneratorRepairedBySurvivor_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventAuthority_CheckGeneratorRepairedBySurvivor_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "Authority_CheckGeneratorRepairedBySurvivor", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventAuthority_CheckGeneratorRepairedBySurvivor_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics
	{
		struct GeneratorDrivenActor_eventGetSharedTileRandomizer_Parms
		{
			FRandomStream ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventGetSharedTileRandomizer_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "GetSharedTileRandomizer", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventGetSharedTileRandomizer_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics
	{
		struct GeneratorDrivenActor_eventIsActivated_Parms
		{
			int32 generatorId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventIsActivated_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventIsActivated_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::NewProp_generatorId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "IsActivated", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventIsActivated_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics
	{
		struct GeneratorDrivenActor_eventIsValidGeneratorId_Parms
		{
			int32 generatorId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventIsValidGeneratorId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventIsValidGeneratorId_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventIsValidGeneratorId_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::NewProp_generatorId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "IsValidGeneratorId", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventIsValidGeneratorId_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static void NewProp_activated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_activated_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms*)Obj)->activated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_activated = { "activated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_activated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_isAutoCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::NewProp_activated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "Multicast_ActivationChecked", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventMulticast_GeneratorRepairedBySurvivor_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventMulticast_GeneratorRepairedBySurvivor_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "Multicast_GeneratorRepairedBySurvivor", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventMulticast_GeneratorRepairedBySurvivor_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnActivateGeneratorDrivenActor", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivor_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivor_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivor", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivor_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent0_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent0_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent0", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent0_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent1_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent1_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent1", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent1_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent2_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent2_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent2", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent2_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent3_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent3_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent3", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent3_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent4_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent4_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent4", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent4_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent5_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent5_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent5", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent5_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent6_Parms
		{
			ADBDPlayer* repairingSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_repairingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::NewProp_repairingSurvivor = { "repairingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent6_Parms, repairingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::NewProp_repairingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedBySurvivorEvent6", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivorEvent6_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent0_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent0_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent0_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent0", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent0_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent1_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent1_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent1_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent1", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent1_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent2_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent2_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent2_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent2", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent2_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent3_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent3_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent3_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent3", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent3_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent4_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent4_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent4_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent4", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent4_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent5_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent5_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent5_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent5", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent5_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics
	{
		struct GeneratorDrivenActor_eventOnGeneratorRepairedEvent6_Parms
		{
			bool isAutoCompleted;
		};
		static void NewProp_isAutoCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::NewProp_isAutoCompleted_SetBit(void* Obj)
	{
		((GeneratorDrivenActor_eventOnGeneratorRepairedEvent6_Parms*)Obj)->isAutoCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::NewProp_isAutoCompleted = { "isAutoCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent6_Parms), &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::NewProp_isAutoCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::NewProp_isAutoCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnGeneratorRepairedEvent6", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnGeneratorRepairedEvent6_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnInitGeneratorDrivenActor_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventOnInitGeneratorDrivenActor_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "OnInitGeneratorDrivenActor", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventOnInitGeneratorDrivenActor_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics
	{
		struct GeneratorDrivenActor_eventSetSpawnedObject_Parms
		{
			AGenerator* generator;
			int32 generatorId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generatorId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::NewProp_generatorId = { "generatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventSetSpawnedObject_Parms, generatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorDrivenActor_eventSetSpawnedObject_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::NewProp_generatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorDrivenActor, nullptr, "SetSpawnedObject", nullptr, nullptr, sizeof(GeneratorDrivenActor_eventSetSpawnedObject_Parms), Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeneratorDrivenActor_NoRegister()
	{
		return AGeneratorDrivenActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorDrivenActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activated_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activated;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__activated_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMobileLightMobility_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetMobileLightMobility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorDrivenActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeneratorDrivenActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckActivation, "Authority_CheckActivation" }, // 583507792
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_Authority_CheckGeneratorRepairedBySurvivor, "Authority_CheckGeneratorRepairedBySurvivor" }, // 3894097344
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_GetSharedTileRandomizer, "GetSharedTileRandomizer" }, // 1938839240
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_IsActivated, "IsActivated" }, // 3140505711
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_IsValidGeneratorId, "IsValidGeneratorId" }, // 2934928427
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_ActivationChecked, "Multicast_ActivationChecked" }, // 3416197966
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_Multicast_GeneratorRepairedBySurvivor, "Multicast_GeneratorRepairedBySurvivor" }, // 1023753317
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnActivateGeneratorDrivenActor, "OnActivateGeneratorDrivenActor" }, // 3790217106
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivor, "OnGeneratorRepairedBySurvivor" }, // 2404760983
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent0, "OnGeneratorRepairedBySurvivorEvent0" }, // 2966330810
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent1, "OnGeneratorRepairedBySurvivorEvent1" }, // 45653914
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent2, "OnGeneratorRepairedBySurvivorEvent2" }, // 1936640790
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent3, "OnGeneratorRepairedBySurvivorEvent3" }, // 2360177125
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent4, "OnGeneratorRepairedBySurvivorEvent4" }, // 3286071759
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent5, "OnGeneratorRepairedBySurvivorEvent5" }, // 407353407
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedBySurvivorEvent6, "OnGeneratorRepairedBySurvivorEvent6" }, // 2158057473
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent0, "OnGeneratorRepairedEvent0" }, // 2951291948
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent1, "OnGeneratorRepairedEvent1" }, // 2574222889
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent2, "OnGeneratorRepairedEvent2" }, // 619332756
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent3, "OnGeneratorRepairedEvent3" }, // 2880168893
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent4, "OnGeneratorRepairedEvent4" }, // 1558668613
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent5, "OnGeneratorRepairedEvent5" }, // 1190556605
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnGeneratorRepairedEvent6, "OnGeneratorRepairedEvent6" }, // 3011516507
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_OnInitGeneratorDrivenActor, "OnInitGeneratorDrivenActor" }, // 3971786449
		{ &Z_Construct_UFunction_AGeneratorDrivenActor_SetSpawnedObject, "SetSpawnedObject" }, // 1225563162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorDrivenActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorDrivenActor.h" },
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators = { "_generators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorDrivenActor, _generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators_Inner = { "_generators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated = { "_activated", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorDrivenActor, _activated), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated_Inner = { "_activated", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_TargetMobileLightMobility_MetaData[] = {
		{ "Category", "GeneratorDrivenActor" },
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_TargetMobileLightMobility = { "TargetMobileLightMobility", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorDrivenActor, TargetMobileLightMobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_TargetMobileLightMobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_TargetMobileLightMobility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_LightPriority_MetaData[] = {
		{ "Category", "GeneratorDrivenActor" },
		{ "ModuleRelativePath", "Public/GeneratorDrivenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_LightPriority = { "LightPriority", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorDrivenActor, LightPriority), METADATA_PARAMS(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_LightPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_LightPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneratorDrivenActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__generators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp__activated_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_TargetMobileLightMobility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorDrivenActor_Statics::NewProp_LightPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorDrivenActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorDrivenActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorDrivenActor_Statics::ClassParams = {
		&AGeneratorDrivenActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeneratorDrivenActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorDrivenActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorDrivenActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorDrivenActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorDrivenActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorDrivenActor, 2159513011);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AGeneratorDrivenActor>()
	{
		return AGeneratorDrivenActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorDrivenActor(Z_Construct_UClass_AGeneratorDrivenActor, &AGeneratorDrivenActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AGeneratorDrivenActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorDrivenActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
