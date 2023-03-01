// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CamperAnimInstance_generated_h
#error "CamperAnimInstance.generated.h already included, missing '#pragma once' in CamperAnimInstance.h"
#endif
#define DEADBYDAYLIGHT_CamperAnimInstance_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayingMontageByName); \
	DECLARE_FUNCTION(execSetIsGassed); \
	DECLARE_FUNCTION(execSetIsSacrificeStruggling);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayingMontageByName); \
	DECLARE_FUNCTION(execSetIsGassed); \
	DECLARE_FUNCTION(execSetIsSacrificeStruggling);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_EVENT_PARMS \
	struct CamperAnimInstance_eventAddAudioRepairRateRadius_Parms \
	{ \
		int32 distance; \
	}; \
	struct CamperAnimInstance_eventSetAudioRummageAkEvent_Parms \
	{ \
		FName distance; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperAnimInstance(); \
	friend struct Z_Construct_UClass_UCamperAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCamperAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCamperAnimInstance(); \
	friend struct Z_Construct_UClass_UCamperAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCamperAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperAnimInstance(UCamperAnimInstance&&); \
	NO_API UCamperAnimInstance(const UCamperAnimInstance&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperAnimInstance(UCamperAnimInstance&&); \
	NO_API UCamperAnimInstance(const UCamperAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CamperPlayer() { return STRUCT_OFFSET(UCamperAnimInstance, CamperPlayer); } \
	FORCEINLINE static uint32 __PPO__MyDeltaTime() { return STRUCT_OFFSET(UCamperAnimInstance, MyDeltaTime); } \
	FORCEINLINE static uint32 __PPO__IsHooked() { return STRUCT_OFFSET(UCamperAnimInstance, IsHooked); } \
	FORCEINLINE static uint32 __PPO__IsSacrificeStruggling() { return STRUCT_OFFSET(UCamperAnimInstance, IsSacrificeStruggling); } \
	FORCEINLINE static uint32 __PPO__MontageMadnessTierUp() { return STRUCT_OFFSET(UCamperAnimInstance, MontageMadnessTierUp); } \
	FORCEINLINE static uint32 __PPO__ArrayCarryAttackMontage() { return STRUCT_OFFSET(UCamperAnimInstance, ArrayCarryAttackMontage); } \
	FORCEINLINE static uint32 __PPO___isFrightScreaming() { return STRUCT_OFFSET(UCamperAnimInstance, _isFrightScreaming); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarried() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarried); } \
	FORCEINLINE static uint32 __PPO__IsBeingPutOnHook() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingPutOnHook); } \
	FORCEINLINE static uint32 __PPO__IsCrouched() { return STRUCT_OFFSET(UCamperAnimInstance, IsCrouched); } \
	FORCEINLINE static uint32 __PPO__GuidedAction() { return STRUCT_OFFSET(UCamperAnimInstance, GuidedAction); } \
	FORCEINLINE static uint32 __PPO__IsTrapped() { return STRUCT_OFFSET(UCamperAnimInstance, IsTrapped); } \
	FORCEINLINE static uint32 __PPO__IsCrawling() { return STRUCT_OFFSET(UCamperAnimInstance, IsCrawling); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(UCamperAnimInstance, IsDead); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(UCamperAnimInstance, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInsideCloset() { return STRUCT_OFFSET(UCamperAnimInstance, IsInsideCloset); } \
	FORCEINLINE static uint32 __PPO__IsPlayingMadnessTierUpWeight() { return STRUCT_OFFSET(UCamperAnimInstance, IsPlayingMadnessTierUpWeight); } \
	FORCEINLINE static uint32 __PPO__IsTotallyInsane() { return STRUCT_OFFSET(UCamperAnimInstance, IsTotallyInsane); } \
	FORCEINLINE static uint32 __PPO__IsBeingKilled() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingKilled); } \
	FORCEINLINE static uint32 __PPO__IsCarryAttackSucess() { return STRUCT_OFFSET(UCamperAnimInstance, IsCarryAttackSucess); } \
	FORCEINLINE static uint32 __PPO__ShouldLookSleepy() { return STRUCT_OFFSET(UCamperAnimInstance, ShouldLookSleepy); } \
	FORCEINLINE static uint32 __PPO__IsUsingAimItem() { return STRUCT_OFFSET(UCamperAnimInstance, IsUsingAimItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingAimItem() { return STRUCT_OFFSET(UCamperAnimInstance, IsHoldingAimItem); } \
	FORCEINLINE static uint32 __PPO__AllowLookAt() { return STRUCT_OFFSET(UCamperAnimInstance, AllowLookAt); } \
	FORCEINLINE static uint32 __PPO__DropStaggerTimeLeft() { return STRUCT_OFFSET(UCamperAnimInstance, DropStaggerTimeLeft); } \
	FORCEINLINE static uint32 __PPO__LeftArmIKAlpha() { return STRUCT_OFFSET(UCamperAnimInstance, LeftArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightArmIKAlpha() { return STRUCT_OFFSET(UCamperAnimInstance, RightArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftForeArmIKAlpha() { return STRUCT_OFFSET(UCamperAnimInstance, LeftForeArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightForeArmIKAlpha() { return STRUCT_OFFSET(UCamperAnimInstance, RightForeArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandIKTransform() { return STRUCT_OFFSET(UCamperAnimInstance, LeftHandIKTransform); } \
	FORCEINLINE static uint32 __PPO__RightHandIKTransform() { return STRUCT_OFFSET(UCamperAnimInstance, RightHandIKTransform); } \
	FORCEINLINE static uint32 __PPO__Strafe() { return STRUCT_OFFSET(UCamperAnimInstance, Strafe); } \
	FORCEINLINE static uint32 __PPO__IsInteracting() { return STRUCT_OFFSET(UCamperAnimInstance, IsInteracting); } \
	FORCEINLINE static uint32 __PPO__Injured() { return STRUCT_OFFSET(UCamperAnimInstance, Injured); } \
	FORCEINLINE static uint32 __PPO__InteractionType() { return STRUCT_OFFSET(UCamperAnimInstance, InteractionType); } \
	FORCEINLINE static uint32 __PPO__PreviousInteractionType() { return STRUCT_OFFSET(UCamperAnimInstance, PreviousInteractionType); } \
	FORCEINLINE static uint32 __PPO__IsSlasherInFPV() { return STRUCT_OFFSET(UCamperAnimInstance, IsSlasherInFPV); } \
	FORCEINLINE static uint32 __PPO__CarriedAlpha() { return STRUCT_OFFSET(UCamperAnimInstance, CarriedAlpha); } \
	FORCEINLINE static uint32 __PPO__IsHoldingHandleItem() { return STRUCT_OFFSET(UCamperAnimInstance, IsHoldingHandleItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingSmallItem() { return STRUCT_OFFSET(UCamperAnimInstance, IsHoldingSmallItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingFirecracker() { return STRUCT_OFFSET(UCamperAnimInstance, IsHoldingFirecracker); } \
	FORCEINLINE static uint32 __PPO__Turning() { return STRUCT_OFFSET(UCamperAnimInstance, Turning); } \
	FORCEINLINE static uint32 __PPO__InAir() { return STRUCT_OFFSET(UCamperAnimInstance, InAir); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCamperAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCamperAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(UCamperAnimInstance, Pitch); } \
	FORCEINLINE static uint32 __PPO__Yaw() { return STRUCT_OFFSET(UCamperAnimInstance, Yaw); } \
	FORCEINLINE static uint32 __PPO__RightFootEffectorLocation() { return STRUCT_OFFSET(UCamperAnimInstance, RightFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO__LeftFootEffectorLocation() { return STRUCT_OFFSET(UCamperAnimInstance, LeftFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO__Idle() { return STRUCT_OFFSET(UCamperAnimInstance, Idle); } \
	FORCEINLINE static uint32 __PPO__MyTime() { return STRUCT_OFFSET(UCamperAnimInstance, MyTime); } \
	FORCEINLINE static uint32 __PPO__SkillCheckFailed() { return STRUCT_OFFSET(UCamperAnimInstance, SkillCheckFailed); } \
	FORCEINLINE static uint32 __PPO__IsGassed() { return STRUCT_OFFSET(UCamperAnimInstance, IsGassed); } \
	FORCEINLINE static uint32 __PPO__HasAnyMontagePlaying() { return STRUCT_OFFSET(UCamperAnimInstance, HasAnyMontagePlaying); } \
	FORCEINLINE static uint32 __PPO__CurrentlyPlayerMontageId() { return STRUCT_OFFSET(UCamperAnimInstance, CurrentlyPlayerMontageId); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheSpirit() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByTheSpirit); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheNightmare() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByTheNightmare); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByThePig() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByThePig); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheHag() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByTheHag); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheLegion() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByTheLegion); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheGhostFace() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingCarriedByTheGhostFace); } \
	FORCEINLINE static uint32 __PPO__IsUsingDeadHard() { return STRUCT_OFFSET(UCamperAnimInstance, IsUsingDeadHard); } \
	FORCEINLINE static uint32 __PPO__IsPlayingWakeUpOther() { return STRUCT_OFFSET(UCamperAnimInstance, IsPlayingWakeUpOther); } \
	FORCEINLINE static uint32 __PPO__IsPlayingFreddyMori() { return STRUCT_OFFSET(UCamperAnimInstance, IsPlayingFreddyMori); } \
	FORCEINLINE static uint32 __PPO__IsSpooked() { return STRUCT_OFFSET(UCamperAnimInstance, IsSpooked); } \
	FORCEINLINE static uint32 __PPO__IsHealingKOCamper() { return STRUCT_OFFSET(UCamperAnimInstance, IsHealingKOCamper); } \
	FORCEINLINE static uint32 __PPO__IsChainLinked() { return STRUCT_OFFSET(UCamperAnimInstance, IsChainLinked); } \
	FORCEINLINE static uint32 __PPO__IsBeingReeled() { return STRUCT_OFFSET(UCamperAnimInstance, IsBeingReeled); } \
	FORCEINLINE static uint32 __PPO__TriggerHarpoonHitAnim() { return STRUCT_OFFSET(UCamperAnimInstance, TriggerHarpoonHitAnim); } \
	FORCEINLINE static uint32 __PPO__WasRecentlyHitByVomit() { return STRUCT_OFFSET(UCamperAnimInstance, WasRecentlyHitByVomit); } \
	FORCEINLINE static uint32 __PPO__HarpoonHitTurnAnimNormalizedStartTime() { return STRUCT_OFFSET(UCamperAnimInstance, HarpoonHitTurnAnimNormalizedStartTime); } \
	FORCEINLINE static uint32 __PPO__HarpoonHitAnimTurnRight() { return STRUCT_OFFSET(UCamperAnimInstance, HarpoonHitAnimTurnRight); } \
	FORCEINLINE static uint32 __PPO__ChainBreakTrigger() { return STRUCT_OFFSET(UCamperAnimInstance, ChainBreakTrigger); } \
	FORCEINLINE static uint32 __PPO__HasLinkInput() { return STRUCT_OFFSET(UCamperAnimInstance, HasLinkInput); } \
	FORCEINLINE static uint32 __PPO__LinkInputX() { return STRUCT_OFFSET(UCamperAnimInstance, LinkInputX); } \
	FORCEINLINE static uint32 __PPO__LinkInputY() { return STRUCT_OFFSET(UCamperAnimInstance, LinkInputY); } \
	FORCEINLINE static uint32 __PPO__LinkedMaxSpeed() { return STRUCT_OFFSET(UCamperAnimInstance, LinkedMaxSpeed); } \
	FORCEINLINE static uint32 __PPO___cachedSurvivorPlagueEffect() { return STRUCT_OFFSET(UCamperAnimInstance, _cachedSurvivorPlagueEffect); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
