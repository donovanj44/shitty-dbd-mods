// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnerProperties();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWeightedElement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnElement_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventActorSpawnerOnAsyncActorSpawned_Parms
		{
			AActor* actorSpawned;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::NewProp_actorSpawned = { "actorSpawned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventActorSpawnerOnAsyncActorSpawned_Parms, actorSpawned), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::NewProp_actorSpawned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "ActorSpawnerOnAsyncActorSpawned__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventActorSpawnerOnAsyncActorSpawned_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UActorSpawner::execAuthority_SpawnActorAsyncEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SpawnActorAsyncEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSpawner::execAuthorityGetSpawnedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->AuthorityGetSpawnedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSpawner::execAuthoritySelect)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthoritySelect(Z_Param_selected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSpawner::execEditorForceSpawnVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorForceSpawnVisualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSpawner::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSpawner::execUseActivatedElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseActivatedElement();
		P_NATIVE_END;
	}
	void UActorSpawner::StaticRegisterNativesUActorSpawner()
	{
		UClass* Class = UActorSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SpawnActorAsyncEvent", &UActorSpawner::execAuthority_SpawnActorAsyncEvent },
			{ "AuthorityGetSpawnedActor", &UActorSpawner::execAuthorityGetSpawnedActor },
			{ "AuthoritySelect", &UActorSpawner::execAuthoritySelect },
			{ "EditorForceSpawnVisualization", &UActorSpawner::execEditorForceSpawnVisualization },
			{ "IsEnabled", &UActorSpawner::execIsEnabled },
			{ "UseActivatedElement", &UActorSpawner::execUseActivatedElement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "Authority_SpawnActorAsyncEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics
	{
		struct ActorSpawner_eventAuthorityGetSpawnedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSpawner_eventAuthorityGetSpawnedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "AuthorityGetSpawnedActor", nullptr, nullptr, sizeof(ActorSpawner_eventAuthorityGetSpawnedActor_Parms), Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics
	{
		struct ActorSpawner_eventAuthoritySelect_Parms
		{
			bool selected;
		};
		static void NewProp_selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((ActorSpawner_eventAuthoritySelect_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorSpawner_eventAuthoritySelect_Parms), &Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "AuthoritySelect", nullptr, nullptr, sizeof(ActorSpawner_eventAuthoritySelect_Parms), Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_AuthoritySelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_AuthoritySelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "EditorForceSpawnVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics
	{
		struct ActorSpawner_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorSpawner_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorSpawner_eventIsEnabled_Parms), &Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "IsEnabled", nullptr, nullptr, sizeof(ActorSpawner_eventIsEnabled_Parms), Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics
	{
		struct ActorSpawner_eventUseActivatedElement_Parms
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
	void Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorSpawner_eventUseActivatedElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorSpawner_eventUseActivatedElement_Parms), &Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawner, nullptr, "UseActivatedElement", nullptr, nullptr, sizeof(ActorSpawner_eventUseActivatedElement_Parms), Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawner_UseActivatedElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawner_UseActivatedElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorSpawner_NoRegister()
	{
		return UActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedActorOnAuthority_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__spawnedActorOnAuthority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__toSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightInfluencer_MetaData[];
#endif
		static void NewProp_WeightInfluencer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeightInfluencer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightInfluenceable_MetaData[];
#endif
		static void NewProp_WeightInfluenceable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeightInfluenceable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAsyncActorSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAsyncActorSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPriorityTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnPriorityTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCountMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnCountMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedSceneElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeactivatedSceneElement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeactivatedSceneElement_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedSceneElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatedSceneElement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivatedSceneElement_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedByDefault_MetaData[];
#endif
		static void NewProp_ActivatedByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivatedByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Visualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSpawner_Authority_SpawnActorAsyncEvent, "Authority_SpawnActorAsyncEvent" }, // 3399706114
		{ &Z_Construct_UFunction_UActorSpawner_AuthorityGetSpawnedActor, "AuthorityGetSpawnedActor" }, // 2158023240
		{ &Z_Construct_UFunction_UActorSpawner_AuthoritySelect, "AuthoritySelect" }, // 1540263538
		{ &Z_Construct_UFunction_UActorSpawner_EditorForceSpawnVisualization, "EditorForceSpawnVisualization" }, // 3062585439
		{ &Z_Construct_UFunction_UActorSpawner_IsEnabled, "IsEnabled" }, // 218467241
		{ &Z_Construct_UFunction_UActorSpawner_UseActivatedElement, "UseActivatedElement" }, // 3107334219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp__spawnedActorOnAuthority_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp__spawnedActorOnAuthority = { "_spawnedActorOnAuthority", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, _spawnedActorOnAuthority), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp__spawnedActorOnAuthority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp__spawnedActorOnAuthority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp__toSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp__toSpawn = { "_toSpawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, _toSpawn), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp__toSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp__toSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_Cost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, Cost), METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer_SetBit(void* Obj)
	{
		((UActorSpawner*)Obj)->WeightInfluencer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer = { "WeightInfluencer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorSpawner), &Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable_SetBit(void* Obj)
	{
		((UActorSpawner*)Obj)->WeightInfluenceable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable = { "WeightInfluenceable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorSpawner), &Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_OnAsyncActorSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_OnAsyncActorSpawned = { "OnAsyncActorSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, OnAsyncActorSpawned), Z_Construct_UDelegateFunction_DeadByDaylight_ActorSpawnerOnAsyncActorSpawned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_OnAsyncActorSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_OnAsyncActorSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnPriorityTier_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnPriorityTier = { "SpawnPriorityTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, SpawnPriorityTier), METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnPriorityTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnPriorityTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnCountMax_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnCountMax = { "SpawnCountMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, SpawnCountMax), METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnCountMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnCountMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, Weight), METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement = { "DeactivatedSceneElement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, DeactivatedSceneElement), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement_Inner = { "DeactivatedSceneElement", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorSpawnerProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement = { "ActivatedSceneElement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, ActivatedSceneElement), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement_Inner = { "ActivatedSceneElement", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorSpawnerProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault_SetBit(void* Obj)
	{
		((UActorSpawner*)Obj)->ActivatedByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault = { "ActivatedByDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorSpawner), &Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_Visualization_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_Visualization = { "Visualization", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, Visualization), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Visualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Visualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawner, Type), Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp__spawnedActorOnAuthority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp__toSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluencer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_WeightInfluenceable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_OnAsyncActorSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnPriorityTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_SpawnCountMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_DeactivatedSceneElement_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedSceneElement_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_ActivatedByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_Visualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawner_Statics::NewProp_Type_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorSpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWeightedElement_NoRegister, (int32)VTABLE_OFFSET(UActorSpawner, IWeightedElement), false },
			{ Z_Construct_UClass_USpawnElement_NoRegister, (int32)VTABLE_OFFSET(UActorSpawner, ISpawnElement), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawner_Statics::ClassParams = {
		&UActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorSpawner_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSpawner, 493398661);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorSpawner>()
	{
		return UActorSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSpawner(Z_Construct_UClass_UActorSpawner, &UActorSpawner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
