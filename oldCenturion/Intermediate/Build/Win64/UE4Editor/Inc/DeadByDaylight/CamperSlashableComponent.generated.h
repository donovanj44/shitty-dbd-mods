// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
#ifdef DEADBYDAYLIGHT_CamperSlashableComponent_generated_h
#error "CamperSlashableComponent.generated.h already included, missing '#pragma once' in CamperSlashableComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperSlashableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCrouchCapsuleHalfHeight); \
	DECLARE_FUNCTION(execSetHookSlashableZone); \
	DECLARE_FUNCTION(execSetSlashableZone); \
	DECLARE_FUNCTION(execSetStandingCapsuleHalfHeight); \
	DECLARE_FUNCTION(execSetUseCrouchSlashableCapsule);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCrouchCapsuleHalfHeight); \
	DECLARE_FUNCTION(execSetHookSlashableZone); \
	DECLARE_FUNCTION(execSetSlashableZone); \
	DECLARE_FUNCTION(execSetStandingCapsuleHalfHeight); \
	DECLARE_FUNCTION(execSetUseCrouchSlashableCapsule);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperSlashableComponent(); \
	friend struct Z_Construct_UClass_UCamperSlashableComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperSlashableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperSlashableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCamperSlashableComponent*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCamperSlashableComponent(); \
	friend struct Z_Construct_UClass_UCamperSlashableComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperSlashableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperSlashableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCamperSlashableComponent*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperSlashableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperSlashableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperSlashableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperSlashableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperSlashableComponent(UCamperSlashableComponent&&); \
	NO_API UCamperSlashableComponent(const UCamperSlashableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperSlashableComponent(UCamperSlashableComponent&&); \
	NO_API UCamperSlashableComponent(const UCamperSlashableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperSlashableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperSlashableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperSlashableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___slashableZone() { return STRUCT_OFFSET(UCamperSlashableComponent, _slashableZone); } \
	FORCEINLINE static uint32 __PPO___hookSlashableZone() { return STRUCT_OFFSET(UCamperSlashableComponent, _hookSlashableZone); } \
	FORCEINLINE static uint32 __PPO___standingCapsuleHalfHeight() { return STRUCT_OFFSET(UCamperSlashableComponent, _standingCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO___crouchCapsuleHalfHeight() { return STRUCT_OFFSET(UCamperSlashableComponent, _crouchCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO___slashableDisablingStateTags() { return STRUCT_OFFSET(UCamperSlashableComponent, _slashableDisablingStateTags); } \
	FORCEINLINE static uint32 __PPO___sourceActivationLingerDuration() { return STRUCT_OFFSET(UCamperSlashableComponent, _sourceActivationLingerDuration); } \
	FORCEINLINE static uint32 __PPO___slashableActivationSources() { return STRUCT_OFFSET(UCamperSlashableComponent, _slashableActivationSources); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperSlashableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperSlashableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
