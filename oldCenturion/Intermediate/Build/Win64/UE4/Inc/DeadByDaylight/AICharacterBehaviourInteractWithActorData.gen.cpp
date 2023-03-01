// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterBehaviourInteractWithActorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBehaviourInteractWithActorData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UAICharacterBehaviourInteractWithActorData::execInit)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_ENUM(ECharacterMovementTypes,Z_Param_NewCharacterMovementType);
		P_GET_UBOOL(Z_Param_NewUsePathfinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_actor,ECharacterMovementTypes(Z_Param_NewCharacterMovementType),Z_Param_NewUsePathfinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviourInteractWithActorData::execWatchGameEventType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGameEventType(Z_Param_gameEventType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICharacterBehaviourInteractWithActorData::execWatchGameEventTypes)
	{
		P_GET_TARRAY(FGameplayTag,Z_Param_gameEventTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGameEventTypes(Z_Param_gameEventTypes);
		P_NATIVE_END;
	}
	void UAICharacterBehaviourInteractWithActorData::StaticRegisterNativesUAICharacterBehaviourInteractWithActorData()
	{
		UClass* Class = UAICharacterBehaviourInteractWithActorData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAICharacterBehaviourInteractWithActorData::execInit },
			{ "WatchGameEventType", &UAICharacterBehaviourInteractWithActorData::execWatchGameEventType },
			{ "WatchGameEventTypes", &UAICharacterBehaviourInteractWithActorData::execWatchGameEventTypes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics
	{
		struct AICharacterBehaviourInteractWithActorData_eventInit_Parms
		{
			AActor* actor;
			ECharacterMovementTypes NewCharacterMovementType;
			bool NewUsePathfinding;
		};
		static void NewProp_NewUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewUsePathfinding;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCharacterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCharacterMovementType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewUsePathfinding_SetBit(void* Obj)
	{
		((AICharacterBehaviourInteractWithActorData_eventInit_Parms*)Obj)->NewUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewUsePathfinding = { "NewUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AICharacterBehaviourInteractWithActorData_eventInit_Parms), &Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewCharacterMovementType = { "NewCharacterMovementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActorData_eventInit_Parms, NewCharacterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewCharacterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActorData_eventInit_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewCharacterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_NewCharacterMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData, nullptr, "Init", nullptr, nullptr, sizeof(AICharacterBehaviourInteractWithActorData_eventInit_Parms), Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics
	{
		struct AICharacterBehaviourInteractWithActorData_eventWatchGameEventType_Parms
		{
			FGameplayTag gameEventType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActorData_eventWatchGameEventType_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData, nullptr, "WatchGameEventType", nullptr, nullptr, sizeof(AICharacterBehaviourInteractWithActorData_eventWatchGameEventType_Parms), Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics
	{
		struct AICharacterBehaviourInteractWithActorData_eventWatchGameEventTypes_Parms
		{
			TArray<FGameplayTag> gameEventTypes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameEventTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::NewProp_gameEventTypes = { "gameEventTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterBehaviourInteractWithActorData_eventWatchGameEventTypes_Parms, gameEventTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::NewProp_gameEventTypes_Inner = { "gameEventTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::NewProp_gameEventTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::NewProp_gameEventTypes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData, nullptr, "WatchGameEventTypes", nullptr, nullptr, sizeof(AICharacterBehaviourInteractWithActorData_eventWatchGameEventTypes_Parms), Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_NoRegister()
	{
		return UAICharacterBehaviourInteractWithActorData::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePathfinding_MetaData[];
#endif
		static void NewProp_UsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePathfinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterMovementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_Init, "Init" }, // 3621312633
		{ &Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventType, "WatchGameEventType" }, // 572527211
		{ &Z_Construct_UFunction_UAICharacterBehaviourInteractWithActorData_WatchGameEventTypes, "WatchGameEventTypes" }, // 3663973336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AICharacterBehaviourInteractWithActorData.h" },
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	void Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding_SetBit(void* Obj)
	{
		((UAICharacterBehaviourInteractWithActorData*)Obj)->UsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding = { "UsePathfinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAICharacterBehaviourInteractWithActorData), &Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType = { "CharacterMovementType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterBehaviourInteractWithActorData, CharacterMovementType), Z_Construct_UEnum_DeadByDaylight_ECharacterMovementTypes, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAICharacterBehaviourInteractWithActorData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_UsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_CharacterMovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterBehaviourInteractWithActorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::ClassParams = {
		&UAICharacterBehaviourInteractWithActorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterBehaviourInteractWithActorData, 1423864708);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterBehaviourInteractWithActorData>()
	{
		return UAICharacterBehaviourInteractWithActorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterBehaviourInteractWithActorData(Z_Construct_UClass_UAICharacterBehaviourInteractWithActorData, &UAICharacterBehaviourInteractWithActorData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterBehaviourInteractWithActorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterBehaviourInteractWithActorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
