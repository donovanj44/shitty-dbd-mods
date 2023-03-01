// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UCameraComponent;
#ifdef THEK25_K25Gateway_generated_h
#error "K25Gateway.generated.h already included, missing '#pragma once' in K25Gateway.h"
#endif
#define THEK25_K25Gateway_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_RPC_WRAPPERS \
	virtual void Multicast_SetGatewayLocation_Implementation(FVector possessionLocation); \
	virtual void Multicast_SetGatewayOrientation_Implementation(FRotator rotation); \
	virtual void Multicast_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation); \
	virtual void Server_EndGatewayPossession_Implementation(); \
	virtual void Server_SetGatewayOrientation_Implementation(FRotator rotation); \
	virtual void Server_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation); \
	virtual void Server_SetIsGatewayBeingPositionned_Implementation(bool isBeingPositionned); \
	virtual void Server_StartGatewayPossession_Implementation(FVector possessionLocation, FRotator gatewayRotation); \
 \
	DECLARE_FUNCTION(execIsGatewayPossessed); \
	DECLARE_FUNCTION(execMulticast_SetGatewayLocation); \
	DECLARE_FUNCTION(execMulticast_SetGatewayOrientation); \
	DECLARE_FUNCTION(execMulticast_SetGatewayTargetLocation); \
	DECLARE_FUNCTION(execOnRep_IsBeingPositionned); \
	DECLARE_FUNCTION(execOnRep_IsGatewayPossessed); \
	DECLARE_FUNCTION(execServer_EndGatewayPossession); \
	DECLARE_FUNCTION(execServer_SetGatewayOrientation); \
	DECLARE_FUNCTION(execServer_SetGatewayTargetLocation); \
	DECLARE_FUNCTION(execServer_SetIsGatewayBeingPositionned); \
	DECLARE_FUNCTION(execServer_StartGatewayPossession);


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetGatewayLocation_Implementation(FVector possessionLocation); \
	virtual void Multicast_SetGatewayOrientation_Implementation(FRotator rotation); \
	virtual void Multicast_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation); \
	virtual void Server_EndGatewayPossession_Implementation(); \
	virtual void Server_SetGatewayOrientation_Implementation(FRotator rotation); \
	virtual void Server_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation); \
	virtual void Server_SetIsGatewayBeingPositionned_Implementation(bool isBeingPositionned); \
	virtual void Server_StartGatewayPossession_Implementation(FVector possessionLocation, FRotator gatewayRotation); \
 \
	DECLARE_FUNCTION(execIsGatewayPossessed); \
	DECLARE_FUNCTION(execMulticast_SetGatewayLocation); \
	DECLARE_FUNCTION(execMulticast_SetGatewayOrientation); \
	DECLARE_FUNCTION(execMulticast_SetGatewayTargetLocation); \
	DECLARE_FUNCTION(execOnRep_IsBeingPositionned); \
	DECLARE_FUNCTION(execOnRep_IsGatewayPossessed); \
	DECLARE_FUNCTION(execServer_EndGatewayPossession); \
	DECLARE_FUNCTION(execServer_SetGatewayOrientation); \
	DECLARE_FUNCTION(execServer_SetGatewayTargetLocation); \
	DECLARE_FUNCTION(execServer_SetIsGatewayBeingPositionned); \
	DECLARE_FUNCTION(execServer_StartGatewayPossession);


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_EVENT_PARMS \
	struct K25Gateway_eventCosmetic_SetIsGatewayPositionValid_Parms \
	{ \
		bool isGatewayPlacementValid; \
	}; \
	struct K25Gateway_eventCosmetic_SetKillerVisualVisibility_Parms \
	{ \
		bool isVisible; \
	}; \
	struct K25Gateway_eventCosmetic_TriggerGatewayPossessedEffects_Parms \
	{ \
		float transitionTime; \
	}; \
	struct K25Gateway_eventGetCameraComponent_Parms \
	{ \
		UCameraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		K25Gateway_eventGetCameraComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct K25Gateway_eventMulticast_SetGatewayLocation_Parms \
	{ \
		FVector possessionLocation; \
	}; \
	struct K25Gateway_eventMulticast_SetGatewayOrientation_Parms \
	{ \
		FRotator rotation; \
	}; \
	struct K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms \
	{ \
		FVector targetLocation; \
		bool isValidLocation; \
	}; \
	struct K25Gateway_eventServer_SetGatewayOrientation_Parms \
	{ \
		FRotator rotation; \
	}; \
	struct K25Gateway_eventServer_SetGatewayTargetLocation_Parms \
	{ \
		FVector targetLocation; \
		bool isValidLocation; \
	}; \
	struct K25Gateway_eventServer_SetIsGatewayBeingPositionned_Parms \
	{ \
		bool isBeingPositionned; \
	}; \
	struct K25Gateway_eventServer_StartGatewayPossession_Parms \
	{ \
		FVector possessionLocation; \
		FRotator gatewayRotation; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25Gateway(); \
	friend struct Z_Construct_UClass_AK25Gateway_Statics; \
public: \
	DECLARE_CLASS(AK25Gateway, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Gateway) \
	virtual UObject* _getUObject() const override { return const_cast<AK25Gateway*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isGatewayPossessed=NETFIELD_REP_START, \
		_isBeingPositionned, \
		NETFIELD_REP_END=_isBeingPositionned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAK25Gateway(); \
	friend struct Z_Construct_UClass_AK25Gateway_Statics; \
public: \
	DECLARE_CLASS(AK25Gateway, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Gateway) \
	virtual UObject* _getUObject() const override { return const_cast<AK25Gateway*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isGatewayPossessed=NETFIELD_REP_START, \
		_isBeingPositionned, \
		NETFIELD_REP_END=_isBeingPositionned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25Gateway(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25Gateway) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Gateway); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Gateway); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Gateway(AK25Gateway&&); \
	NO_API AK25Gateway(const AK25Gateway&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Gateway(AK25Gateway&&); \
	NO_API AK25Gateway(const AK25Gateway&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Gateway); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Gateway); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25Gateway)


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rayCastZOffet() { return STRUCT_OFFSET(AK25Gateway, _rayCastZOffet); } \
	FORCEINLINE static uint32 __PPO___rayCastLength() { return STRUCT_OFFSET(AK25Gateway, _rayCastLength); } \
	FORCEINLINE static uint32 __PPO___distancePercentLocations() { return STRUCT_OFFSET(AK25Gateway, _distancePercentLocations); } \
	FORCEINLINE static uint32 __PPO___survivorGatewayRotationSpeed() { return STRUCT_OFFSET(AK25Gateway, _survivorGatewayRotationSpeed); } \
	FORCEINLINE static uint32 __PPO___minimumIndicatorVelocity() { return STRUCT_OFFSET(AK25Gateway, _minimumIndicatorVelocity); } \
	FORCEINLINE static uint32 __PPO___indicatorVelocityEasingFactor() { return STRUCT_OFFSET(AK25Gateway, _indicatorVelocityEasingFactor); } \
	FORCEINLINE static uint32 __PPO___minimumTimeBeforeTargetLocationMulticast() { return STRUCT_OFFSET(AK25Gateway, _minimumTimeBeforeTargetLocationMulticast); } \
	FORCEINLINE static uint32 __PPO___minDistanceFromPlayer() { return STRUCT_OFFSET(AK25Gateway, _minDistanceFromPlayer); } \
	FORCEINLINE static uint32 __PPO___maxDistanceFromPlayer() { return STRUCT_OFFSET(AK25Gateway, _maxDistanceFromPlayer); } \
	FORCEINLINE static uint32 __PPO___gatewayPlacementSpeed() { return STRUCT_OFFSET(AK25Gateway, _gatewayPlacementSpeed); } \
	FORCEINLINE static uint32 __PPO___pitchLevelChangeAngleThreshold() { return STRUCT_OFFSET(AK25Gateway, _pitchLevelChangeAngleThreshold); } \
	FORCEINLINE static uint32 __PPO___pitchLevelChangeZoneThreshold() { return STRUCT_OFFSET(AK25Gateway, _pitchLevelChangeZoneThreshold); } \
	FORCEINLINE static uint32 __PPO___maximumCameraPitchOrientationAngle() { return STRUCT_OFFSET(AK25Gateway, _maximumCameraPitchOrientationAngle); } \
	FORCEINLINE static uint32 __PPO___minimumCameraPitchOrientationAngle() { return STRUCT_OFFSET(AK25Gateway, _minimumCameraPitchOrientationAngle); } \
	FORCEINLINE static uint32 __PPO___maxGatewayPossessionDuration() { return STRUCT_OFFSET(AK25Gateway, _maxGatewayPossessionDuration); } \
	FORCEINLINE static uint32 __PPO___visualComponent() { return STRUCT_OFFSET(AK25Gateway, _visualComponent); } \
	FORCEINLINE static uint32 __PPO___targetLocation() { return STRUCT_OFFSET(AK25Gateway, _targetLocation); } \
	FORCEINLINE static uint32 __PPO___cameraPlacementComponent() { return STRUCT_OFFSET(AK25Gateway, _cameraPlacementComponent); } \
	FORCEINLINE static uint32 __PPO___isGatewayPossessed() { return STRUCT_OFFSET(AK25Gateway, _isGatewayPossessed); } \
	FORCEINLINE static uint32 __PPO___isBeingPositionned() { return STRUCT_OFFSET(AK25Gateway, _isBeingPositionned); } \
	FORCEINLINE static uint32 __PPO___possessionTimer() { return STRUCT_OFFSET(AK25Gateway, _possessionTimer); }


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_15_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Gateway_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25Gateway>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25Gateway_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
