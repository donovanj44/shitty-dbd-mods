// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainTargetterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainTargetterComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainTargetterComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainTargetterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UK25SurvivorChainTargetterComponent::execAuthority_OnSurvivorHealthStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_currentDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorHealthStateChanged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_currentDamageState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25SurvivorChainTargetterComponent::execMulticast_DebugPositionFind)
	{
		P_GET_STRUCT(FVector,Z_Param_startSweepPosition);
		P_GET_STRUCT(FVector,Z_Param_endSweepPosition);
		P_GET_UBOOL(Z_Param_hasFoundPosition);
		P_GET_STRUCT(FVector,Z_Param_foundPosition);
		P_GET_UBOOL(Z_Param_hasFoundCollision);
		P_GET_STRUCT(FVector,Z_Param_collisionPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugPositionFind_Implementation(Z_Param_startSweepPosition,Z_Param_endSweepPosition,Z_Param_hasFoundPosition,Z_Param_foundPosition,Z_Param_hasFoundCollision,Z_Param_collisionPosition);
		P_NATIVE_END;
	}
	static FName NAME_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind = FName(TEXT("Multicast_DebugPositionFind"));
	void UK25SurvivorChainTargetterComponent::Multicast_DebugPositionFind(FVector const& startSweepPosition, FVector const& endSweepPosition, bool hasFoundPosition, FVector const& foundPosition, bool hasFoundCollision, FVector const& collisionPosition) const
	{
		K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms Parms;
		Parms.startSweepPosition=startSweepPosition;
		Parms.endSweepPosition=endSweepPosition;
		Parms.hasFoundPosition=hasFoundPosition ? true : false;
		Parms.foundPosition=foundPosition;
		Parms.hasFoundCollision=hasFoundCollision ? true : false;
		Parms.collisionPosition=collisionPosition;
		const_cast<UK25SurvivorChainTargetterComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind),&Parms);
	}
	void UK25SurvivorChainTargetterComponent::StaticRegisterNativesUK25SurvivorChainTargetterComponent()
	{
		UClass* Class = UK25SurvivorChainTargetterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorHealthStateChanged", &UK25SurvivorChainTargetterComponent::execAuthority_OnSurvivorHealthStateChanged },
			{ "Multicast_DebugPositionFind", &UK25SurvivorChainTargetterComponent::execMulticast_DebugPositionFind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics
	{
		struct K25SurvivorChainTargetterComponent_eventAuthority_OnSurvivorHealthStateChanged_Parms
		{
			ECamperDamageState oldDamageState;
			ECamperDamageState currentDamageState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentDamageState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_currentDamageState = { "currentDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventAuthority_OnSurvivorHealthStateChanged_Parms, currentDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_currentDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventAuthority_OnSurvivorHealthStateChanged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_currentDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_currentDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SurvivorChainTargetterComponent, nullptr, "Authority_OnSurvivorHealthStateChanged", nullptr, nullptr, sizeof(K25SurvivorChainTargetterComponent_eventAuthority_OnSurvivorHealthStateChanged_Parms), Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collisionPosition;
		static void NewProp_hasFoundCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasFoundCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foundPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_foundPosition;
		static void NewProp_hasFoundPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasFoundPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endSweepPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endSweepPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startSweepPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startSweepPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_collisionPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_collisionPosition = { "collisionPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms, collisionPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_collisionPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_collisionPosition_MetaData)) };
	void Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundCollision_SetBit(void* Obj)
	{
		((K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms*)Obj)->hasFoundCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundCollision = { "hasFoundCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms), &Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_foundPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_foundPosition = { "foundPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms, foundPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_foundPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_foundPosition_MetaData)) };
	void Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundPosition_SetBit(void* Obj)
	{
		((K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms*)Obj)->hasFoundPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundPosition = { "hasFoundPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms), &Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_endSweepPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_endSweepPosition = { "endSweepPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms, endSweepPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_endSweepPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_endSweepPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_startSweepPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_startSweepPosition = { "startSweepPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms, startSweepPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_startSweepPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_startSweepPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_collisionPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_foundPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_hasFoundPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_endSweepPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::NewProp_startSweepPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SurvivorChainTargetterComponent, nullptr, "Multicast_DebugPositionFind", nullptr, nullptr, sizeof(K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms), Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25SurvivorChainTargetterComponent_NoRegister()
	{
		return UK25SurvivorChainTargetterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxNumberOfChainRetries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxNumberOfChainRetries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfPositionFindingTries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfPositionFindingTries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sphereCastRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sphereCastRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minimumSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenQueuedChainsLaunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeBetweenQueuedChainsLaunch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged, "Authority_OnSurvivorHealthStateChanged" }, // 3764425835
		{ &Z_Construct_UFunction_UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind, "Multicast_DebugPositionFind" }, // 2054896687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25SurvivorChainTargetterComponent.h" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maxNumberOfChainRetries_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maxNumberOfChainRetries = { "_maxNumberOfChainRetries", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _maxNumberOfChainRetries), METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maxNumberOfChainRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maxNumberOfChainRetries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__numberOfPositionFindingTries_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__numberOfPositionFindingTries = { "_numberOfPositionFindingTries", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _numberOfPositionFindingTries), METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__numberOfPositionFindingTries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__numberOfPositionFindingTries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__sphereCastRadius_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__sphereCastRadius = { "_sphereCastRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _sphereCastRadius), METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__sphereCastRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__sphereCastRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maximumSpawnDistance_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maximumSpawnDistance = { "_maximumSpawnDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _maximumSpawnDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maximumSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maximumSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__minimumSpawnDistance_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__minimumSpawnDistance = { "_minimumSpawnDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _minimumSpawnDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__minimumSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__minimumSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt = { "_timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt), METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunch_MetaData[] = {
		{ "Category", "K25SurvivorChainTargetterComponent" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainTargetterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunch = { "_timeBetweenQueuedChainsLaunch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _timeBetweenQueuedChainsLaunch), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maxNumberOfChainRetries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__numberOfPositionFindingTries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__sphereCastRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__maximumSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__minimumSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::NewProp__timeBetweenQueuedChainsLaunch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25SurvivorChainTargetterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::ClassParams = {
		&UK25SurvivorChainTargetterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25SurvivorChainTargetterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25SurvivorChainTargetterComponent, 1812573543);
	template<> THEK25_API UClass* StaticClass<UK25SurvivorChainTargetterComponent>()
	{
		return UK25SurvivorChainTargetterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25SurvivorChainTargetterComponent(Z_Construct_UClass_UK25SurvivorChainTargetterComponent, &UK25SurvivorChainTargetterComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25SurvivorChainTargetterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25SurvivorChainTargetterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
