// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_K25ControlledProjectile_generated_h
#error "K25ControlledProjectile.generated.h already included, missing '#pragma once' in K25ControlledProjectile.h"
#endif
#define THEK25_K25ControlledProjectile_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_RPC_WRAPPERS \
	virtual void Server_ProcessPitchInput_Implementation(float deltaTime, float scaledInput); \
	virtual void Server_ProcessYawInput_Implementation(float deltaTime, float scaledInput); \
 \
	DECLARE_FUNCTION(execOnRep_AngularVelocity); \
	DECLARE_FUNCTION(execServer_ProcessPitchInput); \
	DECLARE_FUNCTION(execServer_ProcessYawInput);


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ProcessPitchInput_Implementation(float deltaTime, float scaledInput); \
	virtual void Server_ProcessYawInput_Implementation(float deltaTime, float scaledInput); \
 \
	DECLARE_FUNCTION(execOnRep_AngularVelocity); \
	DECLARE_FUNCTION(execServer_ProcessPitchInput); \
	DECLARE_FUNCTION(execServer_ProcessYawInput);


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_EVENT_PARMS \
	struct K25ControlledProjectile_eventServer_ProcessPitchInput_Parms \
	{ \
		float deltaTime; \
		float scaledInput; \
	}; \
	struct K25ControlledProjectile_eventServer_ProcessYawInput_Parms \
	{ \
		float deltaTime; \
		float scaledInput; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25ControlledProjectile(); \
	friend struct Z_Construct_UClass_AK25ControlledProjectile_Statics; \
public: \
	DECLARE_CLASS(AK25ControlledProjectile, AK25Projectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25ControlledProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK25ControlledProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lastAppliedAngularVelocity=NETFIELD_REP_START, \
		NETFIELD_REP_END=_lastAppliedAngularVelocity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAK25ControlledProjectile(); \
	friend struct Z_Construct_UClass_AK25ControlledProjectile_Statics; \
public: \
	DECLARE_CLASS(AK25ControlledProjectile, AK25Projectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25ControlledProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK25ControlledProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lastAppliedAngularVelocity=NETFIELD_REP_START, \
		NETFIELD_REP_END=_lastAppliedAngularVelocity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25ControlledProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25ControlledProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25ControlledProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25ControlledProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25ControlledProjectile(AK25ControlledProjectile&&); \
	NO_API AK25ControlledProjectile(const AK25ControlledProjectile&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25ControlledProjectile(AK25ControlledProjectile&&); \
	NO_API AK25ControlledProjectile(const AK25ControlledProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25ControlledProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25ControlledProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25ControlledProjectile)


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___killerViewProjectileStaticMesh() { return STRUCT_OFFSET(AK25ControlledProjectile, _killerViewProjectileStaticMesh); } \
	FORCEINLINE static uint32 __PPO___killerSpringArm() { return STRUCT_OFFSET(AK25ControlledProjectile, _killerSpringArm); } \
	FORCEINLINE static uint32 __PPO___killerCameraPlacement() { return STRUCT_OFFSET(AK25ControlledProjectile, _killerCameraPlacement); } \
	FORCEINLINE static uint32 __PPO___pitchClampAngle() { return STRUCT_OFFSET(AK25ControlledProjectile, _pitchClampAngle); } \
	FORCEINLINE static uint32 __PPO___maximumYawTurnRate() { return STRUCT_OFFSET(AK25ControlledProjectile, _maximumYawTurnRate); } \
	FORCEINLINE static uint32 __PPO___maximumPitchTurnRate() { return STRUCT_OFFSET(AK25ControlledProjectile, _maximumPitchTurnRate); } \
	FORCEINLINE static uint32 __PPO___cameraRollSpeedMultiplier() { return STRUCT_OFFSET(AK25ControlledProjectile, _cameraRollSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___cameraRollGoBackSpeedMultiplier() { return STRUCT_OFFSET(AK25ControlledProjectile, _cameraRollGoBackSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___cameraMaximumRollDegree() { return STRUCT_OFFSET(AK25ControlledProjectile, _cameraMaximumRollDegree); } \
	FORCEINLINE static uint32 __PPO___numbExtraChainsOnControlledProjectileHit() { return STRUCT_OFFSET(AK25ControlledProjectile, _numbExtraChainsOnControlledProjectileHit); } \
	FORCEINLINE static uint32 __PPO___controlledProjectileMovementComponent() { return STRUCT_OFFSET(AK25ControlledProjectile, _controlledProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO___currentRoll() { return STRUCT_OFFSET(AK25ControlledProjectile, _currentRoll); } \
	FORCEINLINE static uint32 __PPO___targetRoll() { return STRUCT_OFFSET(AK25ControlledProjectile, _targetRoll); } \
	FORCEINLINE static uint32 __PPO___lastAppliedAngularVelocity() { return STRUCT_OFFSET(AK25ControlledProjectile, _lastAppliedAngularVelocity); }


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_15_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25ControlledProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ControlledProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
