// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef THEK23_LacerationComponent_generated_h
#error "LacerationComponent.generated.h already included, missing '#pragma once' in LacerationComponent.h"
#endif
#define THEK23_LacerationComponent_generated_h

#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_KnifeHit_Implementation(float newLaceration, bool causedDamage, bool causedKo, FVector const& impactLocation, FVector const& impactNormal); \
 \
	DECLARE_FUNCTION(execMulticast_KnifeHit); \
	DECLARE_FUNCTION(execOnRepLaceration);


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_KnifeHit_Implementation(float newLaceration, bool causedDamage, bool causedKo, FVector const& impactLocation, FVector const& impactNormal); \
 \
	DECLARE_FUNCTION(execMulticast_KnifeHit); \
	DECLARE_FUNCTION(execOnRepLaceration);


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_EVENT_PARMS \
	struct LacerationComponent_eventCosmetic_OnKnifeHit_Parms \
	{ \
		float lacerationPercent; \
		bool isDangerous; \
		bool causedDamage; \
		bool causedKo; \
		FVector impactNormal; \
	}; \
	struct LacerationComponent_eventCosmetic_OnLacerationChanged_Parms \
	{ \
		float lacerationPercent; \
		bool isDangerous; \
	}; \
	struct LacerationComponent_eventCosmetic_OnLocallyObservedChanged_Parms \
	{ \
		bool isLocallyObserved; \
		float lacerationPercent; \
		bool isDangerous; \
	}; \
	struct LacerationComponent_eventMulticast_KnifeHit_Parms \
	{ \
		float newLaceration; \
		bool causedDamage; \
		bool causedKo; \
		FVector impactLocation; \
		FVector impactNormal; \
	};


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULacerationComponent(); \
	friend struct Z_Construct_UClass_ULacerationComponent_Statics; \
public: \
	DECLARE_CLASS(ULacerationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(ULacerationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULacerationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_laceration=NETFIELD_REP_START, \
		NETFIELD_REP_END=_laceration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULacerationComponent(); \
	friend struct Z_Construct_UClass_ULacerationComponent_Statics; \
public: \
	DECLARE_CLASS(ULacerationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(ULacerationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULacerationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_laceration=NETFIELD_REP_START, \
		NETFIELD_REP_END=_laceration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULacerationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULacerationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULacerationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULacerationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULacerationComponent(ULacerationComponent&&); \
	NO_API ULacerationComponent(const ULacerationComponent&); \
public:


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULacerationComponent(ULacerationComponent&&); \
	NO_API ULacerationComponent(const ULacerationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULacerationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULacerationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULacerationComponent)


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___laceration() { return STRUCT_OFFSET(ULacerationComponent, _laceration); } \
	FORCEINLINE static uint32 __PPO___onHitSpeedBoost() { return STRUCT_OFFSET(ULacerationComponent, _onHitSpeedBoost); } \
	FORCEINLINE static uint32 __PPO___maxLaceration() { return STRUCT_OFFSET(ULacerationComponent, _maxLaceration); } \
	FORCEINLINE static uint32 __PPO___lacerationExplosionDamage() { return STRUCT_OFFSET(ULacerationComponent, _lacerationExplosionDamage); } \
	FORCEINLINE static uint32 __PPO___lacerationRegressionPerSecond() { return STRUCT_OFFSET(ULacerationComponent, _lacerationRegressionPerSecond); } \
	FORCEINLINE static uint32 __PPO___lacerationRegressionPerSecondWhileRunning() { return STRUCT_OFFSET(ULacerationComponent, _lacerationRegressionPerSecondWhileRunning); } \
	FORCEINLINE static uint32 __PPO___speedBoostIntensity() { return STRUCT_OFFSET(ULacerationComponent, _speedBoostIntensity); } \
	FORCEINLINE static uint32 __PPO___speedBoostDuration() { return STRUCT_OFFSET(ULacerationComponent, _speedBoostDuration); } \
	FORCEINLINE static uint32 __PPO___stopTickingRegressionWhileInjured() { return STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWhileInjured); } \
	FORCEINLINE static uint32 __PPO___stopTickingRegressionWhileInChase() { return STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWhileInChase); } \
	FORCEINLINE static uint32 __PPO___stopTickingRegressionWithinTerrorRadius() { return STRUCT_OFFSET(ULacerationComponent, _stopTickingRegressionWithinTerrorRadius); } \
	FORCEINLINE static uint32 __PPO___timeBeforeLacerationDecayStarts() { return STRUCT_OFFSET(ULacerationComponent, _timeBeforeLacerationDecayStarts); } \
	FORCEINLINE static uint32 __PPO___regressionBufferTimerAlwaysTicks() { return STRUCT_OFFSET(ULacerationComponent, _regressionBufferTimerAlwaysTicks); } \
	FORCEINLINE static uint32 __PPO___lacerationToRemoveOnBasicAttack() { return STRUCT_OFFSET(ULacerationComponent, _lacerationToRemoveOnBasicAttack); } \
	FORCEINLINE static uint32 __PPO___thresholdForGraceTimerScoreEvent() { return STRUCT_OFFSET(ULacerationComponent, _thresholdForGraceTimerScoreEvent); }


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_12_PROLOG \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_LacerationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class ULacerationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_LacerationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
