// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_SurvivorAnimInstance_generated_h
#error "SurvivorAnimInstance.generated.h already included, missing '#pragma once' in SurvivorAnimInstance.h"
#endif
#define DBDANIMATION_SurvivorAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayingMontageByName);


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayingMontageByName);


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_EVENT_PARMS \
	struct SurvivorAnimInstance_eventAddAudioRepairRateRadius_Parms \
	{ \
		int32 distance; \
	}; \
	struct SurvivorAnimInstance_eventSetAudioRummageAkEvent_Parms \
	{ \
		FName distance; \
	};


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorAnimInstance(); \
	friend struct Z_Construct_UClass_USurvivorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USurvivorAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(USurvivorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorAnimInstance(); \
	friend struct Z_Construct_UClass_USurvivorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USurvivorAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(USurvivorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorAnimInstance(USurvivorAnimInstance&&); \
	NO_API USurvivorAnimInstance(const USurvivorAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorAnimInstance(USurvivorAnimInstance&&); \
	NO_API USurvivorAnimInstance(const USurvivorAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CamperPlayer() { return STRUCT_OFFSET(USurvivorAnimInstance, CamperPlayer); } \
	FORCEINLINE static uint32 __PPO__IsHooked() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHooked); } \
	FORCEINLINE static uint32 __PPO__IsSacrificeStruggling() { return STRUCT_OFFSET(USurvivorAnimInstance, IsSacrificeStruggling); } \
	FORCEINLINE static uint32 __PPO__MontageMadnessTierUp() { return STRUCT_OFFSET(USurvivorAnimInstance, MontageMadnessTierUp); } \
	FORCEINLINE static uint32 __PPO__ArrayCarryAttackMontage() { return STRUCT_OFFSET(USurvivorAnimInstance, ArrayCarryAttackMontage); } \
	FORCEINLINE static uint32 __PPO___isFrightScreaming() { return STRUCT_OFFSET(USurvivorAnimInstance, _isFrightScreaming); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarried() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarried); } \
	FORCEINLINE static uint32 __PPO__IsBeingPutOnHook() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingPutOnHook); } \
	FORCEINLINE static uint32 __PPO__IsCrouched() { return STRUCT_OFFSET(USurvivorAnimInstance, IsCrouched); } \
	FORCEINLINE static uint32 __PPO__GuidedAction() { return STRUCT_OFFSET(USurvivorAnimInstance, GuidedAction); } \
	FORCEINLINE static uint32 __PPO__IsTrapped() { return STRUCT_OFFSET(USurvivorAnimInstance, IsTrapped); } \
	FORCEINLINE static uint32 __PPO__IsCrawling() { return STRUCT_OFFSET(USurvivorAnimInstance, IsCrawling); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(USurvivorAnimInstance, IsDead); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(USurvivorAnimInstance, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInsideCloset() { return STRUCT_OFFSET(USurvivorAnimInstance, IsInsideCloset); } \
	FORCEINLINE static uint32 __PPO__IsPlayingMadnessTierUpWeight() { return STRUCT_OFFSET(USurvivorAnimInstance, IsPlayingMadnessTierUpWeight); } \
	FORCEINLINE static uint32 __PPO__IsBeingKilled() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingKilled); } \
	FORCEINLINE static uint32 __PPO__IsCarryAttackSucess() { return STRUCT_OFFSET(USurvivorAnimInstance, IsCarryAttackSucess); } \
	FORCEINLINE static uint32 __PPO__IsUsingAimItem() { return STRUCT_OFFSET(USurvivorAnimInstance, IsUsingAimItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingAimItem() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingAimItem); } \
	FORCEINLINE static uint32 __PPO__AllowLookAt() { return STRUCT_OFFSET(USurvivorAnimInstance, AllowLookAt); } \
	FORCEINLINE static uint32 __PPO__DropStaggerTimeLeft() { return STRUCT_OFFSET(USurvivorAnimInstance, DropStaggerTimeLeft); } \
	FORCEINLINE static uint32 __PPO__RightArmIKAlpha() { return STRUCT_OFFSET(USurvivorAnimInstance, RightArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandIKTransform() { return STRUCT_OFFSET(USurvivorAnimInstance, RightHandIKTransform); } \
	FORCEINLINE static uint32 __PPO__Strafe() { return STRUCT_OFFSET(USurvivorAnimInstance, Strafe); } \
	FORCEINLINE static uint32 __PPO__IsInteracting() { return STRUCT_OFFSET(USurvivorAnimInstance, IsInteracting); } \
	FORCEINLINE static uint32 __PPO__Injured() { return STRUCT_OFFSET(USurvivorAnimInstance, Injured); } \
	FORCEINLINE static uint32 __PPO__InteractionType() { return STRUCT_OFFSET(USurvivorAnimInstance, InteractionType); } \
	FORCEINLINE static uint32 __PPO__PreviousInteractionType() { return STRUCT_OFFSET(USurvivorAnimInstance, PreviousInteractionType); } \
	FORCEINLINE static uint32 __PPO__IsSlasherInFPV() { return STRUCT_OFFSET(USurvivorAnimInstance, IsSlasherInFPV); } \
	FORCEINLINE static uint32 __PPO__CarriedAlpha() { return STRUCT_OFFSET(USurvivorAnimInstance, CarriedAlpha); } \
	FORCEINLINE static uint32 __PPO__IsHoldingHandleItem() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingHandleItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingSmallItem() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingSmallItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingFirecracker() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingFirecracker); } \
	FORCEINLINE static uint32 __PPO__IsHoldingFlashbang() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingFlashbang); } \
	FORCEINLINE static uint32 __PPO__IsHoldingVaccine() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingVaccine); } \
	FORCEINLINE static uint32 __PPO__IsHoldingAnyItem() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingAnyItem); } \
	FORCEINLINE static uint32 __PPO__IsHoldingLamentConfiguration() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHoldingLamentConfiguration); } \
	FORCEINLINE static uint32 __PPO__IsArmOverrideDisabled() { return STRUCT_OFFSET(USurvivorAnimInstance, IsArmOverrideDisabled); } \
	FORCEINLINE static uint32 __PPO__InAir() { return STRUCT_OFFSET(USurvivorAnimInstance, InAir); } \
	FORCEINLINE static uint32 __PPO___walkAnimSpeed() { return STRUCT_OFFSET(USurvivorAnimInstance, _walkAnimSpeed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(USurvivorAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(USurvivorAnimInstance, Pitch); } \
	FORCEINLINE static uint32 __PPO__Yaw() { return STRUCT_OFFSET(USurvivorAnimInstance, Yaw); } \
	FORCEINLINE static uint32 __PPO__RightFootEffectorLocation() { return STRUCT_OFFSET(USurvivorAnimInstance, RightFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO__LeftFootEffectorLocation() { return STRUCT_OFFSET(USurvivorAnimInstance, LeftFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO__Idle() { return STRUCT_OFFSET(USurvivorAnimInstance, Idle); } \
	FORCEINLINE static uint32 __PPO__MyTime() { return STRUCT_OFFSET(USurvivorAnimInstance, MyTime); } \
	FORCEINLINE static uint32 __PPO__HasAnyMontagePlaying() { return STRUCT_OFFSET(USurvivorAnimInstance, HasAnyMontagePlaying); } \
	FORCEINLINE static uint32 __PPO__CurrentlyPlayerMontageId() { return STRUCT_OFFSET(USurvivorAnimInstance, CurrentlyPlayerMontageId); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheSpirit() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByTheSpirit); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheNightmare() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByTheNightmare); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByThePig() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByThePig); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheHag() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByTheHag); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheLegion() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByTheLegion); } \
	FORCEINLINE static uint32 __PPO__IsBeingCarriedByTheGhostFace() { return STRUCT_OFFSET(USurvivorAnimInstance, IsBeingCarriedByTheGhostFace); } \
	FORCEINLINE static uint32 __PPO__IsUsingDeadHard() { return STRUCT_OFFSET(USurvivorAnimInstance, IsUsingDeadHard); } \
	FORCEINLINE static uint32 __PPO__IsPlayingWakeUpOther() { return STRUCT_OFFSET(USurvivorAnimInstance, IsPlayingWakeUpOther); } \
	FORCEINLINE static uint32 __PPO__IsPlayingFreddyMori() { return STRUCT_OFFSET(USurvivorAnimInstance, IsPlayingFreddyMori); } \
	FORCEINLINE static uint32 __PPO__IsHealingKOCamper() { return STRUCT_OFFSET(USurvivorAnimInstance, IsHealingKOCamper); } \
	FORCEINLINE static uint32 __PPO__HasLinkInput() { return STRUCT_OFFSET(USurvivorAnimInstance, HasLinkInput); }


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_14_PROLOG \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class USurvivorAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_SurvivorAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
