// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASlasherPlayer;
enum class ECamperDamageState : uint8;
struct FGameplayTag;
struct FGameEventData;
class ACamperPlayer;
class AK26AttachedCrow;
enum class FK26AttachedCrowRemovalReason : uint8;
#ifdef THEK26_K26AttachedCrow_generated_h
#error "K26AttachedCrow.generated.h already included, missing '#pragma once' in K26AttachedCrow.h"
#endif
#define THEK26_K26AttachedCrow_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_RPC_WRAPPERS \
	virtual void Multicast_OnStartDetaching_Implementation(); \
	virtual void Multicast_OnStopDetaching_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_ActivateInfection); \
	DECLARE_FUNCTION(execAuthority_DeactivateInfection); \
	DECLARE_FUNCTION(execAuthority_OnDestroyAttempt); \
	DECLARE_FUNCTION(execAuthority_OnIsWithinOtherSurvivorRangeChanged); \
	DECLARE_FUNCTION(execAuthority_OnKillerSet); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorGuidedActionChanged); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorPerkFlagsChanged); \
	DECLARE_FUNCTION(execAuthority_OnPlayerLeftGame); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorDroppedEnd); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorExitLocker); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorStatusIndicatorSet); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorWasUnhooked); \
	DECLARE_FUNCTION(execHideOutline); \
	DECLARE_FUNCTION(execMulticast_OnStartDetaching); \
	DECLARE_FUNCTION(execMulticast_OnStopDetaching); \
	DECLARE_FUNCTION(execOnRep_AttachmentStatus);


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnStartDetaching_Implementation(); \
	virtual void Multicast_OnStopDetaching_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_ActivateInfection); \
	DECLARE_FUNCTION(execAuthority_DeactivateInfection); \
	DECLARE_FUNCTION(execAuthority_OnDestroyAttempt); \
	DECLARE_FUNCTION(execAuthority_OnIsWithinOtherSurvivorRangeChanged); \
	DECLARE_FUNCTION(execAuthority_OnKillerSet); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorGuidedActionChanged); \
	DECLARE_FUNCTION(execAuthority_OnOtherSurvivorPerkFlagsChanged); \
	DECLARE_FUNCTION(execAuthority_OnPlayerLeftGame); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorDroppedEnd); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorExitLocker); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorStatusIndicatorSet); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorWasUnhooked); \
	DECLARE_FUNCTION(execHideOutline); \
	DECLARE_FUNCTION(execMulticast_OnStartDetaching); \
	DECLARE_FUNCTION(execMulticast_OnStopDetaching); \
	DECLARE_FUNCTION(execOnRep_AttachmentStatus);


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_EVENT_PARMS \
	struct K26AttachedCrow_eventCosmetic_OnAttachedCrowRemoved_Parms \
	{ \
		FK26AttachedCrowRemovalReason removalReason; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK26AttachedCrow(); \
	friend struct Z_Construct_UClass_AK26AttachedCrow_Statics; \
public: \
	DECLARE_CLASS(AK26AttachedCrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(AK26AttachedCrow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachmentStatus=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachmentStatus	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAK26AttachedCrow(); \
	friend struct Z_Construct_UClass_AK26AttachedCrow_Statics; \
public: \
	DECLARE_CLASS(AK26AttachedCrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(AK26AttachedCrow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachmentStatus=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachmentStatus	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK26AttachedCrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK26AttachedCrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK26AttachedCrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK26AttachedCrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK26AttachedCrow(AK26AttachedCrow&&); \
	NO_API AK26AttachedCrow(const AK26AttachedCrow&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK26AttachedCrow(AK26AttachedCrow&&); \
	NO_API AK26AttachedCrow(const AK26AttachedCrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK26AttachedCrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK26AttachedCrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK26AttachedCrow)


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___firecrackerEffectHandlerComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _firecrackerEffectHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___flashLightableComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _flashLightableComponent); } \
	FORCEINLINE static uint32 __PPO___lightBurnableComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _lightBurnableComponent); } \
	FORCEINLINE static uint32 __PPO___flashlightDestroyChargeable() { return STRUCT_OFFSET(AK26AttachedCrow, _flashlightDestroyChargeable); } \
	FORCEINLINE static uint32 __PPO___requiredFlashlightTimeToDestroy() { return STRUCT_OFFSET(AK26AttachedCrow, _requiredFlashlightTimeToDestroy); } \
	FORCEINLINE static uint32 __PPO___lingerTime() { return STRUCT_OFFSET(AK26AttachedCrow, _lingerTime); } \
	FORCEINLINE static uint32 __PPO___infectionDelay() { return STRUCT_OFFSET(AK26AttachedCrow, _infectionDelay); } \
	FORCEINLINE static uint32 __PPO___infectRadius() { return STRUCT_OFFSET(AK26AttachedCrow, _infectRadius); } \
	FORCEINLINE static uint32 __PPO___outlineUpdateStrategy() { return STRUCT_OFFSET(AK26AttachedCrow, _outlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___visualStaticMeshComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _visualStaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO___rootComponent() { return STRUCT_OFFSET(AK26AttachedCrow, _rootComponent); } \
	FORCEINLINE static uint32 __PPO___statusHandler() { return STRUCT_OFFSET(AK26AttachedCrow, _statusHandler); } \
	FORCEINLINE static uint32 __PPO___authority_isInfecting() { return STRUCT_OFFSET(AK26AttachedCrow, _authority_isInfecting); } \
	FORCEINLINE static uint32 __PPO___attachmentStatus() { return STRUCT_OFFSET(AK26AttachedCrow, _attachmentStatus); }


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_26_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class AK26AttachedCrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26AttachedCrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
