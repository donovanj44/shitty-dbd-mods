// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize100;
struct FYawAndPitchRotator_NetQuantize32;
struct FVector;
class UCurveFloat;
struct FMontagePlaybackDefinition;
class UAnimMontage;
struct FMontageStopDefinition;
enum class EMovementCurveType : uint8;
struct FSnappingData;
#ifdef DEADBYDAYLIGHT_DBDCharacterMovementComponent_generated_h
#error "DBDCharacterMovementComponent.generated.h already included, missing '#pragma once' in DBDCharacterMovementComponent.h"
#endif
#define DEADBYDAYLIGHT_DBDCharacterMovementComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_RPC_WRAPPERS \
	virtual void Client_PreventMovement_Implementation(bool value); \
	virtual void Client_Stop_Implementation(); \
	virtual void Client_TeleportTo_Implementation(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation); \
	virtual bool Server_AddMaxSpeedMovementCurve_Validate(float , const uint32 , float , const EMovementCurveType ); \
	virtual void Server_AddMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType); \
	virtual bool Server_Launch_Validate(float , FVector ); \
	virtual void Server_Launch_Implementation(float timestamp, FVector launchVelocity); \
	virtual bool Server_PlayMontage_Validate(float , const FMontagePlaybackDefinition ); \
	virtual void Server_PlayMontage_Implementation(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition); \
	virtual bool Server_RemoveMaxSpeedMovementCurve_Validate(float , const uint32 , const EMovementCurveType ); \
	virtual void Server_RemoveMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType); \
	virtual bool Server_ReplicateControlRotation_Validate(uint8 , uint32 ); \
	virtual void Server_ReplicateControlRotation_Implementation(uint8 clientRoll, uint32 view); \
	virtual bool Server_SetAdditiveMaxSpeedScalar_Validate(float , float ); \
	virtual void Server_SetAdditiveMaxSpeedScalar_Implementation(float timestamp, float value); \
	virtual bool Server_SetGroundFriction_Validate(float , float ); \
	virtual void Server_SetGroundFriction_Implementation(float timestamp, float value); \
	virtual bool Server_SetMaxAcceleration_Validate(float , float ); \
	virtual void Server_SetMaxAcceleration_Implementation(float timestamp, float value); \
	virtual bool Server_SetMaxSpeedMultiplierScalar_Validate(float , float ); \
	virtual void Server_SetMaxSpeedMultiplierScalar_Implementation(float timestamp, float value); \
	virtual bool Server_SetStopSnapping_Validate(float , bool ); \
	virtual void Server_SetStopSnapping_Implementation(float timestamp, bool snapToFinalDestination); \
	virtual bool Server_StartSnapping_Validate(float , const FSnappingData ); \
	virtual void Server_StartSnapping_Implementation(float timestamp, const FSnappingData data); \
	virtual bool Server_StopMontage_Validate(float , const FMontageStopDefinition ); \
	virtual void Server_StopMontage_Implementation(float timestamp, const FMontageStopDefinition montageStopDefinition); \
 \
	DECLARE_FUNCTION(execClient_PreventMovement); \
	DECLARE_FUNCTION(execClient_Stop); \
	DECLARE_FUNCTION(execClient_TeleportTo); \
	DECLARE_FUNCTION(execGetCurrentSnapPosition); \
	DECLARE_FUNCTION(execIsApplyingRandomInput); \
	DECLARE_FUNCTION(execIsSnapping); \
	DECLARE_FUNCTION(execIsSnappingPosition); \
	DECLARE_FUNCTION(execIsSnappingRotation); \
	DECLARE_FUNCTION(execLocal_AddMaxSpeedMultiplierCurve); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnPreMontageStop); \
	DECLARE_FUNCTION(execServer_AddMaxSpeedMovementCurve); \
	DECLARE_FUNCTION(execServer_Launch); \
	DECLARE_FUNCTION(execServer_PlayMontage); \
	DECLARE_FUNCTION(execServer_RemoveMaxSpeedMovementCurve); \
	DECLARE_FUNCTION(execServer_ReplicateControlRotation); \
	DECLARE_FUNCTION(execServer_SetAdditiveMaxSpeedScalar); \
	DECLARE_FUNCTION(execServer_SetGroundFriction); \
	DECLARE_FUNCTION(execServer_SetMaxAcceleration); \
	DECLARE_FUNCTION(execServer_SetMaxSpeedMultiplierScalar); \
	DECLARE_FUNCTION(execServer_SetStopSnapping); \
	DECLARE_FUNCTION(execServer_StartSnapping); \
	DECLARE_FUNCTION(execServer_StopMontage); \
	DECLARE_FUNCTION(execSetRandomInputAmplitude);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_PreventMovement_Implementation(bool value); \
	virtual void Client_Stop_Implementation(); \
	virtual void Client_TeleportTo_Implementation(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation); \
	virtual bool Server_AddMaxSpeedMovementCurve_Validate(float , const uint32 , float , const EMovementCurveType ); \
	virtual void Server_AddMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType); \
	virtual bool Server_Launch_Validate(float , FVector ); \
	virtual void Server_Launch_Implementation(float timestamp, FVector launchVelocity); \
	virtual bool Server_PlayMontage_Validate(float , const FMontagePlaybackDefinition ); \
	virtual void Server_PlayMontage_Implementation(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition); \
	virtual bool Server_RemoveMaxSpeedMovementCurve_Validate(float , const uint32 , const EMovementCurveType ); \
	virtual void Server_RemoveMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType); \
	virtual bool Server_ReplicateControlRotation_Validate(uint8 , uint32 ); \
	virtual void Server_ReplicateControlRotation_Implementation(uint8 clientRoll, uint32 view); \
	virtual bool Server_SetAdditiveMaxSpeedScalar_Validate(float , float ); \
	virtual void Server_SetAdditiveMaxSpeedScalar_Implementation(float timestamp, float value); \
	virtual bool Server_SetGroundFriction_Validate(float , float ); \
	virtual void Server_SetGroundFriction_Implementation(float timestamp, float value); \
	virtual bool Server_SetMaxAcceleration_Validate(float , float ); \
	virtual void Server_SetMaxAcceleration_Implementation(float timestamp, float value); \
	virtual bool Server_SetMaxSpeedMultiplierScalar_Validate(float , float ); \
	virtual void Server_SetMaxSpeedMultiplierScalar_Implementation(float timestamp, float value); \
	virtual bool Server_SetStopSnapping_Validate(float , bool ); \
	virtual void Server_SetStopSnapping_Implementation(float timestamp, bool snapToFinalDestination); \
	virtual bool Server_StartSnapping_Validate(float , const FSnappingData ); \
	virtual void Server_StartSnapping_Implementation(float timestamp, const FSnappingData data); \
	virtual bool Server_StopMontage_Validate(float , const FMontageStopDefinition ); \
	virtual void Server_StopMontage_Implementation(float timestamp, const FMontageStopDefinition montageStopDefinition); \
 \
	DECLARE_FUNCTION(execClient_PreventMovement); \
	DECLARE_FUNCTION(execClient_Stop); \
	DECLARE_FUNCTION(execClient_TeleportTo); \
	DECLARE_FUNCTION(execGetCurrentSnapPosition); \
	DECLARE_FUNCTION(execIsApplyingRandomInput); \
	DECLARE_FUNCTION(execIsSnapping); \
	DECLARE_FUNCTION(execIsSnappingPosition); \
	DECLARE_FUNCTION(execIsSnappingRotation); \
	DECLARE_FUNCTION(execLocal_AddMaxSpeedMultiplierCurve); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnPreMontageStop); \
	DECLARE_FUNCTION(execServer_AddMaxSpeedMovementCurve); \
	DECLARE_FUNCTION(execServer_Launch); \
	DECLARE_FUNCTION(execServer_PlayMontage); \
	DECLARE_FUNCTION(execServer_RemoveMaxSpeedMovementCurve); \
	DECLARE_FUNCTION(execServer_ReplicateControlRotation); \
	DECLARE_FUNCTION(execServer_SetAdditiveMaxSpeedScalar); \
	DECLARE_FUNCTION(execServer_SetGroundFriction); \
	DECLARE_FUNCTION(execServer_SetMaxAcceleration); \
	DECLARE_FUNCTION(execServer_SetMaxSpeedMultiplierScalar); \
	DECLARE_FUNCTION(execServer_SetStopSnapping); \
	DECLARE_FUNCTION(execServer_StartSnapping); \
	DECLARE_FUNCTION(execServer_StopMontage); \
	DECLARE_FUNCTION(execSetRandomInputAmplitude);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_EVENT_PARMS \
	struct DBDCharacterMovementComponent_eventClient_PreventMovement_Parms \
	{ \
		bool value; \
	}; \
	struct DBDCharacterMovementComponent_eventClient_TeleportTo_Parms \
	{ \
		FVector_NetQuantize100 location; \
		FYawAndPitchRotator_NetQuantize32 rotation; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_AddMaxSpeedMovementCurve_Parms \
	{ \
		float timestamp; \
		uint32 curveNetId; \
		float duration; \
		EMovementCurveType movementCurveType; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_Launch_Parms \
	{ \
		float timestamp; \
		FVector launchVelocity; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_PlayMontage_Parms \
	{ \
		float timestamp; \
		FMontagePlaybackDefinition montagePlaybackDefinition; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_RemoveMaxSpeedMovementCurve_Parms \
	{ \
		float timestamp; \
		uint32 curveNetId; \
		EMovementCurveType movementCurveType; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_ReplicateControlRotation_Parms \
	{ \
		uint8 clientRoll; \
		uint32 view; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_SetAdditiveMaxSpeedScalar_Parms \
	{ \
		float timestamp; \
		float value; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_SetGroundFriction_Parms \
	{ \
		float timestamp; \
		float value; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_SetMaxAcceleration_Parms \
	{ \
		float timestamp; \
		float value; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_SetMaxSpeedMultiplierScalar_Parms \
	{ \
		float timestamp; \
		float value; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_SetStopSnapping_Parms \
	{ \
		float timestamp; \
		bool snapToFinalDestination; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_StartSnapping_Parms \
	{ \
		float timestamp; \
		FSnappingData data; \
	}; \
	struct DBDCharacterMovementComponent_eventServer_StopMontage_Parms \
	{ \
		float timestamp; \
		FMontageStopDefinition montageStopDefinition; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UDBDCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDCharacterMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDBDCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UDBDCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDCharacterMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDCharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDCharacterMovementComponent(UDBDCharacterMovementComponent&&); \
	NO_API UDBDCharacterMovementComponent(const UDBDCharacterMovementComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDCharacterMovementComponent(UDBDCharacterMovementComponent&&); \
	NO_API UDBDCharacterMovementComponent(const UDBDCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDCharacterMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___forceUseDropStaggerFix() { return STRUCT_OFFSET(UDBDCharacterMovementComponent, _forceUseDropStaggerFix); } \
	FORCEINLINE static uint32 __PPO___velocityAdditiveStrategy() { return STRUCT_OFFSET(UDBDCharacterMovementComponent, _velocityAdditiveStrategy); } \
	FORCEINLINE static uint32 __PPO___inputAccelerationConstraintStrategy() { return STRUCT_OFFSET(UDBDCharacterMovementComponent, _inputAccelerationConstraintStrategy); } \
	FORCEINLINE static uint32 __PPO___rotationStrategy() { return STRUCT_OFFSET(UDBDCharacterMovementComponent, _rotationStrategy); } \
	FORCEINLINE static uint32 __PPO___lookAtTarget() { return STRUCT_OFFSET(UDBDCharacterMovementComponent, _lookAtTarget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_20_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
