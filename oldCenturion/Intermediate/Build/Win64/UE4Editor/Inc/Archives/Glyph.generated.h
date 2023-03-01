// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADBDPlayer;
#ifdef ARCHIVES_Glyph_generated_h
#error "Glyph.generated.h already included, missing '#pragma once' in Glyph.h"
#endif
#define ARCHIVES_Glyph_generated_h

#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompleted); \
	DECLARE_FUNCTION(execAuthority_OnPlayerBreachedRangeThreshold); \
	DECLARE_FUNCTION(execAuthority_TrackPlayerWithBehaviourID); \
	DECLARE_FUNCTION(execDoesLocalPlayerHaveVisibility); \
	DECLARE_FUNCTION(execOnRep_PlayersWithVisibility);


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompleted); \
	DECLARE_FUNCTION(execAuthority_OnPlayerBreachedRangeThreshold); \
	DECLARE_FUNCTION(execAuthority_TrackPlayerWithBehaviourID); \
	DECLARE_FUNCTION(execDoesLocalPlayerHaveVisibility); \
	DECLARE_FUNCTION(execOnRep_PlayersWithVisibility);


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_EVENT_PARMS \
	struct Glyph_eventAuthority_OnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct Glyph_eventCosmetic_OnGlyphVisibilityChanged_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		bool isVisible; \
	}; \
	struct Glyph_eventCosmetic_OnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct Glyph_eventCosmetic_OnStartedInteracting_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		float interactionDuration; \
	};


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlyph(); \
	friend struct Z_Construct_UClass_AGlyph_Statics; \
public: \
	DECLARE_CLASS(AGlyph, ASpecialBehaviourInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(AGlyph) \
	virtual UObject* _getUObject() const override { return const_cast<AGlyph*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersWithVisibility=NETFIELD_REP_START, \
		_playersThatInteractedWithGlyph, \
		NETFIELD_REP_END=_playersThatInteractedWithGlyph	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAGlyph(); \
	friend struct Z_Construct_UClass_AGlyph_Statics; \
public: \
	DECLARE_CLASS(AGlyph, ASpecialBehaviourInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(AGlyph) \
	virtual UObject* _getUObject() const override { return const_cast<AGlyph*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersWithVisibility=NETFIELD_REP_START, \
		_playersThatInteractedWithGlyph, \
		NETFIELD_REP_END=_playersThatInteractedWithGlyph	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGlyph(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGlyph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlyph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlyph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGlyph(AGlyph&&); \
	NO_API AGlyph(const AGlyph&); \
public:


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGlyph(AGlyph&&); \
	NO_API AGlyph(const AGlyph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlyph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlyph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlyph)


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___playersWithVisibility() { return STRUCT_OFFSET(AGlyph, _playersWithVisibility); } \
	FORCEINLINE static uint32 __PPO___oldPlayersWithVisibility() { return STRUCT_OFFSET(AGlyph, _oldPlayersWithVisibility); } \
	FORCEINLINE static uint32 __PPO___specialBehaviourId() { return STRUCT_OFFSET(AGlyph, _specialBehaviourId); } \
	FORCEINLINE static uint32 __PPO___allowedPlayerType() { return STRUCT_OFFSET(AGlyph, _allowedPlayerType); } \
	FORCEINLINE static uint32 __PPO__lastPlayerToStartInteraction() { return STRUCT_OFFSET(AGlyph, lastPlayerToStartInteraction); } \
	FORCEINLINE static uint32 __PPO___glyphInteraction() { return STRUCT_OFFSET(AGlyph, _glyphInteraction); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionKiller() { return STRUCT_OFFSET(AGlyph, _glyphInteractionKiller); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionChargeable() { return STRUCT_OFFSET(AGlyph, _glyphInteractionChargeable); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionChargeableKiller() { return STRUCT_OFFSET(AGlyph, _glyphInteractionChargeableKiller); } \
	FORCEINLINE static uint32 __PPO___glyphInteractor() { return STRUCT_OFFSET(AGlyph, _glyphInteractor); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionZone() { return STRUCT_OFFSET(AGlyph, _glyphInteractionZone); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(AGlyph, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___glyphMesh() { return STRUCT_OFFSET(AGlyph, _glyphMesh); } \
	FORCEINLINE static uint32 __PPO___nearTrackedActorComponent() { return STRUCT_OFFSET(AGlyph, _nearTrackedActorComponent); } \
	FORCEINLINE static uint32 __PPO___associatedSurvivorScoreEvent() { return STRUCT_OFFSET(AGlyph, _associatedSurvivorScoreEvent); } \
	FORCEINLINE static uint32 __PPO___associatedKillerScoreEvent() { return STRUCT_OFFSET(AGlyph, _associatedKillerScoreEvent); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionSecondsToCharge() { return STRUCT_OFFSET(AGlyph, _glyphInteractionSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___glyphInteractionSecondsToChargeKiller() { return STRUCT_OFFSET(AGlyph, _glyphInteractionSecondsToChargeKiller); } \
	FORCEINLINE static uint32 __PPO___glyphDetectionRange() { return STRUCT_OFFSET(AGlyph, _glyphDetectionRange); } \
	FORCEINLINE static uint32 __PPO___auraColorWhileInteracting() { return STRUCT_OFFSET(AGlyph, _auraColorWhileInteracting); } \
	FORCEINLINE static uint32 __PPO___playersThatInteractedWithGlyph() { return STRUCT_OFFSET(AGlyph, _playersThatInteractedWithGlyph); }


#define DeadByDaylight_Source_Archives_Public_Glyph_h_21_PROLOG \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_EVENT_PARMS


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_INCLASS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_Glyph_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_Glyph_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class AGlyph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_Glyph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
