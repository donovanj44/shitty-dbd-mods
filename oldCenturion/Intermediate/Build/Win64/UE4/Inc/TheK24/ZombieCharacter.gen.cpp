// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCharacter() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFirecrackerEffectData();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightComponent_NoRegister();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAuthoritativeMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_NoRegister();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieGender();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPositionRecorderComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieBlindableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDynamicGrassEffectorInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlashableInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPushableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZombieCharacter::execAuthority_DeactivateZombieAndStartRespawnTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_DeactivateZombieAndStartRespawnTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execAuthority_OnFirecrackerInRangeBegin)
	{
		P_GET_STRUCT_REF(FFirecrackerEffectData,Z_Param_Out_effectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFirecrackerInRangeBegin(Z_Param_Out_effectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execAuthority_OnFlashlightAdded)
	{
		P_GET_OBJECT(UFlashlightComponent,Z_Param_flashlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFlashlightAdded(Z_Param_flashlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execAuthority_OnFlashlightRemoved)
	{
		P_GET_OBJECT(UFlashlightComponent,Z_Param_flashlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFlashlightRemoved(Z_Param_flashlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execAuthority_OnZombieStateChanged)
	{
		P_GET_ENUM(EZombieState,Z_Param_zombieState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnZombieStateChanged(EZombieState(Z_Param_zombieState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execGetAudioSwitchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAudioSwitchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execGetAuthoritativeMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAuthoritativeMovementComponent**)Z_Param__Result=P_THIS->GetAuthoritativeMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execGetOtherCharactersVerticalCollisionsHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOtherCharactersVerticalCollisionsHandler**)Z_Param__Result=P_THIS->GetOtherCharactersVerticalCollisionsHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execGetZombieGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EZombieGender*)Z_Param__Result=P_THIS->GetZombieGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execMulticast_ZombieKilledByKillerCosmetic)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ZombieKilledByKillerCosmetic_Implementation(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execOnBeginOverlapZombieAttackDetector)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapZombieAttackDetector(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execOnEndOverlapZombieAttackDetector)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapZombieAttackDetector(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execOnRep_ZombieGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ZombieGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execOnRep_ZombieState)
	{
		P_GET_ENUM(EZombieState,Z_Param_previousState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ZombieState(EZombieState(Z_Param_previousState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieCharacter::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	static FName NAME_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic = FName(TEXT("Multicast_ZombieKilledByKillerCosmetic"));
	void AZombieCharacter::Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType)
	{
		ZombieCharacter_eventMulticast_ZombieKilledByKillerCosmetic_Parms Parms;
		Parms.attackType=attackType;
		ProcessEvent(FindFunctionChecked(NAME_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic),&Parms);
	}
	static FName NAME_AZombieCharacter_OnFemaleGenderSet_Cosmetic = FName(TEXT("OnFemaleGenderSet_Cosmetic"));
	void AZombieCharacter::OnFemaleGenderSet_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AZombieCharacter_OnFemaleGenderSet_Cosmetic),NULL);
	}
	static FName NAME_AZombieCharacter_OnZombieStateChanged_Cosmetic = FName(TEXT("OnZombieStateChanged_Cosmetic"));
	void AZombieCharacter::OnZombieStateChanged_Cosmetic(EZombieState zombieState)
	{
		ZombieCharacter_eventOnZombieStateChanged_Cosmetic_Parms Parms;
		Parms.zombieState=zombieState;
		ProcessEvent(FindFunctionChecked(NAME_AZombieCharacter_OnZombieStateChanged_Cosmetic),&Parms);
	}
	static FName NAME_AZombieCharacter_SetCharacterActive_Cosmetic = FName(TEXT("SetCharacterActive_Cosmetic"));
	void AZombieCharacter::SetCharacterActive_Cosmetic(bool value)
	{
		ZombieCharacter_eventSetCharacterActive_Cosmetic_Parms Parms;
		Parms.value=value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AZombieCharacter_SetCharacterActive_Cosmetic),&Parms);
	}
	static FName NAME_AZombieCharacter_ZombieKilledByKiller_Cosmetic = FName(TEXT("ZombieKilledByKiller_Cosmetic"));
	void AZombieCharacter::ZombieKilledByKiller_Cosmetic(EAttackType attackType)
	{
		ZombieCharacter_eventZombieKilledByKiller_Cosmetic_Parms Parms;
		Parms.attackType=attackType;
		ProcessEvent(FindFunctionChecked(NAME_AZombieCharacter_ZombieKilledByKiller_Cosmetic),&Parms);
	}
	void AZombieCharacter::StaticRegisterNativesAZombieCharacter()
	{
		UClass* Class = AZombieCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_DeactivateZombieAndStartRespawnTimer", &AZombieCharacter::execAuthority_DeactivateZombieAndStartRespawnTimer },
			{ "Authority_OnFirecrackerInRangeBegin", &AZombieCharacter::execAuthority_OnFirecrackerInRangeBegin },
			{ "Authority_OnFlashlightAdded", &AZombieCharacter::execAuthority_OnFlashlightAdded },
			{ "Authority_OnFlashlightRemoved", &AZombieCharacter::execAuthority_OnFlashlightRemoved },
			{ "Authority_OnZombieStateChanged", &AZombieCharacter::execAuthority_OnZombieStateChanged },
			{ "GetAudioSwitchState", &AZombieCharacter::execGetAudioSwitchState },
			{ "GetAuthoritativeMovementComponent", &AZombieCharacter::execGetAuthoritativeMovementComponent },
			{ "GetOtherCharactersVerticalCollisionsHandler", &AZombieCharacter::execGetOtherCharactersVerticalCollisionsHandler },
			{ "GetZombieGender", &AZombieCharacter::execGetZombieGender },
			{ "Multicast_ZombieKilledByKillerCosmetic", &AZombieCharacter::execMulticast_ZombieKilledByKillerCosmetic },
			{ "OnBeginOverlapZombieAttackDetector", &AZombieCharacter::execOnBeginOverlapZombieAttackDetector },
			{ "OnEndOverlapZombieAttackDetector", &AZombieCharacter::execOnEndOverlapZombieAttackDetector },
			{ "OnRep_ZombieGender", &AZombieCharacter::execOnRep_ZombieGender },
			{ "OnRep_ZombieState", &AZombieCharacter::execOnRep_ZombieState },
			{ "OnSlasherSet", &AZombieCharacter::execOnSlasherSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Authority_DeactivateZombieAndStartRespawnTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics
	{
		struct ZombieCharacter_eventAuthority_OnFirecrackerInRangeBegin_Parms
		{
			FFirecrackerEffectData effectData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_effectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData = { "effectData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventAuthority_OnFirecrackerInRangeBegin_Parms, effectData), Z_Construct_UScriptStruct_FFirecrackerEffectData, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Authority_OnFirecrackerInRangeBegin", nullptr, nullptr, sizeof(ZombieCharacter_eventAuthority_OnFirecrackerInRangeBegin_Parms), Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics
	{
		struct ZombieCharacter_eventAuthority_OnFlashlightAdded_Parms
		{
			const UFlashlightComponent* flashlight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flashlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::NewProp_flashlight_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::NewProp_flashlight = { "flashlight", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventAuthority_OnFlashlightAdded_Parms, flashlight), Z_Construct_UClass_UFlashlightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::NewProp_flashlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::NewProp_flashlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::NewProp_flashlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Authority_OnFlashlightAdded", nullptr, nullptr, sizeof(ZombieCharacter_eventAuthority_OnFlashlightAdded_Parms), Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics
	{
		struct ZombieCharacter_eventAuthority_OnFlashlightRemoved_Parms
		{
			const UFlashlightComponent* flashlight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flashlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flashlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::NewProp_flashlight_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::NewProp_flashlight = { "flashlight", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventAuthority_OnFlashlightRemoved_Parms, flashlight), Z_Construct_UClass_UFlashlightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::NewProp_flashlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::NewProp_flashlight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::NewProp_flashlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Authority_OnFlashlightRemoved", nullptr, nullptr, sizeof(ZombieCharacter_eventAuthority_OnFlashlightRemoved_Parms), Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics
	{
		struct ZombieCharacter_eventAuthority_OnZombieStateChanged_Parms
		{
			EZombieState zombieState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_zombieState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_zombieState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::NewProp_zombieState = { "zombieState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventAuthority_OnZombieStateChanged_Parms, zombieState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::NewProp_zombieState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::NewProp_zombieState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::NewProp_zombieState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Authority_OnZombieStateChanged", nullptr, nullptr, sizeof(ZombieCharacter_eventAuthority_OnZombieStateChanged_Parms), Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics
	{
		struct ZombieCharacter_eventGetAudioSwitchState_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventGetAudioSwitchState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "GetAudioSwitchState", nullptr, nullptr, sizeof(ZombieCharacter_eventGetAudioSwitchState_Parms), Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics
	{
		struct ZombieCharacter_eventGetAuthoritativeMovementComponent_Parms
		{
			UAuthoritativeMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventGetAuthoritativeMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UAuthoritativeMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "GetAuthoritativeMovementComponent", nullptr, nullptr, sizeof(ZombieCharacter_eventGetAuthoritativeMovementComponent_Parms), Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics
	{
		struct ZombieCharacter_eventGetOtherCharactersVerticalCollisionsHandler_Parms
		{
			UOtherCharactersVerticalCollisionsHandler* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventGetOtherCharactersVerticalCollisionsHandler_Parms, ReturnValue), Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "GetOtherCharactersVerticalCollisionsHandler", nullptr, nullptr, sizeof(ZombieCharacter_eventGetOtherCharactersVerticalCollisionsHandler_Parms), Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics
	{
		struct ZombieCharacter_eventGetZombieGender_Parms
		{
			EZombieGender ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventGetZombieGender_Parms, ReturnValue), Z_Construct_UEnum_TheK24_EZombieGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "GetZombieGender", nullptr, nullptr, sizeof(ZombieCharacter_eventGetZombieGender_Parms), Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_GetZombieGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_GetZombieGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventMulticast_ZombieKilledByKillerCosmetic_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "Multicast_ZombieKilledByKillerCosmetic", nullptr, nullptr, sizeof(ZombieCharacter_eventMulticast_ZombieKilledByKillerCosmetic_Parms), Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics
	{
		struct ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms), &Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnBeginOverlapZombieAttackDetector", nullptr, nullptr, sizeof(ZombieCharacter_eventOnBeginOverlapZombieAttackDetector_Parms), Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics
	{
		struct ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnEndOverlapZombieAttackDetector", nullptr, nullptr, sizeof(ZombieCharacter_eventOnEndOverlapZombieAttackDetector_Parms), Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnFemaleGenderSet_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnRep_ZombieGender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics
	{
		struct ZombieCharacter_eventOnRep_ZombieState_Parms
		{
			EZombieState previousState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::NewProp_previousState = { "previousState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnRep_ZombieState_Parms, previousState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::NewProp_previousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::NewProp_previousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::NewProp_previousState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnRep_ZombieState", nullptr, nullptr, sizeof(ZombieCharacter_eventOnRep_ZombieState_Parms), Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics
	{
		struct ZombieCharacter_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(ZombieCharacter_eventOnSlasherSet_Parms), Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_zombieState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_zombieState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::NewProp_zombieState = { "zombieState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventOnZombieStateChanged_Cosmetic_Parms, zombieState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::NewProp_zombieState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::NewProp_zombieState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::NewProp_zombieState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "OnZombieStateChanged_Cosmetic", nullptr, nullptr, sizeof(ZombieCharacter_eventOnZombieStateChanged_Cosmetic_Parms), Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value_SetBit(void* Obj)
	{
		((ZombieCharacter_eventSetCharacterActive_Cosmetic_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombieCharacter_eventSetCharacterActive_Cosmetic_Parms), &Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "SetCharacterActive_Cosmetic", nullptr, nullptr, sizeof(ZombieCharacter_eventSetCharacterActive_Cosmetic_Parms), Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieCharacter_eventZombieKilledByKiller_Cosmetic_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieCharacter, nullptr, "ZombieKilledByKiller_Cosmetic", nullptr, nullptr, sizeof(ZombieCharacter_eventZombieKilledByKiller_Cosmetic_Parms), Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieCharacter_NoRegister()
	{
		return AZombieCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AZombieCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__afterInAirAttackCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__afterInAirAttackCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minFallHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minFallHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieStunnedCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__zombieStunnedCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ignoreActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherCharactersVerticalCollisionsHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherCharactersVerticalCollisionsHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authoritativeMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__authoritativeMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__positionRecorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__positionRecorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieStunBaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieStunBaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashLightableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashLightableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firecrackerEffectHandlerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firecrackerEffectHandlerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindingChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindingChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioSwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__audioSwitchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__femaleSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__femaleSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieGender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__zombieGender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__zombieGender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnPositionBehindGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__respawnPositionBehindGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieRespawnTimeKilledBySurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieRespawnTimeKilledBySurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieRespawnTimeKilledBySlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieRespawnTimeKilledBySlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__zombieState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__zombieState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackDamageZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attackDamageZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAttackDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombieAttackDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer, "Authority_DeactivateZombieAndStartRespawnTimer" }, // 2371283557
		{ &Z_Construct_UFunction_AZombieCharacter_Authority_OnFirecrackerInRangeBegin, "Authority_OnFirecrackerInRangeBegin" }, // 2773109518
		{ &Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightAdded, "Authority_OnFlashlightAdded" }, // 222095992
		{ &Z_Construct_UFunction_AZombieCharacter_Authority_OnFlashlightRemoved, "Authority_OnFlashlightRemoved" }, // 1500823392
		{ &Z_Construct_UFunction_AZombieCharacter_Authority_OnZombieStateChanged, "Authority_OnZombieStateChanged" }, // 2922955472
		{ &Z_Construct_UFunction_AZombieCharacter_GetAudioSwitchState, "GetAudioSwitchState" }, // 635818700
		{ &Z_Construct_UFunction_AZombieCharacter_GetAuthoritativeMovementComponent, "GetAuthoritativeMovementComponent" }, // 2514483571
		{ &Z_Construct_UFunction_AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler, "GetOtherCharactersVerticalCollisionsHandler" }, // 3190007150
		{ &Z_Construct_UFunction_AZombieCharacter_GetZombieGender, "GetZombieGender" }, // 2897011254
		{ &Z_Construct_UFunction_AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic, "Multicast_ZombieKilledByKillerCosmetic" }, // 4245147780
		{ &Z_Construct_UFunction_AZombieCharacter_OnBeginOverlapZombieAttackDetector, "OnBeginOverlapZombieAttackDetector" }, // 1345425333
		{ &Z_Construct_UFunction_AZombieCharacter_OnEndOverlapZombieAttackDetector, "OnEndOverlapZombieAttackDetector" }, // 1341468959
		{ &Z_Construct_UFunction_AZombieCharacter_OnFemaleGenderSet_Cosmetic, "OnFemaleGenderSet_Cosmetic" }, // 503772831
		{ &Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieGender, "OnRep_ZombieGender" }, // 2345359181
		{ &Z_Construct_UFunction_AZombieCharacter_OnRep_ZombieState, "OnRep_ZombieState" }, // 3216910602
		{ &Z_Construct_UFunction_AZombieCharacter_OnSlasherSet, "OnSlasherSet" }, // 4257605113
		{ &Z_Construct_UFunction_AZombieCharacter_OnZombieStateChanged_Cosmetic, "OnZombieStateChanged_Cosmetic" }, // 6681549
		{ &Z_Construct_UFunction_AZombieCharacter_SetCharacterActive_Cosmetic, "SetCharacterActive_Cosmetic" }, // 2648183157
		{ &Z_Construct_UFunction_AZombieCharacter_ZombieKilledByKiller_Cosmetic, "ZombieKilledByKiller_Cosmetic" }, // 2336614721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ZombieCharacter.h" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__afterInAirAttackCooldown_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__afterInAirAttackCooldown = { "_afterInAirAttackCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _afterInAirAttackCooldown), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__afterInAirAttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__afterInAirAttackCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__minFallHeight_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__minFallHeight = { "_minFallHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _minFallHeight), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__minFallHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__minFallHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunnedCapsuleRadius_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunnedCapsuleRadius = { "_zombieStunnedCapsuleRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieStunnedCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunnedCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunnedCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors = { "_ignoreActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _ignoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors_Inner = { "_ignoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__otherCharactersVerticalCollisionsHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__otherCharactersVerticalCollisionsHandler = { "_otherCharactersVerticalCollisionsHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _otherCharactersVerticalCollisionsHandler), Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__otherCharactersVerticalCollisionsHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__otherCharactersVerticalCollisionsHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__authoritativeMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__authoritativeMovementComponent = { "_authoritativeMovementComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _authoritativeMovementComponent), Z_Construct_UClass_UAuthoritativeMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__authoritativeMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__authoritativeMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__positionRecorder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__positionRecorder = { "_positionRecorder", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _positionRecorder), Z_Construct_UClass_UCharacterPositionRecorderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__positionRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__positionRecorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__objectState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__objectState = { "_objectState", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _objectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__objectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__objectState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunBaseTime_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunBaseTime = { "_zombieStunBaseTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieStunBaseTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunBaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunBaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__flashLightableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__flashLightableComponent = { "_flashLightableComponent", nullptr, (EPropertyFlags)0x004000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _flashLightableComponent), Z_Construct_UClass_UFlashlightableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__flashLightableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__flashLightableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__firecrackerEffectHandlerComponent = { "_firecrackerEffectHandlerComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _firecrackerEffectHandlerComponent), Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindingChargeableComponent_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindingChargeableComponent = { "_blindingChargeableComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _blindingChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindingChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindingChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindableComponent = { "_blindableComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _blindableComponent), Z_Construct_UClass_UZombieBlindableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__audioSwitchState_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__audioSwitchState = { "_audioSwitchState", nullptr, (EPropertyFlags)0x0040000000010021, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _audioSwitchState), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__audioSwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__audioSwitchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__femaleSkeletalMesh_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__femaleSkeletalMesh = { "_femaleSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _femaleSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__femaleSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__femaleSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender = { "_zombieGender", "OnRep_ZombieGender", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieGender), Z_Construct_UEnum_TheK24_EZombieGender, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__respawnPositionBehindGate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__respawnPositionBehindGate = { "_respawnPositionBehindGate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _respawnPositionBehindGate), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__respawnPositionBehindGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__respawnPositionBehindGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySurvivor_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySurvivor = { "_zombieRespawnTimeKilledBySurvivor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieRespawnTimeKilledBySurvivor), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySlasher_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySlasher = { "_zombieRespawnTimeKilledBySlasher", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieRespawnTimeKilledBySlasher), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState = { "_zombieState", "OnRep_ZombieState", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__attackDamageZone_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__attackDamageZone = { "_attackDamageZone", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _attackDamageZone), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__attackDamageZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__attackDamageZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieAttackDetector_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieAttackDetector = { "_zombieAttackDetector", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieAttackDetector), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieAttackDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieAttackDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__poolableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__poolableComponent = { "_poolableComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _poolableComponent), Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__poolableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__poolableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieWalkSpeed_MetaData[] = {
		{ "Category", "ZombieCharacter" },
		{ "ModuleRelativePath", "Public/ZombieCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieWalkSpeed = { "_zombieWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieCharacter, _zombieWalkSpeed), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__afterInAirAttackCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__minFallHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunnedCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__ignoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__otherCharactersVerticalCollisionsHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__authoritativeMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__positionRecorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__objectState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieStunBaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__flashLightableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__firecrackerEffectHandlerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindingChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__blindableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__audioSwitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__femaleSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieGender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__respawnPositionBehindGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieRespawnTimeKilledBySlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__attackDamageZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieAttackDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__poolableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp__zombieWalkSpeed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDynamicGrassEffectorInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieCharacter, IDynamicGrassEffectorInterface), false },
			{ Z_Construct_UClass_USlashableInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieCharacter, ISlashableInterface), false },
			{ Z_Construct_UClass_UPushableInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieCharacter, IPushableInterface), false },
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieCharacter, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieCharacter_Statics::ClassParams = {
		&AZombieCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombieCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieCharacter, 4134159514);
	template<> THEK24_API UClass* StaticClass<AZombieCharacter>()
	{
		return AZombieCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieCharacter(Z_Construct_UClass_AZombieCharacter, &AZombieCharacter::StaticClass, TEXT("/Script/TheK24"), TEXT("AZombieCharacter"), false, nullptr, nullptr, nullptr);

	void AZombieCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__zombieState(TEXT("_zombieState"));
		static const FName Name__zombieGender(TEXT("_zombieGender"));
		static const FName Name__audioSwitchState(TEXT("_audioSwitchState"));

		const bool bIsValid = true
			&& Name__zombieState == ClassReps[(int32)ENetFields_Private::_zombieState].Property->GetFName()
			&& Name__zombieGender == ClassReps[(int32)ENetFields_Private::_zombieGender].Property->GetFName()
			&& Name__audioSwitchState == ClassReps[(int32)ENetFields_Private::_audioSwitchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AZombieCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
