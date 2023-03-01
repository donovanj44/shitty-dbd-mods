// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseGasCloudProjectile;
enum class EBombType : uint8;
#ifdef THECLOWN_GassedStatusEffect_generated_h
#error "GassedStatusEffect.generated.h already included, missing '#pragma once' in GassedStatusEffect.h"
#endif
#define THECLOWN_GassedStatusEffect_generated_h

#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AddOverlappingCloud); \
	DECLARE_FUNCTION(execAuthority_RemoveOverlappingCloud); \
	DECLARE_FUNCTION(execAuthority_SetIsInAntidoteCloud); \
	DECLARE_FUNCTION(execAuthority_SetIsInCloud); \
	DECLARE_FUNCTION(execGetAntidoteCloudEffectDuration); \
	DECLARE_FUNCTION(execGetCloudEffectDuration); \
	DECLARE_FUNCTION(execGetRemainingAntidoteDuration); \
	DECLARE_FUNCTION(execGetRemainingDuration); \
	DECLARE_FUNCTION(execIsInAntidoteCloud); \
	DECLARE_FUNCTION(execIsInCloud); \
	DECLARE_FUNCTION(execOnRep_IsInAntidoteCloud); \
	DECLARE_FUNCTION(execOnRep_TotalTimesEnteringToxicClouds); \
	DECLARE_FUNCTION(execSetRemainingAntidoteDuration); \
	DECLARE_FUNCTION(execSetRemainingDuration);


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AddOverlappingCloud); \
	DECLARE_FUNCTION(execAuthority_RemoveOverlappingCloud); \
	DECLARE_FUNCTION(execAuthority_SetIsInAntidoteCloud); \
	DECLARE_FUNCTION(execAuthority_SetIsInCloud); \
	DECLARE_FUNCTION(execGetAntidoteCloudEffectDuration); \
	DECLARE_FUNCTION(execGetCloudEffectDuration); \
	DECLARE_FUNCTION(execGetRemainingAntidoteDuration); \
	DECLARE_FUNCTION(execGetRemainingDuration); \
	DECLARE_FUNCTION(execIsInAntidoteCloud); \
	DECLARE_FUNCTION(execIsInCloud); \
	DECLARE_FUNCTION(execOnRep_IsInAntidoteCloud); \
	DECLARE_FUNCTION(execOnRep_TotalTimesEnteringToxicClouds); \
	DECLARE_FUNCTION(execSetRemainingAntidoteDuration); \
	DECLARE_FUNCTION(execSetRemainingDuration);


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_EVENT_PARMS \
	struct GassedStatusEffect_eventOnAntidoteEffectBegin_Parms \
	{ \
		float effectDuration; \
	}; \
	struct GassedStatusEffect_eventOnAntidoteEffectEnd_Parms \
	{ \
		float durationSkipped; \
	}; \
	struct GassedStatusEffect_eventOnDirectBottleHit_Parms \
	{ \
		EBombType bottleType; \
	}; \
	struct GassedStatusEffect_eventOnToxinEffectBegin_Parms \
	{ \
		float effectDuration; \
	}; \
	struct GassedStatusEffect_eventOnToxinEffectEnd_Parms \
	{ \
		float durationSkipped; \
	}; \
	struct GassedStatusEffect_eventUpdateAntidoteEffectVFX_Parms \
	{ \
		float durationRemaining; \
	};


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGassedStatusEffect(); \
	friend struct Z_Construct_UClass_UGassedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UGassedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UGassedStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInCloud=NETFIELD_REP_START, \
		_isInAntidoteCloud, \
		_totalTimesEnteringToxicClouds, \
		NETFIELD_REP_END=_totalTimesEnteringToxicClouds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGassedStatusEffect(); \
	friend struct Z_Construct_UClass_UGassedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UGassedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UGassedStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInCloud=NETFIELD_REP_START, \
		_isInAntidoteCloud, \
		_totalTimesEnteringToxicClouds, \
		NETFIELD_REP_END=_totalTimesEnteringToxicClouds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGassedStatusEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGassedStatusEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGassedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGassedStatusEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGassedStatusEffect(UGassedStatusEffect&&); \
	NO_API UGassedStatusEffect(const UGassedStatusEffect&); \
public:


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGassedStatusEffect(UGassedStatusEffect&&); \
	NO_API UGassedStatusEffect(const UGassedStatusEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGassedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGassedStatusEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGassedStatusEffect)


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInCloud() { return STRUCT_OFFSET(UGassedStatusEffect, _isInCloud); } \
	FORCEINLINE static uint32 __PPO___isInAntidoteCloud() { return STRUCT_OFFSET(UGassedStatusEffect, _isInAntidoteCloud); } \
	FORCEINLINE static uint32 __PPO___overlappingClouds() { return STRUCT_OFFSET(UGassedStatusEffect, _overlappingClouds); } \
	FORCEINLINE static uint32 __PPO___overlappingAntidoteClouds() { return STRUCT_OFFSET(UGassedStatusEffect, _overlappingAntidoteClouds); } \
	FORCEINLINE static uint32 __PPO___totalTimesEnteringToxicClouds() { return STRUCT_OFFSET(UGassedStatusEffect, _totalTimesEnteringToxicClouds); }


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_9_PROLOG \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_INCLASS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THECLOWN_API UClass* StaticClass<class UGassedStatusEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheClown_Public_GassedStatusEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
