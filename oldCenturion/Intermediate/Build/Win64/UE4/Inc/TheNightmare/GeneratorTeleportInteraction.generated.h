// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AGenerator;
class ASlasherPlayer;
struct FTransform;
struct FVector;
struct FRotator;
#ifdef THENIGHTMARE_GeneratorTeleportInteraction_generated_h
#error "GeneratorTeleportInteraction.generated.h already included, missing '#pragma once' in GeneratorTeleportInteraction.h"
#endif
#define THENIGHTMARE_GeneratorTeleportInteraction_generated_h

#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_RPC_WRAPPERS \
	virtual void Multicast_OnTeleportLocationChosen_Implementation(AGenerator* generator, FTransform location); \
	virtual void Multicast_TeleportPlayer_Implementation(FVector location, FRotator rotation); \
	virtual bool Server_SetSelectedGenerator_Validate(AGenerator* ); \
	virtual void Server_SetSelectedGenerator_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execAuthority_StartTeleportCooldown); \
	DECLARE_FUNCTION(execAuthority_TeleportPlayerToGenerator); \
	DECLARE_FUNCTION(execCanTeleportAtGenerator); \
	DECLARE_FUNCTION(execGetInlineGenerator); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execIsTeleportAvailable); \
	DECLARE_FUNCTION(execMulticast_OnTeleportLocationChosen); \
	DECLARE_FUNCTION(execMulticast_TeleportPlayer); \
	DECLARE_FUNCTION(execOnBloodSpurts); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnRep_SelectedGenerator); \
	DECLARE_FUNCTION(execOnRep_TeleportCooldownTimer); \
	DECLARE_FUNCTION(execServer_SetSelectedGenerator); \
	DECLARE_FUNCTION(execStartBloodSpurts); \
	DECLARE_FUNCTION(execStopBloodSpurts);


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnTeleportLocationChosen_Implementation(AGenerator* generator, FTransform location); \
	virtual void Multicast_TeleportPlayer_Implementation(FVector location, FRotator rotation); \
	virtual bool Server_SetSelectedGenerator_Validate(AGenerator* ); \
	virtual void Server_SetSelectedGenerator_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execAuthority_StartTeleportCooldown); \
	DECLARE_FUNCTION(execAuthority_TeleportPlayerToGenerator); \
	DECLARE_FUNCTION(execCanTeleportAtGenerator); \
	DECLARE_FUNCTION(execGetInlineGenerator); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execIsTeleportAvailable); \
	DECLARE_FUNCTION(execMulticast_OnTeleportLocationChosen); \
	DECLARE_FUNCTION(execMulticast_TeleportPlayer); \
	DECLARE_FUNCTION(execOnBloodSpurts); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnRep_SelectedGenerator); \
	DECLARE_FUNCTION(execOnRep_TeleportCooldownTimer); \
	DECLARE_FUNCTION(execServer_SetSelectedGenerator); \
	DECLARE_FUNCTION(execStartBloodSpurts); \
	DECLARE_FUNCTION(execStopBloodSpurts);


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_EVENT_PARMS \
	struct GeneratorTeleportInteraction_eventMulticast_OnTeleportLocationChosen_Parms \
	{ \
		AGenerator* generator; \
		FTransform location; \
	}; \
	struct GeneratorTeleportInteraction_eventMulticast_TeleportPlayer_Parms \
	{ \
		FVector location; \
		FRotator rotation; \
	}; \
	struct GeneratorTeleportInteraction_eventOnLocallySelectedGeneratorSet_Parms \
	{ \
		AGenerator* selectedGenerator; \
	}; \
	struct GeneratorTeleportInteraction_eventOnSelectedGeneratorSet_Parms \
	{ \
		AGenerator* selectedGenerator; \
	}; \
	struct GeneratorTeleportInteraction_eventOnTeleported_Parms \
	{ \
		FTransform transformBeforeTeleport; \
	}; \
	struct GeneratorTeleportInteraction_eventOnTeleportLocationChosen_Parms \
	{ \
		AGenerator* generator; \
		FTransform location; \
	}; \
	struct GeneratorTeleportInteraction_eventServer_SetSelectedGenerator_Parms \
	{ \
		AGenerator* generator; \
	};


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratorTeleportInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorTeleportInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorTeleportInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNightmare"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorTeleportInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_teleportCooldownTimer=NETFIELD_REP_START, \
		_selectedGenerator, \
		_selectedTeleportLocation, \
		NETFIELD_REP_END=_selectedTeleportLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratorTeleportInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorTeleportInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorTeleportInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNightmare"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorTeleportInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_teleportCooldownTimer=NETFIELD_REP_START, \
		_selectedGenerator, \
		_selectedTeleportLocation, \
		NETFIELD_REP_END=_selectedTeleportLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratorTeleportInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorTeleportInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorTeleportInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorTeleportInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorTeleportInteraction(UGeneratorTeleportInteraction&&); \
	NO_API UGeneratorTeleportInteraction(const UGeneratorTeleportInteraction&); \
public:


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorTeleportInteraction(UGeneratorTeleportInteraction&&); \
	NO_API UGeneratorTeleportInteraction(const UGeneratorTeleportInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorTeleportInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorTeleportInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneratorTeleportInteraction)


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___teleportCooldownTimer() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _teleportCooldownTimer); } \
	FORCEINLINE static uint32 __PPO___selectedGenerator() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _selectedGenerator); } \
	FORCEINLINE static uint32 __PPO___locallySelectedGenerator() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _locallySelectedGenerator); } \
	FORCEINLINE static uint32 __PPO___selectedTeleportLocation() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _selectedTeleportLocation); } \
	FORCEINLINE static uint32 __PPO___isInteractionOngoing() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _isInteractionOngoing); } \
	FORCEINLINE static uint32 __PPO___teleportFailed() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _teleportFailed); } \
	FORCEINLINE static uint32 __PPO___bloodSpurtInterval() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _bloodSpurtInterval); } \
	FORCEINLINE static uint32 __PPO___collisionCheckCapsuleHalfHeight() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO___collisionCheckCapsuleRadius() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO___collisionCheckLocationOffset() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckLocationOffset); } \
	FORCEINLINE static uint32 __PPO___capsuleTraceAngleIncrement() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _capsuleTraceAngleIncrement); } \
	FORCEINLINE static uint32 __PPO___generatorTeleportMaxAngle() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _generatorTeleportMaxAngle); } \
	FORCEINLINE static uint32 __PPO___downRaycastLength() { return STRUCT_OFFSET(UGeneratorTeleportInteraction, _downRaycastLength); }


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_14_PROLOG \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_INCLASS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THENIGHTMARE_API UClass* StaticClass<class UGeneratorTeleportInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheNightmare_Public_GeneratorTeleportInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
