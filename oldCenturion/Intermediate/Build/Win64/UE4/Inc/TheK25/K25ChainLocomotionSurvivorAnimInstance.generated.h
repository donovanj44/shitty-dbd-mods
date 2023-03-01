// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK25SurvivorChainAttachmentAnchor;
struct FK25SurvivorChainAttachmentData;
class UK25SurvivorChainAttachmentComponent;
class AK25Chain;
enum class EK25ChainDetachmentReason : uint8;
class UChargeableComponent;
#ifdef THEK25_K25ChainLocomotionSurvivorAnimInstance_generated_h
#error "K25ChainLocomotionSurvivorAnimInstance.generated.h already included, missing '#pragma once' in K25ChainLocomotionSurvivorAnimInstance.h"
#endif
#define THEK25_K25ChainLocomotionSurvivorAnimInstance_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChainAttachmentAnchors); \
	DECLARE_FUNCTION(execGetDetachingChainAnchorData); \
	DECLARE_FUNCTION(execGetSurvivorChainAttachmentComponent); \
	DECLARE_FUNCTION(execHasChainsAttached); \
	DECLARE_FUNCTION(execIsSolvingLamentConfiguration); \
	DECLARE_FUNCTION(execOnChainAttached); \
	DECLARE_FUNCTION(execOnChainDetached); \
	DECLARE_FUNCTION(execOnRemoveChainChargePercentageChanged);


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChainAttachmentAnchors); \
	DECLARE_FUNCTION(execGetDetachingChainAnchorData); \
	DECLARE_FUNCTION(execGetSurvivorChainAttachmentComponent); \
	DECLARE_FUNCTION(execHasChainsAttached); \
	DECLARE_FUNCTION(execIsSolvingLamentConfiguration); \
	DECLARE_FUNCTION(execOnChainAttached); \
	DECLARE_FUNCTION(execOnChainDetached); \
	DECLARE_FUNCTION(execOnRemoveChainChargePercentageChanged);


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_EVENT_PARMS \
	struct K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainAttached_Parms \
	{ \
		AK25Chain* chain; \
		AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor; \
	}; \
	struct K25ChainLocomotionSurvivorAnimInstance_eventBP_OnChainDetached_Parms \
	{ \
		AK25Chain* chain; \
		AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainLocomotionSurvivorAnimInstance(); \
	friend struct Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK25ChainLocomotionSurvivorAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainLocomotionSurvivorAnimInstance)


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainLocomotionSurvivorAnimInstance(); \
	friend struct Z_Construct_UClass_UK25ChainLocomotionSurvivorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK25ChainLocomotionSurvivorAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainLocomotionSurvivorAnimInstance)


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainLocomotionSurvivorAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainLocomotionSurvivorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainLocomotionSurvivorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainLocomotionSurvivorAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainLocomotionSurvivorAnimInstance(UK25ChainLocomotionSurvivorAnimInstance&&); \
	NO_API UK25ChainLocomotionSurvivorAnimInstance(const UK25ChainLocomotionSurvivorAnimInstance&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainLocomotionSurvivorAnimInstance(UK25ChainLocomotionSurvivorAnimInstance&&); \
	NO_API UK25ChainLocomotionSurvivorAnimInstance(const UK25ChainLocomotionSurvivorAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainLocomotionSurvivorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainLocomotionSurvivorAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainLocomotionSurvivorAnimInstance)


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hasChainsAttached() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasChainsAttached); } \
	FORCEINLINE static uint32 __PPO___breakChainInteractionCompletionPercentage() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _breakChainInteractionCompletionPercentage); } \
	FORCEINLINE static uint32 __PPO___isPerformingBreakChainInteraction() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _isPerformingBreakChainInteraction); } \
	FORCEINLINE static uint32 __PPO___forwardDirectionDotProductResult() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _forwardDirectionDotProductResult); } \
	FORCEINLINE static uint32 __PPO___lateralDirectionDotProductResult() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _lateralDirectionDotProductResult); } \
	FORCEINLINE static uint32 __PPO___currentChainBeingDetached() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _currentChainBeingDetached); } \
	FORCEINLINE static uint32 __PPO___leftHandAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _leftHandAttachmentData); } \
	FORCEINLINE static uint32 __PPO___rightHandAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _rightHandAttachmentData); } \
	FORCEINLINE static uint32 __PPO___leftShoulderAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _leftShoulderAttachmentData); } \
	FORCEINLINE static uint32 __PPO___rightShoulderAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _rightShoulderAttachmentData); } \
	FORCEINLINE static uint32 __PPO___stomachAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _stomachAttachmentData); } \
	FORCEINLINE static uint32 __PPO___backAttachmentData() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _backAttachmentData); } \
	FORCEINLINE static uint32 __PPO___chainDirection() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _chainDirection); } \
	FORCEINLINE static uint32 __PPO___lastDetatchedChainDirection() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _lastDetatchedChainDirection); } \
	FORCEINLINE static uint32 __PPO___hasBrokenFreeFromChain() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBrokenFreeFromChain); } \
	FORCEINLINE static uint32 __PPO___hasBrokenFreeTime() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBrokenFreeTime); } \
	FORCEINLINE static uint32 __PPO___hasBeenHitByChain() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBeenHitByChain); } \
	FORCEINLINE static uint32 __PPO___hasBeenHitByChainTime() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _hasBeenHitByChainTime); } \
	FORCEINLINE static uint32 __PPO___numberOfChainsAttached() { return STRUCT_OFFSET(UK25ChainLocomotionSurvivorAnimInstance, _numberOfChainsAttached); }


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_15_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainLocomotionSurvivorAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainLocomotionSurvivorAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
