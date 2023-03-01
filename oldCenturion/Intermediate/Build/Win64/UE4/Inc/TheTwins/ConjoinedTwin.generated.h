// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirecrackerEffectData;
struct FGameplayTag;
struct FGameEventData;
#ifdef THETWINS_ConjoinedTwin_generated_h
#error "ConjoinedTwin.generated.h already included, missing '#pragma once' in ConjoinedTwin.h"
#endif
#define THETWINS_ConjoinedTwin_generated_h

#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_RPC_WRAPPERS \
	virtual bool Server_SendAttackInput_Validate(bool ); \
	virtual void Server_SendAttackInput_Implementation(bool pressed); \
 \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execOnFinishedPlayingEvent); \
	DECLARE_FUNCTION(execServer_SendAttackInput);


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendAttackInput_Validate(bool ); \
	virtual void Server_SendAttackInput_Implementation(bool pressed); \
 \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execOnFinishedPlayingEvent); \
	DECLARE_FUNCTION(execServer_SendAttackInput);


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_EVENT_PARMS \
	struct ConjoinedTwin_eventCosmetic_OnOnGroundUncontrolledChanged_Parms \
	{ \
		bool onGroundAndUncontrolled; \
	}; \
	struct ConjoinedTwin_eventServer_SendAttackInput_Parms \
	{ \
		bool pressed; \
	};


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConjoinedTwin(); \
	friend struct Z_Construct_UClass_AConjoinedTwin_Statics; \
public: \
	DECLARE_CLASS(AConjoinedTwin, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(AConjoinedTwin)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAConjoinedTwin(); \
	friend struct Z_Construct_UClass_AConjoinedTwin_Statics; \
public: \
	DECLARE_CLASS(AConjoinedTwin, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(AConjoinedTwin)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConjoinedTwin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConjoinedTwin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConjoinedTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConjoinedTwin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConjoinedTwin(AConjoinedTwin&&); \
	NO_API AConjoinedTwin(const AConjoinedTwin&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConjoinedTwin(AConjoinedTwin&&); \
	NO_API AConjoinedTwin(const AConjoinedTwin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConjoinedTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConjoinedTwin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConjoinedTwin)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___restrictedPossessionAreaTracker() { return STRUCT_OFFSET(AConjoinedTwin, _restrictedPossessionAreaTracker); } \
	FORCEINLINE static uint32 __PPO___twinOutlineUpdateStrategy() { return STRUCT_OFFSET(AConjoinedTwin, _twinOutlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___twinLullabyAudioComponent() { return STRUCT_OFFSET(AConjoinedTwin, _twinLullabyAudioComponent); } \
	FORCEINLINE static uint32 __PPO___twinBlindingFX() { return STRUCT_OFFSET(AConjoinedTwin, _twinBlindingFX); } \
	FORCEINLINE static uint32 __PPO___customizedAudio() { return STRUCT_OFFSET(AConjoinedTwin, _customizedAudio); } \
	FORCEINLINE static uint32 __PPO___attackerComponent() { return STRUCT_OFFSET(AConjoinedTwin, _attackerComponent); } \
	FORCEINLINE static uint32 __PPO___maxWalkSpeed() { return STRUCT_OFFSET(AConjoinedTwin, _maxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___hitValidator() { return STRUCT_OFFSET(AConjoinedTwin, _hitValidator); } \
	FORCEINLINE static uint32 __PPO___hitValidationConfigurator() { return STRUCT_OFFSET(AConjoinedTwin, _hitValidationConfigurator); } \
	FORCEINLINE static uint32 __PPO___gravityScale() { return STRUCT_OFFSET(AConjoinedTwin, _gravityScale); } \
	FORCEINLINE static uint32 __PPO___animationFollower() { return STRUCT_OFFSET(AConjoinedTwin, _animationFollower); } \
	FORCEINLINE static uint32 __PPO___revealDurationOnAttached() { return STRUCT_OFFSET(AConjoinedTwin, _revealDurationOnAttached); } \
	FORCEINLINE static uint32 __PPO___firstPersonViewComponent() { return STRUCT_OFFSET(AConjoinedTwin, _firstPersonViewComponent); } \
	FORCEINLINE static uint32 __PPO___eyesFlashlightable() { return STRUCT_OFFSET(AConjoinedTwin, _eyesFlashlightable); } \
	FORCEINLINE static uint32 __PPO___blindFlashlightTargetFXComponent() { return STRUCT_OFFSET(AConjoinedTwin, _blindFlashlightTargetFXComponent); } \
	FORCEINLINE static uint32 __PPO___firecrackerEffectHandlerComponent() { return STRUCT_OFFSET(AConjoinedTwin, _firecrackerEffectHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___flashlightBlindEvasionScoreTimer() { return STRUCT_OFFSET(AConjoinedTwin, _flashlightBlindEvasionScoreTimer); } \
	FORCEINLINE static uint32 __PPO___flashlightEvasionScoreCooldown() { return STRUCT_OFFSET(AConjoinedTwin, _flashlightEvasionScoreCooldown); } \
	FORCEINLINE static uint32 __PPO___twinPossessNegationEffectComponent() { return STRUCT_OFFSET(AConjoinedTwin, _twinPossessNegationEffectComponent); }


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_26_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class AConjoinedTwin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_ConjoinedTwin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
