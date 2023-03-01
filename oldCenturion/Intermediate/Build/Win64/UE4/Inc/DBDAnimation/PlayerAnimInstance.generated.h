// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDANIMATION_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define DBDANIMATION_PlayerAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execHasBeenNotified); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execHasBeenNotified); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPlayerAnimInstance*>(this); }


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPlayerAnimInstance*>(this); }


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningPlayer() { return STRUCT_OFFSET(UPlayerAnimInstance, _owningPlayer); } \
	FORCEINLINE static uint32 __PPO___animEffectBlackBoard() { return STRUCT_OFFSET(UPlayerAnimInstance, _animEffectBlackBoard); } \
	FORCEINLINE static uint32 __PPO___animEffectHandlerForSFX() { return STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerForSFX); } \
	FORCEINLINE static uint32 __PPO___animEffectHandlerForVFX() { return STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerForVFX); } \
	FORCEINLINE static uint32 __PPO___animEffectHandlerClassForSFX() { return STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerClassForSFX); } \
	FORCEINLINE static uint32 __PPO___animEffectHandlerClassForVFX() { return STRUCT_OFFSET(UPlayerAnimInstance, _animEffectHandlerClassForVFX); } \
	FORCEINLINE static uint32 __PPO___taggedAnimCollections() { return STRUCT_OFFSET(UPlayerAnimInstance, _taggedAnimCollections); } \
	FORCEINLINE static uint32 __PPO___animations() { return STRUCT_OFFSET(UPlayerAnimInstance, _animations); } \
	FORCEINLINE static uint32 __PPO___blendspaces() { return STRUCT_OFFSET(UPlayerAnimInstance, _blendspaces); } \
	FORCEINLINE static uint32 __PPO___aimoffsets() { return STRUCT_OFFSET(UPlayerAnimInstance, _aimoffsets); } \
	FORCEINLINE static uint32 __PPO___blendspaces1d() { return STRUCT_OFFSET(UPlayerAnimInstance, _blendspaces1d); } \
	FORCEINLINE static uint32 __PPO___aimoffsets1d() { return STRUCT_OFFSET(UPlayerAnimInstance, _aimoffsets1d); } \
	FORCEINLINE static uint32 __PPO___selectors() { return STRUCT_OFFSET(UPlayerAnimInstance, _selectors); } \
	FORCEINLINE static uint32 __PPO___isInParadise() { return STRUCT_OFFSET(UPlayerAnimInstance, _isInParadise); } \
	FORCEINLINE static uint32 __PPO___isIntroCompleted() { return STRUCT_OFFSET(UPlayerAnimInstance, _isIntroCompleted); } \
	FORCEINLINE static uint32 __PPO___isLevelReadyToPlay() { return STRUCT_OFFSET(UPlayerAnimInstance, _isLevelReadyToPlay); } \
	FORCEINLINE static uint32 __PPO___activationDefinition() { return STRUCT_OFFSET(UPlayerAnimInstance, _activationDefinition); }


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_21_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_PlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
