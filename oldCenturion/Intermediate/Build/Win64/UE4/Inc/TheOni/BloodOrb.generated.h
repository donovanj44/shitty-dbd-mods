// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class EBloodOrbState : uint8;
struct FVector;
#ifdef THEONI_BloodOrb_generated_h
#error "BloodOrb.generated.h already included, missing '#pragma once' in BloodOrb.h"
#endif
#define THEONI_BloodOrb_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_Despawn); \
	DECLARE_FUNCTION(execAuthority_DestroyBloodOrb); \
	DECLARE_FUNCTION(execAuthority_OnDropFinished); \
	DECLARE_FUNCTION(execGetDroppingPlayer); \
	DECLARE_FUNCTION(execOnRep_State);


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_Despawn); \
	DECLARE_FUNCTION(execAuthority_DestroyBloodOrb); \
	DECLARE_FUNCTION(execAuthority_OnDropFinished); \
	DECLARE_FUNCTION(execGetDroppingPlayer); \
	DECLARE_FUNCTION(execOnRep_State);


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_EVENT_PARMS \
	struct BloodOrb_eventAuthority_OnDropped_Parms \
	{ \
		const ADBDPlayer* droppedBy; \
		float impulseFactor; \
	}; \
	struct BloodOrb_eventOnIsAttractedChangedCosmetic_Parms \
	{ \
		bool isAttracted; \
	}; \
	struct BloodOrb_eventUpdateAbsorbed_Cosmetic_Parms \
	{ \
		FVector destination; \
		ADBDPlayer* absorber; \
		float deltaTime; \
	}; \
	struct BloodOrb_eventUpdateAttracted_Cosmetic_Parms \
	{ \
		FVector destination; \
		ADBDPlayer* absorber; \
		float deltaTime; \
	};


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloodOrb(); \
	friend struct Z_Construct_UClass_ABloodOrb_Statics; \
public: \
	DECLARE_CLASS(ABloodOrb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(ABloodOrb) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_droppingPlayer=NETFIELD_REP_START, \
		_state, \
		NETFIELD_REP_END=_state	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABloodOrb(); \
	friend struct Z_Construct_UClass_ABloodOrb_Statics; \
public: \
	DECLARE_CLASS(ABloodOrb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(ABloodOrb) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_droppingPlayer=NETFIELD_REP_START, \
		_state, \
		NETFIELD_REP_END=_state	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABloodOrb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABloodOrb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodOrb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodOrb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloodOrb(ABloodOrb&&); \
	NO_API ABloodOrb(const ABloodOrb&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloodOrb(ABloodOrb&&); \
	NO_API ABloodOrb(const ABloodOrb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodOrb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodOrb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloodOrb)


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___randomMoveDelayInterval() { return STRUCT_OFFSET(ABloodOrb, _randomMoveDelayInterval); } \
	FORCEINLINE static uint32 __PPO___absorbReference() { return STRUCT_OFFSET(ABloodOrb, _absorbReference); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ABloodOrb, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___despawnDelay() { return STRUCT_OFFSET(ABloodOrb, _despawnDelay); } \
	FORCEINLINE static uint32 __PPO___droppingPlayer() { return STRUCT_OFFSET(ABloodOrb, _droppingPlayer); } \
	FORCEINLINE static uint32 __PPO___state() { return STRUCT_OFFSET(ABloodOrb, _state); } \
	FORCEINLINE static uint32 __PPO___fadeComponent() { return STRUCT_OFFSET(ABloodOrb, _fadeComponent); }


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_14_PROLOG \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrb_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class ABloodOrb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
