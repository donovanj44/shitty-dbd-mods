// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25Chain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25Chain() {}
// Cross Module References
	THEK25_API UFunction* Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainState();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics
	{
		struct _Script_TheK25_eventK25ChainOnAcquiredChanged_Parms
		{
			bool acquired;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acquired_MetaData[];
#endif
		static void NewProp_acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit(void* Obj)
	{
		((_Script_TheK25_eventK25ChainOnAcquiredChanged_Parms*)Obj)->acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired = { "acquired", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TheK25_eventK25ChainOnAcquiredChanged_Parms), &Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::NewProp_acquired,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheK25, nullptr, "K25ChainOnAcquiredChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TheK25_eventK25ChainOnAcquiredChanged_Parms), Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AK25Chain::execGetChainEndLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainEndLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Chain::execGetChainStartLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainStartLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Chain::execGetSurvivorChainAttachmentAnchor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25SurvivorChainAttachmentAnchor**)Z_Param__Result=P_THIS->GetSurvivorChainAttachmentAnchor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Chain::execIsAttachedToControlledProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachedToControlledProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Chain::execSetInstancedMeshComponent)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_instancedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstancedMeshComponent(Z_Param_instancedMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Chain::execSetSplineComponent)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineComponent(Z_Param_component);
		P_NATIVE_END;
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainAppears = FName(TEXT("Cosmetic_OnChainAppears"));
	void AK25Chain::Cosmetic_OnChainAppears()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainAppears),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainAttachedToSurvivor = FName(TEXT("Cosmetic_OnChainAttachedToSurvivor"));
	void AK25Chain::Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint)
	{
		K25Chain_eventCosmetic_OnChainAttachedToSurvivor_Parms Parms;
		Parms.wasReachingSurvivorAnchorPoint=wasReachingSurvivorAnchorPoint ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainAttachedToSurvivor),&Parms);
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor = FName(TEXT("Cosmetic_OnChainDetachedFromSurvivor"));
	void AK25Chain::Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason)
	{
		K25Chain_eventCosmetic_OnChainDetachedFromSurvivor_Parms Parms;
		Parms.detachmentReason=detachmentReason;
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor),&Parms);
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainDisappears = FName(TEXT("Cosmetic_OnChainDisappears"));
	void AK25Chain::Cosmetic_OnChainDisappears()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainDisappears),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainStartedToReelback = FName(TEXT("Cosmetic_OnChainStartedToReelback"));
	void AK25Chain::Cosmetic_OnChainStartedToReelback()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainStartedToReelback),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile = FName(TEXT("Cosmetic_OnChainUnleashedWithProjectile"));
	void AK25Chain::Cosmetic_OnChainUnleashedWithProjectile()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX = FName(TEXT("Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX"));
	void AK25Chain::Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX = FName(TEXT("Cosmetic_OnSurvivorStartedRemovingChainSFX"));
	void AK25Chain::Cosmetic_OnSurvivorStartedRemovingChainSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX),NULL);
	}
	static FName NAME_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX = FName(TEXT("Cosmetic_OnSurvivorStoppedRemovingChainSFX"));
	void AK25Chain::Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction)
	{
		K25Chain_eventCosmetic_OnSurvivorStoppedRemovingChainSFX_Parms Parms;
		Parms.hasRemovedChainDueToInteraction=hasRemovedChainDueToInteraction ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX),&Parms);
	}
	void AK25Chain::StaticRegisterNativesAK25Chain()
	{
		UClass* Class = AK25Chain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainEndLocation", &AK25Chain::execGetChainEndLocation },
			{ "GetChainStartLocation", &AK25Chain::execGetChainStartLocation },
			{ "GetSurvivorChainAttachmentAnchor", &AK25Chain::execGetSurvivorChainAttachmentAnchor },
			{ "IsAttachedToControlledProjectile", &AK25Chain::execIsAttachedToControlledProjectile },
			{ "SetInstancedMeshComponent", &AK25Chain::execSetInstancedMeshComponent },
			{ "SetSplineComponent", &AK25Chain::execSetSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainAppears", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics
	{
		static void NewProp_wasReachingSurvivorAnchorPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasReachingSurvivorAnchorPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::NewProp_wasReachingSurvivorAnchorPoint_SetBit(void* Obj)
	{
		((K25Chain_eventCosmetic_OnChainAttachedToSurvivor_Parms*)Obj)->wasReachingSurvivorAnchorPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::NewProp_wasReachingSurvivorAnchorPoint = { "wasReachingSurvivorAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Chain_eventCosmetic_OnChainAttachedToSurvivor_Parms), &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::NewProp_wasReachingSurvivorAnchorPoint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::NewProp_wasReachingSurvivorAnchorPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainAttachedToSurvivor", nullptr, nullptr, sizeof(K25Chain_eventCosmetic_OnChainAttachedToSurvivor_Parms), Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_detachmentReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_detachmentReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::NewProp_detachmentReason = { "detachmentReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventCosmetic_OnChainDetachedFromSurvivor_Parms, detachmentReason), Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::NewProp_detachmentReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::NewProp_detachmentReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::NewProp_detachmentReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainDetachedFromSurvivor", nullptr, nullptr, sizeof(K25Chain_eventCosmetic_OnChainDetachedFromSurvivor_Parms), Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainDisappears", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainStartedToReelback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnChainUnleashedWithProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnSurvivorStartedRemovingChainSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics
	{
		static void NewProp_hasRemovedChainDueToInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasRemovedChainDueToInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::NewProp_hasRemovedChainDueToInteraction_SetBit(void* Obj)
	{
		((K25Chain_eventCosmetic_OnSurvivorStoppedRemovingChainSFX_Parms*)Obj)->hasRemovedChainDueToInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::NewProp_hasRemovedChainDueToInteraction = { "hasRemovedChainDueToInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Chain_eventCosmetic_OnSurvivorStoppedRemovingChainSFX_Parms), &Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::NewProp_hasRemovedChainDueToInteraction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::NewProp_hasRemovedChainDueToInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "Cosmetic_OnSurvivorStoppedRemovingChainSFX", nullptr, nullptr, sizeof(K25Chain_eventCosmetic_OnSurvivorStoppedRemovingChainSFX_Parms), Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics
	{
		struct K25Chain_eventGetChainEndLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventGetChainEndLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "GetChainEndLocation", nullptr, nullptr, sizeof(K25Chain_eventGetChainEndLocation_Parms), Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_GetChainEndLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_GetChainEndLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics
	{
		struct K25Chain_eventGetChainStartLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventGetChainStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "GetChainStartLocation", nullptr, nullptr, sizeof(K25Chain_eventGetChainStartLocation_Parms), Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_GetChainStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_GetChainStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics
	{
		struct K25Chain_eventGetSurvivorChainAttachmentAnchor_Parms
		{
			AK25SurvivorChainAttachmentAnchor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventGetSurvivorChainAttachmentAnchor_Parms, ReturnValue), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "GetSurvivorChainAttachmentAnchor", nullptr, nullptr, sizeof(K25Chain_eventGetSurvivorChainAttachmentAnchor_Parms), Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics
	{
		struct K25Chain_eventIsAttachedToControlledProjectile_Parms
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
	void Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K25Chain_eventIsAttachedToControlledProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Chain_eventIsAttachedToControlledProjectile_Parms), &Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "IsAttachedToControlledProjectile", nullptr, nullptr, sizeof(K25Chain_eventIsAttachedToControlledProjectile_Parms), Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics
	{
		struct K25Chain_eventSetInstancedMeshComponent_Parms
		{
			UInstancedStaticMeshComponent* instancedMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instancedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instancedMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::NewProp_instancedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::NewProp_instancedMesh = { "instancedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventSetInstancedMeshComponent_Parms, instancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::NewProp_instancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::NewProp_instancedMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::NewProp_instancedMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "SetInstancedMeshComponent", nullptr, nullptr, sizeof(K25Chain_eventSetInstancedMeshComponent_Parms), Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics
	{
		struct K25Chain_eventSetSplineComponent_Parms
		{
			USplineComponent* component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Chain_eventSetSplineComponent_Parms, component), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Chain, nullptr, "SetSplineComponent", nullptr, nullptr, sizeof(K25Chain_eventSetSplineComponent_Parms), Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Chain_SetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Chain_SetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25Chain_NoRegister()
	{
		return AK25Chain::StaticClass();
	}
	struct Z_Construct_UClass_AK25Chain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainCreationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__chainCreationStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__chainCreationStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forcedPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__forcedPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__forcedPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reachSurvivorAnchorPositionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reachSurvivorAnchorPositionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelbackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelbackTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__curveOffsetStrengthTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__curveOffsetStrengthTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__chainState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__chainState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainCurveOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainCurveOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentInfluenceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentInfluenceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainInstancedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainInstancedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetAnchorToReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__targetAnchorToReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorAnchorAttachedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__survivorAnchorAttachedTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileAttachedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__projectileAttachedTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelbackStartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelbackStartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelBackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelBackPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainStartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainStartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sphereTraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sphereTraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAcquiredFromPool_MetaData[];
#endif
		static void NewProp__isAcquiredFromPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAcquiredFromPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentChainPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currentChainPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentChainPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainOffsetTimerLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chainOffsetTimerLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reachingSurvivorAnchorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__reachingSurvivorAnchorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__quickChainOffsetTimerLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__quickChainOffsetTimerLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainInstanceSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chainInstanceSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelbackChainOffsetMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__reelbackChainOffsetMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelbackChainOffsetMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__reelbackChainOffsetMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainOffsetMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chainOffsetMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainOffsetMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chainOffsetMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelingBackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reelingBackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offsetMultiplierInfluenceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__offsetMultiplierInfluenceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reelbackInfluenceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__reelbackInfluenceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedToProjectileInfluenceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attachedToProjectileInfluenceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAcquiredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAcquiredChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25Chain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25Chain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAppears, "Cosmetic_OnChainAppears" }, // 695845251
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainAttachedToSurvivor, "Cosmetic_OnChainAttachedToSurvivor" }, // 140359724
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDetachedFromSurvivor, "Cosmetic_OnChainDetachedFromSurvivor" }, // 3525323692
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainDisappears, "Cosmetic_OnChainDisappears" }, // 1226214067
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainStartedToReelback, "Cosmetic_OnChainStartedToReelback" }, // 2062370137
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnChainUnleashedWithProjectile, "Cosmetic_OnChainUnleashedWithProjectile" }, // 819991458
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX, "Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX" }, // 3454004035
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX, "Cosmetic_OnSurvivorStartedRemovingChainSFX" }, // 1535492179
		{ &Z_Construct_UFunction_AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX, "Cosmetic_OnSurvivorStoppedRemovingChainSFX" }, // 915465396
		{ &Z_Construct_UFunction_AK25Chain_GetChainEndLocation, "GetChainEndLocation" }, // 3130487520
		{ &Z_Construct_UFunction_AK25Chain_GetChainStartLocation, "GetChainStartLocation" }, // 2518785208
		{ &Z_Construct_UFunction_AK25Chain_GetSurvivorChainAttachmentAnchor, "GetSurvivorChainAttachmentAnchor" }, // 856275576
		{ &Z_Construct_UFunction_AK25Chain_IsAttachedToControlledProjectile, "IsAttachedToControlledProjectile" }, // 2885600753
		{ &Z_Construct_UFunction_AK25Chain_SetInstancedMeshComponent, "SetInstancedMeshComponent" }, // 3905727998
		{ &Z_Construct_UFunction_AK25Chain_SetSplineComponent, "SetSplineComponent" }, // 2829895684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25Chain.h" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy = { "_chainCreationStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainCreationStrategy), Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions = { "_forcedPositions", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _forcedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions_Inner = { "_forcedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reachSurvivorAnchorPositionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reachSurvivorAnchorPositionTimer = { "_reachSurvivorAnchorPositionTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reachSurvivorAnchorPositionTimer), Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reachSurvivorAnchorPositionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reachSurvivorAnchorPositionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackTimer = { "_reelbackTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelbackTimer), Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__curveOffsetStrengthTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__curveOffsetStrengthTimer = { "_curveOffsetStrengthTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _curveOffsetStrengthTimer), Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__curveOffsetStrengthTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__curveOffsetStrengthTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState = { "_chainState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainState), Z_Construct_UEnum_TheK25_EK25ChainState, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCurveOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCurveOffset = { "_chainCurveOffset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainCurveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCurveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCurveOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__currentInfluenceCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__currentInfluenceCurve = { "_currentInfluenceCurve", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _currentInfluenceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__currentInfluenceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__currentInfluenceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstancedMesh_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstancedMesh = { "_chainInstancedMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstancedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainSplineComponent_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainSplineComponent = { "_chainSplineComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__targetAnchorToReach_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__targetAnchorToReach = { "_targetAnchorToReach", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _targetAnchorToReach), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__targetAnchorToReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__targetAnchorToReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__survivorAnchorAttachedTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__survivorAnchorAttachedTo = { "_survivorAnchorAttachedTo", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _survivorAnchorAttachedTo), Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__survivorAnchorAttachedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__survivorAnchorAttachedTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__projectileAttachedTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__projectileAttachedTo = { "_projectileAttachedTo", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _projectileAttachedTo), Z_Construct_UClass_AK25Projectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__projectileAttachedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__projectileAttachedTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackStartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackStartPosition = { "_reelbackStartPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelbackStartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackStartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackStartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelBackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelBackPosition = { "_reelBackPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelBackPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelBackPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelBackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainStartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainStartPosition = { "_chainStartPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainStartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainStartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainStartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__sphereTraceRadius_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__sphereTraceRadius = { "_sphereTraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _sphereTraceRadius), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__sphereTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__sphereTraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	void Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool_SetBit(void* Obj)
	{
		((AK25Chain*)Obj)->_isAcquiredFromPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool = { "_isAcquiredFromPool", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25Chain), &Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints = { "_currentChainPoints", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _currentChainPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints_Inner = { "_currentChainPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetTimerLength_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetTimerLength = { "_chainOffsetTimerLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainOffsetTimerLength), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetTimerLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetTimerLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainScale_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainScale = { "_chainScale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reachingSurvivorAnchorTime_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reachingSurvivorAnchorTime = { "_reachingSurvivorAnchorTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reachingSurvivorAnchorTime), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reachingSurvivorAnchorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reachingSurvivorAnchorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__quickChainOffsetTimerLength_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__quickChainOffsetTimerLength = { "_quickChainOffsetTimerLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _quickChainOffsetTimerLength), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__quickChainOffsetTimerLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__quickChainOffsetTimerLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstanceSpacing_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstanceSpacing = { "_chainInstanceSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainInstanceSpacing), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstanceSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstanceSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMaxValue_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMaxValue = { "_reelbackChainOffsetMaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelbackChainOffsetMaxValue), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMinValue_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMinValue = { "_reelbackChainOffsetMinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelbackChainOffsetMinValue), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMaxValue_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMaxValue = { "_chainOffsetMaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainOffsetMaxValue), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMinValue_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMinValue = { "_chainOffsetMinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _chainOffsetMinValue), METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelingBackSpeed_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelingBackSpeed = { "_reelingBackSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelingBackSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelingBackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelingBackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__offsetMultiplierInfluenceCurve_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__offsetMultiplierInfluenceCurve = { "_offsetMultiplierInfluenceCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _offsetMultiplierInfluenceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__offsetMultiplierInfluenceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__offsetMultiplierInfluenceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackInfluenceCurve_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackInfluenceCurve = { "_reelbackInfluenceCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _reelbackInfluenceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackInfluenceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackInfluenceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp__attachedToProjectileInfluenceCurve_MetaData[] = {
		{ "Category", "K25Chain" },
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp__attachedToProjectileInfluenceCurve = { "_attachedToProjectileInfluenceCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, _attachedToProjectileInfluenceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp__attachedToProjectileInfluenceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp__attachedToProjectileInfluenceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Chain_Statics::NewProp_OnAcquiredChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Chain.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AK25Chain_Statics::NewProp_OnAcquiredChanged = { "OnAcquiredChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Chain, OnAcquiredChanged), Z_Construct_UDelegateFunction_TheK25_K25ChainOnAcquiredChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::NewProp_OnAcquiredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::NewProp_OnAcquiredChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25Chain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCreationStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__forcedPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reachSurvivorAnchorPositionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__curveOffsetStrengthTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainCurveOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__currentInfluenceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstancedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__targetAnchorToReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__survivorAnchorAttachedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__projectileAttachedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelBackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__sphereTraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__isAcquiredFromPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__currentChainPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetTimerLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reachingSurvivorAnchorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__quickChainOffsetTimerLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainInstanceSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackChainOffsetMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__chainOffsetMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelingBackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__offsetMultiplierInfluenceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__reelbackInfluenceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp__attachedToProjectileInfluenceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Chain_Statics::NewProp_OnAcquiredChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AK25Chain_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolableActor_NoRegister, (int32)VTABLE_OFFSET(AK25Chain, IPoolableActor), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25Chain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25Chain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25Chain_Statics::ClassParams = {
		&AK25Chain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25Chain_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25Chain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Chain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25Chain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25Chain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25Chain, 275911630);
	template<> THEK25_API UClass* StaticClass<AK25Chain>()
	{
		return AK25Chain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25Chain(Z_Construct_UClass_AK25Chain, &AK25Chain::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25Chain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25Chain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
