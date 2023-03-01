// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailSpawnerComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailSpawnerComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_ETrailType();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UTormentTrailSpawnerComponent::execOnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeChanged(Z_Param_inRange,Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTormentTrailSpawnerComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTormentTrailSpawnerComponent::execServer_RequestMoreActorInPool)
	{
		P_GET_ENUM(ETrailType,Z_Param_trailType);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestMoreActorInPool_Validate(ETrailType(Z_Param_trailType)))
		{
			RPC_ValidateFailed(TEXT("Server_RequestMoreActorInPool_Validate"));
			return;
		}
		P_THIS->Server_RequestMoreActorInPool_Implementation(ETrailType(Z_Param_trailType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTormentTrailSpawnerComponent::execServer_StopTrailController)
	{
		P_GET_OBJECT(ATormentTrailController,Z_Param_trailController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopTrailController_Implementation(Z_Param_trailController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTormentTrailSpawnerComponent::execSever_SpawnTrailController)
	{
		P_GET_OBJECT(ATormentTrailController,Z_Param_trailController);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Sever_SpawnTrailController_Validate(Z_Param_trailController,Z_Param_location,Z_Param_rotation))
		{
			RPC_ValidateFailed(TEXT("Sever_SpawnTrailController_Validate"));
			return;
		}
		P_THIS->Sever_SpawnTrailController_Implementation(Z_Param_trailController,Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	static FName NAME_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool = FName(TEXT("Server_RequestMoreActorInPool"));
	void UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool(const ETrailType trailType)
	{
		TormentTrailSpawnerComponent_eventServer_RequestMoreActorInPool_Parms Parms;
		Parms.trailType=trailType;
		ProcessEvent(FindFunctionChecked(NAME_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool),&Parms);
	}
	static FName NAME_UTormentTrailSpawnerComponent_Server_StopTrailController = FName(TEXT("Server_StopTrailController"));
	void UTormentTrailSpawnerComponent::Server_StopTrailController(ATormentTrailController* trailController)
	{
		TormentTrailSpawnerComponent_eventServer_StopTrailController_Parms Parms;
		Parms.trailController=trailController;
		ProcessEvent(FindFunctionChecked(NAME_UTormentTrailSpawnerComponent_Server_StopTrailController),&Parms);
	}
	static FName NAME_UTormentTrailSpawnerComponent_Sever_SpawnTrailController = FName(TEXT("Sever_SpawnTrailController"));
	void UTormentTrailSpawnerComponent::Sever_SpawnTrailController(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation)
	{
		TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms Parms;
		Parms.trailController=trailController;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_UTormentTrailSpawnerComponent_Sever_SpawnTrailController),&Parms);
	}
	void UTormentTrailSpawnerComponent::StaticRegisterNativesUTormentTrailSpawnerComponent()
	{
		UClass* Class = UTormentTrailSpawnerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeChanged", &UTormentTrailSpawnerComponent::execOnInRangeChanged },
			{ "OnLevelReadyToPlay", &UTormentTrailSpawnerComponent::execOnLevelReadyToPlay },
			{ "Server_RequestMoreActorInPool", &UTormentTrailSpawnerComponent::execServer_RequestMoreActorInPool },
			{ "Server_StopTrailController", &UTormentTrailSpawnerComponent::execServer_StopTrailController },
			{ "Sever_SpawnTrailController", &UTormentTrailSpawnerComponent::execSever_SpawnTrailController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics
	{
		struct TormentTrailSpawnerComponent_eventOnInRangeChanged_Parms
		{
			bool inRange;
			const AActor* actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventOnInRangeChanged_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((TormentTrailSpawnerComponent_eventOnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TormentTrailSpawnerComponent_eventOnInRangeChanged_Parms), &Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailSpawnerComponent, nullptr, "OnInRangeChanged", nullptr, nullptr, sizeof(TormentTrailSpawnerComponent_eventOnInRangeChanged_Parms), Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailSpawnerComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trailType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_trailType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_trailType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType = { "trailType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventServer_RequestMoreActorInPool_Parms, trailType), Z_Construct_UEnum_TheExecutioner_ETrailType, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::NewProp_trailType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailSpawnerComponent, nullptr, "Server_RequestMoreActorInPool", nullptr, nullptr, sizeof(TormentTrailSpawnerComponent_eventServer_RequestMoreActorInPool_Parms), Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::NewProp_trailController = { "trailController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventServer_StopTrailController_Parms, trailController), Z_Construct_UClass_ATormentTrailController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::NewProp_trailController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailSpawnerComponent, nullptr, "Server_StopTrailController", nullptr, nullptr, sizeof(TormentTrailSpawnerComponent_eventServer_StopTrailController_Parms), Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms, location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_trailController = { "trailController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms, trailController), Z_Construct_UClass_ATormentTrailController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::NewProp_trailController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailSpawnerComponent, nullptr, "Sever_SpawnTrailController", nullptr, nullptr, sizeof(TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms), Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTormentTrailSpawnerComponent_NoRegister()
	{
		return UTormentTrailSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__epsilonToAddToSpawnLocationInZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__epsilonToAddToSpawnLocationInZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardMultiplierSlopeDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__forwardMultiplierSlopeDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slopeDetectionEndVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slopeDetectionEndVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slopeDetectionOverGroundVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slopeDetectionOverGroundVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorsInRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__actorsInRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorsInRange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentRestrictedTrailControllerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentRestrictedTrailControllerPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailControllerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailControllerPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedTormentTrailPointCollectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedTormentTrailPointCollectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailPointCollectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tormentTrailPointCollectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictionMaxVerticalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictionMaxVerticalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictionRangeToHatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictionRangeToHatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minSlopeAngleForTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minSlopeAngleForTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxSlopeAngleForTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxSlopeAngleForTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictionRangeToExitSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictionRangeToExitSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictionRangeToGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictionRangeToGenerators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictionRangeToHooks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictionRangeToHooks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTrailController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentTrailController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnInRangeChanged, "OnInRangeChanged" }, // 282364993
		{ &Z_Construct_UFunction_UTormentTrailSpawnerComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 884301763
		{ &Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool, "Server_RequestMoreActorInPool" }, // 2390035475
		{ &Z_Construct_UFunction_UTormentTrailSpawnerComponent_Server_StopTrailController, "Server_StopTrailController" }, // 519946922
		{ &Z_Construct_UFunction_UTormentTrailSpawnerComponent_Sever_SpawnTrailController, "Sever_SpawnTrailController" }, // 1449762007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TormentTrailSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__epsilonToAddToSpawnLocationInZ_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__epsilonToAddToSpawnLocationInZ = { "_epsilonToAddToSpawnLocationInZ", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _epsilonToAddToSpawnLocationInZ), METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__epsilonToAddToSpawnLocationInZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__epsilonToAddToSpawnLocationInZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__forwardMultiplierSlopeDetection_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__forwardMultiplierSlopeDetection = { "_forwardMultiplierSlopeDetection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _forwardMultiplierSlopeDetection), METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__forwardMultiplierSlopeDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__forwardMultiplierSlopeDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionEndVector_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionEndVector = { "_slopeDetectionEndVector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _slopeDetectionEndVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionEndVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionEndVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionOverGroundVector_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionOverGroundVector = { "_slopeDetectionOverGroundVector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _slopeDetectionOverGroundVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionOverGroundVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionOverGroundVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange = { "_actorsInRange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _actorsInRange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange_Inner = { "_actorsInRange", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentRestrictedTrailControllerPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentRestrictedTrailControllerPool = { "_tormentRestrictedTrailControllerPool", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentRestrictedTrailControllerPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentRestrictedTrailControllerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentRestrictedTrailControllerPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailControllerPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailControllerPool = { "_tormentTrailControllerPool", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentTrailControllerPool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailControllerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailControllerPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictedTormentTrailPointCollectionComponent = { "_restrictedTormentTrailPointCollectionComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictedTormentTrailPointCollectionComponent), Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictedTormentTrailPointCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailPointCollectionComponent = { "_tormentTrailPointCollectionComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentTrailPointCollectionComponent), Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailPointCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionMaxVerticalDistance_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionMaxVerticalDistance = { "_restrictionMaxVerticalDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionMaxVerticalDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionMaxVerticalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionMaxVerticalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHatch_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHatch = { "_restrictionRangeToHatch", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToHatch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__minSlopeAngleForTrail_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__minSlopeAngleForTrail = { "_minSlopeAngleForTrail", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _minSlopeAngleForTrail), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__minSlopeAngleForTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__minSlopeAngleForTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__maxSlopeAngleForTrail_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__maxSlopeAngleForTrail = { "_maxSlopeAngleForTrail", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _maxSlopeAngleForTrail), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__maxSlopeAngleForTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__maxSlopeAngleForTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToExitSwitch_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToExitSwitch = { "_restrictionRangeToExitSwitch", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToExitSwitch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToExitSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToExitSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToGenerators_MetaData[] = {
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToGenerators = { "_restrictionRangeToGenerators", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToGenerators), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToGenerators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHooks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TormentTrailSpawnerComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHooks = { "_restrictionRangeToHooks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToHooks), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHooks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHooks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__currentTrailController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__currentTrailController = { "_currentTrailController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailSpawnerComponent, _currentTrailController), Z_Construct_UClass_ATormentTrailController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__currentTrailController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__currentTrailController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__epsilonToAddToSpawnLocationInZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__forwardMultiplierSlopeDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionEndVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__slopeDetectionOverGroundVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__actorsInRange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentRestrictedTrailControllerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailControllerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictedTormentTrailPointCollectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__tormentTrailPointCollectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionMaxVerticalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__minSlopeAngleForTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__maxSlopeAngleForTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToExitSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__restrictionRangeToHooks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::NewProp__currentTrailController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTormentTrailSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::ClassParams = {
		&UTormentTrailSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTormentTrailSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTormentTrailSpawnerComponent, 2757994304);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTormentTrailSpawnerComponent>()
	{
		return UTormentTrailSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTormentTrailSpawnerComponent(Z_Construct_UClass_UTormentTrailSpawnerComponent, &UTormentTrailSpawnerComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTormentTrailSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTormentTrailSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
