// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AConjoinedTwin;
class UPhysicalMaterial;
struct FVector;
#ifdef THETWINS_TwinJumpAttack_generated_h
#error "TwinJumpAttack.generated.h already included, missing '#pragma once' in TwinJumpAttack.h"
#endif
#define THETWINS_TwinJumpAttack_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_RPC_WRAPPERS \
	virtual void Client_Debug_PrintFinalDecisionOnScreen_Implementation(bool foundPath); \
	virtual void Multicast_AttachToSurvivor_Implementation(ADBDPlayer* survivorToAttachTo); \
	virtual void Multicast_DestroyTwinOnWrongLanding_Implementation(); \
	virtual void Multicast_SetIsForbiddenLandingLocation_Implementation(bool isForbiddenLocation); \
	virtual bool Server_OnJumpStartTwin_Validate(); \
	virtual void Server_OnJumpStartTwin_Implementation(); \
	virtual bool Server_StopJump_Validate(); \
	virtual void Server_StopJump_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_Debug_PrintFinalDecisionOnScreen); \
	DECLARE_FUNCTION(execMulticast_AttachToSurvivor); \
	DECLARE_FUNCTION(execMulticast_DestroyTwinOnWrongLanding); \
	DECLARE_FUNCTION(execMulticast_SetIsForbiddenLandingLocation); \
	DECLARE_FUNCTION(execOnRep_ShouldTwinHaveJumpObjectType); \
	DECLARE_FUNCTION(execServer_OnJumpStartTwin); \
	DECLARE_FUNCTION(execServer_StopJump);


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_Debug_PrintFinalDecisionOnScreen_Implementation(bool foundPath); \
	virtual void Multicast_AttachToSurvivor_Implementation(ADBDPlayer* survivorToAttachTo); \
	virtual void Multicast_DestroyTwinOnWrongLanding_Implementation(); \
	virtual void Multicast_SetIsForbiddenLandingLocation_Implementation(bool isForbiddenLocation); \
	virtual bool Server_OnJumpStartTwin_Validate(); \
	virtual void Server_OnJumpStartTwin_Implementation(); \
	virtual bool Server_StopJump_Validate(); \
	virtual void Server_StopJump_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_Debug_PrintFinalDecisionOnScreen); \
	DECLARE_FUNCTION(execMulticast_AttachToSurvivor); \
	DECLARE_FUNCTION(execMulticast_DestroyTwinOnWrongLanding); \
	DECLARE_FUNCTION(execMulticast_SetIsForbiddenLandingLocation); \
	DECLARE_FUNCTION(execOnRep_ShouldTwinHaveJumpObjectType); \
	DECLARE_FUNCTION(execServer_OnJumpStartTwin); \
	DECLARE_FUNCTION(execServer_StopJump);


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_EVENT_PARMS \
	struct TwinJumpAttack_eventClient_Debug_PrintFinalDecisionOnScreen_Parms \
	{ \
		bool foundPath; \
	}; \
	struct TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms \
	{ \
		bool isForbiddenLocation; \
		AConjoinedTwin* twin; \
	}; \
	struct TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms \
	{ \
		bool isInJumpCooldown; \
		AConjoinedTwin* owningTwin; \
	}; \
	struct TwinJumpAttack_eventCosmetic_OnJumpLanded_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
	}; \
	struct TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
		UPhysicalMaterial* physicalMaterial; \
		FVector position; \
		FVector normal; \
	}; \
	struct TwinJumpAttack_eventCosmetic_OnJumpStarted_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
	}; \
	struct TwinJumpAttack_eventMulticast_AttachToSurvivor_Parms \
	{ \
		ADBDPlayer* survivorToAttachTo; \
	}; \
	struct TwinJumpAttack_eventMulticast_SetIsForbiddenLandingLocation_Parms \
	{ \
		bool isForbiddenLocation; \
	};


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinJumpAttack(); \
	friend struct Z_Construct_UClass_UTwinJumpAttack_Statics; \
public: \
	DECLARE_CLASS(UTwinJumpAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinJumpAttack) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldTwinHaveJumpObjectType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_shouldTwinHaveJumpObjectType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTwinJumpAttack(); \
	friend struct Z_Construct_UClass_UTwinJumpAttack_Statics; \
public: \
	DECLARE_CLASS(UTwinJumpAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinJumpAttack) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldTwinHaveJumpObjectType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_shouldTwinHaveJumpObjectType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinJumpAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinJumpAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinJumpAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinJumpAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinJumpAttack(UTwinJumpAttack&&); \
	NO_API UTwinJumpAttack(const UTwinJumpAttack&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinJumpAttack(UTwinJumpAttack&&); \
	NO_API UTwinJumpAttack(const UTwinJumpAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinJumpAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinJumpAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinJumpAttack)


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___jumpVelocity() { return STRUCT_OFFSET(UTwinJumpAttack, _jumpVelocity); } \
	FORCEINLINE static uint32 __PPO___jumpAngleCurve() { return STRUCT_OFFSET(UTwinJumpAttack, _jumpAngleCurve); } \
	FORCEINLINE static uint32 __PPO___upDownObstructionAnglePrecision() { return STRUCT_OFFSET(UTwinJumpAttack, _upDownObstructionAnglePrecision); } \
	FORCEINLINE static uint32 __PPO___leftRightObstructionAnglePrecision() { return STRUCT_OFFSET(UTwinJumpAttack, _leftRightObstructionAnglePrecision); } \
	FORCEINLINE static uint32 __PPO___authorizedLandingHeight() { return STRUCT_OFFSET(UTwinJumpAttack, _authorizedLandingHeight); } \
	FORCEINLINE static uint32 __PPO___shouldTwinHaveJumpObjectType() { return STRUCT_OFFSET(UTwinJumpAttack, _shouldTwinHaveJumpObjectType); }


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_13_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinJumpAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinJumpAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
