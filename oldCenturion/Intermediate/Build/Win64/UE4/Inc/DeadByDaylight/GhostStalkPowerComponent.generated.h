// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELeanState : uint8;
#ifdef DEADBYDAYLIGHT_GhostStalkPowerComponent_generated_h
#error "GhostStalkPowerComponent.generated.h already included, missing '#pragma once' in GhostStalkPowerComponent.h"
#endif
#define DEADBYDAYLIGHT_GhostStalkPowerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnStalkModeChanged); \
	DECLARE_FUNCTION(execOnIsCrouchedChanged); \
	DECLARE_FUNCTION(execOnLeanStateChanged); \
	DECLARE_FUNCTION(execRefreshSurvivorMaximumSightDistance);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnStalkModeChanged); \
	DECLARE_FUNCTION(execOnIsCrouchedChanged); \
	DECLARE_FUNCTION(execOnLeanStateChanged); \
	DECLARE_FUNCTION(execRefreshSurvivorMaximumSightDistance);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGhostStalkPowerComponent(); \
	friend struct Z_Construct_UClass_UGhostStalkPowerComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStalkPowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStalkPowerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGhostStalkPowerComponent(); \
	friend struct Z_Construct_UClass_UGhostStalkPowerComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStalkPowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStalkPowerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGhostStalkPowerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGhostStalkPowerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStalkPowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStalkPowerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStalkPowerComponent(UGhostStalkPowerComponent&&); \
	NO_API UGhostStalkPowerComponent(const UGhostStalkPowerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStalkPowerComponent(UGhostStalkPowerComponent&&); \
	NO_API UGhostStalkPowerComponent(const UGhostStalkPowerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStalkPowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStalkPowerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGhostStalkPowerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___stalkerComponent() { return STRUCT_OFFSET(UGhostStalkPowerComponent, _stalkerComponent); } \
	FORCEINLINE static uint32 __PPO___ghostStalkedComponentClassPtr() { return STRUCT_OFFSET(UGhostStalkPowerComponent, _ghostStalkedComponentClassPtr); } \
	FORCEINLINE static uint32 __PPO___crouchAttackRequiredTimeSeconds() { return STRUCT_OFFSET(UGhostStalkPowerComponent, _crouchAttackRequiredTimeSeconds); } \
	FORCEINLINE static uint32 __PPO___debugMode() { return STRUCT_OFFSET(UGhostStalkPowerComponent, _debugMode); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGhostStalkPowerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GhostStalkPowerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
