// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26IsSurvivorInRangeOfAnyIdleCrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26IsSurvivorInRangeOfAnyIdleCrow() {}
// Cross Module References
	THEK26_API UFunction* Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UClass* Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_AK26CrowProjectile_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics
	{
		struct _Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms
		{
			bool isTrue;
		};
		static void NewProp_isTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTrue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::NewProp_isTrue_SetBit(void* Obj)
	{
		((_Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms*)Obj)->isTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::NewProp_isTrue = { "isTrue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms), &Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::NewProp_isTrue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::NewProp_isTrue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheK26, nullptr, "K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms), Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnCrowAddedToPool)
	{
		P_GET_OBJECT(AActor,Z_Param_crowProjectileActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCrowAddedToPool(Z_Param_crowProjectileActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnCrowProjectileStateChanged)
	{
		P_GET_OBJECT(AK26CrowProjectile,Z_Param_crowProjectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnCrowProjectileStateChanged(Z_Param_crowProjectile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_SetVariables)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_trackedSurvivor);
		P_GET_OBJECT(UAuthoritativeActorPoolComponent,Z_Param_authoritativeActorPoolComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetVariables(Z_Param_trackedSurvivor,Z_Param_authoritativeActorPoolComponent,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26IsSurvivorInRangeOfAnyIdleCrow::execMulticast_SetIsTrue)
	{
		P_GET_UBOOL(Z_Param_isTrue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsTrue_Implementation(Z_Param_isTrue);
		P_NATIVE_END;
	}
	static FName NAME_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue = FName(TEXT("Multicast_SetIsTrue"));
	void UK26IsSurvivorInRangeOfAnyIdleCrow::Multicast_SetIsTrue(bool isTrue)
	{
		K26IsSurvivorInRangeOfAnyIdleCrow_eventMulticast_SetIsTrue_Parms Parms;
		Parms.isTrue=isTrue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue),&Parms);
	}
	void UK26IsSurvivorInRangeOfAnyIdleCrow::StaticRegisterNativesUK26IsSurvivorInRangeOfAnyIdleCrow()
	{
		UClass* Class = UK26IsSurvivorInRangeOfAnyIdleCrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnCrowAddedToPool", &UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnCrowAddedToPool },
			{ "Authority_OnCrowProjectileStateChanged", &UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnCrowProjectileStateChanged },
			{ "Authority_OnInRangeChanged", &UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_OnInRangeChanged },
			{ "Authority_SetVariables", &UK26IsSurvivorInRangeOfAnyIdleCrow::execAuthority_SetVariables },
			{ "Multicast_SetIsTrue", &UK26IsSurvivorInRangeOfAnyIdleCrow::execMulticast_SetIsTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics
	{
		struct K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowAddedToPool_Parms
		{
			AActor* crowProjectileActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_crowProjectileActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::NewProp_crowProjectileActor = { "crowProjectileActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowAddedToPool_Parms, crowProjectileActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::NewProp_crowProjectileActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, nullptr, "Authority_OnCrowAddedToPool", nullptr, nullptr, sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowAddedToPool_Parms), Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics
	{
		struct K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowProjectileStateChanged_Parms
		{
			AK26CrowProjectile* crowProjectile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_crowProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::NewProp_crowProjectile = { "crowProjectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowProjectileStateChanged_Parms, crowProjectile), Z_Construct_UClass_AK26CrowProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::NewProp_crowProjectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, nullptr, "Authority_OnCrowProjectileStateChanged", nullptr, nullptr, sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnCrowProjectileStateChanged_Parms), Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics
	{
		struct K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnInRangeChanged_Parms
		{
			bool inRange;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics
	{
		struct K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_SetVariables_Parms
		{
			ACamperPlayer* trackedSurvivor;
			UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent;
			float range;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_authoritativeActorPoolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_authoritativeActorPoolComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_SetVariables_Parms, range), METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_authoritativeActorPoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_authoritativeActorPoolComponent = { "authoritativeActorPoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_SetVariables_Parms, authoritativeActorPoolComponent), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_authoritativeActorPoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_authoritativeActorPoolComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_trackedSurvivor = { "trackedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_SetVariables_Parms, trackedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_authoritativeActorPoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::NewProp_trackedSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, nullptr, "Authority_SetVariables", nullptr, nullptr, sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventAuthority_SetVariables_Parms), Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTrue_MetaData[];
#endif
		static void NewProp_isTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTrue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue_SetBit(void* Obj)
	{
		((K26IsSurvivorInRangeOfAnyIdleCrow_eventMulticast_SetIsTrue_Parms*)Obj)->isTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue = { "isTrue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventMulticast_SetIsTrue_Parms), &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::NewProp_isTrue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, nullptr, "Multicast_SetIsTrue", nullptr, nullptr, sizeof(K26IsSurvivorInRangeOfAnyIdleCrow_eventMulticast_SetIsTrue_Parms), Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_NoRegister()
	{
		return UK26IsSurvivorInRangeOfAnyIdleCrow::StaticClass();
	}
	struct Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsTrueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsTrueChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool, "Authority_OnCrowAddedToPool" }, // 3375284048
		{ &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged, "Authority_OnCrowProjectileStateChanged" }, // 398168044
		{ &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 548490341
		{ &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables, "Authority_SetVariables" }, // 212445258
		{ &Z_Construct_UFunction_UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue, "Multicast_SetIsTrue" }, // 430842294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26IsSurvivorInRangeOfAnyIdleCrow.h" },
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::NewProp_OnIsTrueChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26IsSurvivorInRangeOfAnyIdleCrow.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::NewProp_OnIsTrueChanged = { "OnIsTrueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26IsSurvivorInRangeOfAnyIdleCrow, OnIsTrueChanged), Z_Construct_UDelegateFunction_TheK26_K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::NewProp_OnIsTrueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::NewProp_OnIsTrueChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::NewProp_OnIsTrueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26IsSurvivorInRangeOfAnyIdleCrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::ClassParams = {
		&UK26IsSurvivorInRangeOfAnyIdleCrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26IsSurvivorInRangeOfAnyIdleCrow, 1310703361);
	template<> THEK26_API UClass* StaticClass<UK26IsSurvivorInRangeOfAnyIdleCrow>()
	{
		return UK26IsSurvivorInRangeOfAnyIdleCrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow(Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow, &UK26IsSurvivorInRangeOfAnyIdleCrow::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26IsSurvivorInRangeOfAnyIdleCrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26IsSurvivorInRangeOfAnyIdleCrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
