// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlashlightableComponent;
#ifdef DBDGAMEPLAY_FlashlightComponent_generated_h
#error "FlashlightComponent.generated.h already included, missing '#pragma once' in FlashlightComponent.h"
#endif
#define DBDGAMEPLAY_FlashlightComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_12_DELEGATE \
static inline void FFlashlightComponentOnFlashlightablesUpdated_DelegateWrapper(const FMulticastScriptDelegate& FlashlightComponentOnFlashlightablesUpdated) \
{ \
	FlashlightComponentOnFlashlightablesUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_11_DELEGATE \
static inline void FFlashlightComponentOnFlashlightTurnedOff_DelegateWrapper(const FMulticastScriptDelegate& FlashlightComponentOnFlashlightTurnedOff) \
{ \
	FlashlightComponentOnFlashlightTurnedOff.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_10_DELEGATE \
static inline void FFlashlightComponentOnFlashlightTurnedOn_DelegateWrapper(const FMulticastScriptDelegate& FlashlightComponentOnFlashlightTurnedOn) \
{ \
	FlashlightComponentOnFlashlightTurnedOn.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_RPC_WRAPPERS \
	virtual bool Server_SetAndUpdateAutonomousLitFlashlightables_Validate(TArray<UFlashlightableComponent*> const& ); \
	virtual void Server_SetAndUpdateAutonomousLitFlashlightables_Implementation(TArray<UFlashlightableComponent*> const& newLitFlashlightables); \
 \
	DECLARE_FUNCTION(execGetEffectiveBlindnessDuration); \
	DECLARE_FUNCTION(execGetEffectiveTimeToBlindModifier); \
	DECLARE_FUNCTION(execIsOn); \
	DECLARE_FUNCTION(execOnRep_IsOwnerLagging); \
	DECLARE_FUNCTION(execOnRep_ReplicatedLitFlashlightables); \
	DECLARE_FUNCTION(execServer_SetAndUpdateAutonomousLitFlashlightables); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execTurnOn);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAndUpdateAutonomousLitFlashlightables_Validate(TArray<UFlashlightableComponent*> const& ); \
	virtual void Server_SetAndUpdateAutonomousLitFlashlightables_Implementation(TArray<UFlashlightableComponent*> const& newLitFlashlightables); \
 \
	DECLARE_FUNCTION(execGetEffectiveBlindnessDuration); \
	DECLARE_FUNCTION(execGetEffectiveTimeToBlindModifier); \
	DECLARE_FUNCTION(execIsOn); \
	DECLARE_FUNCTION(execOnRep_IsOwnerLagging); \
	DECLARE_FUNCTION(execOnRep_ReplicatedLitFlashlightables); \
	DECLARE_FUNCTION(execServer_SetAndUpdateAutonomousLitFlashlightables); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execTurnOn);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_EVENT_PARMS \
	struct FlashlightComponent_eventServer_SetAndUpdateAutonomousLitFlashlightables_Parms \
	{ \
		TArray<UFlashlightableComponent*> newLitFlashlightables; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlashlightComponent(); \
	friend struct Z_Construct_UClass_UFlashlightComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFlashlightComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedLitFlashlightables=NETFIELD_REP_START, \
		_isOwnerLagging, \
		NETFIELD_REP_END=_isOwnerLagging	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFlashlightComponent(); \
	friend struct Z_Construct_UClass_UFlashlightComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFlashlightComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedLitFlashlightables=NETFIELD_REP_START, \
		_isOwnerLagging, \
		NETFIELD_REP_END=_isOwnerLagging	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlashlightComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlashlightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightComponent(UFlashlightComponent&&); \
	NO_API UFlashlightComponent(const UFlashlightComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightComponent(UFlashlightComponent&&); \
	NO_API UFlashlightComponent(const UFlashlightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlashlightComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___baseBlindnessDuration() { return STRUCT_OFFSET(UFlashlightComponent, _baseBlindnessDuration); } \
	FORCEINLINE static uint32 __PPO___baseAccuracy() { return STRUCT_OFFSET(UFlashlightComponent, _baseAccuracy); } \
	FORCEINLINE static uint32 __PPO___lagDuration() { return STRUCT_OFFSET(UFlashlightComponent, _lagDuration); } \
	FORCEINLINE static uint32 __PPO___flashlightables() { return STRUCT_OFFSET(UFlashlightComponent, _flashlightables); } \
	FORCEINLINE static uint32 __PPO___autonomousLitFlashlightables() { return STRUCT_OFFSET(UFlashlightComponent, _autonomousLitFlashlightables); } \
	FORCEINLINE static uint32 __PPO___replicatedLitFlashlightables() { return STRUCT_OFFSET(UFlashlightComponent, _replicatedLitFlashlightables); } \
	FORCEINLINE static uint32 __PPO___isOwnerLagging() { return STRUCT_OFFSET(UFlashlightComponent, _isOwnerLagging); }


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_14_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UFlashlightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_FlashlightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
