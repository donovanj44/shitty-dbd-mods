// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AK25SurvivorChainAttachmentAnchor;
class UInstancedStaticMeshComponent;
class USplineComponent;
enum class EK25ChainDetachmentReason : uint8;
#ifdef THEK25_K25Chain_generated_h
#error "K25Chain.generated.h already included, missing '#pragma once' in K25Chain.h"
#endif
#define THEK25_K25Chain_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_19_DELEGATE \
struct _Script_TheK25_eventK25ChainOnAcquiredChanged_Parms \
{ \
	bool acquired; \
}; \
static inline void FK25ChainOnAcquiredChanged_DelegateWrapper(const FMulticastScriptDelegate& K25ChainOnAcquiredChanged, bool acquired) \
{ \
	_Script_TheK25_eventK25ChainOnAcquiredChanged_Parms Parms; \
	Parms.acquired=acquired ? true : false; \
	K25ChainOnAcquiredChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChainEndLocation); \
	DECLARE_FUNCTION(execGetChainStartLocation); \
	DECLARE_FUNCTION(execGetSurvivorChainAttachmentAnchor); \
	DECLARE_FUNCTION(execIsAttachedToControlledProjectile); \
	DECLARE_FUNCTION(execSetInstancedMeshComponent); \
	DECLARE_FUNCTION(execSetSplineComponent);


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChainEndLocation); \
	DECLARE_FUNCTION(execGetChainStartLocation); \
	DECLARE_FUNCTION(execGetSurvivorChainAttachmentAnchor); \
	DECLARE_FUNCTION(execIsAttachedToControlledProjectile); \
	DECLARE_FUNCTION(execSetInstancedMeshComponent); \
	DECLARE_FUNCTION(execSetSplineComponent);


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_EVENT_PARMS \
	struct K25Chain_eventCosmetic_OnChainAttachedToSurvivor_Parms \
	{ \
		bool wasReachingSurvivorAnchorPoint; \
	}; \
	struct K25Chain_eventCosmetic_OnChainDetachedFromSurvivor_Parms \
	{ \
		EK25ChainDetachmentReason detachmentReason; \
	}; \
	struct K25Chain_eventCosmetic_OnSurvivorStoppedRemovingChainSFX_Parms \
	{ \
		bool hasRemovedChainDueToInteraction; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25Chain(); \
	friend struct Z_Construct_UClass_AK25Chain_Statics; \
public: \
	DECLARE_CLASS(AK25Chain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Chain) \
	virtual UObject* _getUObject() const override { return const_cast<AK25Chain*>(this); }


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAK25Chain(); \
	friend struct Z_Construct_UClass_AK25Chain_Statics; \
public: \
	DECLARE_CLASS(AK25Chain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Chain) \
	virtual UObject* _getUObject() const override { return const_cast<AK25Chain*>(this); }


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25Chain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25Chain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Chain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Chain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Chain(AK25Chain&&); \
	NO_API AK25Chain(const AK25Chain&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Chain(AK25Chain&&); \
	NO_API AK25Chain(const AK25Chain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Chain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Chain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25Chain)


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___reelingBackSpeed() { return STRUCT_OFFSET(AK25Chain, _reelingBackSpeed); } \
	FORCEINLINE static uint32 __PPO___chainOffsetMinValue() { return STRUCT_OFFSET(AK25Chain, _chainOffsetMinValue); } \
	FORCEINLINE static uint32 __PPO___chainOffsetMaxValue() { return STRUCT_OFFSET(AK25Chain, _chainOffsetMaxValue); } \
	FORCEINLINE static uint32 __PPO___reelbackChainOffsetMinValue() { return STRUCT_OFFSET(AK25Chain, _reelbackChainOffsetMinValue); } \
	FORCEINLINE static uint32 __PPO___reelbackChainOffsetMaxValue() { return STRUCT_OFFSET(AK25Chain, _reelbackChainOffsetMaxValue); } \
	FORCEINLINE static uint32 __PPO___chainInstanceSpacing() { return STRUCT_OFFSET(AK25Chain, _chainInstanceSpacing); } \
	FORCEINLINE static uint32 __PPO___quickChainOffsetTimerLength() { return STRUCT_OFFSET(AK25Chain, _quickChainOffsetTimerLength); } \
	FORCEINLINE static uint32 __PPO___reachingSurvivorAnchorTime() { return STRUCT_OFFSET(AK25Chain, _reachingSurvivorAnchorTime); } \
	FORCEINLINE static uint32 __PPO___chainScale() { return STRUCT_OFFSET(AK25Chain, _chainScale); } \
	FORCEINLINE static uint32 __PPO___chainOffsetTimerLength() { return STRUCT_OFFSET(AK25Chain, _chainOffsetTimerLength); } \
	FORCEINLINE static uint32 __PPO___currentChainPoints() { return STRUCT_OFFSET(AK25Chain, _currentChainPoints); } \
	FORCEINLINE static uint32 __PPO___isAcquiredFromPool() { return STRUCT_OFFSET(AK25Chain, _isAcquiredFromPool); } \
	FORCEINLINE static uint32 __PPO___sphereTraceRadius() { return STRUCT_OFFSET(AK25Chain, _sphereTraceRadius); } \
	FORCEINLINE static uint32 __PPO___chainStartPosition() { return STRUCT_OFFSET(AK25Chain, _chainStartPosition); } \
	FORCEINLINE static uint32 __PPO___reelBackPosition() { return STRUCT_OFFSET(AK25Chain, _reelBackPosition); } \
	FORCEINLINE static uint32 __PPO___reelbackStartPosition() { return STRUCT_OFFSET(AK25Chain, _reelbackStartPosition); } \
	FORCEINLINE static uint32 __PPO___projectileAttachedTo() { return STRUCT_OFFSET(AK25Chain, _projectileAttachedTo); } \
	FORCEINLINE static uint32 __PPO___survivorAnchorAttachedTo() { return STRUCT_OFFSET(AK25Chain, _survivorAnchorAttachedTo); } \
	FORCEINLINE static uint32 __PPO___targetAnchorToReach() { return STRUCT_OFFSET(AK25Chain, _targetAnchorToReach); } \
	FORCEINLINE static uint32 __PPO___chainSplineComponent() { return STRUCT_OFFSET(AK25Chain, _chainSplineComponent); } \
	FORCEINLINE static uint32 __PPO___chainInstancedMesh() { return STRUCT_OFFSET(AK25Chain, _chainInstancedMesh); } \
	FORCEINLINE static uint32 __PPO___currentInfluenceCurve() { return STRUCT_OFFSET(AK25Chain, _currentInfluenceCurve); } \
	FORCEINLINE static uint32 __PPO___chainCurveOffset() { return STRUCT_OFFSET(AK25Chain, _chainCurveOffset); } \
	FORCEINLINE static uint32 __PPO___chainState() { return STRUCT_OFFSET(AK25Chain, _chainState); } \
	FORCEINLINE static uint32 __PPO___curveOffsetStrengthTimer() { return STRUCT_OFFSET(AK25Chain, _curveOffsetStrengthTimer); } \
	FORCEINLINE static uint32 __PPO___reelbackTimer() { return STRUCT_OFFSET(AK25Chain, _reelbackTimer); } \
	FORCEINLINE static uint32 __PPO___reachSurvivorAnchorPositionTimer() { return STRUCT_OFFSET(AK25Chain, _reachSurvivorAnchorPositionTimer); } \
	FORCEINLINE static uint32 __PPO___forcedPositions() { return STRUCT_OFFSET(AK25Chain, _forcedPositions); } \
	FORCEINLINE static uint32 __PPO___chainCreationStrategy() { return STRUCT_OFFSET(AK25Chain, _chainCreationStrategy); }


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_21_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Chain_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25Chain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25Chain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
