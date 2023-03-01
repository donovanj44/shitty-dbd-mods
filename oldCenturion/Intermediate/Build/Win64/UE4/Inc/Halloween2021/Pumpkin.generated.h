// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef HALLOWEEN2021_Pumpkin_generated_h
#error "Pumpkin.generated.h already included, missing '#pragma once' in Pumpkin.h"
#endif
#define HALLOWEEN2021_Pumpkin_generated_h

#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_SPARSE_DATA
#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_RPC_WRAPPERS
#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_EVENT_PARMS \
	struct Pumpkin_eventCosmetic_OnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct Pumpkin_eventCosmetic_OnStartedInteracting_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		float interactionDuration; \
	}; \
	struct Pumpkin_eventOnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	};


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPumpkin(); \
	friend struct Z_Construct_UClass_APumpkin_Statics; \
public: \
	DECLARE_CLASS(APumpkin, ASpecialBehaviourInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2021"), NO_API) \
	DECLARE_SERIALIZER(APumpkin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pumpkinType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pumpkinType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPumpkin(); \
	friend struct Z_Construct_UClass_APumpkin_Statics; \
public: \
	DECLARE_CLASS(APumpkin, ASpecialBehaviourInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2021"), NO_API) \
	DECLARE_SERIALIZER(APumpkin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pumpkinType=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pumpkinType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APumpkin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APumpkin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APumpkin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APumpkin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APumpkin(APumpkin&&); \
	NO_API APumpkin(const APumpkin&); \
public:


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APumpkin(APumpkin&&); \
	NO_API APumpkin(const APumpkin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APumpkin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APumpkin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APumpkin)


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___specialBehaviourId() { return STRUCT_OFFSET(APumpkin, _specialBehaviourId); } \
	FORCEINLINE static uint32 __PPO___pumpkinType() { return STRUCT_OFFSET(APumpkin, _pumpkinType); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteraction() { return STRUCT_OFFSET(APumpkin, _pumpkinInteraction); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionKiller() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionKiller); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionChargeable() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionChargeable); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionChargeableKiller() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionChargeableKiller); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractor() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractor); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionZone() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionZone); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(APumpkin, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___pumpkinSkeletalMesh() { return STRUCT_OFFSET(APumpkin, _pumpkinSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionSecondsToCharge() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___pumpkinInteractionSecondsToChargeKiller() { return STRUCT_OFFSET(APumpkin, _pumpkinInteractionSecondsToChargeKiller); } \
	FORCEINLINE static uint32 __PPO___auraColorWhileInteracting() { return STRUCT_OFFSET(APumpkin, _auraColorWhileInteracting); } \
	FORCEINLINE static uint32 __PPO___pumpkinTreatChance() { return STRUCT_OFFSET(APumpkin, _pumpkinTreatChance); } \
	FORCEINLINE static uint32 __PPO___pumpkinTrickChance() { return STRUCT_OFFSET(APumpkin, _pumpkinTrickChance); } \
	FORCEINLINE static uint32 __PPO___pumpkinTreatDuration() { return STRUCT_OFFSET(APumpkin, _pumpkinTreatDuration); } \
	FORCEINLINE static uint32 __PPO___pumpkinTrickDuration() { return STRUCT_OFFSET(APumpkin, _pumpkinTrickDuration); } \
	FORCEINLINE static uint32 __PPO___pumpkinSpeedBoost() { return STRUCT_OFFSET(APumpkin, _pumpkinSpeedBoost); } \
	FORCEINLINE static uint32 __PPO___pumpkinSpeedDebuff() { return STRUCT_OFFSET(APumpkin, _pumpkinSpeedDebuff); } \
	FORCEINLINE static uint32 __PPO___pumpkinStatusEffect() { return STRUCT_OFFSET(APumpkin, _pumpkinStatusEffect); }


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_18_PROLOG \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_EVENT_PARMS


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_INCLASS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALLOWEEN2021_API UClass* StaticClass<class APumpkin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Halloween2021_Public_Pumpkin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
