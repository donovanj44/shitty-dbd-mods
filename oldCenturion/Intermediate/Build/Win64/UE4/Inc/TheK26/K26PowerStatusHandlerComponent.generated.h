// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ASlasherPlayer;
#ifdef THEK26_K26PowerStatusHandlerComponent_generated_h
#error "K26PowerStatusHandlerComponent.generated.h already included, missing '#pragma once' in K26PowerStatusHandlerComponent.h"
#endif
#define THEK26_K26PowerStatusHandlerComponent_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_RPC_WRAPPERS \
	virtual void Multicast_OnCrowAttached_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnCrowDamagedSurvivor_Implementation(ASlasherPlayer* killer, ACamperPlayer* survivor); \
	virtual void Multicast_OnCrowDetached_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnIdleCrowInterrupt_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_OnStartRemovingCrow_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnStopRemovingCrow_Implementation(const ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompleted); \
	DECLARE_FUNCTION(execAuthority_OnKillerInstinctTimePassed); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execMulticast_OnCrowAttached); \
	DECLARE_FUNCTION(execMulticast_OnCrowDamagedSurvivor); \
	DECLARE_FUNCTION(execMulticast_OnCrowDetached); \
	DECLARE_FUNCTION(execMulticast_OnIdleCrowInterrupt); \
	DECLARE_FUNCTION(execMulticast_OnStartRemovingCrow); \
	DECLARE_FUNCTION(execMulticast_OnStopRemovingCrow);


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnCrowAttached_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnCrowDamagedSurvivor_Implementation(ASlasherPlayer* killer, ACamperPlayer* survivor); \
	virtual void Multicast_OnCrowDetached_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnIdleCrowInterrupt_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_OnStartRemovingCrow_Implementation(const ACamperPlayer* survivor); \
	virtual void Multicast_OnStopRemovingCrow_Implementation(const ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompleted); \
	DECLARE_FUNCTION(execAuthority_OnKillerInstinctTimePassed); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execMulticast_OnCrowAttached); \
	DECLARE_FUNCTION(execMulticast_OnCrowDamagedSurvivor); \
	DECLARE_FUNCTION(execMulticast_OnCrowDetached); \
	DECLARE_FUNCTION(execMulticast_OnIdleCrowInterrupt); \
	DECLARE_FUNCTION(execMulticast_OnStartRemovingCrow); \
	DECLARE_FUNCTION(execMulticast_OnStopRemovingCrow);


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_EVENT_PARMS \
	struct K26PowerStatusHandlerComponent_eventCosmetic_OnCrowDamagedSurvivor_Parms \
	{ \
		ASlasherPlayer* killer; \
		ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventCosmetic_OnCrowIdleInterrupt_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnCrowAttached_Parms \
	{ \
		const ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnCrowDamagedSurvivor_Parms \
	{ \
		ASlasherPlayer* killer; \
		ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnCrowDetached_Parms \
	{ \
		const ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnIdleCrowInterrupt_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnStartRemovingCrow_Parms \
	{ \
		const ACamperPlayer* survivor; \
	}; \
	struct K26PowerStatusHandlerComponent_eventMulticast_OnStopRemovingCrow_Parms \
	{ \
		const ACamperPlayer* survivor; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26PowerStatusHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26PowerStatusHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26PowerStatusHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorStatusList=NETFIELD_REP_START, \
		NETFIELD_REP_END=_survivorStatusList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUK26PowerStatusHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26PowerStatusHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26PowerStatusHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26PowerStatusHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorStatusList=NETFIELD_REP_START, \
		NETFIELD_REP_END=_survivorStatusList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26PowerStatusHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26PowerStatusHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26PowerStatusHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26PowerStatusHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26PowerStatusHandlerComponent(UK26PowerStatusHandlerComponent&&); \
	NO_API UK26PowerStatusHandlerComponent(const UK26PowerStatusHandlerComponent&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26PowerStatusHandlerComponent(UK26PowerStatusHandlerComponent&&); \
	NO_API UK26PowerStatusHandlerComponent(const UK26PowerStatusHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26PowerStatusHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26PowerStatusHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26PowerStatusHandlerComponent)


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactionsDuringWhichTheCrowIsIgnored() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _interactionsDuringWhichTheCrowIsIgnored); } \
	FORCEINLINE static uint32 __PPO___invincibilityTime() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _invincibilityTime); } \
	FORCEINLINE static uint32 __PPO___killerInstinctDelay() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _killerInstinctDelay); } \
	FORCEINLINE static uint32 __PPO___killerInstinctGracePeriod() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _killerInstinctGracePeriod); } \
	FORCEINLINE static uint32 __PPO___statusIndicatorClass() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _statusIndicatorClass); } \
	FORCEINLINE static uint32 __PPO___k26KillerInstinctStatusEffectName() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _k26KillerInstinctStatusEffectName); } \
	FORCEINLINE static uint32 __PPO___survivorStatusList() { return STRUCT_OFFSET(UK26PowerStatusHandlerComponent, _survivorStatusList); }


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_14_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26PowerStatusHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26PowerStatusHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
