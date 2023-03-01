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
class ACharacter;
class UCharacterSightComponent;
#ifdef DEADBYDAYLIGHT_GhostStalkedComponent_generated_h
#error "GhostStalkedComponent.generated.h already included, missing '#pragma once' in GhostStalkedComponent.h"
#endif
#define DEADBYDAYLIGHT_GhostStalkedComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_16_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStalkedComponentOnIsSpottingKillerChanged_Parms \
{ \
	bool isSpotting; \
}; \
static inline void FGhostStalkedComponentOnIsSpottingKillerChanged_DelegateWrapper(const FMulticastScriptDelegate& GhostStalkedComponentOnIsSpottingKillerChanged, bool isSpotting) \
{ \
	_Script_DeadByDaylight_eventGhostStalkedComponentOnIsSpottingKillerChanged_Parms Parms; \
	Parms.isSpotting=isSpotting ? true : false; \
	GhostStalkedComponentOnIsSpottingKillerChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_15_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStalkedComponentOnIsMarkedChanged_Parms \
{ \
	bool isMarked; \
}; \
static inline void FGhostStalkedComponentOnIsMarkedChanged_DelegateWrapper(const FMulticastScriptDelegate& GhostStalkedComponentOnIsMarkedChanged, bool isMarked) \
{ \
	_Script_DeadByDaylight_eventGhostStalkedComponentOnIsMarkedChanged_Parms Parms; \
	Parms.isMarked=isMarked ? true : false; \
	GhostStalkedComponentOnIsMarkedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_RPC_WRAPPERS \
	virtual void Client_OnSpotKiller_Implementation(); \
	virtual void Initialize_Implementation(ASlasherPlayer* killer); \
 \
	DECLARE_FUNCTION(execAuthority_OnStalkedChargeFull); \
	DECLARE_FUNCTION(execClient_OnSpotKiller); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsMarked); \
	DECLARE_FUNCTION(execOnCharacterSightChanged); \
	DECLARE_FUNCTION(execOnKillerStealthChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnSpotKiller_Implementation(); \
	virtual void Initialize_Implementation(ASlasherPlayer* killer); \
 \
	DECLARE_FUNCTION(execAuthority_OnStalkedChargeFull); \
	DECLARE_FUNCTION(execClient_OnSpotKiller); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsMarked); \
	DECLARE_FUNCTION(execOnCharacterSightChanged); \
	DECLARE_FUNCTION(execOnKillerStealthChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_EVENT_PARMS \
	struct GhostStalkedComponent_eventInitialize_Parms \
	{ \
		ASlasherPlayer* killer; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGhostStalkedComponent(); \
	friend struct Z_Construct_UClass_UGhostStalkedComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStalkedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStalkedComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isMarked=NETFIELD_REP_START, \
		_ghostKillerInstinctEffect, \
		NETFIELD_REP_END=_ghostKillerInstinctEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGhostStalkedComponent(); \
	friend struct Z_Construct_UClass_UGhostStalkedComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStalkedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStalkedComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isMarked=NETFIELD_REP_START, \
		_ghostKillerInstinctEffect, \
		NETFIELD_REP_END=_ghostKillerInstinctEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGhostStalkedComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGhostStalkedComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStalkedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStalkedComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStalkedComponent(UGhostStalkedComponent&&); \
	NO_API UGhostStalkedComponent(const UGhostStalkedComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStalkedComponent(UGhostStalkedComponent&&); \
	NO_API UGhostStalkedComponent(const UGhostStalkedComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStalkedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStalkedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGhostStalkedComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isMarked() { return STRUCT_OFFSET(UGhostStalkedComponent, _isMarked); } \
	FORCEINLINE static uint32 __PPO___ghostKillerInstinctEffect() { return STRUCT_OFFSET(UGhostStalkedComponent, _ghostKillerInstinctEffect); } \
	FORCEINLINE static uint32 __PPO___markTimer() { return STRUCT_OFFSET(UGhostStalkedComponent, _markTimer); } \
	FORCEINLINE static uint32 __PPO___killer() { return STRUCT_OFFSET(UGhostStalkedComponent, _killer); } \
	FORCEINLINE static uint32 __PPO___stalkedComponent() { return STRUCT_OFFSET(UGhostStalkedComponent, _stalkedComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_18_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGhostStalkedComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkedComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
