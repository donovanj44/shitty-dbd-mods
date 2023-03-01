// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDCharacterMovementComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize32();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackDefinition();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMontageStopDefinition();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMovementCurveType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSnappingData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterRotationStrategy_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseInputAccelerationConstraintStrategy_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBaseCharacterVelocityAdditiveStrategy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execClient_PreventMovement)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_PreventMovement_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execClient_Stop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Stop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execClient_TeleportTo)
	{
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_location);
		P_GET_STRUCT(FYawAndPitchRotator_NetQuantize32,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_TeleportTo_Implementation(Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execGetCurrentSnapPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentSnapPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execIsApplyingRandomInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsApplyingRandomInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execIsSnapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSnapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execIsSnappingPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSnappingPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execIsSnappingRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSnappingRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execLocal_AddMaxSpeedMultiplierCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_UBOOL(Z_Param_autoRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_AddMaxSpeedMultiplierCurve(Z_Param_curve,Z_Param_duration,Z_Param_autoRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execOnMontageStarted)
	{
		P_GET_STRUCT_REF(FMontagePlaybackDefinition,Z_Param_Out_montageDefinition);
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStarted(Z_Param_Out_montageDefinition,Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execOnPreMontageStop)
	{
		P_GET_STRUCT(FMontageStopDefinition,Z_Param_montageDefinition);
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreMontageStop(Z_Param_montageDefinition,Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_AddMaxSpeedMovementCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FUInt32Property,Z_Param_curveNetId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_ENUM(EMovementCurveType,Z_Param_movementCurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_AddMaxSpeedMovementCurve_Validate(Z_Param_timestamp,Z_Param_curveNetId,Z_Param_duration,EMovementCurveType(Z_Param_movementCurveType)))
		{
			RPC_ValidateFailed(TEXT("Server_AddMaxSpeedMovementCurve_Validate"));
			return;
		}
		P_THIS->Server_AddMaxSpeedMovementCurve_Implementation(Z_Param_timestamp,Z_Param_curveNetId,Z_Param_duration,EMovementCurveType(Z_Param_movementCurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_Launch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_STRUCT(FVector,Z_Param_launchVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Launch_Validate(Z_Param_timestamp,Z_Param_launchVelocity))
		{
			RPC_ValidateFailed(TEXT("Server_Launch_Validate"));
			return;
		}
		P_THIS->Server_Launch_Implementation(Z_Param_timestamp,Z_Param_launchVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_PlayMontage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_STRUCT(FMontagePlaybackDefinition,Z_Param_montagePlaybackDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_PlayMontage_Validate(Z_Param_timestamp,Z_Param_montagePlaybackDefinition))
		{
			RPC_ValidateFailed(TEXT("Server_PlayMontage_Validate"));
			return;
		}
		P_THIS->Server_PlayMontage_Implementation(Z_Param_timestamp,Z_Param_montagePlaybackDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_RemoveMaxSpeedMovementCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FUInt32Property,Z_Param_curveNetId);
		P_GET_ENUM(EMovementCurveType,Z_Param_movementCurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RemoveMaxSpeedMovementCurve_Validate(Z_Param_timestamp,Z_Param_curveNetId,EMovementCurveType(Z_Param_movementCurveType)))
		{
			RPC_ValidateFailed(TEXT("Server_RemoveMaxSpeedMovementCurve_Validate"));
			return;
		}
		P_THIS->Server_RemoveMaxSpeedMovementCurve_Implementation(Z_Param_timestamp,Z_Param_curveNetId,EMovementCurveType(Z_Param_movementCurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_ReplicateControlRotation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_clientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_view);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ReplicateControlRotation_Validate(Z_Param_clientRoll,Z_Param_view))
		{
			RPC_ValidateFailed(TEXT("Server_ReplicateControlRotation_Validate"));
			return;
		}
		P_THIS->Server_ReplicateControlRotation_Implementation(Z_Param_clientRoll,Z_Param_view);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_SetAdditiveMaxSpeedScalar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetAdditiveMaxSpeedScalar_Validate(Z_Param_timestamp,Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("Server_SetAdditiveMaxSpeedScalar_Validate"));
			return;
		}
		P_THIS->Server_SetAdditiveMaxSpeedScalar_Implementation(Z_Param_timestamp,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_SetGroundFriction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetGroundFriction_Validate(Z_Param_timestamp,Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("Server_SetGroundFriction_Validate"));
			return;
		}
		P_THIS->Server_SetGroundFriction_Implementation(Z_Param_timestamp,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_SetMaxAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetMaxAcceleration_Validate(Z_Param_timestamp,Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("Server_SetMaxAcceleration_Validate"));
			return;
		}
		P_THIS->Server_SetMaxAcceleration_Implementation(Z_Param_timestamp,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_SetMaxSpeedMultiplierScalar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetMaxSpeedMultiplierScalar_Validate(Z_Param_timestamp,Z_Param_value))
		{
			RPC_ValidateFailed(TEXT("Server_SetMaxSpeedMultiplierScalar_Validate"));
			return;
		}
		P_THIS->Server_SetMaxSpeedMultiplierScalar_Implementation(Z_Param_timestamp,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_SetStopSnapping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_UBOOL(Z_Param_snapToFinalDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetStopSnapping_Validate(Z_Param_timestamp,Z_Param_snapToFinalDestination))
		{
			RPC_ValidateFailed(TEXT("Server_SetStopSnapping_Validate"));
			return;
		}
		P_THIS->Server_SetStopSnapping_Implementation(Z_Param_timestamp,Z_Param_snapToFinalDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_StartSnapping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_STRUCT(FSnappingData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartSnapping_Validate(Z_Param_timestamp,Z_Param_data))
		{
			RPC_ValidateFailed(TEXT("Server_StartSnapping_Validate"));
			return;
		}
		P_THIS->Server_StartSnapping_Implementation(Z_Param_timestamp,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execServer_StopMontage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestamp);
		P_GET_STRUCT(FMontageStopDefinition,Z_Param_montageStopDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StopMontage_Validate(Z_Param_timestamp,Z_Param_montageStopDefinition))
		{
			RPC_ValidateFailed(TEXT("Server_StopMontage_Validate"));
			return;
		}
		P_THIS->Server_StopMontage_Implementation(Z_Param_timestamp,Z_Param_montageStopDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDCharacterMovementComponent::execSetRandomInputAmplitude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomInputAmplitude(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_UDBDCharacterMovementComponent_Client_PreventMovement = FName(TEXT("Client_PreventMovement"));
	void UDBDCharacterMovementComponent::Client_PreventMovement(bool value)
	{
		DBDCharacterMovementComponent_eventClient_PreventMovement_Parms Parms;
		Parms.value=value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Client_PreventMovement),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Client_Stop = FName(TEXT("Client_Stop"));
	void UDBDCharacterMovementComponent::Client_Stop()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Client_Stop),NULL);
	}
	static FName NAME_UDBDCharacterMovementComponent_Client_TeleportTo = FName(TEXT("Client_TeleportTo"));
	void UDBDCharacterMovementComponent::Client_TeleportTo(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation)
	{
		DBDCharacterMovementComponent_eventClient_TeleportTo_Parms Parms;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Client_TeleportTo),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve = FName(TEXT("Server_AddMaxSpeedMovementCurve"));
	void UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType)
	{
		DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.curveNetId=curveNetId;
		Parms.duration=duration;
		Parms.movementCurveType=movementCurveType;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_Launch = FName(TEXT("Server_Launch"));
	void UDBDCharacterMovementComponent::Server_Launch(float timestamp, FVector launchVelocity)
	{
		DBDCharacterMovementComponent_eventServer_Launch_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.launchVelocity=launchVelocity;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_Launch),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_PlayMontage = FName(TEXT("Server_PlayMontage"));
	void UDBDCharacterMovementComponent::Server_PlayMontage(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition)
	{
		DBDCharacterMovementComponent_eventServer_PlayMontage_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.montagePlaybackDefinition=montagePlaybackDefinition;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_PlayMontage),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve = FName(TEXT("Server_RemoveMaxSpeedMovementCurve"));
	void UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType)
	{
		DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.curveNetId=curveNetId;
		Parms.movementCurveType=movementCurveType;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_ReplicateControlRotation = FName(TEXT("Server_ReplicateControlRotation"));
	void UDBDCharacterMovementComponent::Server_ReplicateControlRotation(uint8 clientRoll, uint32 view)
	{
		DBDCharacterMovementComponent_eventServer_ReplicateControlRotation_Parms Parms;
		Parms.clientRoll=clientRoll;
		Parms.view=view;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_ReplicateControlRotation),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar = FName(TEXT("Server_SetAdditiveMaxSpeedScalar"));
	void UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar(float timestamp, float value)
	{
		DBDCharacterMovementComponent_eventServer_SetAdditiveMaxSpeedScalar_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_SetGroundFriction = FName(TEXT("Server_SetGroundFriction"));
	void UDBDCharacterMovementComponent::Server_SetGroundFriction(float timestamp, float value)
	{
		DBDCharacterMovementComponent_eventServer_SetGroundFriction_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_SetGroundFriction),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_SetMaxAcceleration = FName(TEXT("Server_SetMaxAcceleration"));
	void UDBDCharacterMovementComponent::Server_SetMaxAcceleration(float timestamp, float value)
	{
		DBDCharacterMovementComponent_eventServer_SetMaxAcceleration_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_SetMaxAcceleration),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar = FName(TEXT("Server_SetMaxSpeedMultiplierScalar"));
	void UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar(float timestamp, float value)
	{
		DBDCharacterMovementComponent_eventServer_SetMaxSpeedMultiplierScalar_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_SetStopSnapping = FName(TEXT("Server_SetStopSnapping"));
	void UDBDCharacterMovementComponent::Server_SetStopSnapping(float timestamp, bool snapToFinalDestination)
	{
		DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.snapToFinalDestination=snapToFinalDestination ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_SetStopSnapping),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_StartSnapping = FName(TEXT("Server_StartSnapping"));
	void UDBDCharacterMovementComponent::Server_StartSnapping(float timestamp, const FSnappingData data)
	{
		DBDCharacterMovementComponent_eventServer_StartSnapping_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_StartSnapping),&Parms);
	}
	static FName NAME_UDBDCharacterMovementComponent_Server_StopMontage = FName(TEXT("Server_StopMontage"));
	void UDBDCharacterMovementComponent::Server_StopMontage(float timestamp, const FMontageStopDefinition montageStopDefinition)
	{
		DBDCharacterMovementComponent_eventServer_StopMontage_Parms Parms;
		Parms.timestamp=timestamp;
		Parms.montageStopDefinition=montageStopDefinition;
		ProcessEvent(FindFunctionChecked(NAME_UDBDCharacterMovementComponent_Server_StopMontage),&Parms);
	}
	void UDBDCharacterMovementComponent::StaticRegisterNativesUDBDCharacterMovementComponent()
	{
		UClass* Class = UDBDCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_PreventMovement", &UDBDCharacterMovementComponent::execClient_PreventMovement },
			{ "Client_Stop", &UDBDCharacterMovementComponent::execClient_Stop },
			{ "Client_TeleportTo", &UDBDCharacterMovementComponent::execClient_TeleportTo },
			{ "GetCurrentSnapPosition", &UDBDCharacterMovementComponent::execGetCurrentSnapPosition },
			{ "IsApplyingRandomInput", &UDBDCharacterMovementComponent::execIsApplyingRandomInput },
			{ "IsSnapping", &UDBDCharacterMovementComponent::execIsSnapping },
			{ "IsSnappingPosition", &UDBDCharacterMovementComponent::execIsSnappingPosition },
			{ "IsSnappingRotation", &UDBDCharacterMovementComponent::execIsSnappingRotation },
			{ "Local_AddMaxSpeedMultiplierCurve", &UDBDCharacterMovementComponent::execLocal_AddMaxSpeedMultiplierCurve },
			{ "OnMontageStarted", &UDBDCharacterMovementComponent::execOnMontageStarted },
			{ "OnPreMontageStop", &UDBDCharacterMovementComponent::execOnPreMontageStop },
			{ "Server_AddMaxSpeedMovementCurve", &UDBDCharacterMovementComponent::execServer_AddMaxSpeedMovementCurve },
			{ "Server_Launch", &UDBDCharacterMovementComponent::execServer_Launch },
			{ "Server_PlayMontage", &UDBDCharacterMovementComponent::execServer_PlayMontage },
			{ "Server_RemoveMaxSpeedMovementCurve", &UDBDCharacterMovementComponent::execServer_RemoveMaxSpeedMovementCurve },
			{ "Server_ReplicateControlRotation", &UDBDCharacterMovementComponent::execServer_ReplicateControlRotation },
			{ "Server_SetAdditiveMaxSpeedScalar", &UDBDCharacterMovementComponent::execServer_SetAdditiveMaxSpeedScalar },
			{ "Server_SetGroundFriction", &UDBDCharacterMovementComponent::execServer_SetGroundFriction },
			{ "Server_SetMaxAcceleration", &UDBDCharacterMovementComponent::execServer_SetMaxAcceleration },
			{ "Server_SetMaxSpeedMultiplierScalar", &UDBDCharacterMovementComponent::execServer_SetMaxSpeedMultiplierScalar },
			{ "Server_SetStopSnapping", &UDBDCharacterMovementComponent::execServer_SetStopSnapping },
			{ "Server_StartSnapping", &UDBDCharacterMovementComponent::execServer_StartSnapping },
			{ "Server_StopMontage", &UDBDCharacterMovementComponent::execServer_StopMontage },
			{ "SetRandomInputAmplitude", &UDBDCharacterMovementComponent::execSetRandomInputAmplitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventClient_PreventMovement_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventClient_PreventMovement_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Client_PreventMovement", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventClient_PreventMovement_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Client_Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventClient_TeleportTo_Parms, rotation), Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize32, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventClient_TeleportTo_Parms, location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Client_TeleportTo", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventClient_TeleportTo_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics
	{
		struct DBDCharacterMovementComponent_eventGetCurrentSnapPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventGetCurrentSnapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "GetCurrentSnapPosition", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventGetCurrentSnapPosition_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics
	{
		struct DBDCharacterMovementComponent_eventIsApplyingRandomInput_Parms
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
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventIsApplyingRandomInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventIsApplyingRandomInput_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "IsApplyingRandomInput", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventIsApplyingRandomInput_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics
	{
		struct DBDCharacterMovementComponent_eventIsSnapping_Parms
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
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventIsSnapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventIsSnapping_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "IsSnapping", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventIsSnapping_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics
	{
		struct DBDCharacterMovementComponent_eventIsSnappingPosition_Parms
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
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventIsSnappingPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventIsSnappingPosition_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "IsSnappingPosition", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventIsSnappingPosition_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics
	{
		struct DBDCharacterMovementComponent_eventIsSnappingRotation_Parms
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
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventIsSnappingRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventIsSnappingRotation_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "IsSnappingRotation", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventIsSnappingRotation_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics
	{
		struct DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms
		{
			const UCurveFloat* curve;
			float duration;
			bool autoRemove;
		};
		static void NewProp_autoRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoRemove;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoRemove_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms*)Obj)->autoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoRemove = { "autoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve = { "curve", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms, curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_autoRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::NewProp_curve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Local_AddMaxSpeedMultiplierCurve", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventLocal_AddMaxSpeedMultiplierCurve_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics
	{
		struct DBDCharacterMovementComponent_eventOnMontageStarted_Parms
		{
			FMontagePlaybackDefinition montageDefinition;
			const UAnimMontage* montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventOnMontageStarted_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montageDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montageDefinition = { "montageDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventOnMontageStarted_Parms, montageDefinition), Z_Construct_UScriptStruct_FMontagePlaybackDefinition, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montageDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montageDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::NewProp_montageDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "OnMontageStarted", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventOnMontageStarted_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics
	{
		struct DBDCharacterMovementComponent_eventOnPreMontageStop_Parms
		{
			FMontageStopDefinition montageDefinition;
			const UAnimMontage* montage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDefinition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventOnPreMontageStop_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montageDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montageDefinition = { "montageDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventOnPreMontageStop_Parms, montageDefinition), Z_Construct_UScriptStruct_FMontageStopDefinition, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montageDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montageDefinition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::NewProp_montageDefinition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "OnPreMontageStop", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventOnPreMontageStop_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementCurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_movementCurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_movementCurveType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_curveNetId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType = { "movementCurveType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms, movementCurveType), Z_Construct_UEnum_DeadByDaylight_EMovementCurveType, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_curveNetId = { "curveNetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms, curveNetId), METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_curveNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_AddMaxSpeedMovementCurve", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::NewProp_launchVelocity = { "launchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_Launch_Parms, launchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_Launch_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::NewProp_launchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_Launch", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_Launch_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montagePlaybackDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montagePlaybackDefinition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_montagePlaybackDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_montagePlaybackDefinition = { "montagePlaybackDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_PlayMontage_Parms, montagePlaybackDefinition), Z_Construct_UScriptStruct_FMontagePlaybackDefinition, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_montagePlaybackDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_montagePlaybackDefinition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_PlayMontage_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_montagePlaybackDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_PlayMontage", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_PlayMontage_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementCurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_movementCurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_movementCurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_curveNetId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType = { "movementCurveType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms, movementCurveType), Z_Construct_UEnum_DeadByDaylight_EMovementCurveType, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_curveNetId = { "curveNetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms, curveNetId), METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_curveNetId_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_movementCurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_curveNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_RemoveMaxSpeedMovementCurve", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_view;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_clientRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_ReplicateControlRotation_Parms, view), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::NewProp_clientRoll = { "clientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_ReplicateControlRotation_Parms, clientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::NewProp_view,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::NewProp_clientRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_ReplicateControlRotation", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_ReplicateControlRotation_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetAdditiveMaxSpeedScalar_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetAdditiveMaxSpeedScalar_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_SetAdditiveMaxSpeedScalar", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_SetAdditiveMaxSpeedScalar_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetGroundFriction_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetGroundFriction_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_SetGroundFriction", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_SetGroundFriction_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetMaxAcceleration_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetMaxAcceleration_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_SetMaxAcceleration", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_SetMaxAcceleration_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetMaxSpeedMultiplierScalar_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetMaxSpeedMultiplierScalar_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_SetMaxSpeedMultiplierScalar", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_SetMaxSpeedMultiplierScalar_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_snapToFinalDestination_MetaData[];
#endif
		static void NewProp_snapToFinalDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_snapToFinalDestination;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination_SetBit(void* Obj)
	{
		((DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms*)Obj)->snapToFinalDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination = { "snapToFinalDestination", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms), &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_snapToFinalDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_SetStopSnapping", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_StartSnapping_Parms, data), Z_Construct_UScriptStruct_FSnappingData, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_StartSnapping_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_StartSnapping", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_StartSnapping_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montageStopDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageStopDefinition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_montageStopDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_montageStopDefinition = { "montageStopDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_StopMontage_Parms, montageStopDefinition), Z_Construct_UScriptStruct_FMontageStopDefinition, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_montageStopDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_montageStopDefinition_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventServer_StopMontage_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_montageStopDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::NewProp_timestamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "Server_StopMontage", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventServer_StopMontage_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics
	{
		struct DBDCharacterMovementComponent_eventSetRandomInputAmplitude_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDCharacterMovementComponent_eventSetRandomInputAmplitude_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDCharacterMovementComponent, nullptr, "SetRandomInputAmplitude", nullptr, nullptr, sizeof(DBDCharacterMovementComponent_eventSetRandomInputAmplitude_Parms), Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDCharacterMovementComponent_NoRegister()
	{
		return UDBDCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lookAtTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lookAtTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rotationStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputAccelerationConstraintStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputAccelerationConstraintStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocityAdditiveStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__velocityAdditiveStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forceUseDropStaggerFix_MetaData[];
#endif
		static void NewProp__forceUseDropStaggerFix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__forceUseDropStaggerFix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomInputBackMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomInputBackMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomInputSideMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomInputSideMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomInputFrontMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomInputFrontMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectedWallSlidingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectedWallSlidingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_PreventMovement, "Client_PreventMovement" }, // 1642934486
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_Stop, "Client_Stop" }, // 653827012
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Client_TeleportTo, "Client_TeleportTo" }, // 2810626014
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_GetCurrentSnapPosition, "GetCurrentSnapPosition" }, // 2860297914
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsApplyingRandomInput, "IsApplyingRandomInput" }, // 956472509
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnapping, "IsSnapping" }, // 1318640756
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingPosition, "IsSnappingPosition" }, // 2211660234
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_IsSnappingRotation, "IsSnappingRotation" }, // 2836219824
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Local_AddMaxSpeedMultiplierCurve, "Local_AddMaxSpeedMultiplierCurve" }, // 1461351376
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_OnMontageStarted, "OnMontageStarted" }, // 3840163993
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_OnPreMontageStop, "OnPreMontageStop" }, // 2302808427
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_AddMaxSpeedMovementCurve, "Server_AddMaxSpeedMovementCurve" }, // 3393357367
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_Launch, "Server_Launch" }, // 1299517839
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_PlayMontage, "Server_PlayMontage" }, // 3462595050
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_RemoveMaxSpeedMovementCurve, "Server_RemoveMaxSpeedMovementCurve" }, // 2183449014
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_ReplicateControlRotation, "Server_ReplicateControlRotation" }, // 2002060401
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetAdditiveMaxSpeedScalar, "Server_SetAdditiveMaxSpeedScalar" }, // 3498667997
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetGroundFriction, "Server_SetGroundFriction" }, // 1017228778
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxAcceleration, "Server_SetMaxAcceleration" }, // 1341034736
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetMaxSpeedMultiplierScalar, "Server_SetMaxSpeedMultiplierScalar" }, // 1439185335
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_SetStopSnapping, "Server_SetStopSnapping" }, // 4050192319
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StartSnapping, "Server_StartSnapping" }, // 3448829294
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_Server_StopMontage, "Server_StopMontage" }, // 2573568187
		{ &Z_Construct_UFunction_UDBDCharacterMovementComponent_SetRandomInputAmplitude, "SetRandomInputAmplitude" }, // 1767382402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__lookAtTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__lookAtTarget = { "_lookAtTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, _lookAtTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__lookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__lookAtTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__rotationStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__rotationStrategy = { "_rotationStrategy", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, _rotationStrategy), Z_Construct_UClass_UBaseCharacterRotationStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__rotationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__rotationStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__inputAccelerationConstraintStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__inputAccelerationConstraintStrategy = { "_inputAccelerationConstraintStrategy", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, _inputAccelerationConstraintStrategy), Z_Construct_UClass_UBaseInputAccelerationConstraintStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__inputAccelerationConstraintStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__inputAccelerationConstraintStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__velocityAdditiveStrategy = { "_velocityAdditiveStrategy", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, _velocityAdditiveStrategy), Z_Construct_UClass_UBaseCharacterVelocityAdditiveStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__velocityAdditiveStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix_MetaData[] = {
		{ "Category", "DBDCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix_SetBit(void* Obj)
	{
		((UDBDCharacterMovementComponent*)Obj)->_forceUseDropStaggerFix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix = { "_forceUseDropStaggerFix", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDCharacterMovementComponent), &Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputBackMultiplier_MetaData[] = {
		{ "Category", "DBDCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputBackMultiplier = { "RandomInputBackMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, RandomInputBackMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputBackMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputBackMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputSideMultiplier_MetaData[] = {
		{ "Category", "DBDCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputSideMultiplier = { "RandomInputSideMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, RandomInputSideMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputSideMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputSideMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputFrontMultiplier_MetaData[] = {
		{ "Category", "DBDCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputFrontMultiplier = { "RandomInputFrontMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, RandomInputFrontMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputFrontMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputFrontMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_ProjectedWallSlidingFactor_MetaData[] = {
		{ "Category", "DBDCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/DBDCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_ProjectedWallSlidingFactor = { "ProjectedWallSlidingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDCharacterMovementComponent, ProjectedWallSlidingFactor), METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_ProjectedWallSlidingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_ProjectedWallSlidingFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__lookAtTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__rotationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__inputAccelerationConstraintStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__velocityAdditiveStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp__forceUseDropStaggerFix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputBackMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputSideMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_RandomInputFrontMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::NewProp_ProjectedWallSlidingFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::ClassParams = {
		&UDBDCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDCharacterMovementComponent, 4264444916);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDCharacterMovementComponent>()
	{
		return UDBDCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDCharacterMovementComponent(Z_Construct_UClass_UDBDCharacterMovementComponent, &UDBDCharacterMovementComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
